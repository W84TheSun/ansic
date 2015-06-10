#encoding: utf-8
key_nodes = set([ 'test' ])
exclude_attrs= set([ 'type', 'children' ])

class Node:
    def __init__(self, type, children):
        self.type = type
        self.children = children
        
    def __str__(self):
        s = '<%s' % self.type
        
        # Представляем переменные объекта как XML аттрибуты
        for attr in self.__dict__:
            if not attr in exclude_attrs:
                s += ' %s="%s"' % (attr, self.__dict__[attr])
        
        # Рекурсивно генерируем все подузлы, не забывая про отступы
        if len(self.children):
            s += '>\n'
            for i in self.children:
                s += ' %s\n' % str(i).replace('\n', '\n ')
            s += '</%s>' % self.type
        else:
            s += '/>'
            
        return s

def unwrap(children):
    
    nodes = []

    for c in children:
        if isinstance(c, list):
            nodes.extend(unwrap(c))
        else:
            nodes.append(c)

    return nodes

def create_node(type, children):
    nodes = unwrap(children)
    
    left = nodes[0]
    if isinstance(left, Node) and type == left.type:
        left.children.extend(nodes[1:])
        return left

    right = nodes[-1]
    if isinstance(right, Node) and type == right.type:
        nodes.pop(-1)
        nodes.extend(right.children)
        right.children = nodes
        return right

    if len(nodes) > 1 or type in key_nodes:
        return Node(type, nodes)
    else:
        return nodes[0]


