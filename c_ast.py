#encoding: utf-8
key_nodes = set([ 'external_declaration', 'translation_unit', 'declarator', 'type_specifier', 'storage_class_specifier' ])
exclude_attrs= set([ 'children', 'type' ])

class Node(object):
    def __init__(self, type, children):
        self.type = type
        self.children = children
        
    def __str__(self):
        s = '<%s' % self.type
        
        # Представляем переменные объекта как XML аттрибуты
        for attr in self.__dict__:
            if attr not in exclude_attrs:
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
    
    print type(children)

    nodes = []

    for c in children:
        # print c.__class__.__name__
        print type(c)
        if isinstance(c, list):
            # print 'extending'
            nodes.extend(unwrap(c))
        else:
            # print 'try to append'
            nodes.append(c)

    return nodes

def create_node(type, children):
    # nodes = unwrap(children)
    nodes = children
    
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
