    lex.py: 931:lex: tokens   = ('AUTO', 'BREAK', 'CASE', 'CHAR', 'CONST', 'CONTINUE', 'DEFAULT', 'DO', 'DOUBLE', 'ELSE', 'ENUM', 'EXTERN', 'FLOAT', 'FOR', 'GOTO', 'IF', 'INT', 'LONG', 'REGISTER', 'RETURN', 'SHORT', 'SIGNED', 'SIZEOF', 'STATIC', 'STRUCT', 'SWITCH', 'TYPEDEF', 'UNION', 'UNSIGNED', 'VOID', 'VOLATILE', 'WHILE', 'ID', 'TYPEID', 'ICONST', 'FCONST', 'SCONST', 'CCONST', 'PLUS', 'MINUS', 'TIMES', 'DIVIDE', 'MOD', 'OR', 'AND', 'NOT', 'XOR', 'LSHIFT', 'RSHIFT', 'LOR', 'LAND', 'LNOT', 'LT', 'LE', 'GT', 'GE', 'EQ', 'NE', 'EQUALS', 'TIMESEQUAL', 'DIVEQUAL', 'MODEQUAL', 'PLUSEQUAL', 'MINUSEQUAL', 'LSHIFTEQUAL', 'RSHIFTEQUAL', 'ANDEQUAL', 'XOREQUAL', 'OREQUAL', 'PLUSPLUS', 'MINUSMINUS', 'ARROW', 'CONDOP', 'LPAREN', 'RPAREN', 'LBRACKET', 'RBRACKET', 'LBRACE', 'RBRACE', 'COMMA', 'PERIOD', 'SEMI', 'COLON', 'ELLIPSIS')
    lex.py: 932:lex: literals = ''
    lex.py: 933:lex: states   = {'INITIAL': 'inclusive'}
    lex.py: 962:lex: Adding rule t_NEWLINE -> '\n+' (state 'INITIAL')
    lex.py: 962:lex: Adding rule t_ID -> '[A-Za-z_][\w_]*' (state 'INITIAL')
    lex.py: 962:lex: Adding rule t_comment -> '/\*(.|\n)*?\*/' (state 'INITIAL')
    lex.py: 962:lex: Adding rule t_preprocessor -> '\#(.)*?\n' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_FCONST -> '((\d+)(\.\d+)(e(\+|-)?(\d+))? | (\d+)e(\+|-)?(\d+))([lL]|[fF])?' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_ICONST -> '\d+([uU]|[lL]|[uU][lL]|[lL][uU])?' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_CCONST -> '(L)?\'([^\\\n]|(\\.))*?\'' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_SCONST -> '\"([^\\\n]|(\\.))*?\"' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_ELLIPSIS -> '\.\.\.' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_PLUSPLUS -> '\+\+' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_LOR -> '\|\|' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_RSHIFTEQUAL -> '>>=' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_XOREQUAL -> '\^=' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_TIMESEQUAL -> '\*=' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_LSHIFTEQUAL -> '<<=' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_OREQUAL -> '\|=' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_PLUSEQUAL -> '\+=' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_MINUSMINUS -> '--' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_GE -> '>=' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_RBRACKET -> '\]' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_LE -> '<=' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_RPAREN -> '\)' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_PERIOD -> '\.' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_LBRACKET -> '\[' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_LPAREN -> '\(' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_NE -> '!=' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_PLUS -> '\+' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_OR -> '\|' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_MINUSEQUAL -> '-=' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_ANDEQUAL -> '&=' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_MODEQUAL -> '%=' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_LBRACE -> '\{' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_DIVEQUAL -> '/=' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_ARROW -> '->' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_XOR -> '\^' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_TIMES -> '\*' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_CONDOP -> '\?' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_RSHIFT -> '>>' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_LAND -> '&&' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_LSHIFT -> '<<' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_EQ -> '==' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_RBRACE -> '\}' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_COLON -> ':' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_COMMA -> ',' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_DIVIDE -> '/' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_LT -> '<' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_AND -> '&' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_NOT -> '~' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_SEMI -> ';' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_MINUS -> '-' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_MOD -> '%' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_EQUALS -> '=' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_LNOT -> '!' (state 'INITIAL')
    lex.py: 968:lex: Adding rule t_GT -> '>' (state 'INITIAL')
    lex.py: 975:lex: ==== MASTER REGEXS FOLLOW ====
    lex.py: 984:lex: state 'INITIAL' : regex[0] = '(?P<t_NEWLINE>\n+)|(?P<t_ID>[A-Za-z_][\w_]*)|(?P<t_comment>/\*(.|\n)*?\*/)|(?P<t_preprocessor>\#(.)*?\n)|(?P<t_FCONST>((\d+)(\.\d+)(e(\+|-)?(\d+))? | (\d+)e(\+|-)?(\d+))([lL]|[fF])?)|(?P<t_ICONST>\d+([uU]|[lL]|[uU][lL]|[lL][uU])?)|(?P<t_CCONST>(L)?\'([^\\\n]|(\\.))*?\')|(?P<t_SCONST>\"([^\\\n]|(\\.))*?\")|(?P<t_ELLIPSIS>\.\.\.)|(?P<t_PLUSPLUS>\+\+)|(?P<t_LOR>\|\|)|(?P<t_RSHIFTEQUAL>>>=)|(?P<t_XOREQUAL>\^=)|(?P<t_TIMESEQUAL>\*=)|(?P<t_LSHIFTEQUAL><<=)|(?P<t_OREQUAL>\|=)|(?P<t_PLUSEQUAL>\+=)|(?P<t_MINUSMINUS>--)|(?P<t_GE>>=)|(?P<t_RBRACKET>\])|(?P<t_LE><=)|(?P<t_RPAREN>\))|(?P<t_PERIOD>\.)|(?P<t_LBRACKET>\[)|(?P<t_LPAREN>\()|(?P<t_NE>!=)|(?P<t_PLUS>\+)|(?P<t_OR>\|)|(?P<t_MINUSEQUAL>-=)|(?P<t_ANDEQUAL>&=)|(?P<t_MODEQUAL>%=)|(?P<t_LBRACE>\{)|(?P<t_DIVEQUAL>/=)|(?P<t_ARROW>->)|(?P<t_XOR>\^)|(?P<t_TIMES>\*)|(?P<t_CONDOP>\?)|(?P<t_RSHIFT>>>)|(?P<t_LAND>&&)|(?P<t_LSHIFT><<)|(?P<t_EQ>==)|(?P<t_RBRACE>\})|(?P<t_COLON>:)|(?P<t_COMMA>,)|(?P<t_DIVIDE>/)|(?P<t_LT><)|(?P<t_AND>&)|(?P<t_NOT>~)|(?P<t_SEMI>;)|(?P<t_MINUS>-)|(?P<t_MOD>%)|(?P<t_EQUALS>=)|(?P<t_LNOT>!)|(?P<t_GT>>)'
   yacc.py: 360:PLY: PARSE DEBUG START
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(DIVIDE,'/',1,0)
   yacc.py: 573:Error  : . LexToken(DIVIDE,'/',1,0)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(DIVIDE,'/',1,1)
   yacc.py: 573:Error  : . LexToken(DIVIDE,'/',1,1)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'ssl',1,3)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(PERIOD,'.',1,6)
   yacc.py: 573:Error  : ID . LexToken(PERIOD,'.',1,6)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'cpp',1,7)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(DIVIDE,'/',3,12)
   yacc.py: 573:Error  : ID . LexToken(DIVIDE,'/',3,12)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(DIVIDE,'/',3,13)
   yacc.py: 573:Error  : . LexToken(DIVIDE,'/',3,13)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(DIVIDE,'/',4,46)
   yacc.py: 573:Error  : . LexToken(DIVIDE,'/',4,46)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(DIVIDE,'/',4,47)
   yacc.py: 573:Error  : . LexToken(DIVIDE,'/',4,47)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(DIVIDE,'/',5,65)
   yacc.py: 573:Error  : . LexToken(DIVIDE,'/',5,65)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(DIVIDE,'/',5,66)
   yacc.py: 573:Error  : . LexToken(DIVIDE,'/',5,66)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(DIVIDE,'/',7,83)
   yacc.py: 573:Error  : . LexToken(DIVIDE,'/',7,83)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(IF,'if',544,11854)
   yacc.py: 573:Error  : . LexToken(IF,'if',544,11854)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(LPAREN,'(',544,11857)
   yacc.py: 443:Action : Shift and goto state 4
   yacc.py: 408:
   yacc.py: 409:State  : 4
   yacc.py: 433:Stack  : LPAREN . LexToken(LNOT,'!',544,11858)
   yacc.py: 573:Error  : LPAREN . LexToken(LNOT,'!',544,11858)
   yacc.py: 408:
   yacc.py: 409:State  : 4
   yacc.py: 433:Stack  : LPAREN . error
   yacc.py: 573:Error  : LPAREN . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'InitContext',544,11859)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(RPAREN,')',544,11870)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['InitContext'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f97640> ('InitContext')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(RPAREN,')',544,11870)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['InitContext'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f97640> ('InitContext')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(RPAREN,')',544,11870)
   yacc.py: 573:Error  : declarator . LexToken(RPAREN,')',544,11870)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(LBRACE,'{',545,11875)
   yacc.py: 573:Error  : . LexToken(LBRACE,'{',545,11875)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(DIVIDE,'/',546,11880)
   yacc.py: 573:Error  : . LexToken(DIVIDE,'/',546,11880)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(DIVIDE,'/',546,11881)
   yacc.py: 573:Error  : . LexToken(DIVIDE,'/',546,11881)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'Send',546,11883)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(ID,'the',546,11888)
   yacc.py: 573:Error  : ID . LexToken(ID,'the',546,11888)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'data',546,11892)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(ID,'we',546,11897)
   yacc.py: 573:Error  : ID . LexToken(ID,'we',546,11897)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'got',546,11900)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(ID,'to',546,11904)
   yacc.py: 573:Error  : ID . LexToken(ID,'to',546,11904)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'the',546,11907)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(ID,'remote',546,11911)
   yacc.py: 573:Error  : ID . LexToken(ID,'remote',546,11911)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'part',546,11918)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(DIVIDE,'/',547,11926)
   yacc.py: 573:Error  : ID . LexToken(DIVIDE,'/',547,11926)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(DIVIDE,'/',547,11927)
   yacc.py: 573:Error  : . LexToken(DIVIDE,'/',547,11927)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'cbData',547,11928)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(EQUALS,'=',547,11935)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['cbData'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f97680> ('cbData')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(EQUALS,'=',547,11935)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['cbData'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f97680> ('cbData')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(EQUALS,'=',547,11935)
   yacc.py: 573:Error  : declarator . LexToken(EQUALS,'=',547,11935)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'Send',547,11937)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(LPAREN,'(',547,11941)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['Send'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1de43e0> ('Send')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(LPAREN,'(',547,11941)
   yacc.py: 443:Action : Shift and goto state 48
   yacc.py: 408:
   yacc.py: 409:State  : 48
   yacc.py: 433:Stack  : direct_declarator LPAREN . LexToken(ID,'OutBuffers',547,11942)
   yacc.py: 443:Action : Shift and goto state 113
   yacc.py: 408:
   yacc.py: 409:State  : 113
   yacc.py: 433:Stack  : direct_declarator LPAREN ID . LexToken(LBRACKET,'[',547,11952)
   yacc.py: 573:Error  : direct_declarator LPAREN ID . LexToken(LBRACKET,'[',547,11952)
   yacc.py: 408:
   yacc.py: 409:State  : 113
   yacc.py: 433:Stack  : direct_declarator LPAREN ID . error
   yacc.py: 573:Error  : direct_declarator LPAREN ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 48
   yacc.py: 433:Stack  : direct_declarator LPAREN . error
   yacc.py: 573:Error  : direct_declarator LPAREN . error
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . error
   yacc.py: 573:Error  : direct_declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'0',547,11953)
   yacc.py: 573:Error  : . LexToken(ICONST,'0',547,11953)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(RBRACKET,']',547,11954)
   yacc.py: 573:Error  : . LexToken(RBRACKET,']',547,11954)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(PERIOD,'.',547,11955)
   yacc.py: 573:Error  : . LexToken(PERIOD,'.',547,11955)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'pvBuffer',547,11956)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(COMMA,',',547,11964)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['pvBuffer'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f97500> ('pvBuffer')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(COMMA,',',547,11964)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['pvBuffer'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f97500> ('pvBuffer')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(COMMA,',',547,11964)
   yacc.py: 573:Error  : declarator . LexToken(COMMA,',',547,11964)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'OutBuffers',547,11965)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(LBRACKET,'[',547,11975)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['OutBuffers'] and goto state 22
   yacc.py: 503:Result : <str @ 0x671440> ('OutBuffers')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(LBRACKET,'[',547,11975)
   yacc.py: 443:Action : Shift and goto state 47
   yacc.py: 408:
   yacc.py: 409:State  : 47
   yacc.py: 433:Stack  : direct_declarator LBRACKET . LexToken(ICONST,'0',547,11976)
   yacc.py: 443:Action : Shift and goto state 95
   yacc.py: 408:
   yacc.py: 409:State  : 95
   yacc.py: 433:Stack  : direct_declarator LBRACKET ICONST . LexToken(RBRACKET,']',547,11977)
   yacc.py: 469:Action : Reduce rule [constant -> ICONST] with ['0'] and goto state 79
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 79
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant . LexToken(RBRACKET,']',547,11977)
   yacc.py: 469:Action : Reduce rule [primary_expression -> constant] with ['0'] and goto state 96
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 96
   yacc.py: 433:Stack  : direct_declarator LBRACKET primary_expression . LexToken(RBRACKET,']',547,11977)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> primary_expression] with ['0'] and goto state 86
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : direct_declarator LBRACKET postfix_expression . LexToken(RBRACKET,']',547,11977)
   yacc.py: 469:Action : Reduce rule [unary_expression -> postfix_expression] with ['0'] and goto state 75
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 75
   yacc.py: 433:Stack  : direct_declarator LBRACKET unary_expression . LexToken(RBRACKET,']',547,11977)
   yacc.py: 469:Action : Reduce rule [cast_expression -> unary_expression] with ['0'] and goto state 98
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 98
   yacc.py: 433:Stack  : direct_declarator LBRACKET cast_expression . LexToken(RBRACKET,']',547,11977)
   yacc.py: 469:Action : Reduce rule [multiplicative_expression -> cast_expression] with ['0'] and goto state 103
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 103
   yacc.py: 433:Stack  : direct_declarator LBRACKET multiplicative_expression . LexToken(RBRACKET,']',547,11977)
   yacc.py: 469:Action : Reduce rule [additive_expression -> multiplicative_expression] with ['0'] and goto state 77
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 77
   yacc.py: 433:Stack  : direct_declarator LBRACKET additive_expression . LexToken(RBRACKET,']',547,11977)
   yacc.py: 469:Action : Reduce rule [shift_expression -> additive_expression] with ['0'] and goto state 100
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 100
   yacc.py: 433:Stack  : direct_declarator LBRACKET shift_expression . LexToken(RBRACKET,']',547,11977)
   yacc.py: 469:Action : Reduce rule [relational_expression -> shift_expression] with ['0'] and goto state 88
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 88
   yacc.py: 433:Stack  : direct_declarator LBRACKET relational_expression . LexToken(RBRACKET,']',547,11977)
   yacc.py: 469:Action : Reduce rule [equality_expression -> relational_expression] with ['0'] and goto state 101
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 101
   yacc.py: 433:Stack  : direct_declarator LBRACKET equality_expression . LexToken(RBRACKET,']',547,11977)
   yacc.py: 469:Action : Reduce rule [and_expression -> equality_expression] with ['0'] and goto state 82
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 82
   yacc.py: 433:Stack  : direct_declarator LBRACKET and_expression . LexToken(RBRACKET,']',547,11977)
   yacc.py: 469:Action : Reduce rule [exclusive_or_expression -> and_expression] with ['0'] and goto state 76
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 76
   yacc.py: 433:Stack  : direct_declarator LBRACKET exclusive_or_expression . LexToken(RBRACKET,']',547,11977)
   yacc.py: 469:Action : Reduce rule [inclusive_or_expression -> exclusive_or_expression] with ['0'] and goto state 84
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 84
   yacc.py: 433:Stack  : direct_declarator LBRACKET inclusive_or_expression . LexToken(RBRACKET,']',547,11977)
   yacc.py: 469:Action : Reduce rule [logical_and_expression -> inclusive_or_expression] with ['0'] and goto state 99
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 99
   yacc.py: 433:Stack  : direct_declarator LBRACKET logical_and_expression . LexToken(RBRACKET,']',547,11977)
   yacc.py: 469:Action : Reduce rule [logical_or_expression -> logical_and_expression] with ['0'] and goto state 91
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 91
   yacc.py: 433:Stack  : direct_declarator LBRACKET logical_or_expression . LexToken(RBRACKET,']',547,11977)
   yacc.py: 469:Action : Reduce rule [conditional_expression -> logical_or_expression] with ['0'] and goto state 106
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 106
   yacc.py: 433:Stack  : direct_declarator LBRACKET conditional_expression . LexToken(RBRACKET,']',547,11977)
   yacc.py: 469:Action : Reduce rule [constant_expression -> conditional_expression] with ['0'] and goto state 105
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 105
   yacc.py: 428:Defaulted state 105: Reduce using 105
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression . LexToken(RBRACKET,']',547,11977)
   yacc.py: 469:Action : Reduce rule [constant_expression_opt -> constant_expression] with ['0'] and goto state 104
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 104
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt . LexToken(RBRACKET,']',547,11977)
   yacc.py: 443:Action : Shift and goto state 201
   yacc.py: 408:
   yacc.py: 409:State  : 201
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt RBRACKET . LexToken(PERIOD,'.',547,11978)
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt RBRACKET . LexToken(PERIOD,'.',547,11978)
   yacc.py: 408:
   yacc.py: 409:State  : 201
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt RBRACKET . error
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt RBRACKET . error
   yacc.py: 408:
   yacc.py: 409:State  : 104
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt . error
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt . error
   yacc.py: 408:
   yacc.py: 409:State  : 47
   yacc.py: 433:Stack  : direct_declarator LBRACKET . error
   yacc.py: 573:Error  : direct_declarator LBRACKET . error
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . error
   yacc.py: 573:Error  : direct_declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'cbBuffer',547,11979)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(RPAREN,')',547,11987)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['cbBuffer'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f97680> ('cbBuffer')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(RPAREN,')',547,11987)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['cbBuffer'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f97680> ('cbBuffer')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(RPAREN,')',547,11987)
   yacc.py: 573:Error  : declarator . LexToken(RPAREN,')',547,11987)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(SEMI,';',547,11988)
   yacc.py: 573:Error  : . LexToken(SEMI,';',547,11988)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(INT,'int',548,11993)
   yacc.py: 443:Action : Shift and goto state 31
   yacc.py: 408:
   yacc.py: 409:State  : 31
   yacc.py: 433:Stack  : INT . LexToken(ID,'rval',548,11997)
   yacc.py: 469:Action : Reduce rule [type_specifier -> INT] with ['int'] and goto state 13
   yacc.py: 503:Result : <str @ 0x1f85e78> ('int')
   yacc.py: 408:
   yacc.py: 409:State  : 13
   yacc.py: 433:Stack  : type_specifier . LexToken(ID,'rval',548,11997)
   yacc.py: 469:Action : Reduce rule [declaration_specifiers -> type_specifier] with ['int'] and goto state 24
   yacc.py: 503:Result : <str @ 0x1f85e78> ('int')
   yacc.py: 408:
   yacc.py: 409:State  : 24
   yacc.py: 433:Stack  : declaration_specifiers . LexToken(ID,'rval',548,11997)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : declaration_specifiers ID . LexToken(EQUALS,'=',548,12002)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['rval'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f974c0> ('rval')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : declaration_specifiers direct_declarator . LexToken(EQUALS,'=',548,12002)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['rval'] and goto state 55
   yacc.py: 503:Result : <str @ 0x1f974c0> ('rval')
   yacc.py: 408:
   yacc.py: 409:State  : 55
   yacc.py: 433:Stack  : declaration_specifiers declarator . LexToken(EQUALS,'=',548,12002)
   yacc.py: 443:Action : Shift and goto state 120
   yacc.py: 408:
   yacc.py: 409:State  : 120
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS . LexToken(ID,'ssend_p',548,12004)
   yacc.py: 443:Action : Shift and goto state 87
   yacc.py: 408:
   yacc.py: 409:State  : 87
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS ID . LexToken(LPAREN,'(',548,12011)
   yacc.py: 469:Action : Reduce rule [primary_expression -> ID] with ['ssend_p'] and goto state 96
   yacc.py: 503:Result : <str @ 0x1f97640> ('ssend_p')
   yacc.py: 408:
   yacc.py: 409:State  : 96
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS primary_expression . LexToken(LPAREN,'(',548,12011)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> primary_expression] with ['ssend_p'] and goto state 86
   yacc.py: 503:Result : <str @ 0x1f97640> ('ssend_p')
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression . LexToken(LPAREN,'(',548,12011)
   yacc.py: 443:Action : Shift and goto state 181
   yacc.py: 408:
   yacc.py: 409:State  : 181
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN . LexToken(LPAREN,'(',548,12012)
   yacc.py: 443:Action : Shift and goto state 148
   yacc.py: 408:
   yacc.py: 409:State  : 148
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN . LexToken(CHAR,'char',548,12013)
   yacc.py: 443:Action : Shift and goto state 8
   yacc.py: 408:
   yacc.py: 409:State  : 8
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN CHAR . LexToken(TIMES,'*',548,12017)
   yacc.py: 469:Action : Reduce rule [type_specifier -> CHAR] with ['char'] and goto state 64
   yacc.py: 503:Result : <str @ 0x1f97660> ('char')
   yacc.py: 408:
   yacc.py: 409:State  : 64
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_specifier . LexToken(TIMES,'*',548,12017)
   yacc.py: 469:Action : Reduce rule [specifier_qualifier_list -> type_specifier] with ['char'] and goto state 191
   yacc.py: 503:Result : <str @ 0x1f97660> ('char')
   yacc.py: 408:
   yacc.py: 409:State  : 191
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN specifier_qualifier_list . LexToken(TIMES,'*',548,12017)
   yacc.py: 443:Action : Shift and goto state 23
   yacc.py: 408:
   yacc.py: 409:State  : 23
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN specifier_qualifier_list TIMES . LexToken(RPAREN,')',548,12018)
   yacc.py: 469:Action : Reduce rule [pointer -> TIMES] with ['*'] and goto state 278
   yacc.py: 503:Result : <str @ 0x1df7278> ('*')
   yacc.py: 408:
   yacc.py: 409:State  : 278
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN specifier_qualifier_list pointer . LexToken(RPAREN,')',548,12018)
   yacc.py: 469:Action : Reduce rule [abstract_declarator -> pointer] with ['*'] and goto state 205
   yacc.py: 503:Result : <str @ 0x1df7278> ('*')
   yacc.py: 408:
   yacc.py: 409:State  : 205
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN specifier_qualifier_list abstract_declarator . LexToken(RPAREN,')',548,12018)
   yacc.py: 469:Action : Reduce rule [abstract_declarator_opt -> abstract_declarator] with ['*'] and goto state 276
   yacc.py: 503:Result : <str @ 0x1df7278> ('*')
   yacc.py: 408:
   yacc.py: 409:State  : 276
   yacc.py: 428:Defaulted state 276: Reduce using 93
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN specifier_qualifier_list abstract_declarator_opt . LexToken(RPAREN,')',548,12018)
   yacc.py: 469:Action : Reduce rule [type_name -> specifier_qualifier_list abstract_declarator_opt] with ['char','*'] and goto state 190
   yacc.py: 503:Result : <instance @ 0x21c0a58> (<c_ast.Node instance at 0x021C0A58>)
   yacc.py: 408:
   yacc.py: 409:State  : 190
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name . LexToken(RPAREN,')',548,12018)
   yacc.py: 443:Action : Shift and goto state 275
   yacc.py: 408:
   yacc.py: 409:State  : 275
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN . LexToken(ID,'bufso',548,12019)
   yacc.py: 443:Action : Shift and goto state 87
   yacc.py: 408:
   yacc.py: 409:State  : 87
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN ID . LexToken(LBRACKET,'[',548,12024)
   yacc.py: 469:Action : Reduce rule [primary_expression -> ID] with ['bufso'] and goto state 96
   yacc.py: 503:Result : <str @ 0x1f97680> ('bufso')
   yacc.py: 408:
   yacc.py: 409:State  : 96
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN primary_expression . LexToken(LBRACKET,'[',548,12024)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> primary_expression] with ['bufso'] and goto state 86
   yacc.py: 503:Result : <str @ 0x1f97680> ('bufso')
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression . LexToken(LBRACKET,'[',548,12024)
   yacc.py: 443:Action : Shift and goto state 180
   yacc.py: 408:
   yacc.py: 409:State  : 180
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET . LexToken(ICONST,'0',548,12025)
   yacc.py: 443:Action : Shift and goto state 95
   yacc.py: 408:
   yacc.py: 409:State  : 95
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET ICONST . LexToken(RBRACKET,']',548,12026)
   yacc.py: 469:Action : Reduce rule [constant -> ICONST] with ['0'] and goto state 79
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 79
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET constant . LexToken(RBRACKET,']',548,12026)
   yacc.py: 469:Action : Reduce rule [primary_expression -> constant] with ['0'] and goto state 96
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 96
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET primary_expression . LexToken(RBRACKET,']',548,12026)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> primary_expression] with ['0'] and goto state 86
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET postfix_expression . LexToken(RBRACKET,']',548,12026)
   yacc.py: 469:Action : Reduce rule [unary_expression -> postfix_expression] with ['0'] and goto state 130
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 130
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET unary_expression . LexToken(RBRACKET,']',548,12026)
   yacc.py: 469:Action : Reduce rule [cast_expression -> unary_expression] with ['0'] and goto state 98
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 98
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET cast_expression . LexToken(RBRACKET,']',548,12026)
   yacc.py: 469:Action : Reduce rule [multiplicative_expression -> cast_expression] with ['0'] and goto state 103
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 103
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET multiplicative_expression . LexToken(RBRACKET,']',548,12026)
   yacc.py: 469:Action : Reduce rule [additive_expression -> multiplicative_expression] with ['0'] and goto state 77
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 77
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET additive_expression . LexToken(RBRACKET,']',548,12026)
   yacc.py: 469:Action : Reduce rule [shift_expression -> additive_expression] with ['0'] and goto state 100
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 100
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET shift_expression . LexToken(RBRACKET,']',548,12026)
   yacc.py: 469:Action : Reduce rule [relational_expression -> shift_expression] with ['0'] and goto state 88
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 88
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET relational_expression . LexToken(RBRACKET,']',548,12026)
   yacc.py: 469:Action : Reduce rule [equality_expression -> relational_expression] with ['0'] and goto state 101
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 101
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET equality_expression . LexToken(RBRACKET,']',548,12026)
   yacc.py: 469:Action : Reduce rule [and_expression -> equality_expression] with ['0'] and goto state 82
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 82
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET and_expression . LexToken(RBRACKET,']',548,12026)
   yacc.py: 469:Action : Reduce rule [exclusive_or_expression -> and_expression] with ['0'] and goto state 76
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 76
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET exclusive_or_expression . LexToken(RBRACKET,']',548,12026)
   yacc.py: 469:Action : Reduce rule [inclusive_or_expression -> exclusive_or_expression] with ['0'] and goto state 84
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 84
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET inclusive_or_expression . LexToken(RBRACKET,']',548,12026)
   yacc.py: 469:Action : Reduce rule [logical_and_expression -> inclusive_or_expression] with ['0'] and goto state 99
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 99
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET logical_and_expression . LexToken(RBRACKET,']',548,12026)
   yacc.py: 469:Action : Reduce rule [logical_or_expression -> logical_and_expression] with ['0'] and goto state 91
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 91
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET logical_or_expression . LexToken(RBRACKET,']',548,12026)
   yacc.py: 469:Action : Reduce rule [conditional_expression -> logical_or_expression] with ['0'] and goto state 151
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 151
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET conditional_expression . LexToken(RBRACKET,']',548,12026)
   yacc.py: 469:Action : Reduce rule [assignment_expression -> conditional_expression] with ['0'] and goto state 147
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 147
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET assignment_expression . LexToken(RBRACKET,']',548,12026)
   yacc.py: 469:Action : Reduce rule [expression -> assignment_expression] with ['0'] and goto state 265
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 265
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET expression . LexToken(RBRACKET,']',548,12026)
   yacc.py: 443:Action : Shift and goto state 317
   yacc.py: 408:
   yacc.py: 409:State  : 317
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET expression RBRACKET . LexToken(PERIOD,'.',548,12027)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> postfix_expression LBRACKET expression RBRACKET] with ['bufso','[','0',']'] and goto state 86
   yacc.py: 503:Result : <instance @ 0x21c0b70> (<c_ast.Node instance at 0x021C0B70>)
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression . LexToken(PERIOD,'.',548,12027)
   yacc.py: 443:Action : Shift and goto state 179
   yacc.py: 408:
   yacc.py: 409:State  : 179
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression PERIOD . LexToken(ID,'pvBuffer',548,12028)
   yacc.py: 443:Action : Shift and goto state 264
   yacc.py: 408:
   yacc.py: 409:State  : 264
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression PERIOD ID . LexToken(COMMA,',',548,12036)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> postfix_expression PERIOD ID] with [<instance @ 0x21c0b70>,'.','pvBuffer'] and goto state 86
   yacc.py: 503:Result : <instance @ 0x21c0b70> (<c_ast.Node instance at 0x021C0B70>)
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression . LexToken(COMMA,',',548,12036)
   yacc.py: 469:Action : Reduce rule [unary_expression -> postfix_expression] with [<instance @ 0x21c0b70>] and goto state 75
   yacc.py: 503:Result : <instance @ 0x21c0b70> (<c_ast.Node instance at 0x021C0B70>)
   yacc.py: 408:
   yacc.py: 409:State  : 75
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN unary_expression . LexToken(COMMA,',',548,12036)
   yacc.py: 469:Action : Reduce rule [cast_expression -> unary_expression] with [<instance @ 0x21c0b70>] and goto state 321
   yacc.py: 503:Result : <instance @ 0x21c0b70> (<c_ast.Node instance at 0x021C0B70>)
   yacc.py: 408:
   yacc.py: 409:State  : 321
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN cast_expression . LexToken(COMMA,',',548,12036)
   yacc.py: 469:Action : Reduce rule [cast_expression -> LPAREN type_name RPAREN cast_expression] with ['(',<instance @ 0x21c0a58>,')',<instance @ 0x21c0b70>] and goto state 98
   yacc.py: 503:Result : <instance @ 0x21c0ad0> (<c_ast.Node instance at 0x021C0AD0>)
   yacc.py: 408:
   yacc.py: 409:State  : 98
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN cast_expression . LexToken(COMMA,',',548,12036)
   yacc.py: 469:Action : Reduce rule [multiplicative_expression -> cast_expression] with [<instance @ 0x21c0ad0>] and goto state 103
   yacc.py: 503:Result : <instance @ 0x21c0ad0> (<c_ast.Node instance at 0x021C0AD0>)
   yacc.py: 408:
   yacc.py: 409:State  : 103
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN multiplicative_expression . LexToken(COMMA,',',548,12036)
   yacc.py: 469:Action : Reduce rule [additive_expression -> multiplicative_expression] with [<instance @ 0x21c0ad0>] and goto state 77
   yacc.py: 503:Result : <instance @ 0x21c0ad0> (<c_ast.Node instance at 0x021C0AD0>)
   yacc.py: 408:
   yacc.py: 409:State  : 77
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN additive_expression . LexToken(COMMA,',',548,12036)
   yacc.py: 469:Action : Reduce rule [shift_expression -> additive_expression] with [<instance @ 0x21c0ad0>] and goto state 100
   yacc.py: 503:Result : <instance @ 0x21c0ad0> (<c_ast.Node instance at 0x021C0AD0>)
   yacc.py: 408:
   yacc.py: 409:State  : 100
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN shift_expression . LexToken(COMMA,',',548,12036)
   yacc.py: 469:Action : Reduce rule [relational_expression -> shift_expression] with [<instance @ 0x21c0ad0>] and goto state 88
   yacc.py: 503:Result : <instance @ 0x21c0ad0> (<c_ast.Node instance at 0x021C0AD0>)
   yacc.py: 408:
   yacc.py: 409:State  : 88
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN relational_expression . LexToken(COMMA,',',548,12036)
   yacc.py: 469:Action : Reduce rule [equality_expression -> relational_expression] with [<instance @ 0x21c0ad0>] and goto state 101
   yacc.py: 503:Result : <instance @ 0x21c0ad0> (<c_ast.Node instance at 0x021C0AD0>)
   yacc.py: 408:
   yacc.py: 409:State  : 101
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN equality_expression . LexToken(COMMA,',',548,12036)
   yacc.py: 469:Action : Reduce rule [and_expression -> equality_expression] with [<instance @ 0x21c0ad0>] and goto state 82
   yacc.py: 503:Result : <instance @ 0x21c0ad0> (<c_ast.Node instance at 0x021C0AD0>)
   yacc.py: 408:
   yacc.py: 409:State  : 82
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN and_expression . LexToken(COMMA,',',548,12036)
   yacc.py: 469:Action : Reduce rule [exclusive_or_expression -> and_expression] with [<instance @ 0x21c0ad0>] and goto state 76
   yacc.py: 503:Result : <instance @ 0x21c0ad0> (<c_ast.Node instance at 0x021C0AD0>)
   yacc.py: 408:
   yacc.py: 409:State  : 76
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN exclusive_or_expression . LexToken(COMMA,',',548,12036)
   yacc.py: 469:Action : Reduce rule [inclusive_or_expression -> exclusive_or_expression] with [<instance @ 0x21c0ad0>] and goto state 84
   yacc.py: 503:Result : <instance @ 0x21c0ad0> (<c_ast.Node instance at 0x021C0AD0>)
   yacc.py: 408:
   yacc.py: 409:State  : 84
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN inclusive_or_expression . LexToken(COMMA,',',548,12036)
   yacc.py: 469:Action : Reduce rule [logical_and_expression -> inclusive_or_expression] with [<instance @ 0x21c0ad0>] and goto state 99
   yacc.py: 503:Result : <instance @ 0x21c0ad0> (<c_ast.Node instance at 0x021C0AD0>)
   yacc.py: 408:
   yacc.py: 409:State  : 99
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN logical_and_expression . LexToken(COMMA,',',548,12036)
   yacc.py: 469:Action : Reduce rule [logical_or_expression -> logical_and_expression] with [<instance @ 0x21c0ad0>] and goto state 91
   yacc.py: 503:Result : <instance @ 0x21c0ad0> (<c_ast.Node instance at 0x021C0AD0>)
   yacc.py: 408:
   yacc.py: 409:State  : 91
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN logical_or_expression . LexToken(COMMA,',',548,12036)
   yacc.py: 469:Action : Reduce rule [conditional_expression -> logical_or_expression] with [<instance @ 0x21c0ad0>] and goto state 151
   yacc.py: 503:Result : <instance @ 0x21c0ad0> (<c_ast.Node instance at 0x021C0AD0>)
   yacc.py: 408:
   yacc.py: 409:State  : 151
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN conditional_expression . LexToken(COMMA,',',548,12036)
   yacc.py: 469:Action : Reduce rule [assignment_expression -> conditional_expression] with [<instance @ 0x21c0ad0>] and goto state 267
   yacc.py: 503:Result : <instance @ 0x21c0ad0> (<c_ast.Node instance at 0x021C0AD0>)
   yacc.py: 408:
   yacc.py: 409:State  : 267
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN assignment_expression . LexToken(COMMA,',',548,12036)
   yacc.py: 469:Action : Reduce rule [argument_expression_list -> assignment_expression] with [<instance @ 0x21c0ad0>] and goto state 268
   yacc.py: 503:Result : <instance @ 0x21c0ad0> (<c_ast.Node instance at 0x021C0AD0>)
   yacc.py: 408:
   yacc.py: 409:State  : 268
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list . LexToken(COMMA,',',548,12036)
   yacc.py: 443:Action : Shift and goto state 319
   yacc.py: 408:
   yacc.py: 409:State  : 319
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA . LexToken(ID,'bufso',548,12037)
   yacc.py: 443:Action : Shift and goto state 87
   yacc.py: 408:
   yacc.py: 409:State  : 87
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA ID . LexToken(LBRACKET,'[',548,12042)
   yacc.py: 469:Action : Reduce rule [primary_expression -> ID] with ['bufso'] and goto state 96
   yacc.py: 503:Result : <str @ 0x1f97bc0> ('bufso')
   yacc.py: 408:
   yacc.py: 409:State  : 96
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA primary_expression . LexToken(LBRACKET,'[',548,12042)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> primary_expression] with ['bufso'] and goto state 86
   yacc.py: 503:Result : <str @ 0x1f97bc0> ('bufso')
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression . LexToken(LBRACKET,'[',548,12042)
   yacc.py: 443:Action : Shift and goto state 180
   yacc.py: 408:
   yacc.py: 409:State  : 180
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET . LexToken(ICONST,'0',548,12043)
   yacc.py: 443:Action : Shift and goto state 95
   yacc.py: 408:
   yacc.py: 409:State  : 95
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET ICONST . LexToken(RBRACKET,']',548,12044)
   yacc.py: 469:Action : Reduce rule [constant -> ICONST] with ['0'] and goto state 79
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 79
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET constant . LexToken(RBRACKET,']',548,12044)
   yacc.py: 469:Action : Reduce rule [primary_expression -> constant] with ['0'] and goto state 96
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 96
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET primary_expression . LexToken(RBRACKET,']',548,12044)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> primary_expression] with ['0'] and goto state 86
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET postfix_expression . LexToken(RBRACKET,']',548,12044)
   yacc.py: 469:Action : Reduce rule [unary_expression -> postfix_expression] with ['0'] and goto state 130
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 130
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET unary_expression . LexToken(RBRACKET,']',548,12044)
   yacc.py: 469:Action : Reduce rule [cast_expression -> unary_expression] with ['0'] and goto state 98
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 98
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET cast_expression . LexToken(RBRACKET,']',548,12044)
   yacc.py: 469:Action : Reduce rule [multiplicative_expression -> cast_expression] with ['0'] and goto state 103
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 103
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET multiplicative_expression . LexToken(RBRACKET,']',548,12044)
   yacc.py: 469:Action : Reduce rule [additive_expression -> multiplicative_expression] with ['0'] and goto state 77
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 77
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET additive_expression . LexToken(RBRACKET,']',548,12044)
   yacc.py: 469:Action : Reduce rule [shift_expression -> additive_expression] with ['0'] and goto state 100
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 100
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET shift_expression . LexToken(RBRACKET,']',548,12044)
   yacc.py: 469:Action : Reduce rule [relational_expression -> shift_expression] with ['0'] and goto state 88
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 88
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET relational_expression . LexToken(RBRACKET,']',548,12044)
   yacc.py: 469:Action : Reduce rule [equality_expression -> relational_expression] with ['0'] and goto state 101
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 101
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET equality_expression . LexToken(RBRACKET,']',548,12044)
   yacc.py: 469:Action : Reduce rule [and_expression -> equality_expression] with ['0'] and goto state 82
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 82
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET and_expression . LexToken(RBRACKET,']',548,12044)
   yacc.py: 469:Action : Reduce rule [exclusive_or_expression -> and_expression] with ['0'] and goto state 76
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 76
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET exclusive_or_expression . LexToken(RBRACKET,']',548,12044)
   yacc.py: 469:Action : Reduce rule [inclusive_or_expression -> exclusive_or_expression] with ['0'] and goto state 84
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 84
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET inclusive_or_expression . LexToken(RBRACKET,']',548,12044)
   yacc.py: 469:Action : Reduce rule [logical_and_expression -> inclusive_or_expression] with ['0'] and goto state 99
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 99
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET logical_and_expression . LexToken(RBRACKET,']',548,12044)
   yacc.py: 469:Action : Reduce rule [logical_or_expression -> logical_and_expression] with ['0'] and goto state 91
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 91
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET logical_or_expression . LexToken(RBRACKET,']',548,12044)
   yacc.py: 469:Action : Reduce rule [conditional_expression -> logical_or_expression] with ['0'] and goto state 151
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 151
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET conditional_expression . LexToken(RBRACKET,']',548,12044)
   yacc.py: 469:Action : Reduce rule [assignment_expression -> conditional_expression] with ['0'] and goto state 147
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 147
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET assignment_expression . LexToken(RBRACKET,']',548,12044)
   yacc.py: 469:Action : Reduce rule [expression -> assignment_expression] with ['0'] and goto state 265
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 265
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET expression . LexToken(RBRACKET,']',548,12044)
   yacc.py: 443:Action : Shift and goto state 317
   yacc.py: 408:
   yacc.py: 409:State  : 317
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET expression RBRACKET . LexToken(PERIOD,'.',548,12045)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> postfix_expression LBRACKET expression RBRACKET] with ['bufso','[','0',']'] and goto state 86
   yacc.py: 503:Result : <instance @ 0x21c0b20> (<c_ast.Node instance at 0x021C0B20>)
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression . LexToken(PERIOD,'.',548,12045)
   yacc.py: 443:Action : Shift and goto state 179
   yacc.py: 408:
   yacc.py: 409:State  : 179
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression PERIOD . LexToken(ID,'cbBuffer',548,12046)
   yacc.py: 443:Action : Shift and goto state 264
   yacc.py: 408:
   yacc.py: 409:State  : 264
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression PERIOD ID . LexToken(RPAREN,')',548,12054)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> postfix_expression PERIOD ID] with [<instance @ 0x21c0b20>,'.','cbBuffer'] and goto state 86
   yacc.py: 503:Result : <instance @ 0x21c0b20> (<c_ast.Node instance at 0x021C0B20>)
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression . LexToken(RPAREN,')',548,12054)
   yacc.py: 469:Action : Reduce rule [unary_expression -> postfix_expression] with [<instance @ 0x21c0b20>] and goto state 130
   yacc.py: 503:Result : <instance @ 0x21c0b20> (<c_ast.Node instance at 0x021C0B20>)
   yacc.py: 408:
   yacc.py: 409:State  : 130
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA unary_expression . LexToken(RPAREN,')',548,12054)
   yacc.py: 469:Action : Reduce rule [cast_expression -> unary_expression] with [<instance @ 0x21c0b20>] and goto state 98
   yacc.py: 503:Result : <instance @ 0x21c0b20> (<c_ast.Node instance at 0x021C0B20>)
   yacc.py: 408:
   yacc.py: 409:State  : 98
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA cast_expression . LexToken(RPAREN,')',548,12054)
   yacc.py: 469:Action : Reduce rule [multiplicative_expression -> cast_expression] with [<instance @ 0x21c0b20>] and goto state 103
   yacc.py: 503:Result : <instance @ 0x21c0b20> (<c_ast.Node instance at 0x021C0B20>)
   yacc.py: 408:
   yacc.py: 409:State  : 103
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA multiplicative_expression . LexToken(RPAREN,')',548,12054)
   yacc.py: 469:Action : Reduce rule [additive_expression -> multiplicative_expression] with [<instance @ 0x21c0b20>] and goto state 77
   yacc.py: 503:Result : <instance @ 0x21c0b20> (<c_ast.Node instance at 0x021C0B20>)
   yacc.py: 408:
   yacc.py: 409:State  : 77
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA additive_expression . LexToken(RPAREN,')',548,12054)
   yacc.py: 469:Action : Reduce rule [shift_expression -> additive_expression] with [<instance @ 0x21c0b20>] and goto state 100
   yacc.py: 503:Result : <instance @ 0x21c0b20> (<c_ast.Node instance at 0x021C0B20>)
   yacc.py: 408:
   yacc.py: 409:State  : 100
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA shift_expression . LexToken(RPAREN,')',548,12054)
   yacc.py: 469:Action : Reduce rule [relational_expression -> shift_expression] with [<instance @ 0x21c0b20>] and goto state 88
   yacc.py: 503:Result : <instance @ 0x21c0b20> (<c_ast.Node instance at 0x021C0B20>)
   yacc.py: 408:
   yacc.py: 409:State  : 88
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA relational_expression . LexToken(RPAREN,')',548,12054)
   yacc.py: 469:Action : Reduce rule [equality_expression -> relational_expression] with [<instance @ 0x21c0b20>] and goto state 101
   yacc.py: 503:Result : <instance @ 0x21c0b20> (<c_ast.Node instance at 0x021C0B20>)
   yacc.py: 408:
   yacc.py: 409:State  : 101
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA equality_expression . LexToken(RPAREN,')',548,12054)
   yacc.py: 469:Action : Reduce rule [and_expression -> equality_expression] with [<instance @ 0x21c0b20>] and goto state 82
   yacc.py: 503:Result : <instance @ 0x21c0b20> (<c_ast.Node instance at 0x021C0B20>)
   yacc.py: 408:
   yacc.py: 409:State  : 82
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA and_expression . LexToken(RPAREN,')',548,12054)
   yacc.py: 469:Action : Reduce rule [exclusive_or_expression -> and_expression] with [<instance @ 0x21c0b20>] and goto state 76
   yacc.py: 503:Result : <instance @ 0x21c0b20> (<c_ast.Node instance at 0x021C0B20>)
   yacc.py: 408:
   yacc.py: 409:State  : 76
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA exclusive_or_expression . LexToken(RPAREN,')',548,12054)
   yacc.py: 469:Action : Reduce rule [inclusive_or_expression -> exclusive_or_expression] with [<instance @ 0x21c0b20>] and goto state 84
   yacc.py: 503:Result : <instance @ 0x21c0b20> (<c_ast.Node instance at 0x021C0B20>)
   yacc.py: 408:
   yacc.py: 409:State  : 84
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA inclusive_or_expression . LexToken(RPAREN,')',548,12054)
   yacc.py: 469:Action : Reduce rule [logical_and_expression -> inclusive_or_expression] with [<instance @ 0x21c0b20>] and goto state 99
   yacc.py: 503:Result : <instance @ 0x21c0b20> (<c_ast.Node instance at 0x021C0B20>)
   yacc.py: 408:
   yacc.py: 409:State  : 99
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA logical_and_expression . LexToken(RPAREN,')',548,12054)
   yacc.py: 469:Action : Reduce rule [logical_or_expression -> logical_and_expression] with [<instance @ 0x21c0b20>] and goto state 91
   yacc.py: 503:Result : <instance @ 0x21c0b20> (<c_ast.Node instance at 0x021C0B20>)
   yacc.py: 408:
   yacc.py: 409:State  : 91
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA logical_or_expression . LexToken(RPAREN,')',548,12054)
   yacc.py: 469:Action : Reduce rule [conditional_expression -> logical_or_expression] with [<instance @ 0x21c0b20>] and goto state 151
   yacc.py: 503:Result : <instance @ 0x21c0b20> (<c_ast.Node instance at 0x021C0B20>)
   yacc.py: 408:
   yacc.py: 409:State  : 151
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA conditional_expression . LexToken(RPAREN,')',548,12054)
   yacc.py: 469:Action : Reduce rule [assignment_expression -> conditional_expression] with [<instance @ 0x21c0b20>] and goto state 335
   yacc.py: 503:Result : <instance @ 0x21c0b20> (<c_ast.Node instance at 0x021C0B20>)
   yacc.py: 408:
   yacc.py: 409:State  : 335
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA assignment_expression . LexToken(RPAREN,')',548,12054)
   yacc.py: 469:Action : Reduce rule [argument_expression_list -> argument_expression_list COMMA assignment_expression] with [<instance @ 0x21c0ad0>,',',<instance @ 0x21c0b20>] and goto state 268
   yacc.py: 503:Result : <instance @ 0x21c0bc0> (<c_ast.Node instance at 0x021C0BC0>)
   yacc.py: 408:
   yacc.py: 409:State  : 268
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list . LexToken(RPAREN,')',548,12054)
   yacc.py: 443:Action : Shift and goto state 318
   yacc.py: 408:
   yacc.py: 409:State  : 318
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list RPAREN . LexToken(SEMI,';',548,12055)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> postfix_expression LPAREN argument_expression_list RPAREN] with ['ssend_p','(',<instance @ 0x21c0bc0>,')'] and goto state 86
   yacc.py: 503:Result : <instance @ 0x21c0b98> (<c_ast.Node instance at 0x021C0B98>)
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression . LexToken(SEMI,';',548,12055)
   yacc.py: 469:Action : Reduce rule [unary_expression -> postfix_expression] with [<instance @ 0x21c0b98>] and goto state 130
   yacc.py: 503:Result : <instance @ 0x21c0b98> (<c_ast.Node instance at 0x021C0B98>)
   yacc.py: 408:
   yacc.py: 409:State  : 130
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS unary_expression . LexToken(SEMI,';',548,12055)
   yacc.py: 469:Action : Reduce rule [cast_expression -> unary_expression] with [<instance @ 0x21c0b98>] and goto state 98
   yacc.py: 503:Result : <instance @ 0x21c0b98> (<c_ast.Node instance at 0x021C0B98>)
   yacc.py: 408:
   yacc.py: 409:State  : 98
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS cast_expression . LexToken(SEMI,';',548,12055)
   yacc.py: 469:Action : Reduce rule [multiplicative_expression -> cast_expression] with [<instance @ 0x21c0b98>] and goto state 103
   yacc.py: 503:Result : <instance @ 0x21c0b98> (<c_ast.Node instance at 0x021C0B98>)
   yacc.py: 408:
   yacc.py: 409:State  : 103
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS multiplicative_expression . LexToken(SEMI,';',548,12055)
   yacc.py: 469:Action : Reduce rule [additive_expression -> multiplicative_expression] with [<instance @ 0x21c0b98>] and goto state 77
   yacc.py: 503:Result : <instance @ 0x21c0b98> (<c_ast.Node instance at 0x021C0B98>)
   yacc.py: 408:
   yacc.py: 409:State  : 77
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS additive_expression . LexToken(SEMI,';',548,12055)
   yacc.py: 469:Action : Reduce rule [shift_expression -> additive_expression] with [<instance @ 0x21c0b98>] and goto state 100
   yacc.py: 503:Result : <instance @ 0x21c0b98> (<c_ast.Node instance at 0x021C0B98>)
   yacc.py: 408:
   yacc.py: 409:State  : 100
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS shift_expression . LexToken(SEMI,';',548,12055)
   yacc.py: 469:Action : Reduce rule [relational_expression -> shift_expression] with [<instance @ 0x21c0b98>] and goto state 88
   yacc.py: 503:Result : <instance @ 0x21c0b98> (<c_ast.Node instance at 0x021C0B98>)
   yacc.py: 408:
   yacc.py: 409:State  : 88
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS relational_expression . LexToken(SEMI,';',548,12055)
   yacc.py: 469:Action : Reduce rule [equality_expression -> relational_expression] with [<instance @ 0x21c0b98>] and goto state 101
   yacc.py: 503:Result : <instance @ 0x21c0b98> (<c_ast.Node instance at 0x021C0B98>)
   yacc.py: 408:
   yacc.py: 409:State  : 101
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS equality_expression . LexToken(SEMI,';',548,12055)
   yacc.py: 469:Action : Reduce rule [and_expression -> equality_expression] with [<instance @ 0x21c0b98>] and goto state 82
   yacc.py: 503:Result : <instance @ 0x21c0b98> (<c_ast.Node instance at 0x021C0B98>)
   yacc.py: 408:
   yacc.py: 409:State  : 82
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS and_expression . LexToken(SEMI,';',548,12055)
   yacc.py: 469:Action : Reduce rule [exclusive_or_expression -> and_expression] with [<instance @ 0x21c0b98>] and goto state 76
   yacc.py: 503:Result : <instance @ 0x21c0b98> (<c_ast.Node instance at 0x021C0B98>)
   yacc.py: 408:
   yacc.py: 409:State  : 76
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS exclusive_or_expression . LexToken(SEMI,';',548,12055)
   yacc.py: 469:Action : Reduce rule [inclusive_or_expression -> exclusive_or_expression] with [<instance @ 0x21c0b98>] and goto state 84
   yacc.py: 503:Result : <instance @ 0x21c0b98> (<c_ast.Node instance at 0x021C0B98>)
   yacc.py: 408:
   yacc.py: 409:State  : 84
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS inclusive_or_expression . LexToken(SEMI,';',548,12055)
   yacc.py: 469:Action : Reduce rule [logical_and_expression -> inclusive_or_expression] with [<instance @ 0x21c0b98>] and goto state 99
   yacc.py: 503:Result : <instance @ 0x21c0b98> (<c_ast.Node instance at 0x021C0B98>)
   yacc.py: 408:
   yacc.py: 409:State  : 99
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS logical_and_expression . LexToken(SEMI,';',548,12055)
   yacc.py: 469:Action : Reduce rule [logical_or_expression -> logical_and_expression] with [<instance @ 0x21c0b98>] and goto state 91
   yacc.py: 503:Result : <instance @ 0x21c0b98> (<c_ast.Node instance at 0x021C0B98>)
   yacc.py: 408:
   yacc.py: 409:State  : 91
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS logical_or_expression . LexToken(SEMI,';',548,12055)
   yacc.py: 469:Action : Reduce rule [conditional_expression -> logical_or_expression] with [<instance @ 0x21c0b98>] and goto state 151
   yacc.py: 503:Result : <instance @ 0x21c0b98> (<c_ast.Node instance at 0x021C0B98>)
   yacc.py: 408:
   yacc.py: 409:State  : 151
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS conditional_expression . LexToken(SEMI,';',548,12055)
   yacc.py: 469:Action : Reduce rule [assignment_expression -> conditional_expression] with [<instance @ 0x21c0b98>] and goto state 216
   yacc.py: 503:Result : <instance @ 0x21c0b98> (<c_ast.Node instance at 0x021C0B98>)
   yacc.py: 408:
   yacc.py: 409:State  : 216
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS assignment_expression . LexToken(SEMI,';',548,12055)
   yacc.py: 469:Action : Reduce rule [initializer -> assignment_expression] with [<instance @ 0x21c0b98>] and goto state 215
   yacc.py: 503:Result : <instance @ 0x21c0b98> (<c_ast.Node instance at 0x021C0B98>)
   yacc.py: 408:
   yacc.py: 409:State  : 215
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS initializer . LexToken(SEMI,';',548,12055)
   yacc.py: 469:Action : Reduce rule [init_declarator -> declarator EQUALS initializer] with ['rval','=',<instance @ 0x21c0b98>] and goto state 54
   yacc.py: 503:Result : <instance @ 0x21c0a80> (<c_ast.Node instance at 0x021C0A80>)
   yacc.py: 408:
   yacc.py: 409:State  : 54
   yacc.py: 433:Stack  : declaration_specifiers init_declarator . LexToken(SEMI,';',548,12055)
   yacc.py: 469:Action : Reduce rule [init_declarator_list -> init_declarator] with [<instance @ 0x21c0a80>] and goto state 53
   yacc.py: 503:Result : <instance @ 0x21c0a80> (<c_ast.Node instance at 0x021C0A80>)
   yacc.py: 408:
   yacc.py: 409:State  : 53
   yacc.py: 433:Stack  : declaration_specifiers init_declarator_list . LexToken(SEMI,';',548,12055)
   yacc.py: 443:Action : Shift and goto state 118
   yacc.py: 408:
   yacc.py: 409:State  : 118
   yacc.py: 433:Stack  : declaration_specifiers init_declarator_list SEMI . LexToken(ID,'FreeContextBuffer',549,12060)
   yacc.py: 469:Action : Reduce rule [declaration -> declaration_specifiers init_declarator_list SEMI] with ['int',<instance @ 0x21c0a80>,';'] and goto state 25
   yacc.py: 503:Result : <instance @ 0x21c0b48> (<c_ast.Node instance at 0x021C0B48>)
   yacc.py: 408:
   yacc.py: 409:State  : 25
   yacc.py: 433:Stack  : declaration . LexToken(ID,'FreeContextBuffer',549,12060)
   yacc.py: 469:Action : Reduce rule [external_declaration -> declaration] with [<instance @ 0x21c0b48>] and goto state 12
   yacc.py: 503:Result : <instance @ 0x21c0b48> (<c_ast.Node instance at 0x021C0B48>)
   yacc.py: 408:
   yacc.py: 409:State  : 12
   yacc.py: 433:Stack  : external_declaration . LexToken(ID,'FreeContextBuffer',549,12060)
   yacc.py: 469:Action : Reduce rule [translation_unit -> external_declaration] with [<instance @ 0x21c0b48>] and goto state 18
   yacc.py: 503:Result : <instance @ 0x21c0b48> (<c_ast.Node instance at 0x021C0B48>)
   yacc.py: 408:
   yacc.py: 409:State  : 18
   yacc.py: 433:Stack  : translation_unit . LexToken(ID,'FreeContextBuffer',549,12060)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : translation_unit ID . LexToken(LPAREN,'(',549,12077)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with [<str @ 0x21c0a98>] and goto state 22
   yacc.py: 503:Result : <str @ 0x21c0a98> ('FreeContextBuffer')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : translation_unit direct_declarator . LexToken(LPAREN,'(',549,12077)
   yacc.py: 443:Action : Shift and goto state 48
   yacc.py: 408:
   yacc.py: 409:State  : 48
   yacc.py: 433:Stack  : translation_unit direct_declarator LPAREN . LexToken(ID,'bufso',549,12078)
   yacc.py: 443:Action : Shift and goto state 113
   yacc.py: 408:
   yacc.py: 409:State  : 113
   yacc.py: 433:Stack  : translation_unit direct_declarator LPAREN ID . LexToken(LBRACKET,'[',549,12083)
   yacc.py: 573:Error  : translation_unit direct_declarator LPAREN ID . LexToken(LBRACKET,'[',549,12083)
   yacc.py: 408:
   yacc.py: 409:State  : 113
   yacc.py: 433:Stack  : translation_unit direct_declarator LPAREN ID . error
   yacc.py: 573:Error  : translation_unit direct_declarator LPAREN ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 48
   yacc.py: 433:Stack  : translation_unit direct_declarator LPAREN . error
   yacc.py: 573:Error  : translation_unit direct_declarator LPAREN . error
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : translation_unit direct_declarator . error
   yacc.py: 573:Error  : translation_unit direct_declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 18
   yacc.py: 433:Stack  : translation_unit . error
   yacc.py: 573:Error  : translation_unit . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'0',549,12084)
   yacc.py: 573:Error  : . LexToken(ICONST,'0',549,12084)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(RBRACKET,']',549,12085)
   yacc.py: 573:Error  : . LexToken(RBRACKET,']',549,12085)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(PERIOD,'.',549,12086)
   yacc.py: 573:Error  : . LexToken(PERIOD,'.',549,12086)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'pvBuffer',549,12087)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(RPAREN,')',549,12095)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['pvBuffer'] and goto state 22
   yacc.py: 503:Result : <str @ 0x21ae280> ('pvBuffer')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(RPAREN,')',549,12095)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['pvBuffer'] and goto state 37
   yacc.py: 503:Result : <str @ 0x21ae280> ('pvBuffer')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(RPAREN,')',549,12095)
   yacc.py: 573:Error  : declarator . LexToken(RPAREN,')',549,12095)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(SEMI,';',549,12096)
   yacc.py: 573:Error  : . LexToken(SEMI,';',549,12096)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(IF,'if',550,12101)
   yacc.py: 573:Error  : . LexToken(IF,'if',550,12101)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(LPAREN,'(',550,12104)
   yacc.py: 443:Action : Shift and goto state 4
   yacc.py: 408:
   yacc.py: 409:State  : 4
   yacc.py: 433:Stack  : LPAREN . LexToken(ID,'rval',550,12105)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : LPAREN ID . LexToken(NE,'!=',550,12110)
   yacc.py: 573:Error  : LPAREN ID . LexToken(NE,'!=',550,12110)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : LPAREN ID . error
   yacc.py: 573:Error  : LPAREN ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 4
   yacc.py: 433:Stack  : LPAREN . error
   yacc.py: 573:Error  : LPAREN . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'bufso',550,12113)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(LBRACKET,'[',550,12118)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['bufso'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f97680> ('bufso')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(LBRACKET,'[',550,12118)
   yacc.py: 443:Action : Shift and goto state 47
   yacc.py: 408:
   yacc.py: 409:State  : 47
   yacc.py: 433:Stack  : direct_declarator LBRACKET . LexToken(ICONST,'0',550,12119)
   yacc.py: 443:Action : Shift and goto state 95
   yacc.py: 408:
   yacc.py: 409:State  : 95
   yacc.py: 433:Stack  : direct_declarator LBRACKET ICONST . LexToken(RBRACKET,']',550,12120)
   yacc.py: 469:Action : Reduce rule [constant -> ICONST] with ['0'] and goto state 79
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 79
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant . LexToken(RBRACKET,']',550,12120)
   yacc.py: 469:Action : Reduce rule [primary_expression -> constant] with ['0'] and goto state 96
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 96
   yacc.py: 433:Stack  : direct_declarator LBRACKET primary_expression . LexToken(RBRACKET,']',550,12120)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> primary_expression] with ['0'] and goto state 86
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : direct_declarator LBRACKET postfix_expression . LexToken(RBRACKET,']',550,12120)
   yacc.py: 469:Action : Reduce rule [unary_expression -> postfix_expression] with ['0'] and goto state 75
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 75
   yacc.py: 433:Stack  : direct_declarator LBRACKET unary_expression . LexToken(RBRACKET,']',550,12120)
   yacc.py: 469:Action : Reduce rule [cast_expression -> unary_expression] with ['0'] and goto state 98
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 98
   yacc.py: 433:Stack  : direct_declarator LBRACKET cast_expression . LexToken(RBRACKET,']',550,12120)
   yacc.py: 469:Action : Reduce rule [multiplicative_expression -> cast_expression] with ['0'] and goto state 103
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 103
   yacc.py: 433:Stack  : direct_declarator LBRACKET multiplicative_expression . LexToken(RBRACKET,']',550,12120)
   yacc.py: 469:Action : Reduce rule [additive_expression -> multiplicative_expression] with ['0'] and goto state 77
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 77
   yacc.py: 433:Stack  : direct_declarator LBRACKET additive_expression . LexToken(RBRACKET,']',550,12120)
   yacc.py: 469:Action : Reduce rule [shift_expression -> additive_expression] with ['0'] and goto state 100
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 100
   yacc.py: 433:Stack  : direct_declarator LBRACKET shift_expression . LexToken(RBRACKET,']',550,12120)
   yacc.py: 469:Action : Reduce rule [relational_expression -> shift_expression] with ['0'] and goto state 88
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 88
   yacc.py: 433:Stack  : direct_declarator LBRACKET relational_expression . LexToken(RBRACKET,']',550,12120)
   yacc.py: 469:Action : Reduce rule [equality_expression -> relational_expression] with ['0'] and goto state 101
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 101
   yacc.py: 433:Stack  : direct_declarator LBRACKET equality_expression . LexToken(RBRACKET,']',550,12120)
   yacc.py: 469:Action : Reduce rule [and_expression -> equality_expression] with ['0'] and goto state 82
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 82
   yacc.py: 433:Stack  : direct_declarator LBRACKET and_expression . LexToken(RBRACKET,']',550,12120)
   yacc.py: 469:Action : Reduce rule [exclusive_or_expression -> and_expression] with ['0'] and goto state 76
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 76
   yacc.py: 433:Stack  : direct_declarator LBRACKET exclusive_or_expression . LexToken(RBRACKET,']',550,12120)
   yacc.py: 469:Action : Reduce rule [inclusive_or_expression -> exclusive_or_expression] with ['0'] and goto state 84
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 84
   yacc.py: 433:Stack  : direct_declarator LBRACKET inclusive_or_expression . LexToken(RBRACKET,']',550,12120)
   yacc.py: 469:Action : Reduce rule [logical_and_expression -> inclusive_or_expression] with ['0'] and goto state 99
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 99
   yacc.py: 433:Stack  : direct_declarator LBRACKET logical_and_expression . LexToken(RBRACKET,']',550,12120)
   yacc.py: 469:Action : Reduce rule [logical_or_expression -> logical_and_expression] with ['0'] and goto state 91
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 91
   yacc.py: 433:Stack  : direct_declarator LBRACKET logical_or_expression . LexToken(RBRACKET,']',550,12120)
   yacc.py: 469:Action : Reduce rule [conditional_expression -> logical_or_expression] with ['0'] and goto state 106
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 106
   yacc.py: 433:Stack  : direct_declarator LBRACKET conditional_expression . LexToken(RBRACKET,']',550,12120)
   yacc.py: 469:Action : Reduce rule [constant_expression -> conditional_expression] with ['0'] and goto state 105
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 105
   yacc.py: 428:Defaulted state 105: Reduce using 105
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression . LexToken(RBRACKET,']',550,12120)
   yacc.py: 469:Action : Reduce rule [constant_expression_opt -> constant_expression] with ['0'] and goto state 104
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 104
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt . LexToken(RBRACKET,']',550,12120)
   yacc.py: 443:Action : Shift and goto state 201
   yacc.py: 408:
   yacc.py: 409:State  : 201
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt RBRACKET . LexToken(PERIOD,'.',550,12121)
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt RBRACKET . LexToken(PERIOD,'.',550,12121)
   yacc.py: 408:
   yacc.py: 409:State  : 201
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt RBRACKET . error
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt RBRACKET . error
   yacc.py: 408:
   yacc.py: 409:State  : 104
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt . error
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt . error
   yacc.py: 408:
   yacc.py: 409:State  : 47
   yacc.py: 433:Stack  : direct_declarator LBRACKET . error
   yacc.py: 573:Error  : direct_declarator LBRACKET . error
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . error
   yacc.py: 573:Error  : direct_declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'cbBuffer',550,12122)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(RPAREN,')',550,12130)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['cbBuffer'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1de43e0> ('cbBuffer')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(RPAREN,')',550,12130)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['cbBuffer'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1de43e0> ('cbBuffer')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(RPAREN,')',550,12130)
   yacc.py: 573:Error  : declarator . LexToken(RPAREN,')',550,12130)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(RETURN,'return',551,12136)
   yacc.py: 573:Error  : . LexToken(RETURN,'return',551,12136)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(MINUS,'-',551,12143)
   yacc.py: 573:Error  : . LexToken(MINUS,'-',551,12143)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'1',551,12144)
   yacc.py: 573:Error  : . LexToken(ICONST,'1',551,12144)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(SEMI,';',551,12145)
   yacc.py: 573:Error  : . LexToken(SEMI,';',551,12145)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'InitContext',552,12150)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(EQUALS,'=',552,12162)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['InitContext'] and goto state 22
   yacc.py: 503:Result : <str @ 0x21ae280> ('InitContext')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(EQUALS,'=',552,12162)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['InitContext'] and goto state 37
   yacc.py: 503:Result : <str @ 0x21ae280> ('InitContext')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(EQUALS,'=',552,12162)
   yacc.py: 573:Error  : declarator . LexToken(EQUALS,'=',552,12162)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'true',552,12164)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(SEMI,';',552,12168)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['true'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f97660> ('true')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(SEMI,';',552,12168)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['true'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f97660> ('true')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(SEMI,';',552,12168)
   yacc.py: 573:Error  : declarator . LexToken(SEMI,';',552,12168)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(CONTINUE,'continue',553,12173)
   yacc.py: 573:Error  : . LexToken(CONTINUE,'continue',553,12173)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(SEMI,';',553,12181)
   yacc.py: 573:Error  : . LexToken(SEMI,';',553,12181)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(RBRACE,'}',554,12186)
   yacc.py: 573:Error  : . LexToken(RBRACE,'}',554,12186)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(DIVIDE,'/',556,12191)
   yacc.py: 573:Error  : . LexToken(DIVIDE,'/',556,12191)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(DIVIDE,'/',556,12192)
   yacc.py: 573:Error  : . LexToken(DIVIDE,'/',556,12192)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'Pass',556,12194)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(ID,'data',556,12199)
   yacc.py: 573:Error  : ID . LexToken(ID,'data',556,12199)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'to',556,12204)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(ID,'the',556,12207)
   yacc.py: 573:Error  : ID . LexToken(ID,'the',556,12207)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'remote',556,12211)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(ID,'site',556,12218)
   yacc.py: 573:Error  : ID . LexToken(ID,'site',556,12218)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(INT,'int',557,12225)
   yacc.py: 443:Action : Shift and goto state 31
   yacc.py: 408:
   yacc.py: 409:State  : 31
   yacc.py: 433:Stack  : INT . LexToken(ID,'rval',557,12229)
   yacc.py: 469:Action : Reduce rule [type_specifier -> INT] with ['int'] and goto state 13
   yacc.py: 503:Result : <str @ 0x1f85e60> ('int')
   yacc.py: 408:
   yacc.py: 409:State  : 13
   yacc.py: 433:Stack  : type_specifier . LexToken(ID,'rval',557,12229)
   yacc.py: 469:Action : Reduce rule [declaration_specifiers -> type_specifier] with ['int'] and goto state 24
   yacc.py: 503:Result : <str @ 0x1f85e60> ('int')
   yacc.py: 408:
   yacc.py: 409:State  : 24
   yacc.py: 433:Stack  : declaration_specifiers . LexToken(ID,'rval',557,12229)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : declaration_specifiers ID . LexToken(EQUALS,'=',557,12234)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['rval'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f97680> ('rval')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : declaration_specifiers direct_declarator . LexToken(EQUALS,'=',557,12234)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['rval'] and goto state 55
   yacc.py: 503:Result : <str @ 0x1f97680> ('rval')
   yacc.py: 408:
   yacc.py: 409:State  : 55
   yacc.py: 433:Stack  : declaration_specifiers declarator . LexToken(EQUALS,'=',557,12234)
   yacc.py: 443:Action : Shift and goto state 120
   yacc.py: 408:
   yacc.py: 409:State  : 120
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS . LexToken(ID,'ssend_p',557,12236)
   yacc.py: 443:Action : Shift and goto state 87
   yacc.py: 408:
   yacc.py: 409:State  : 87
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS ID . LexToken(LPAREN,'(',557,12243)
   yacc.py: 469:Action : Reduce rule [primary_expression -> ID] with ['ssend_p'] and goto state 96
   yacc.py: 503:Result : <str @ 0x1f97c00> ('ssend_p')
   yacc.py: 408:
   yacc.py: 409:State  : 96
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS primary_expression . LexToken(LPAREN,'(',557,12243)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> primary_expression] with ['ssend_p'] and goto state 86
   yacc.py: 503:Result : <str @ 0x1f97c00> ('ssend_p')
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression . LexToken(LPAREN,'(',557,12243)
   yacc.py: 443:Action : Shift and goto state 181
   yacc.py: 408:
   yacc.py: 409:State  : 181
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN . LexToken(LPAREN,'(',557,12244)
   yacc.py: 443:Action : Shift and goto state 148
   yacc.py: 408:
   yacc.py: 409:State  : 148
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN . LexToken(CHAR,'char',557,12245)
   yacc.py: 443:Action : Shift and goto state 8
   yacc.py: 408:
   yacc.py: 409:State  : 8
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN CHAR . LexToken(TIMES,'*',557,12249)
   yacc.py: 469:Action : Reduce rule [type_specifier -> CHAR] with ['char'] and goto state 64
   yacc.py: 503:Result : <str @ 0x1f974c0> ('char')
   yacc.py: 408:
   yacc.py: 409:State  : 64
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_specifier . LexToken(TIMES,'*',557,12249)
   yacc.py: 469:Action : Reduce rule [specifier_qualifier_list -> type_specifier] with ['char'] and goto state 191
   yacc.py: 503:Result : <str @ 0x1f974c0> ('char')
   yacc.py: 408:
   yacc.py: 409:State  : 191
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN specifier_qualifier_list . LexToken(TIMES,'*',557,12249)
   yacc.py: 443:Action : Shift and goto state 23
   yacc.py: 408:
   yacc.py: 409:State  : 23
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN specifier_qualifier_list TIMES . LexToken(RPAREN,')',557,12250)
   yacc.py: 469:Action : Reduce rule [pointer -> TIMES] with ['*'] and goto state 278
   yacc.py: 503:Result : <str @ 0x1df7278> ('*')
   yacc.py: 408:
   yacc.py: 409:State  : 278
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN specifier_qualifier_list pointer . LexToken(RPAREN,')',557,12250)
   yacc.py: 469:Action : Reduce rule [abstract_declarator -> pointer] with ['*'] and goto state 205
   yacc.py: 503:Result : <str @ 0x1df7278> ('*')
   yacc.py: 408:
   yacc.py: 409:State  : 205
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN specifier_qualifier_list abstract_declarator . LexToken(RPAREN,')',557,12250)
   yacc.py: 469:Action : Reduce rule [abstract_declarator_opt -> abstract_declarator] with ['*'] and goto state 276
   yacc.py: 503:Result : <str @ 0x1df7278> ('*')
   yacc.py: 408:
   yacc.py: 409:State  : 276
   yacc.py: 428:Defaulted state 276: Reduce using 93
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN specifier_qualifier_list abstract_declarator_opt . LexToken(RPAREN,')',557,12250)
   yacc.py: 469:Action : Reduce rule [type_name -> specifier_qualifier_list abstract_declarator_opt] with ['char','*'] and goto state 190
   yacc.py: 503:Result : <instance @ 0x21c0aa8> (<c_ast.Node instance at 0x021C0AA8>)
   yacc.py: 408:
   yacc.py: 409:State  : 190
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name . LexToken(RPAREN,')',557,12250)
   yacc.py: 443:Action : Shift and goto state 275
   yacc.py: 408:
   yacc.py: 409:State  : 275
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN . LexToken(ID,'bufso',557,12251)
   yacc.py: 443:Action : Shift and goto state 87
   yacc.py: 408:
   yacc.py: 409:State  : 87
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN ID . LexToken(LBRACKET,'[',557,12256)
   yacc.py: 469:Action : Reduce rule [primary_expression -> ID] with ['bufso'] and goto state 96
   yacc.py: 503:Result : <str @ 0x1f97660> ('bufso')
   yacc.py: 408:
   yacc.py: 409:State  : 96
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN primary_expression . LexToken(LBRACKET,'[',557,12256)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> primary_expression] with ['bufso'] and goto state 86
   yacc.py: 503:Result : <str @ 0x1f97660> ('bufso')
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression . LexToken(LBRACKET,'[',557,12256)
   yacc.py: 443:Action : Shift and goto state 180
   yacc.py: 408:
   yacc.py: 409:State  : 180
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET . LexToken(ICONST,'0',557,12257)
   yacc.py: 443:Action : Shift and goto state 95
   yacc.py: 408:
   yacc.py: 409:State  : 95
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET ICONST . LexToken(RBRACKET,']',557,12258)
   yacc.py: 469:Action : Reduce rule [constant -> ICONST] with ['0'] and goto state 79
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 79
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET constant . LexToken(RBRACKET,']',557,12258)
   yacc.py: 469:Action : Reduce rule [primary_expression -> constant] with ['0'] and goto state 96
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 96
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET primary_expression . LexToken(RBRACKET,']',557,12258)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> primary_expression] with ['0'] and goto state 86
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET postfix_expression . LexToken(RBRACKET,']',557,12258)
   yacc.py: 469:Action : Reduce rule [unary_expression -> postfix_expression] with ['0'] and goto state 130
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 130
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET unary_expression . LexToken(RBRACKET,']',557,12258)
   yacc.py: 469:Action : Reduce rule [cast_expression -> unary_expression] with ['0'] and goto state 98
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 98
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET cast_expression . LexToken(RBRACKET,']',557,12258)
   yacc.py: 469:Action : Reduce rule [multiplicative_expression -> cast_expression] with ['0'] and goto state 103
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 103
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET multiplicative_expression . LexToken(RBRACKET,']',557,12258)
   yacc.py: 469:Action : Reduce rule [additive_expression -> multiplicative_expression] with ['0'] and goto state 77
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 77
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET additive_expression . LexToken(RBRACKET,']',557,12258)
   yacc.py: 469:Action : Reduce rule [shift_expression -> additive_expression] with ['0'] and goto state 100
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 100
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET shift_expression . LexToken(RBRACKET,']',557,12258)
   yacc.py: 469:Action : Reduce rule [relational_expression -> shift_expression] with ['0'] and goto state 88
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 88
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET relational_expression . LexToken(RBRACKET,']',557,12258)
   yacc.py: 469:Action : Reduce rule [equality_expression -> relational_expression] with ['0'] and goto state 101
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 101
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET equality_expression . LexToken(RBRACKET,']',557,12258)
   yacc.py: 469:Action : Reduce rule [and_expression -> equality_expression] with ['0'] and goto state 82
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 82
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET and_expression . LexToken(RBRACKET,']',557,12258)
   yacc.py: 469:Action : Reduce rule [exclusive_or_expression -> and_expression] with ['0'] and goto state 76
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 76
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET exclusive_or_expression . LexToken(RBRACKET,']',557,12258)
   yacc.py: 469:Action : Reduce rule [inclusive_or_expression -> exclusive_or_expression] with ['0'] and goto state 84
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 84
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET inclusive_or_expression . LexToken(RBRACKET,']',557,12258)
   yacc.py: 469:Action : Reduce rule [logical_and_expression -> inclusive_or_expression] with ['0'] and goto state 99
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 99
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET logical_and_expression . LexToken(RBRACKET,']',557,12258)
   yacc.py: 469:Action : Reduce rule [logical_or_expression -> logical_and_expression] with ['0'] and goto state 91
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 91
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET logical_or_expression . LexToken(RBRACKET,']',557,12258)
   yacc.py: 469:Action : Reduce rule [conditional_expression -> logical_or_expression] with ['0'] and goto state 151
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 151
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET conditional_expression . LexToken(RBRACKET,']',557,12258)
   yacc.py: 469:Action : Reduce rule [assignment_expression -> conditional_expression] with ['0'] and goto state 147
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 147
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET assignment_expression . LexToken(RBRACKET,']',557,12258)
   yacc.py: 469:Action : Reduce rule [expression -> assignment_expression] with ['0'] and goto state 265
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 265
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET expression . LexToken(RBRACKET,']',557,12258)
   yacc.py: 443:Action : Shift and goto state 317
   yacc.py: 408:
   yacc.py: 409:State  : 317
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression LBRACKET expression RBRACKET . LexToken(PERIOD,'.',557,12259)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> postfix_expression LBRACKET expression RBRACKET] with ['bufso','[','0',']'] and goto state 86
   yacc.py: 503:Result : <instance @ 0x21c0bc0> (<c_ast.Node instance at 0x021C0BC0>)
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression . LexToken(PERIOD,'.',557,12259)
   yacc.py: 443:Action : Shift and goto state 179
   yacc.py: 408:
   yacc.py: 409:State  : 179
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression PERIOD . LexToken(ID,'pvBuffer',557,12260)
   yacc.py: 443:Action : Shift and goto state 264
   yacc.py: 408:
   yacc.py: 409:State  : 264
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression PERIOD ID . LexToken(COMMA,',',557,12268)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> postfix_expression PERIOD ID] with [<instance @ 0x21c0bc0>,'.','pvBuffer'] and goto state 86
   yacc.py: 503:Result : <instance @ 0x21c0bc0> (<c_ast.Node instance at 0x021C0BC0>)
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN postfix_expression . LexToken(COMMA,',',557,12268)
   yacc.py: 469:Action : Reduce rule [unary_expression -> postfix_expression] with [<instance @ 0x21c0bc0>] and goto state 75
   yacc.py: 503:Result : <instance @ 0x21c0bc0> (<c_ast.Node instance at 0x021C0BC0>)
   yacc.py: 408:
   yacc.py: 409:State  : 75
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN unary_expression . LexToken(COMMA,',',557,12268)
   yacc.py: 469:Action : Reduce rule [cast_expression -> unary_expression] with [<instance @ 0x21c0bc0>] and goto state 321
   yacc.py: 503:Result : <instance @ 0x21c0bc0> (<c_ast.Node instance at 0x021C0BC0>)
   yacc.py: 408:
   yacc.py: 409:State  : 321
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN LPAREN type_name RPAREN cast_expression . LexToken(COMMA,',',557,12268)
   yacc.py: 469:Action : Reduce rule [cast_expression -> LPAREN type_name RPAREN cast_expression] with ['(',<instance @ 0x21c0aa8>,')',<instance @ 0x21c0bc0>] and goto state 98
   yacc.py: 503:Result : <instance @ 0x21c0be8> (<c_ast.Node instance at 0x021C0BE8>)
   yacc.py: 408:
   yacc.py: 409:State  : 98
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN cast_expression . LexToken(COMMA,',',557,12268)
   yacc.py: 469:Action : Reduce rule [multiplicative_expression -> cast_expression] with [<instance @ 0x21c0be8>] and goto state 103
   yacc.py: 503:Result : <instance @ 0x21c0be8> (<c_ast.Node instance at 0x021C0BE8>)
   yacc.py: 408:
   yacc.py: 409:State  : 103
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN multiplicative_expression . LexToken(COMMA,',',557,12268)
   yacc.py: 469:Action : Reduce rule [additive_expression -> multiplicative_expression] with [<instance @ 0x21c0be8>] and goto state 77
   yacc.py: 503:Result : <instance @ 0x21c0be8> (<c_ast.Node instance at 0x021C0BE8>)
   yacc.py: 408:
   yacc.py: 409:State  : 77
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN additive_expression . LexToken(COMMA,',',557,12268)
   yacc.py: 469:Action : Reduce rule [shift_expression -> additive_expression] with [<instance @ 0x21c0be8>] and goto state 100
   yacc.py: 503:Result : <instance @ 0x21c0be8> (<c_ast.Node instance at 0x021C0BE8>)
   yacc.py: 408:
   yacc.py: 409:State  : 100
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN shift_expression . LexToken(COMMA,',',557,12268)
   yacc.py: 469:Action : Reduce rule [relational_expression -> shift_expression] with [<instance @ 0x21c0be8>] and goto state 88
   yacc.py: 503:Result : <instance @ 0x21c0be8> (<c_ast.Node instance at 0x021C0BE8>)
   yacc.py: 408:
   yacc.py: 409:State  : 88
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN relational_expression . LexToken(COMMA,',',557,12268)
   yacc.py: 469:Action : Reduce rule [equality_expression -> relational_expression] with [<instance @ 0x21c0be8>] and goto state 101
   yacc.py: 503:Result : <instance @ 0x21c0be8> (<c_ast.Node instance at 0x021C0BE8>)
   yacc.py: 408:
   yacc.py: 409:State  : 101
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN equality_expression . LexToken(COMMA,',',557,12268)
   yacc.py: 469:Action : Reduce rule [and_expression -> equality_expression] with [<instance @ 0x21c0be8>] and goto state 82
   yacc.py: 503:Result : <instance @ 0x21c0be8> (<c_ast.Node instance at 0x021C0BE8>)
   yacc.py: 408:
   yacc.py: 409:State  : 82
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN and_expression . LexToken(COMMA,',',557,12268)
   yacc.py: 469:Action : Reduce rule [exclusive_or_expression -> and_expression] with [<instance @ 0x21c0be8>] and goto state 76
   yacc.py: 503:Result : <instance @ 0x21c0be8> (<c_ast.Node instance at 0x021C0BE8>)
   yacc.py: 408:
   yacc.py: 409:State  : 76
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN exclusive_or_expression . LexToken(COMMA,',',557,12268)
   yacc.py: 469:Action : Reduce rule [inclusive_or_expression -> exclusive_or_expression] with [<instance @ 0x21c0be8>] and goto state 84
   yacc.py: 503:Result : <instance @ 0x21c0be8> (<c_ast.Node instance at 0x021C0BE8>)
   yacc.py: 408:
   yacc.py: 409:State  : 84
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN inclusive_or_expression . LexToken(COMMA,',',557,12268)
   yacc.py: 469:Action : Reduce rule [logical_and_expression -> inclusive_or_expression] with [<instance @ 0x21c0be8>] and goto state 99
   yacc.py: 503:Result : <instance @ 0x21c0be8> (<c_ast.Node instance at 0x021C0BE8>)
   yacc.py: 408:
   yacc.py: 409:State  : 99
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN logical_and_expression . LexToken(COMMA,',',557,12268)
   yacc.py: 469:Action : Reduce rule [logical_or_expression -> logical_and_expression] with [<instance @ 0x21c0be8>] and goto state 91
   yacc.py: 503:Result : <instance @ 0x21c0be8> (<c_ast.Node instance at 0x021C0BE8>)
   yacc.py: 408:
   yacc.py: 409:State  : 91
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN logical_or_expression . LexToken(COMMA,',',557,12268)
   yacc.py: 469:Action : Reduce rule [conditional_expression -> logical_or_expression] with [<instance @ 0x21c0be8>] and goto state 151
   yacc.py: 503:Result : <instance @ 0x21c0be8> (<c_ast.Node instance at 0x021C0BE8>)
   yacc.py: 408:
   yacc.py: 409:State  : 151
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN conditional_expression . LexToken(COMMA,',',557,12268)
   yacc.py: 469:Action : Reduce rule [assignment_expression -> conditional_expression] with [<instance @ 0x21c0be8>] and goto state 267
   yacc.py: 503:Result : <instance @ 0x21c0be8> (<c_ast.Node instance at 0x021C0BE8>)
   yacc.py: 408:
   yacc.py: 409:State  : 267
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN assignment_expression . LexToken(COMMA,',',557,12268)
   yacc.py: 469:Action : Reduce rule [argument_expression_list -> assignment_expression] with [<instance @ 0x21c0be8>] and goto state 268
   yacc.py: 503:Result : <instance @ 0x21c0be8> (<c_ast.Node instance at 0x021C0BE8>)
   yacc.py: 408:
   yacc.py: 409:State  : 268
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list . LexToken(COMMA,',',557,12268)
   yacc.py: 443:Action : Shift and goto state 319
   yacc.py: 408:
   yacc.py: 409:State  : 319
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA . LexToken(ID,'bufso',557,12269)
   yacc.py: 443:Action : Shift and goto state 87
   yacc.py: 408:
   yacc.py: 409:State  : 87
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA ID . LexToken(LBRACKET,'[',557,12274)
   yacc.py: 469:Action : Reduce rule [primary_expression -> ID] with ['bufso'] and goto state 96
   yacc.py: 503:Result : <str @ 0x1f974a0> ('bufso')
   yacc.py: 408:
   yacc.py: 409:State  : 96
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA primary_expression . LexToken(LBRACKET,'[',557,12274)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> primary_expression] with ['bufso'] and goto state 86
   yacc.py: 503:Result : <str @ 0x1f974a0> ('bufso')
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression . LexToken(LBRACKET,'[',557,12274)
   yacc.py: 443:Action : Shift and goto state 180
   yacc.py: 408:
   yacc.py: 409:State  : 180
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET . LexToken(ICONST,'0',557,12275)
   yacc.py: 443:Action : Shift and goto state 95
   yacc.py: 408:
   yacc.py: 409:State  : 95
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET ICONST . LexToken(RBRACKET,']',557,12276)
   yacc.py: 469:Action : Reduce rule [constant -> ICONST] with ['0'] and goto state 79
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 79
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET constant . LexToken(RBRACKET,']',557,12276)
   yacc.py: 469:Action : Reduce rule [primary_expression -> constant] with ['0'] and goto state 96
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 96
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET primary_expression . LexToken(RBRACKET,']',557,12276)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> primary_expression] with ['0'] and goto state 86
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET postfix_expression . LexToken(RBRACKET,']',557,12276)
   yacc.py: 469:Action : Reduce rule [unary_expression -> postfix_expression] with ['0'] and goto state 130
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 130
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET unary_expression . LexToken(RBRACKET,']',557,12276)
   yacc.py: 469:Action : Reduce rule [cast_expression -> unary_expression] with ['0'] and goto state 98
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 98
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET cast_expression . LexToken(RBRACKET,']',557,12276)
   yacc.py: 469:Action : Reduce rule [multiplicative_expression -> cast_expression] with ['0'] and goto state 103
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 103
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET multiplicative_expression . LexToken(RBRACKET,']',557,12276)
   yacc.py: 469:Action : Reduce rule [additive_expression -> multiplicative_expression] with ['0'] and goto state 77
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 77
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET additive_expression . LexToken(RBRACKET,']',557,12276)
   yacc.py: 469:Action : Reduce rule [shift_expression -> additive_expression] with ['0'] and goto state 100
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 100
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET shift_expression . LexToken(RBRACKET,']',557,12276)
   yacc.py: 469:Action : Reduce rule [relational_expression -> shift_expression] with ['0'] and goto state 88
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 88
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET relational_expression . LexToken(RBRACKET,']',557,12276)
   yacc.py: 469:Action : Reduce rule [equality_expression -> relational_expression] with ['0'] and goto state 101
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 101
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET equality_expression . LexToken(RBRACKET,']',557,12276)
   yacc.py: 469:Action : Reduce rule [and_expression -> equality_expression] with ['0'] and goto state 82
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 82
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET and_expression . LexToken(RBRACKET,']',557,12276)
   yacc.py: 469:Action : Reduce rule [exclusive_or_expression -> and_expression] with ['0'] and goto state 76
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 76
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET exclusive_or_expression . LexToken(RBRACKET,']',557,12276)
   yacc.py: 469:Action : Reduce rule [inclusive_or_expression -> exclusive_or_expression] with ['0'] and goto state 84
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 84
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET inclusive_or_expression . LexToken(RBRACKET,']',557,12276)
   yacc.py: 469:Action : Reduce rule [logical_and_expression -> inclusive_or_expression] with ['0'] and goto state 99
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 99
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET logical_and_expression . LexToken(RBRACKET,']',557,12276)
   yacc.py: 469:Action : Reduce rule [logical_or_expression -> logical_and_expression] with ['0'] and goto state 91
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 91
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET logical_or_expression . LexToken(RBRACKET,']',557,12276)
   yacc.py: 469:Action : Reduce rule [conditional_expression -> logical_or_expression] with ['0'] and goto state 151
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 151
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET conditional_expression . LexToken(RBRACKET,']',557,12276)
   yacc.py: 469:Action : Reduce rule [assignment_expression -> conditional_expression] with ['0'] and goto state 147
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 147
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET assignment_expression . LexToken(RBRACKET,']',557,12276)
   yacc.py: 469:Action : Reduce rule [expression -> assignment_expression] with ['0'] and goto state 265
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 265
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET expression . LexToken(RBRACKET,']',557,12276)
   yacc.py: 443:Action : Shift and goto state 317
   yacc.py: 408:
   yacc.py: 409:State  : 317
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression LBRACKET expression RBRACKET . LexToken(PERIOD,'.',557,12277)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> postfix_expression LBRACKET expression RBRACKET] with ['bufso','[','0',']'] and goto state 86
   yacc.py: 503:Result : <instance @ 0x21c0a80> (<c_ast.Node instance at 0x021C0A80>)
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression . LexToken(PERIOD,'.',557,12277)
   yacc.py: 443:Action : Shift and goto state 179
   yacc.py: 408:
   yacc.py: 409:State  : 179
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression PERIOD . LexToken(ID,'cbBuffer',557,12278)
   yacc.py: 443:Action : Shift and goto state 264
   yacc.py: 408:
   yacc.py: 409:State  : 264
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression PERIOD ID . LexToken(RPAREN,')',557,12286)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> postfix_expression PERIOD ID] with [<instance @ 0x21c0a80>,'.','cbBuffer'] and goto state 86
   yacc.py: 503:Result : <instance @ 0x21c0a80> (<c_ast.Node instance at 0x021C0A80>)
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression . LexToken(RPAREN,')',557,12286)
   yacc.py: 469:Action : Reduce rule [unary_expression -> postfix_expression] with [<instance @ 0x21c0a80>] and goto state 130
   yacc.py: 503:Result : <instance @ 0x21c0a80> (<c_ast.Node instance at 0x021C0A80>)
   yacc.py: 408:
   yacc.py: 409:State  : 130
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA unary_expression . LexToken(RPAREN,')',557,12286)
   yacc.py: 469:Action : Reduce rule [cast_expression -> unary_expression] with [<instance @ 0x21c0a80>] and goto state 98
   yacc.py: 503:Result : <instance @ 0x21c0a80> (<c_ast.Node instance at 0x021C0A80>)
   yacc.py: 408:
   yacc.py: 409:State  : 98
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA cast_expression . LexToken(RPAREN,')',557,12286)
   yacc.py: 469:Action : Reduce rule [multiplicative_expression -> cast_expression] with [<instance @ 0x21c0a80>] and goto state 103
   yacc.py: 503:Result : <instance @ 0x21c0a80> (<c_ast.Node instance at 0x021C0A80>)
   yacc.py: 408:
   yacc.py: 409:State  : 103
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA multiplicative_expression . LexToken(RPAREN,')',557,12286)
   yacc.py: 469:Action : Reduce rule [additive_expression -> multiplicative_expression] with [<instance @ 0x21c0a80>] and goto state 77
   yacc.py: 503:Result : <instance @ 0x21c0a80> (<c_ast.Node instance at 0x021C0A80>)
   yacc.py: 408:
   yacc.py: 409:State  : 77
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA additive_expression . LexToken(RPAREN,')',557,12286)
   yacc.py: 469:Action : Reduce rule [shift_expression -> additive_expression] with [<instance @ 0x21c0a80>] and goto state 100
   yacc.py: 503:Result : <instance @ 0x21c0a80> (<c_ast.Node instance at 0x021C0A80>)
   yacc.py: 408:
   yacc.py: 409:State  : 100
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA shift_expression . LexToken(RPAREN,')',557,12286)
   yacc.py: 469:Action : Reduce rule [relational_expression -> shift_expression] with [<instance @ 0x21c0a80>] and goto state 88
   yacc.py: 503:Result : <instance @ 0x21c0a80> (<c_ast.Node instance at 0x021C0A80>)
   yacc.py: 408:
   yacc.py: 409:State  : 88
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA relational_expression . LexToken(RPAREN,')',557,12286)
   yacc.py: 469:Action : Reduce rule [equality_expression -> relational_expression] with [<instance @ 0x21c0a80>] and goto state 101
   yacc.py: 503:Result : <instance @ 0x21c0a80> (<c_ast.Node instance at 0x021C0A80>)
   yacc.py: 408:
   yacc.py: 409:State  : 101
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA equality_expression . LexToken(RPAREN,')',557,12286)
   yacc.py: 469:Action : Reduce rule [and_expression -> equality_expression] with [<instance @ 0x21c0a80>] and goto state 82
   yacc.py: 503:Result : <instance @ 0x21c0a80> (<c_ast.Node instance at 0x021C0A80>)
   yacc.py: 408:
   yacc.py: 409:State  : 82
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA and_expression . LexToken(RPAREN,')',557,12286)
   yacc.py: 469:Action : Reduce rule [exclusive_or_expression -> and_expression] with [<instance @ 0x21c0a80>] and goto state 76
   yacc.py: 503:Result : <instance @ 0x21c0a80> (<c_ast.Node instance at 0x021C0A80>)
   yacc.py: 408:
   yacc.py: 409:State  : 76
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA exclusive_or_expression . LexToken(RPAREN,')',557,12286)
   yacc.py: 469:Action : Reduce rule [inclusive_or_expression -> exclusive_or_expression] with [<instance @ 0x21c0a80>] and goto state 84
   yacc.py: 503:Result : <instance @ 0x21c0a80> (<c_ast.Node instance at 0x021C0A80>)
   yacc.py: 408:
   yacc.py: 409:State  : 84
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA inclusive_or_expression . LexToken(RPAREN,')',557,12286)
   yacc.py: 469:Action : Reduce rule [logical_and_expression -> inclusive_or_expression] with [<instance @ 0x21c0a80>] and goto state 99
   yacc.py: 503:Result : <instance @ 0x21c0a80> (<c_ast.Node instance at 0x021C0A80>)
   yacc.py: 408:
   yacc.py: 409:State  : 99
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA logical_and_expression . LexToken(RPAREN,')',557,12286)
   yacc.py: 469:Action : Reduce rule [logical_or_expression -> logical_and_expression] with [<instance @ 0x21c0a80>] and goto state 91
   yacc.py: 503:Result : <instance @ 0x21c0a80> (<c_ast.Node instance at 0x021C0A80>)
   yacc.py: 408:
   yacc.py: 409:State  : 91
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA logical_or_expression . LexToken(RPAREN,')',557,12286)
   yacc.py: 469:Action : Reduce rule [conditional_expression -> logical_or_expression] with [<instance @ 0x21c0a80>] and goto state 151
   yacc.py: 503:Result : <instance @ 0x21c0a80> (<c_ast.Node instance at 0x021C0A80>)
   yacc.py: 408:
   yacc.py: 409:State  : 151
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA conditional_expression . LexToken(RPAREN,')',557,12286)
   yacc.py: 469:Action : Reduce rule [assignment_expression -> conditional_expression] with [<instance @ 0x21c0a80>] and goto state 335
   yacc.py: 503:Result : <instance @ 0x21c0a80> (<c_ast.Node instance at 0x021C0A80>)
   yacc.py: 408:
   yacc.py: 409:State  : 335
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA assignment_expression . LexToken(RPAREN,')',557,12286)
   yacc.py: 469:Action : Reduce rule [argument_expression_list -> argument_expression_list COMMA assignment_expression] with [<instance @ 0x21c0be8>,',',<instance @ 0x21c0a80>] and goto state 268
   yacc.py: 503:Result : <instance @ 0x21c0a58> (<c_ast.Node instance at 0x021C0A58>)
   yacc.py: 408:
   yacc.py: 409:State  : 268
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list . LexToken(RPAREN,')',557,12286)
   yacc.py: 443:Action : Shift and goto state 318
   yacc.py: 408:
   yacc.py: 409:State  : 318
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list RPAREN . LexToken(SEMI,';',557,12287)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> postfix_expression LPAREN argument_expression_list RPAREN] with ['ssend_p','(',<instance @ 0x21c0a58>,')'] and goto state 86
   yacc.py: 503:Result : <instance @ 0x21c0ad0> (<c_ast.Node instance at 0x021C0AD0>)
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression . LexToken(SEMI,';',557,12287)
   yacc.py: 469:Action : Reduce rule [unary_expression -> postfix_expression] with [<instance @ 0x21c0ad0>] and goto state 130
   yacc.py: 503:Result : <instance @ 0x21c0ad0> (<c_ast.Node instance at 0x021C0AD0>)
   yacc.py: 408:
   yacc.py: 409:State  : 130
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS unary_expression . LexToken(SEMI,';',557,12287)
   yacc.py: 469:Action : Reduce rule [cast_expression -> unary_expression] with [<instance @ 0x21c0ad0>] and goto state 98
   yacc.py: 503:Result : <instance @ 0x21c0ad0> (<c_ast.Node instance at 0x021C0AD0>)
   yacc.py: 408:
   yacc.py: 409:State  : 98
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS cast_expression . LexToken(SEMI,';',557,12287)
   yacc.py: 469:Action : Reduce rule [multiplicative_expression -> cast_expression] with [<instance @ 0x21c0ad0>] and goto state 103
   yacc.py: 503:Result : <instance @ 0x21c0ad0> (<c_ast.Node instance at 0x021C0AD0>)
   yacc.py: 408:
   yacc.py: 409:State  : 103
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS multiplicative_expression . LexToken(SEMI,';',557,12287)
   yacc.py: 469:Action : Reduce rule [additive_expression -> multiplicative_expression] with [<instance @ 0x21c0ad0>] and goto state 77
   yacc.py: 503:Result : <instance @ 0x21c0ad0> (<c_ast.Node instance at 0x021C0AD0>)
   yacc.py: 408:
   yacc.py: 409:State  : 77
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS additive_expression . LexToken(SEMI,';',557,12287)
   yacc.py: 469:Action : Reduce rule [shift_expression -> additive_expression] with [<instance @ 0x21c0ad0>] and goto state 100
   yacc.py: 503:Result : <instance @ 0x21c0ad0> (<c_ast.Node instance at 0x021C0AD0>)
   yacc.py: 408:
   yacc.py: 409:State  : 100
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS shift_expression . LexToken(SEMI,';',557,12287)
   yacc.py: 469:Action : Reduce rule [relational_expression -> shift_expression] with [<instance @ 0x21c0ad0>] and goto state 88
   yacc.py: 503:Result : <instance @ 0x21c0ad0> (<c_ast.Node instance at 0x021C0AD0>)
   yacc.py: 408:
   yacc.py: 409:State  : 88
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS relational_expression . LexToken(SEMI,';',557,12287)
   yacc.py: 469:Action : Reduce rule [equality_expression -> relational_expression] with [<instance @ 0x21c0ad0>] and goto state 101
   yacc.py: 503:Result : <instance @ 0x21c0ad0> (<c_ast.Node instance at 0x021C0AD0>)
   yacc.py: 408:
   yacc.py: 409:State  : 101
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS equality_expression . LexToken(SEMI,';',557,12287)
   yacc.py: 469:Action : Reduce rule [and_expression -> equality_expression] with [<instance @ 0x21c0ad0>] and goto state 82
   yacc.py: 503:Result : <instance @ 0x21c0ad0> (<c_ast.Node instance at 0x021C0AD0>)
   yacc.py: 408:
   yacc.py: 409:State  : 82
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS and_expression . LexToken(SEMI,';',557,12287)
   yacc.py: 469:Action : Reduce rule [exclusive_or_expression -> and_expression] with [<instance @ 0x21c0ad0>] and goto state 76
   yacc.py: 503:Result : <instance @ 0x21c0ad0> (<c_ast.Node instance at 0x021C0AD0>)
   yacc.py: 408:
   yacc.py: 409:State  : 76
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS exclusive_or_expression . LexToken(SEMI,';',557,12287)
   yacc.py: 469:Action : Reduce rule [inclusive_or_expression -> exclusive_or_expression] with [<instance @ 0x21c0ad0>] and goto state 84
   yacc.py: 503:Result : <instance @ 0x21c0ad0> (<c_ast.Node instance at 0x021C0AD0>)
   yacc.py: 408:
   yacc.py: 409:State  : 84
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS inclusive_or_expression . LexToken(SEMI,';',557,12287)
   yacc.py: 469:Action : Reduce rule [logical_and_expression -> inclusive_or_expression] with [<instance @ 0x21c0ad0>] and goto state 99
   yacc.py: 503:Result : <instance @ 0x21c0ad0> (<c_ast.Node instance at 0x021C0AD0>)
   yacc.py: 408:
   yacc.py: 409:State  : 99
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS logical_and_expression . LexToken(SEMI,';',557,12287)
   yacc.py: 469:Action : Reduce rule [logical_or_expression -> logical_and_expression] with [<instance @ 0x21c0ad0>] and goto state 91
   yacc.py: 503:Result : <instance @ 0x21c0ad0> (<c_ast.Node instance at 0x021C0AD0>)
   yacc.py: 408:
   yacc.py: 409:State  : 91
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS logical_or_expression . LexToken(SEMI,';',557,12287)
   yacc.py: 469:Action : Reduce rule [conditional_expression -> logical_or_expression] with [<instance @ 0x21c0ad0>] and goto state 151
   yacc.py: 503:Result : <instance @ 0x21c0ad0> (<c_ast.Node instance at 0x021C0AD0>)
   yacc.py: 408:
   yacc.py: 409:State  : 151
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS conditional_expression . LexToken(SEMI,';',557,12287)
   yacc.py: 469:Action : Reduce rule [assignment_expression -> conditional_expression] with [<instance @ 0x21c0ad0>] and goto state 216
   yacc.py: 503:Result : <instance @ 0x21c0ad0> (<c_ast.Node instance at 0x021C0AD0>)
   yacc.py: 408:
   yacc.py: 409:State  : 216
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS assignment_expression . LexToken(SEMI,';',557,12287)
   yacc.py: 469:Action : Reduce rule [initializer -> assignment_expression] with [<instance @ 0x21c0ad0>] and goto state 215
   yacc.py: 503:Result : <instance @ 0x21c0ad0> (<c_ast.Node instance at 0x021C0AD0>)
   yacc.py: 408:
   yacc.py: 409:State  : 215
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS initializer . LexToken(SEMI,';',557,12287)
   yacc.py: 469:Action : Reduce rule [init_declarator -> declarator EQUALS initializer] with ['rval','=',<instance @ 0x21c0ad0>] and goto state 54
   yacc.py: 503:Result : <instance @ 0x21c0b48> (<c_ast.Node instance at 0x021C0B48>)
   yacc.py: 408:
   yacc.py: 409:State  : 54
   yacc.py: 433:Stack  : declaration_specifiers init_declarator . LexToken(SEMI,';',557,12287)
   yacc.py: 469:Action : Reduce rule [init_declarator_list -> init_declarator] with [<instance @ 0x21c0b48>] and goto state 53
   yacc.py: 503:Result : <instance @ 0x21c0b48> (<c_ast.Node instance at 0x021C0B48>)
   yacc.py: 408:
   yacc.py: 409:State  : 53
   yacc.py: 433:Stack  : declaration_specifiers init_declarator_list . LexToken(SEMI,';',557,12287)
   yacc.py: 443:Action : Shift and goto state 118
   yacc.py: 408:
   yacc.py: 409:State  : 118
   yacc.py: 433:Stack  : declaration_specifiers init_declarator_list SEMI . LexToken(ID,'FreeContextBuffer',558,12291)
   yacc.py: 469:Action : Reduce rule [declaration -> declaration_specifiers init_declarator_list SEMI] with ['int',<instance @ 0x21c0b48>,';'] and goto state 25
   yacc.py: 503:Result : <instance @ 0x21c0b98> (<c_ast.Node instance at 0x021C0B98>)
   yacc.py: 408:
   yacc.py: 409:State  : 25
   yacc.py: 433:Stack  : declaration . LexToken(ID,'FreeContextBuffer',558,12291)
   yacc.py: 469:Action : Reduce rule [external_declaration -> declaration] with [<instance @ 0x21c0b98>] and goto state 12
   yacc.py: 503:Result : <instance @ 0x21c0b98> (<c_ast.Node instance at 0x021C0B98>)
   yacc.py: 408:
   yacc.py: 409:State  : 12
   yacc.py: 433:Stack  : external_declaration . LexToken(ID,'FreeContextBuffer',558,12291)
   yacc.py: 469:Action : Reduce rule [translation_unit -> external_declaration] with [<instance @ 0x21c0b98>] and goto state 18
   yacc.py: 503:Result : <instance @ 0x21c0b98> (<c_ast.Node instance at 0x021C0B98>)
   yacc.py: 408:
   yacc.py: 409:State  : 18
   yacc.py: 433:Stack  : translation_unit . LexToken(ID,'FreeContextBuffer',558,12291)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : translation_unit ID . LexToken(LPAREN,'(',558,12308)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with [<str @ 0x21c0c28>] and goto state 22
   yacc.py: 503:Result : <str @ 0x21c0c28> ('FreeContextBuffer')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : translation_unit direct_declarator . LexToken(LPAREN,'(',558,12308)
   yacc.py: 443:Action : Shift and goto state 48
   yacc.py: 408:
   yacc.py: 409:State  : 48
   yacc.py: 433:Stack  : translation_unit direct_declarator LPAREN . LexToken(ID,'bufso',558,12309)
   yacc.py: 443:Action : Shift and goto state 113
   yacc.py: 408:
   yacc.py: 409:State  : 113
   yacc.py: 433:Stack  : translation_unit direct_declarator LPAREN ID . LexToken(LBRACKET,'[',558,12314)
   yacc.py: 573:Error  : translation_unit direct_declarator LPAREN ID . LexToken(LBRACKET,'[',558,12314)
   yacc.py: 408:
   yacc.py: 409:State  : 113
   yacc.py: 433:Stack  : translation_unit direct_declarator LPAREN ID . error
   yacc.py: 573:Error  : translation_unit direct_declarator LPAREN ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 48
   yacc.py: 433:Stack  : translation_unit direct_declarator LPAREN . error
   yacc.py: 573:Error  : translation_unit direct_declarator LPAREN . error
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : translation_unit direct_declarator . error
   yacc.py: 573:Error  : translation_unit direct_declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 18
   yacc.py: 433:Stack  : translation_unit . error
   yacc.py: 573:Error  : translation_unit . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'0',558,12315)
   yacc.py: 573:Error  : . LexToken(ICONST,'0',558,12315)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(RBRACKET,']',558,12316)
   yacc.py: 573:Error  : . LexToken(RBRACKET,']',558,12316)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(PERIOD,'.',558,12317)
   yacc.py: 573:Error  : . LexToken(PERIOD,'.',558,12317)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'pvBuffer',558,12318)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(RPAREN,')',558,12326)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['pvBuffer'] and goto state 22
   yacc.py: 503:Result : <str @ 0x21ae280> ('pvBuffer')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(RPAREN,')',558,12326)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['pvBuffer'] and goto state 37
   yacc.py: 503:Result : <str @ 0x21ae280> ('pvBuffer')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(RPAREN,')',558,12326)
   yacc.py: 573:Error  : declarator . LexToken(RPAREN,')',558,12326)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(SEMI,';',558,12327)
   yacc.py: 573:Error  : . LexToken(SEMI,';',558,12327)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(IF,'if',559,12331)
   yacc.py: 573:Error  : . LexToken(IF,'if',559,12331)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(LPAREN,'(',559,12334)
   yacc.py: 443:Action : Shift and goto state 4
   yacc.py: 408:
   yacc.py: 409:State  : 4
   yacc.py: 433:Stack  : LPAREN . LexToken(ID,'rval',559,12335)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : LPAREN ID . LexToken(NE,'!=',559,12340)
   yacc.py: 573:Error  : LPAREN ID . LexToken(NE,'!=',559,12340)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : LPAREN ID . error
   yacc.py: 573:Error  : LPAREN ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 4
   yacc.py: 433:Stack  : LPAREN . error
   yacc.py: 573:Error  : LPAREN . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'bufso',559,12343)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(LBRACKET,'[',559,12348)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['bufso'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f97660> ('bufso')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(LBRACKET,'[',559,12348)
   yacc.py: 443:Action : Shift and goto state 47
   yacc.py: 408:
   yacc.py: 409:State  : 47
   yacc.py: 433:Stack  : direct_declarator LBRACKET . LexToken(ICONST,'0',559,12349)
   yacc.py: 443:Action : Shift and goto state 95
   yacc.py: 408:
   yacc.py: 409:State  : 95
   yacc.py: 433:Stack  : direct_declarator LBRACKET ICONST . LexToken(RBRACKET,']',559,12350)
   yacc.py: 469:Action : Reduce rule [constant -> ICONST] with ['0'] and goto state 79
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 79
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant . LexToken(RBRACKET,']',559,12350)
   yacc.py: 469:Action : Reduce rule [primary_expression -> constant] with ['0'] and goto state 96
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 96
   yacc.py: 433:Stack  : direct_declarator LBRACKET primary_expression . LexToken(RBRACKET,']',559,12350)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> primary_expression] with ['0'] and goto state 86
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : direct_declarator LBRACKET postfix_expression . LexToken(RBRACKET,']',559,12350)
   yacc.py: 469:Action : Reduce rule [unary_expression -> postfix_expression] with ['0'] and goto state 75
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 75
   yacc.py: 433:Stack  : direct_declarator LBRACKET unary_expression . LexToken(RBRACKET,']',559,12350)
   yacc.py: 469:Action : Reduce rule [cast_expression -> unary_expression] with ['0'] and goto state 98
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 98
   yacc.py: 433:Stack  : direct_declarator LBRACKET cast_expression . LexToken(RBRACKET,']',559,12350)
   yacc.py: 469:Action : Reduce rule [multiplicative_expression -> cast_expression] with ['0'] and goto state 103
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 103
   yacc.py: 433:Stack  : direct_declarator LBRACKET multiplicative_expression . LexToken(RBRACKET,']',559,12350)
   yacc.py: 469:Action : Reduce rule [additive_expression -> multiplicative_expression] with ['0'] and goto state 77
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 77
   yacc.py: 433:Stack  : direct_declarator LBRACKET additive_expression . LexToken(RBRACKET,']',559,12350)
   yacc.py: 469:Action : Reduce rule [shift_expression -> additive_expression] with ['0'] and goto state 100
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 100
   yacc.py: 433:Stack  : direct_declarator LBRACKET shift_expression . LexToken(RBRACKET,']',559,12350)
   yacc.py: 469:Action : Reduce rule [relational_expression -> shift_expression] with ['0'] and goto state 88
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 88
   yacc.py: 433:Stack  : direct_declarator LBRACKET relational_expression . LexToken(RBRACKET,']',559,12350)
   yacc.py: 469:Action : Reduce rule [equality_expression -> relational_expression] with ['0'] and goto state 101
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 101
   yacc.py: 433:Stack  : direct_declarator LBRACKET equality_expression . LexToken(RBRACKET,']',559,12350)
   yacc.py: 469:Action : Reduce rule [and_expression -> equality_expression] with ['0'] and goto state 82
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 82
   yacc.py: 433:Stack  : direct_declarator LBRACKET and_expression . LexToken(RBRACKET,']',559,12350)
   yacc.py: 469:Action : Reduce rule [exclusive_or_expression -> and_expression] with ['0'] and goto state 76
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 76
   yacc.py: 433:Stack  : direct_declarator LBRACKET exclusive_or_expression . LexToken(RBRACKET,']',559,12350)
   yacc.py: 469:Action : Reduce rule [inclusive_or_expression -> exclusive_or_expression] with ['0'] and goto state 84
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 84
   yacc.py: 433:Stack  : direct_declarator LBRACKET inclusive_or_expression . LexToken(RBRACKET,']',559,12350)
   yacc.py: 469:Action : Reduce rule [logical_and_expression -> inclusive_or_expression] with ['0'] and goto state 99
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 99
   yacc.py: 433:Stack  : direct_declarator LBRACKET logical_and_expression . LexToken(RBRACKET,']',559,12350)
   yacc.py: 469:Action : Reduce rule [logical_or_expression -> logical_and_expression] with ['0'] and goto state 91
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 91
   yacc.py: 433:Stack  : direct_declarator LBRACKET logical_or_expression . LexToken(RBRACKET,']',559,12350)
   yacc.py: 469:Action : Reduce rule [conditional_expression -> logical_or_expression] with ['0'] and goto state 106
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 106
   yacc.py: 433:Stack  : direct_declarator LBRACKET conditional_expression . LexToken(RBRACKET,']',559,12350)
   yacc.py: 469:Action : Reduce rule [constant_expression -> conditional_expression] with ['0'] and goto state 105
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 105
   yacc.py: 428:Defaulted state 105: Reduce using 105
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression . LexToken(RBRACKET,']',559,12350)
   yacc.py: 469:Action : Reduce rule [constant_expression_opt -> constant_expression] with ['0'] and goto state 104
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 104
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt . LexToken(RBRACKET,']',559,12350)
   yacc.py: 443:Action : Shift and goto state 201
   yacc.py: 408:
   yacc.py: 409:State  : 201
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt RBRACKET . LexToken(PERIOD,'.',559,12351)
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt RBRACKET . LexToken(PERIOD,'.',559,12351)
   yacc.py: 408:
   yacc.py: 409:State  : 201
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt RBRACKET . error
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt RBRACKET . error
   yacc.py: 408:
   yacc.py: 409:State  : 104
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt . error
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt . error
   yacc.py: 408:
   yacc.py: 409:State  : 47
   yacc.py: 433:Stack  : direct_declarator LBRACKET . error
   yacc.py: 573:Error  : direct_declarator LBRACKET . error
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . error
   yacc.py: 573:Error  : direct_declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'cbBuffer',559,12352)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(RPAREN,')',559,12360)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['cbBuffer'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1de43e0> ('cbBuffer')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(RPAREN,')',559,12360)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['cbBuffer'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1de43e0> ('cbBuffer')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(RPAREN,')',559,12360)
   yacc.py: 573:Error  : declarator . LexToken(RPAREN,')',559,12360)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(RETURN,'return',560,12365)
   yacc.py: 573:Error  : . LexToken(RETURN,'return',560,12365)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(MINUS,'-',560,12372)
   yacc.py: 573:Error  : . LexToken(MINUS,'-',560,12372)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'1',560,12373)
   yacc.py: 573:Error  : . LexToken(ICONST,'1',560,12373)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(SEMI,';',560,12374)
   yacc.py: 573:Error  : . LexToken(SEMI,';',560,12374)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(IF,'if',563,12380)
   yacc.py: 573:Error  : . LexToken(IF,'if',563,12380)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(LPAREN,'(',563,12383)
   yacc.py: 443:Action : Shift and goto state 4
   yacc.py: 408:
   yacc.py: 409:State  : 4
   yacc.py: 433:Stack  : LPAREN . LexToken(ID,'ss',563,12384)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : LPAREN ID . LexToken(EQ,'==',563,12387)
   yacc.py: 573:Error  : LPAREN ID . LexToken(EQ,'==',563,12387)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : LPAREN ID . error
   yacc.py: 573:Error  : LPAREN ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 4
   yacc.py: 433:Stack  : LPAREN . error
   yacc.py: 573:Error  : LPAREN . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'S_OK',563,12390)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(RPAREN,')',563,12394)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['S_OK'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f97680> ('S_OK')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(RPAREN,')',563,12394)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['S_OK'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f97680> ('S_OK')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(RPAREN,')',563,12394)
   yacc.py: 573:Error  : declarator . LexToken(RPAREN,')',563,12394)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(BREAK,'break',564,12399)
   yacc.py: 573:Error  : . LexToken(BREAK,'break',564,12399)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(SEMI,';',564,12404)
   yacc.py: 573:Error  : . LexToken(SEMI,';',564,12404)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(DIVIDE,'/',564,12406)
   yacc.py: 573:Error  : . LexToken(DIVIDE,'/',564,12406)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(DIVIDE,'/',564,12407)
   yacc.py: 573:Error  : . LexToken(DIVIDE,'/',564,12407)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'wow',564,12409)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(LNOT,'!',564,12412)
   yacc.py: 573:Error  : ID . LexToken(LNOT,'!',564,12412)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(LNOT,'!',564,12413)
   yacc.py: 573:Error  : . LexToken(LNOT,'!',564,12413)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(RBRACE,'}',566,12420)
   yacc.py: 573:Error  : . LexToken(RBRACE,'}',566,12420)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(RETURN,'return',567,12423)
   yacc.py: 573:Error  : . LexToken(RETURN,'return',567,12423)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'0',567,12430)
   yacc.py: 573:Error  : . LexToken(ICONST,'0',567,12430)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(SEMI,';',567,12431)
   yacc.py: 573:Error  : . LexToken(SEMI,';',567,12431)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(RBRACE,'}',568,12434)
   yacc.py: 573:Error  : . LexToken(RBRACE,'}',568,12434)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(INT,'int',570,12437)
   yacc.py: 443:Action : Shift and goto state 31
   yacc.py: 408:
   yacc.py: 409:State  : 31
   yacc.py: 433:Stack  : INT . LexToken(ID,'SSL_SOCKET',570,12441)
   yacc.py: 469:Action : Reduce rule [type_specifier -> INT] with ['int'] and goto state 13
   yacc.py: 503:Result : <str @ 0x1f85e48> ('int')
   yacc.py: 408:
   yacc.py: 409:State  : 13
   yacc.py: 433:Stack  : type_specifier . LexToken(ID,'SSL_SOCKET',570,12441)
   yacc.py: 469:Action : Reduce rule [declaration_specifiers -> type_specifier] with ['int'] and goto state 24
   yacc.py: 503:Result : <str @ 0x1f85e48> ('int')
   yacc.py: 408:
   yacc.py: 409:State  : 24
   yacc.py: 433:Stack  : declaration_specifiers . LexToken(ID,'SSL_SOCKET',570,12441)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : declaration_specifiers ID . LexToken(COLON,':',570,12452)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['SSL_SOCKET'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f974c0> ('SSL_SOCKET')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : declaration_specifiers direct_declarator . LexToken(COLON,':',570,12452)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['SSL_SOCKET'] and goto state 55
   yacc.py: 503:Result : <str @ 0x1f974c0> ('SSL_SOCKET')
   yacc.py: 408:
   yacc.py: 409:State  : 55
   yacc.py: 433:Stack  : declaration_specifiers declarator . LexToken(COLON,':',570,12452)
   yacc.py: 573:Error  : declaration_specifiers declarator . LexToken(COLON,':',570,12452)
   yacc.py: 408:
   yacc.py: 409:State  : 55
   yacc.py: 433:Stack  : declaration_specifiers declarator . error
   yacc.py: 573:Error  : declaration_specifiers declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 24
   yacc.py: 433:Stack  : declaration_specifiers . error
   yacc.py: 573:Error  : declaration_specifiers . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(COLON,':',570,12453)
   yacc.py: 573:Error  : . LexToken(COLON,':',570,12453)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'ClientInit',570,12455)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(LPAREN,'(',570,12465)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['ClientInit'] and goto state 22
   yacc.py: 503:Result : <str @ 0x671440> ('ClientInit')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(LPAREN,'(',570,12465)
   yacc.py: 443:Action : Shift and goto state 48
   yacc.py: 408:
   yacc.py: 409:State  : 48
   yacc.py: 433:Stack  : direct_declarator LPAREN . LexToken(ID,'bool',570,12466)
   yacc.py: 443:Action : Shift and goto state 113
   yacc.py: 408:
   yacc.py: 409:State  : 113
   yacc.py: 433:Stack  : direct_declarator LPAREN ID . LexToken(ID,'NoLoop',570,12471)
   yacc.py: 573:Error  : direct_declarator LPAREN ID . LexToken(ID,'NoLoop',570,12471)
   yacc.py: 408:
   yacc.py: 409:State  : 113
   yacc.py: 433:Stack  : direct_declarator LPAREN ID . error
   yacc.py: 573:Error  : direct_declarator LPAREN ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 48
   yacc.py: 433:Stack  : direct_declarator LPAREN . error
   yacc.py: 573:Error  : direct_declarator LPAREN . error
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . error
   yacc.py: 573:Error  : direct_declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(RPAREN,')',570,12477)
   yacc.py: 573:Error  : . LexToken(RPAREN,')',570,12477)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(LBRACE,'{',571,12480)
   yacc.py: 573:Error  : . LexToken(LBRACE,'{',571,12480)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'SECURITY_STATUS',572,12483)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(ID,'ss',572,12499)
   yacc.py: 573:Error  : ID . LexToken(ID,'ss',572,12499)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(EQUALS,'=',572,12502)
   yacc.py: 573:Error  : . LexToken(EQUALS,'=',572,12502)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'0',572,12504)
   yacc.py: 573:Error  : . LexToken(ICONST,'0',572,12504)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(SEMI,';',572,12505)
   yacc.py: 573:Error  : . LexToken(SEMI,';',572,12505)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(IF,'if',573,12508)
   yacc.py: 573:Error  : . LexToken(IF,'if',573,12508)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(LPAREN,'(',573,12511)
   yacc.py: 443:Action : Shift and goto state 4
   yacc.py: 408:
   yacc.py: 409:State  : 4
   yacc.py: 433:Stack  : LPAREN . LexToken(ID,'IsExternalCert',573,12512)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : LPAREN ID . LexToken(RPAREN,')',573,12526)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with [<str @ 0x21c0c00>] and goto state 22
   yacc.py: 503:Result : <str @ 0x21c0c00> ('IsExternalCert')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : LPAREN direct_declarator . LexToken(RPAREN,')',573,12526)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with [<str @ 0x21c0c00>] and goto state 39
   yacc.py: 503:Result : <str @ 0x21c0c00> ('IsExternalCert')
   yacc.py: 408:
   yacc.py: 409:State  : 39
   yacc.py: 433:Stack  : LPAREN declarator . LexToken(RPAREN,')',573,12526)
   yacc.py: 443:Action : Shift and goto state 62
   yacc.py: 408:
   yacc.py: 409:State  : 62
   yacc.py: 433:Stack  : LPAREN declarator RPAREN . LexToken(LBRACE,'{',574,12530)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> LPAREN declarator RPAREN] with ['(',<str @ 0x21c0c00>,')'] and goto state 22
   yacc.py: 503:Result : <instance @ 0x21c0b98> (<c_ast.Node instance at 0x021C0B98>)
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(LBRACE,'{',574,12530)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with [<instance @ 0x21c0b98>] and goto state 37
   yacc.py: 503:Result : <instance @ 0x21c0b98> (<c_ast.Node instance at 0x021C0B98>)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(LBRACE,'{',574,12530)
   yacc.py: 443:Action : Shift and goto state 60
   yacc.py: 408:
   yacc.py: 409:State  : 60
   yacc.py: 433:Stack  : declarator LBRACE . LexToken(SEMI,';',575,12534)
   yacc.py: 472:Action : Reduce rule [empty -> <empty>] with [] and goto state 143
   yacc.py: 542:Result : <NoneType @ 0x1e224f84> (None)
   yacc.py: 408:
   yacc.py: 409:State  : 143
   yacc.py: 433:Stack  : declarator LBRACE empty . LexToken(SEMI,';',575,12534)
   yacc.py: 469:Action : Reduce rule [expression_opt -> empty] with [None] and goto state 126
   yacc.py: 503:Result : <NoneType @ 0x1e224f84> (None)
   yacc.py: 408:
   yacc.py: 409:State  : 126
   yacc.py: 433:Stack  : declarator LBRACE expression_opt . LexToken(SEMI,';',575,12534)
   yacc.py: 443:Action : Shift and goto state 220
   yacc.py: 408:
   yacc.py: 409:State  : 220
   yacc.py: 433:Stack  : declarator LBRACE expression_opt SEMI . LexToken(RBRACE,'}',576,12538)
   yacc.py: 469:Action : Reduce rule [expression_statement -> expression_opt SEMI] with [None,';'] and goto state 123
   yacc.py: 503:Result : <instance @ 0x21c0c38> (<c_ast.Node instance at 0x021C0C38>)
   yacc.py: 408:
   yacc.py: 409:State  : 123
   yacc.py: 433:Stack  : declarator LBRACE expression_statement . LexToken(RBRACE,'}',576,12538)
   yacc.py: 469:Action : Reduce rule [statement -> expression_statement] with [<instance @ 0x21c0c38>] and goto state 140
   yacc.py: 503:Result : <instance @ 0x21c0c38> (<c_ast.Node instance at 0x021C0C38>)
   yacc.py: 408:
   yacc.py: 409:State  : 140
   yacc.py: 433:Stack  : declarator LBRACE statement . LexToken(RBRACE,'}',576,12538)
   yacc.py: 469:Action : Reduce rule [statement_list -> statement] with [<instance @ 0x21c0c38>] and goto state 134
   yacc.py: 503:Result : <instance @ 0x21c0c38> (<c_ast.Node instance at 0x021C0C38>)
   yacc.py: 408:
   yacc.py: 409:State  : 134
   yacc.py: 433:Stack  : declarator LBRACE statement_list . LexToken(RBRACE,'}',576,12538)
   yacc.py: 443:Action : Shift and goto state 239
   yacc.py: 408:
   yacc.py: 409:State  : 239
   yacc.py: 433:Stack  : declarator LBRACE statement_list RBRACE . LexToken(ELSE,'else',577,12541)
   yacc.py: 469:Action : Reduce rule [compound_statement -> LBRACE statement_list RBRACE] with ['{',<instance @ 0x21c0c38>,'}'] and goto state 57
   yacc.py: 503:Result : <instance @ 0x21c0ad0> (<c_ast.Node instance at 0x021C0AD0>)
   yacc.py: 408:
   yacc.py: 409:State  : 57
   yacc.py: 433:Stack  : declarator compound_statement . LexToken(ELSE,'else',577,12541)
   yacc.py: 573:Error  : declarator compound_statement . LexToken(ELSE,'else',577,12541)
   yacc.py: 408:
   yacc.py: 409:State  : 57
   yacc.py: 433:Stack  : declarator compound_statement . error
   yacc.py: 573:Error  : declarator compound_statement . error
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(LBRACE,'{',578,12548)
   yacc.py: 573:Error  : . LexToken(LBRACE,'{',578,12548)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'OurCertificate',579,12552)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(EQUALS,'=',579,12567)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with [<str @ 0x21c0a48>] and goto state 22
   yacc.py: 503:Result : <str @ 0x21c0a48> ('OurCertificate')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(EQUALS,'=',579,12567)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with [<str @ 0x21c0a48>] and goto state 37
   yacc.py: 503:Result : <str @ 0x21c0a48> ('OurCertificate')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(EQUALS,'=',579,12567)
   yacc.py: 573:Error  : declarator . LexToken(EQUALS,'=',579,12567)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'CreateOurCertificate',579,12569)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(LPAREN,'(',579,12589)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with [<str @ 0x21cdf50>] and goto state 22
   yacc.py: 503:Result : <str @ 0x21cdf50> ('CreateOurCertificate')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(LPAREN,'(',579,12589)
   yacc.py: 443:Action : Shift and goto state 48
   yacc.py: 408:
   yacc.py: 409:State  : 48
   yacc.py: 433:Stack  : direct_declarator LPAREN . LexToken(RPAREN,')',579,12590)
   yacc.py: 443:Action : Shift and goto state 108
   yacc.py: 408:
   yacc.py: 409:State  : 108
   yacc.py: 433:Stack  : direct_declarator LPAREN RPAREN . LexToken(SEMI,';',579,12591)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> direct_declarator LPAREN RPAREN] with [<str @ 0x21cdf50>,'(',')'] and goto state 22
   yacc.py: 503:Result : <instance @ 0x21c0a58> (<c_ast.Node instance at 0x021C0A58>)
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(SEMI,';',579,12591)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with [<instance @ 0x21c0a58>] and goto state 37
   yacc.py: 503:Result : <instance @ 0x21c0a58> (<c_ast.Node instance at 0x021C0A58>)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(SEMI,';',579,12591)
   yacc.py: 573:Error  : declarator . LexToken(SEMI,';',579,12591)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(RBRACE,'}',580,12595)
   yacc.py: 573:Error  : . LexToken(RBRACE,'}',580,12595)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(DIVIDE,'/',582,12599)
   yacc.py: 573:Error  : . LexToken(DIVIDE,'/',582,12599)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(DIVIDE,'/',582,12600)
   yacc.py: 573:Error  : . LexToken(DIVIDE,'/',582,12600)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'Configure',582,12602)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(ID,'our',582,12612)
   yacc.py: 573:Error  : ID . LexToken(ID,'our',582,12612)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'SSL',582,12616)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(ID,'SChannel',582,12620)
   yacc.py: 573:Error  : ID . LexToken(ID,'SChannel',582,12620)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'memset',583,12630)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(LPAREN,'(',583,12636)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['memset'] and goto state 22
   yacc.py: 503:Result : <str @ 0x671440> ('memset')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(LPAREN,'(',583,12636)
   yacc.py: 443:Action : Shift and goto state 48
   yacc.py: 408:
   yacc.py: 409:State  : 48
   yacc.py: 433:Stack  : direct_declarator LPAREN . LexToken(AND,'&',583,12637)
   yacc.py: 573:Error  : direct_declarator LPAREN . LexToken(AND,'&',583,12637)
   yacc.py: 408:
   yacc.py: 409:State  : 48
   yacc.py: 433:Stack  : direct_declarator LPAREN . error
   yacc.py: 573:Error  : direct_declarator LPAREN . error
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . error
   yacc.py: 573:Error  : direct_declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'m_SchannelCred',583,12638)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(COMMA,',',583,12652)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with [<str @ 0x21c0bd8>] and goto state 22
   yacc.py: 503:Result : <str @ 0x21c0bd8> ('m_SchannelCred')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(COMMA,',',583,12652)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with [<str @ 0x21c0bd8>] and goto state 37
   yacc.py: 503:Result : <str @ 0x21c0bd8> ('m_SchannelCred')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(COMMA,',',583,12652)
   yacc.py: 573:Error  : declarator . LexToken(COMMA,',',583,12652)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'0',583,12653)
   yacc.py: 573:Error  : . LexToken(ICONST,'0',583,12653)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(COMMA,',',583,12654)
   yacc.py: 573:Error  : . LexToken(COMMA,',',583,12654)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(SIZEOF,'sizeof',583,12655)
   yacc.py: 573:Error  : . LexToken(SIZEOF,'sizeof',583,12655)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(LPAREN,'(',583,12661)
   yacc.py: 443:Action : Shift and goto state 4
   yacc.py: 408:
   yacc.py: 409:State  : 4
   yacc.py: 433:Stack  : LPAREN . LexToken(ID,'m_SchannelCred',583,12662)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : LPAREN ID . LexToken(RPAREN,')',583,12676)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with [<str @ 0x21c0b60>] and goto state 22
   yacc.py: 503:Result : <str @ 0x21c0b60> ('m_SchannelCred')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : LPAREN direct_declarator . LexToken(RPAREN,')',583,12676)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with [<str @ 0x21c0b60>] and goto state 39
   yacc.py: 503:Result : <str @ 0x21c0b60> ('m_SchannelCred')
   yacc.py: 408:
   yacc.py: 409:State  : 39
   yacc.py: 433:Stack  : LPAREN declarator . LexToken(RPAREN,')',583,12676)
   yacc.py: 443:Action : Shift and goto state 62
   yacc.py: 408:
   yacc.py: 409:State  : 62
   yacc.py: 433:Stack  : LPAREN declarator RPAREN . LexToken(RPAREN,')',583,12677)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> LPAREN declarator RPAREN] with ['(',<str @ 0x21c0b60>,')'] and goto state 22
   yacc.py: 503:Result : <instance @ 0x21c0af8> (<c_ast.Node instance at 0x021C0AF8>)
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(RPAREN,')',583,12677)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with [<instance @ 0x21c0af8>] and goto state 37
   yacc.py: 503:Result : <instance @ 0x21c0af8> (<c_ast.Node instance at 0x021C0AF8>)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(RPAREN,')',583,12677)
   yacc.py: 573:Error  : declarator . LexToken(RPAREN,')',583,12677)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(SEMI,';',583,12678)
   yacc.py: 573:Error  : . LexToken(SEMI,';',583,12678)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'m_SchannelCred',584,12681)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(PERIOD,'.',584,12695)
   yacc.py: 573:Error  : ID . LexToken(PERIOD,'.',584,12695)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'dwVersion',584,12696)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(EQUALS,'=',584,12706)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['dwVersion'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f97660> ('dwVersion')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(EQUALS,'=',584,12706)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['dwVersion'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f97660> ('dwVersion')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(EQUALS,'=',584,12706)
   yacc.py: 573:Error  : declarator . LexToken(EQUALS,'=',584,12706)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'SCHANNEL_CRED_VERSION',584,12708)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(SEMI,';',584,12729)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with [<str @ 0x21cdf50>] and goto state 22
   yacc.py: 503:Result : <str @ 0x21cdf50> ('SCHANNEL_CRED_VERSION')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(SEMI,';',584,12729)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with [<str @ 0x21cdf50>] and goto state 37
   yacc.py: 503:Result : <str @ 0x21cdf50> ('SCHANNEL_CRED_VERSION')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(SEMI,';',584,12729)
   yacc.py: 573:Error  : declarator . LexToken(SEMI,';',584,12729)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'m_SchannelCred',585,12732)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(PERIOD,'.',585,12746)
   yacc.py: 573:Error  : ID . LexToken(PERIOD,'.',585,12746)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'dwFlags',585,12747)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(OREQUAL,'|=',585,12755)
   yacc.py: 573:Error  : ID . LexToken(OREQUAL,'|=',585,12755)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'SCH_CRED_NO_DEFAULT_CREDS',585,12758)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(SEMI,';',585,12783)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with [<str @ 0x21cdf80>] and goto state 22
   yacc.py: 503:Result : <str @ 0x21cdf80> ('SCH_CRED_NO_DEFAULT_CREDS')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(SEMI,';',585,12783)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with [<str @ 0x21cdf80>] and goto state 37
   yacc.py: 503:Result : <str @ 0x21cdf80> ('SCH_CRED_NO_DEFAULT_CREDS')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(SEMI,';',585,12783)
   yacc.py: 573:Error  : declarator . LexToken(SEMI,';',585,12783)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'m_SchannelCred',586,12786)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(PERIOD,'.',586,12800)
   yacc.py: 573:Error  : ID . LexToken(PERIOD,'.',586,12800)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'dwFlags',586,12801)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(OREQUAL,'|=',586,12809)
   yacc.py: 573:Error  : ID . LexToken(OREQUAL,'|=',586,12809)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'SCH_CRED_NO_DEFAULT_CREDS',586,12812)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(OR,'|',586,12838)
   yacc.py: 573:Error  : ID . LexToken(OR,'|',586,12838)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'SCH_CRED_NO_SYSTEM_MAPPER',586,12840)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(OR,'|',586,12866)
   yacc.py: 573:Error  : ID . LexToken(OR,'|',586,12866)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'SCH_CRED_REVOCATION_CHECK_CHAIN',586,12868)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(SEMI,';',586,12899)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with [<str @ 0x1f88f70>] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f88f70> ('SCH_CRED_REVOCATION_CHECK_CHAIN')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(SEMI,';',586,12899)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with [<str @ 0x1f88f70>] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f88f70> ('SCH_CRED_REVOCATION_CHECK_CHAIN')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(SEMI,';',586,12899)
   yacc.py: 573:Error  : declarator . LexToken(SEMI,';',586,12899)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(IF,'if',588,12903)
   yacc.py: 573:Error  : . LexToken(IF,'if',588,12903)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(LPAREN,'(',588,12906)
   yacc.py: 443:Action : Shift and goto state 4
   yacc.py: 408:
   yacc.py: 409:State  : 4
   yacc.py: 433:Stack  : LPAREN . LexToken(ID,'OurCertificate',588,12907)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : LPAREN ID . LexToken(RPAREN,')',588,12921)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with [<str @ 0x21c0a48>] and goto state 22
   yacc.py: 503:Result : <str @ 0x21c0a48> ('OurCertificate')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : LPAREN direct_declarator . LexToken(RPAREN,')',588,12921)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with [<str @ 0x21c0a48>] and goto state 39
   yacc.py: 503:Result : <str @ 0x21c0a48> ('OurCertificate')
   yacc.py: 408:
   yacc.py: 409:State  : 39
   yacc.py: 433:Stack  : LPAREN declarator . LexToken(RPAREN,')',588,12921)
   yacc.py: 443:Action : Shift and goto state 62
   yacc.py: 408:
   yacc.py: 409:State  : 62
   yacc.py: 433:Stack  : LPAREN declarator RPAREN . LexToken(LBRACE,'{',589,12925)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> LPAREN declarator RPAREN] with ['(',<str @ 0x21c0a48>,')'] and goto state 22
   yacc.py: 503:Result : <instance @ 0x21c0be8> (<c_ast.Node instance at 0x021C0BE8>)
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(LBRACE,'{',589,12925)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with [<instance @ 0x21c0be8>] and goto state 37
   yacc.py: 503:Result : <instance @ 0x21c0be8> (<c_ast.Node instance at 0x021C0BE8>)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(LBRACE,'{',589,12925)
   yacc.py: 443:Action : Shift and goto state 60
   yacc.py: 408:
   yacc.py: 409:State  : 60
   yacc.py: 433:Stack  : declarator LBRACE . LexToken(ID,'m_SchannelCred',590,12929)
   yacc.py: 443:Action : Shift and goto state 149
   yacc.py: 408:
   yacc.py: 409:State  : 149
   yacc.py: 433:Stack  : declarator LBRACE ID . LexToken(PERIOD,'.',590,12943)
   yacc.py: 469:Action : Reduce rule [primary_expression -> ID] with [<str @ 0x21c0c28>] and goto state 96
   yacc.py: 503:Result : <str @ 0x21c0c28> ('m_SchannelCred')
   yacc.py: 408:
   yacc.py: 409:State  : 96
   yacc.py: 433:Stack  : declarator LBRACE primary_expression . LexToken(PERIOD,'.',590,12943)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> primary_expression] with [<str @ 0x21c0c28>] and goto state 86
   yacc.py: 503:Result : <str @ 0x21c0c28> ('m_SchannelCred')
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : declarator LBRACE postfix_expression . LexToken(PERIOD,'.',590,12943)
   yacc.py: 443:Action : Shift and goto state 179
   yacc.py: 408:
   yacc.py: 409:State  : 179
   yacc.py: 433:Stack  : declarator LBRACE postfix_expression PERIOD . LexToken(ID,'cCreds',590,12944)
   yacc.py: 443:Action : Shift and goto state 264
   yacc.py: 408:
   yacc.py: 409:State  : 264
   yacc.py: 433:Stack  : declarator LBRACE postfix_expression PERIOD ID . LexToken(EQUALS,'=',590,12955)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> postfix_expression PERIOD ID] with [<str @ 0x21c0c28>,'.','cCreds'] and goto state 86
   yacc.py: 503:Result : <instance @ 0x21c0af8> (<c_ast.Node instance at 0x021C0AF8>)
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : declarator LBRACE postfix_expression . LexToken(EQUALS,'=',590,12955)
   yacc.py: 469:Action : Reduce rule [unary_expression -> postfix_expression] with [<instance @ 0x21c0af8>] and goto state 130
   yacc.py: 503:Result : <instance @ 0x21c0af8> (<c_ast.Node instance at 0x021C0AF8>)
   yacc.py: 408:
   yacc.py: 409:State  : 130
   yacc.py: 433:Stack  : declarator LBRACE unary_expression . LexToken(EQUALS,'=',590,12955)
   yacc.py: 443:Action : Shift and goto state 227
   yacc.py: 408:
   yacc.py: 409:State  : 227
   yacc.py: 433:Stack  : declarator LBRACE unary_expression EQUALS . LexToken(ICONST,'1',590,12957)
   yacc.py: 469:Action : Reduce rule [assignment_operator -> EQUALS] with ['='] and goto state 231
   yacc.py: 503:Result : <str @ 0x1df79e0> ('=')
   yacc.py: 408:
   yacc.py: 409:State  : 231
   yacc.py: 433:Stack  : declarator LBRACE unary_expression assignment_operator . LexToken(ICONST,'1',590,12957)
   yacc.py: 443:Action : Shift and goto state 95
   yacc.py: 408:
   yacc.py: 409:State  : 95
   yacc.py: 433:Stack  : declarator LBRACE unary_expression assignment_operator ICONST . LexToken(SEMI,';',590,12958)
   yacc.py: 469:Action : Reduce rule [constant -> ICONST] with ['1'] and goto state 79
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 79
   yacc.py: 433:Stack  : declarator LBRACE unary_expression assignment_operator constant . LexToken(SEMI,';',590,12958)
   yacc.py: 469:Action : Reduce rule [primary_expression -> constant] with ['1'] and goto state 96
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 96
   yacc.py: 433:Stack  : declarator LBRACE unary_expression assignment_operator primary_expression . LexToken(SEMI,';',590,12958)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> primary_expression] with ['1'] and goto state 86
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : declarator LBRACE unary_expression assignment_operator postfix_expression . LexToken(SEMI,';',590,12958)
   yacc.py: 469:Action : Reduce rule [unary_expression -> postfix_expression] with ['1'] and goto state 130
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 130
   yacc.py: 433:Stack  : declarator LBRACE unary_expression assignment_operator unary_expression . LexToken(SEMI,';',590,12958)
   yacc.py: 469:Action : Reduce rule [cast_expression -> unary_expression] with ['1'] and goto state 98
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 98
   yacc.py: 433:Stack  : declarator LBRACE unary_expression assignment_operator cast_expression . LexToken(SEMI,';',590,12958)
   yacc.py: 469:Action : Reduce rule [multiplicative_expression -> cast_expression] with ['1'] and goto state 103
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 103
   yacc.py: 433:Stack  : declarator LBRACE unary_expression assignment_operator multiplicative_expression . LexToken(SEMI,';',590,12958)
   yacc.py: 469:Action : Reduce rule [additive_expression -> multiplicative_expression] with ['1'] and goto state 77
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 77
   yacc.py: 433:Stack  : declarator LBRACE unary_expression assignment_operator additive_expression . LexToken(SEMI,';',590,12958)
   yacc.py: 469:Action : Reduce rule [shift_expression -> additive_expression] with ['1'] and goto state 100
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 100
   yacc.py: 433:Stack  : declarator LBRACE unary_expression assignment_operator shift_expression . LexToken(SEMI,';',590,12958)
   yacc.py: 469:Action : Reduce rule [relational_expression -> shift_expression] with ['1'] and goto state 88
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 88
   yacc.py: 433:Stack  : declarator LBRACE unary_expression assignment_operator relational_expression . LexToken(SEMI,';',590,12958)
   yacc.py: 469:Action : Reduce rule [equality_expression -> relational_expression] with ['1'] and goto state 101
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 101
   yacc.py: 433:Stack  : declarator LBRACE unary_expression assignment_operator equality_expression . LexToken(SEMI,';',590,12958)
   yacc.py: 469:Action : Reduce rule [and_expression -> equality_expression] with ['1'] and goto state 82
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 82
   yacc.py: 433:Stack  : declarator LBRACE unary_expression assignment_operator and_expression . LexToken(SEMI,';',590,12958)
   yacc.py: 469:Action : Reduce rule [exclusive_or_expression -> and_expression] with ['1'] and goto state 76
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 76
   yacc.py: 433:Stack  : declarator LBRACE unary_expression assignment_operator exclusive_or_expression . LexToken(SEMI,';',590,12958)
   yacc.py: 469:Action : Reduce rule [inclusive_or_expression -> exclusive_or_expression] with ['1'] and goto state 84
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 84
   yacc.py: 433:Stack  : declarator LBRACE unary_expression assignment_operator inclusive_or_expression . LexToken(SEMI,';',590,12958)
   yacc.py: 469:Action : Reduce rule [logical_and_expression -> inclusive_or_expression] with ['1'] and goto state 99
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 99
   yacc.py: 433:Stack  : declarator LBRACE unary_expression assignment_operator logical_and_expression . LexToken(SEMI,';',590,12958)
   yacc.py: 469:Action : Reduce rule [logical_or_expression -> logical_and_expression] with ['1'] and goto state 91
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 91
   yacc.py: 433:Stack  : declarator LBRACE unary_expression assignment_operator logical_or_expression . LexToken(SEMI,';',590,12958)
   yacc.py: 469:Action : Reduce rule [conditional_expression -> logical_or_expression] with ['1'] and goto state 151
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 151
   yacc.py: 433:Stack  : declarator LBRACE unary_expression assignment_operator conditional_expression . LexToken(SEMI,';',590,12958)
   yacc.py: 469:Action : Reduce rule [assignment_expression -> conditional_expression] with ['1'] and goto state 304
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 304
   yacc.py: 433:Stack  : declarator LBRACE unary_expression assignment_operator assignment_expression . LexToken(SEMI,';',590,12958)
   yacc.py: 469:Action : Reduce rule [assignment_expression -> unary_expression assignment_operator assignment_expression] with [<instance @ 0x21c0af8>,'=','1'] and goto state 147
   yacc.py: 503:Result : <instance @ 0x21c0b48> (<c_ast.Node instance at 0x021C0B48>)
   yacc.py: 408:
   yacc.py: 409:State  : 147
   yacc.py: 433:Stack  : declarator LBRACE assignment_expression . LexToken(SEMI,';',590,12958)
   yacc.py: 469:Action : Reduce rule [expression -> assignment_expression] with [<instance @ 0x21c0b48>] and goto state 135
   yacc.py: 503:Result : <instance @ 0x21c0b48> (<c_ast.Node instance at 0x021C0B48>)
   yacc.py: 408:
   yacc.py: 409:State  : 135
   yacc.py: 433:Stack  : declarator LBRACE expression . LexToken(SEMI,';',590,12958)
   yacc.py: 469:Action : Reduce rule [expression_opt -> expression] with [<instance @ 0x21c0b48>] and goto state 126
   yacc.py: 503:Result : <instance @ 0x21c0b48> (<c_ast.Node instance at 0x021C0B48>)
   yacc.py: 408:
   yacc.py: 409:State  : 126
   yacc.py: 433:Stack  : declarator LBRACE expression_opt . LexToken(SEMI,';',590,12958)
   yacc.py: 443:Action : Shift and goto state 220
   yacc.py: 408:
   yacc.py: 409:State  : 220
   yacc.py: 433:Stack  : declarator LBRACE expression_opt SEMI . LexToken(ID,'m_SchannelCred',591,12962)
   yacc.py: 469:Action : Reduce rule [expression_statement -> expression_opt SEMI] with [<instance @ 0x21c0b48>,';'] and goto state 123
   yacc.py: 503:Result : <instance @ 0x21c0bc0> (<c_ast.Node instance at 0x021C0BC0>)
   yacc.py: 408:
   yacc.py: 409:State  : 123
   yacc.py: 433:Stack  : declarator LBRACE expression_statement . LexToken(ID,'m_SchannelCred',591,12962)
   yacc.py: 469:Action : Reduce rule [statement -> expression_statement] with [<instance @ 0x21c0bc0>] and goto state 140
   yacc.py: 503:Result : <instance @ 0x21c0bc0> (<c_ast.Node instance at 0x021C0BC0>)
   yacc.py: 408:
   yacc.py: 409:State  : 140
   yacc.py: 433:Stack  : declarator LBRACE statement . LexToken(ID,'m_SchannelCred',591,12962)
   yacc.py: 469:Action : Reduce rule [statement_list -> statement] with [<instance @ 0x21c0bc0>] and goto state 134
   yacc.py: 503:Result : <instance @ 0x21c0bc0> (<c_ast.Node instance at 0x021C0BC0>)
   yacc.py: 408:
   yacc.py: 409:State  : 134
   yacc.py: 433:Stack  : declarator LBRACE statement_list . LexToken(ID,'m_SchannelCred',591,12962)
   yacc.py: 443:Action : Shift and goto state 149
   yacc.py: 408:
   yacc.py: 409:State  : 149
   yacc.py: 433:Stack  : declarator LBRACE statement_list ID . LexToken(PERIOD,'.',591,12976)
   yacc.py: 469:Action : Reduce rule [primary_expression -> ID] with [<str @ 0x21c0a98>] and goto state 96
   yacc.py: 503:Result : <str @ 0x21c0a98> ('m_SchannelCred')
   yacc.py: 408:
   yacc.py: 409:State  : 96
   yacc.py: 433:Stack  : declarator LBRACE statement_list primary_expression . LexToken(PERIOD,'.',591,12976)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> primary_expression] with [<str @ 0x21c0a98>] and goto state 86
   yacc.py: 503:Result : <str @ 0x21c0a98> ('m_SchannelCred')
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : declarator LBRACE statement_list postfix_expression . LexToken(PERIOD,'.',591,12976)
   yacc.py: 443:Action : Shift and goto state 179
   yacc.py: 408:
   yacc.py: 409:State  : 179
   yacc.py: 433:Stack  : declarator LBRACE statement_list postfix_expression PERIOD . LexToken(ID,'paCred',591,12977)
   yacc.py: 443:Action : Shift and goto state 264
   yacc.py: 408:
   yacc.py: 409:State  : 264
   yacc.py: 433:Stack  : declarator LBRACE statement_list postfix_expression PERIOD ID . LexToken(EQUALS,'=',591,12988)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> postfix_expression PERIOD ID] with [<str @ 0x21c0a98>,'.','paCred'] and goto state 86
   yacc.py: 503:Result : <instance @ 0x21c0b70> (<c_ast.Node instance at 0x021C0B70>)
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : declarator LBRACE statement_list postfix_expression . LexToken(EQUALS,'=',591,12988)
   yacc.py: 469:Action : Reduce rule [unary_expression -> postfix_expression] with [<instance @ 0x21c0b70>] and goto state 130
   yacc.py: 503:Result : <instance @ 0x21c0b70> (<c_ast.Node instance at 0x021C0B70>)
   yacc.py: 408:
   yacc.py: 409:State  : 130
   yacc.py: 433:Stack  : declarator LBRACE statement_list unary_expression . LexToken(EQUALS,'=',591,12988)
   yacc.py: 443:Action : Shift and goto state 227
   yacc.py: 408:
   yacc.py: 409:State  : 227
   yacc.py: 433:Stack  : declarator LBRACE statement_list unary_expression EQUALS . LexToken(AND,'&',591,12990)
   yacc.py: 469:Action : Reduce rule [assignment_operator -> EQUALS] with ['='] and goto state 231
   yacc.py: 503:Result : <str @ 0x1df79e0> ('=')
   yacc.py: 408:
   yacc.py: 409:State  : 231
   yacc.py: 433:Stack  : declarator LBRACE statement_list unary_expression assignment_operator . LexToken(AND,'&',591,12990)
   yacc.py: 443:Action : Shift and goto state 102
   yacc.py: 408:
   yacc.py: 409:State  : 102
   yacc.py: 433:Stack  : declarator LBRACE statement_list unary_expression assignment_operator AND . LexToken(ID,'OurCertificate',591,12991)
   yacc.py: 469:Action : Reduce rule [unary_operator -> AND] with ['&'] and goto state 89
   yacc.py: 503:Result : <str @ 0x1e5c3c8> ('&')
   yacc.py: 408:
   yacc.py: 409:State  : 89
   yacc.py: 433:Stack  : declarator LBRACE statement_list unary_expression assignment_operator unary_operator . LexToken(ID,'OurCertificate',591,12991)
   yacc.py: 443:Action : Shift and goto state 87
   yacc.py: 408:
   yacc.py: 409:State  : 87
   yacc.py: 433:Stack  : declarator LBRACE statement_list unary_expression assignment_operator unary_operator ID . LexToken(SEMI,';',591,13005)
   yacc.py: 469:Action : Reduce rule [primary_expression -> ID] with [<str @ 0x21c0a70>] and goto state 96
   yacc.py: 503:Result : <str @ 0x21c0a70> ('OurCertificate')
   yacc.py: 408:
   yacc.py: 409:State  : 96
   yacc.py: 433:Stack  : declarator LBRACE statement_list unary_expression assignment_operator unary_operator primary_expression . LexToken(SEMI,';',591,13005)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> primary_expression] with [<str @ 0x21c0a70>] and goto state 86
   yacc.py: 503:Result : <str @ 0x21c0a70> ('OurCertificate')
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : declarator LBRACE statement_list unary_expression assignment_operator unary_operator postfix_expression . LexToken(SEMI,';',591,13005)
   yacc.py: 469:Action : Reduce rule [unary_expression -> postfix_expression] with [<str @ 0x21c0a70>] and goto state 75
   yacc.py: 503:Result : <str @ 0x21c0a70> ('OurCertificate')
   yacc.py: 408:
   yacc.py: 409:State  : 75
   yacc.py: 433:Stack  : declarator LBRACE statement_list unary_expression assignment_operator unary_operator unary_expression . LexToken(SEMI,';',591,13005)
   yacc.py: 469:Action : Reduce rule [cast_expression -> unary_expression] with [<str @ 0x21c0a70>] and goto state 186
   yacc.py: 503:Result : <str @ 0x21c0a70> ('OurCertificate')
   yacc.py: 408:
   yacc.py: 409:State  : 186
   yacc.py: 433:Stack  : declarator LBRACE statement_list unary_expression assignment_operator unary_operator cast_expression . LexToken(SEMI,';',591,13005)
   yacc.py: 469:Action : Reduce rule [unary_expression -> unary_operator cast_expression] with ['&',<str @ 0x21c0a70>] and goto state 130
   yacc.py: 503:Result : <instance @ 0x21c0cd8> (<c_ast.Node instance at 0x021C0CD8>)
   yacc.py: 408:
   yacc.py: 409:State  : 130
   yacc.py: 433:Stack  : declarator LBRACE statement_list unary_expression assignment_operator unary_expression . LexToken(SEMI,';',591,13005)
   yacc.py: 469:Action : Reduce rule [cast_expression -> unary_expression] with [<instance @ 0x21c0cd8>] and goto state 98
   yacc.py: 503:Result : <instance @ 0x21c0cd8> (<c_ast.Node instance at 0x021C0CD8>)
   yacc.py: 408:
   yacc.py: 409:State  : 98
   yacc.py: 433:Stack  : declarator LBRACE statement_list unary_expression assignment_operator cast_expression . LexToken(SEMI,';',591,13005)
   yacc.py: 469:Action : Reduce rule [multiplicative_expression -> cast_expression] with [<instance @ 0x21c0cd8>] and goto state 103
   yacc.py: 503:Result : <instance @ 0x21c0cd8> (<c_ast.Node instance at 0x021C0CD8>)
   yacc.py: 408:
   yacc.py: 409:State  : 103
   yacc.py: 433:Stack  : declarator LBRACE statement_list unary_expression assignment_operator multiplicative_expression . LexToken(SEMI,';',591,13005)
   yacc.py: 469:Action : Reduce rule [additive_expression -> multiplicative_expression] with [<instance @ 0x21c0cd8>] and goto state 77
   yacc.py: 503:Result : <instance @ 0x21c0cd8> (<c_ast.Node instance at 0x021C0CD8>)
   yacc.py: 408:
   yacc.py: 409:State  : 77
   yacc.py: 433:Stack  : declarator LBRACE statement_list unary_expression assignment_operator additive_expression . LexToken(SEMI,';',591,13005)
   yacc.py: 469:Action : Reduce rule [shift_expression -> additive_expression] with [<instance @ 0x21c0cd8>] and goto state 100
   yacc.py: 503:Result : <instance @ 0x21c0cd8> (<c_ast.Node instance at 0x021C0CD8>)
   yacc.py: 408:
   yacc.py: 409:State  : 100
   yacc.py: 433:Stack  : declarator LBRACE statement_list unary_expression assignment_operator shift_expression . LexToken(SEMI,';',591,13005)
   yacc.py: 469:Action : Reduce rule [relational_expression -> shift_expression] with [<instance @ 0x21c0cd8>] and goto state 88
   yacc.py: 503:Result : <instance @ 0x21c0cd8> (<c_ast.Node instance at 0x021C0CD8>)
   yacc.py: 408:
   yacc.py: 409:State  : 88
   yacc.py: 433:Stack  : declarator LBRACE statement_list unary_expression assignment_operator relational_expression . LexToken(SEMI,';',591,13005)
   yacc.py: 469:Action : Reduce rule [equality_expression -> relational_expression] with [<instance @ 0x21c0cd8>] and goto state 101
   yacc.py: 503:Result : <instance @ 0x21c0cd8> (<c_ast.Node instance at 0x021C0CD8>)
   yacc.py: 408:
   yacc.py: 409:State  : 101
   yacc.py: 433:Stack  : declarator LBRACE statement_list unary_expression assignment_operator equality_expression . LexToken(SEMI,';',591,13005)
   yacc.py: 469:Action : Reduce rule [and_expression -> equality_expression] with [<instance @ 0x21c0cd8>] and goto state 82
   yacc.py: 503:Result : <instance @ 0x21c0cd8> (<c_ast.Node instance at 0x021C0CD8>)
   yacc.py: 408:
   yacc.py: 409:State  : 82
   yacc.py: 433:Stack  : declarator LBRACE statement_list unary_expression assignment_operator and_expression . LexToken(SEMI,';',591,13005)
   yacc.py: 469:Action : Reduce rule [exclusive_or_expression -> and_expression] with [<instance @ 0x21c0cd8>] and goto state 76
   yacc.py: 503:Result : <instance @ 0x21c0cd8> (<c_ast.Node instance at 0x021C0CD8>)
   yacc.py: 408:
   yacc.py: 409:State  : 76
   yacc.py: 433:Stack  : declarator LBRACE statement_list unary_expression assignment_operator exclusive_or_expression . LexToken(SEMI,';',591,13005)
   yacc.py: 469:Action : Reduce rule [inclusive_or_expression -> exclusive_or_expression] with [<instance @ 0x21c0cd8>] and goto state 84
   yacc.py: 503:Result : <instance @ 0x21c0cd8> (<c_ast.Node instance at 0x021C0CD8>)
   yacc.py: 408:
   yacc.py: 409:State  : 84
   yacc.py: 433:Stack  : declarator LBRACE statement_list unary_expression assignment_operator inclusive_or_expression . LexToken(SEMI,';',591,13005)
   yacc.py: 469:Action : Reduce rule [logical_and_expression -> inclusive_or_expression] with [<instance @ 0x21c0cd8>] and goto state 99
   yacc.py: 503:Result : <instance @ 0x21c0cd8> (<c_ast.Node instance at 0x021C0CD8>)
   yacc.py: 408:
   yacc.py: 409:State  : 99
   yacc.py: 433:Stack  : declarator LBRACE statement_list unary_expression assignment_operator logical_and_expression . LexToken(SEMI,';',591,13005)
   yacc.py: 469:Action : Reduce rule [logical_or_expression -> logical_and_expression] with [<instance @ 0x21c0cd8>] and goto state 91
   yacc.py: 503:Result : <instance @ 0x21c0cd8> (<c_ast.Node instance at 0x021C0CD8>)
   yacc.py: 408:
   yacc.py: 409:State  : 91
   yacc.py: 433:Stack  : declarator LBRACE statement_list unary_expression assignment_operator logical_or_expression . LexToken(SEMI,';',591,13005)
   yacc.py: 469:Action : Reduce rule [conditional_expression -> logical_or_expression] with [<instance @ 0x21c0cd8>] and goto state 151
   yacc.py: 503:Result : <instance @ 0x21c0cd8> (<c_ast.Node instance at 0x021C0CD8>)
   yacc.py: 408:
   yacc.py: 409:State  : 151
   yacc.py: 433:Stack  : declarator LBRACE statement_list unary_expression assignment_operator conditional_expression . LexToken(SEMI,';',591,13005)
   yacc.py: 469:Action : Reduce rule [assignment_expression -> conditional_expression] with [<instance @ 0x21c0cd8>] and goto state 304
   yacc.py: 503:Result : <instance @ 0x21c0cd8> (<c_ast.Node instance at 0x021C0CD8>)
   yacc.py: 408:
   yacc.py: 409:State  : 304
   yacc.py: 433:Stack  : declarator LBRACE statement_list unary_expression assignment_operator assignment_expression . LexToken(SEMI,';',591,13005)
   yacc.py: 469:Action : Reduce rule [assignment_expression -> unary_expression assignment_operator assignment_expression] with [<instance @ 0x21c0b70>,'=',<instance @ 0x21c0cd8>] and goto state 147
   yacc.py: 503:Result : <instance @ 0x21c0cb0> (<c_ast.Node instance at 0x021C0CB0>)
   yacc.py: 408:
   yacc.py: 409:State  : 147
   yacc.py: 433:Stack  : declarator LBRACE statement_list assignment_expression . LexToken(SEMI,';',591,13005)
   yacc.py: 469:Action : Reduce rule [expression -> assignment_expression] with [<instance @ 0x21c0cb0>] and goto state 135
   yacc.py: 503:Result : <instance @ 0x21c0cb0> (<c_ast.Node instance at 0x021C0CB0>)
   yacc.py: 408:
   yacc.py: 409:State  : 135
   yacc.py: 433:Stack  : declarator LBRACE statement_list expression . LexToken(SEMI,';',591,13005)
   yacc.py: 469:Action : Reduce rule [expression_opt -> expression] with [<instance @ 0x21c0cb0>] and goto state 126
   yacc.py: 503:Result : <instance @ 0x21c0cb0> (<c_ast.Node instance at 0x021C0CB0>)
   yacc.py: 408:
   yacc.py: 409:State  : 126
   yacc.py: 433:Stack  : declarator LBRACE statement_list expression_opt . LexToken(SEMI,';',591,13005)
   yacc.py: 443:Action : Shift and goto state 220
   yacc.py: 408:
   yacc.py: 409:State  : 220
   yacc.py: 433:Stack  : declarator LBRACE statement_list expression_opt SEMI . LexToken(RBRACE,'}',592,13009)
   yacc.py: 469:Action : Reduce rule [expression_statement -> expression_opt SEMI] with [<instance @ 0x21c0cb0>,';'] and goto state 123
   yacc.py: 503:Result : <instance @ 0x21c0c88> (<c_ast.Node instance at 0x021C0C88>)
   yacc.py: 408:
   yacc.py: 409:State  : 123
   yacc.py: 433:Stack  : declarator LBRACE statement_list expression_statement . LexToken(RBRACE,'}',592,13009)
   yacc.py: 469:Action : Reduce rule [statement -> expression_statement] with [<instance @ 0x21c0c88>] and goto state 238
   yacc.py: 503:Result : <instance @ 0x21c0c88> (<c_ast.Node instance at 0x021C0C88>)
   yacc.py: 408:
   yacc.py: 409:State  : 238
   yacc.py: 433:Stack  : declarator LBRACE statement_list statement . LexToken(RBRACE,'}',592,13009)
   yacc.py: 469:Action : Reduce rule [statement_list -> statement_list statement] with [<instance @ 0x21c0bc0>,<instance @ 0x21c0c88>] and goto state 134
   yacc.py: 503:Result : <instance @ 0x21c0b20> (<c_ast.Node instance at 0x021C0B20>)
   yacc.py: 408:
   yacc.py: 409:State  : 134
   yacc.py: 433:Stack  : declarator LBRACE statement_list . LexToken(RBRACE,'}',592,13009)
   yacc.py: 443:Action : Shift and goto state 239
   yacc.py: 408:
   yacc.py: 409:State  : 239
   yacc.py: 433:Stack  : declarator LBRACE statement_list RBRACE . LexToken(DIVIDE,'/',594,13013)
   yacc.py: 573:Error  : declarator LBRACE statement_list RBRACE . LexToken(DIVIDE,'/',594,13013)
   yacc.py: 408:
   yacc.py: 409:State  : 239
   yacc.py: 433:Stack  : declarator LBRACE statement_list RBRACE . error
   yacc.py: 573:Error  : declarator LBRACE statement_list RBRACE . error
   yacc.py: 408:
   yacc.py: 409:State  : 134
   yacc.py: 433:Stack  : declarator LBRACE statement_list . error
   yacc.py: 573:Error  : declarator LBRACE statement_list . error
   yacc.py: 408:
   yacc.py: 409:State  : 60
   yacc.py: 433:Stack  : declarator LBRACE . error
   yacc.py: 573:Error  : declarator LBRACE . error
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(DIVIDE,'/',594,13014)
   yacc.py: 573:Error  : . LexToken(DIVIDE,'/',594,13014)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'AcquireCredentialsHandle',594,13016)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(ID,'ss',596,13043)
   yacc.py: 573:Error  : ID . LexToken(ID,'ss',596,13043)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(EQUALS,'=',596,13046)
   yacc.py: 573:Error  : . LexToken(EQUALS,'=',596,13046)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'AcquireCredentialsHandle',596,13048)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(LPAREN,'(',596,13072)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with [<str @ 0x21cdf80>] and goto state 22
   yacc.py: 503:Result : <str @ 0x21cdf80> ('AcquireCredentialsHandle')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(LPAREN,'(',596,13072)
   yacc.py: 443:Action : Shift and goto state 48
   yacc.py: 408:
   yacc.py: 409:State  : 48
   yacc.py: 433:Stack  : direct_declarator LPAREN . LexToken(ICONST,'0',596,13073)
   yacc.py: 573:Error  : direct_declarator LPAREN . LexToken(ICONST,'0',596,13073)
   yacc.py: 408:
   yacc.py: 409:State  : 48
   yacc.py: 433:Stack  : direct_declarator LPAREN . error
   yacc.py: 573:Error  : direct_declarator LPAREN . error
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . error
   yacc.py: 573:Error  : direct_declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(COMMA,',',596,13074)
   yacc.py: 573:Error  : . LexToken(COMMA,',',596,13074)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'SCHANNEL_NAME',596,13075)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(COMMA,',',596,13088)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['SCHANNEL_NAME'] and goto state 22
   yacc.py: 503:Result : <str @ 0x21c0c50> ('SCHANNEL_NAME')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(COMMA,',',596,13088)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['SCHANNEL_NAME'] and goto state 37
   yacc.py: 503:Result : <str @ 0x21c0c50> ('SCHANNEL_NAME')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(COMMA,',',596,13088)
   yacc.py: 573:Error  : declarator . LexToken(COMMA,',',596,13088)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'SECPKG_CRED_OUTBOUND',596,13089)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(COMMA,',',596,13109)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with [<str @ 0x21cdf80>] and goto state 22
   yacc.py: 503:Result : <str @ 0x21cdf80> ('SECPKG_CRED_OUTBOUND')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(COMMA,',',596,13109)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with [<str @ 0x21cdf80>] and goto state 37
   yacc.py: 503:Result : <str @ 0x21cdf80> ('SECPKG_CRED_OUTBOUND')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(COMMA,',',596,13109)
   yacc.py: 573:Error  : declarator . LexToken(COMMA,',',596,13109)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'0',596,13110)
   yacc.py: 573:Error  : . LexToken(ICONST,'0',596,13110)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(COMMA,',',596,13111)
   yacc.py: 573:Error  : . LexToken(COMMA,',',596,13111)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(AND,'&',596,13112)
   yacc.py: 573:Error  : . LexToken(AND,'&',596,13112)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'m_SchannelCred',596,13113)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(COMMA,',',596,13127)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with [<str @ 0x21c0b10>] and goto state 22
   yacc.py: 503:Result : <str @ 0x21c0b10> ('m_SchannelCred')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(COMMA,',',596,13127)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with [<str @ 0x21c0b10>] and goto state 37
   yacc.py: 503:Result : <str @ 0x21c0b10> ('m_SchannelCred')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(COMMA,',',596,13127)
   yacc.py: 573:Error  : declarator . LexToken(COMMA,',',596,13127)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'0',596,13128)
   yacc.py: 573:Error  : . LexToken(ICONST,'0',596,13128)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(COMMA,',',596,13129)
   yacc.py: 573:Error  : . LexToken(COMMA,',',596,13129)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'0',596,13130)
   yacc.py: 573:Error  : . LexToken(ICONST,'0',596,13130)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(COMMA,',',596,13131)
   yacc.py: 573:Error  : . LexToken(COMMA,',',596,13131)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(AND,'&',596,13132)
   yacc.py: 573:Error  : . LexToken(AND,'&',596,13132)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'hCred',596,13133)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(COMMA,',',596,13138)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['hCred'] and goto state 22
   yacc.py: 503:Result : <str @ 0x21ae280> ('hCred')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(COMMA,',',596,13138)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['hCred'] and goto state 37
   yacc.py: 503:Result : <str @ 0x21ae280> ('hCred')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(COMMA,',',596,13138)
   yacc.py: 573:Error  : declarator . LexToken(COMMA,',',596,13138)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'0',596,13139)
   yacc.py: 573:Error  : . LexToken(ICONST,'0',596,13139)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(RPAREN,')',596,13140)
   yacc.py: 573:Error  : . LexToken(RPAREN,')',596,13140)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(SEMI,';',596,13141)
   yacc.py: 573:Error  : . LexToken(SEMI,';',596,13141)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(DIVIDE,'/',597,13143)
   yacc.py: 573:Error  : . LexToken(DIVIDE,'/',597,13143)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(DIVIDE,'/',597,13144)
   yacc.py: 573:Error  : . LexToken(DIVIDE,'/',597,13144)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'ss',597,13146)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(EQUALS,'=',597,13149)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['ss'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f85f68> ('ss')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(EQUALS,'=',597,13149)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['ss'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f85f68> ('ss')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(EQUALS,'=',597,13149)
   yacc.py: 573:Error  : declarator . LexToken(EQUALS,'=',597,13149)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'AcquireCredentialsHandle',597,13151)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(LPAREN,'(',597,13175)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with [<str @ 0x21cdf80>] and goto state 22
   yacc.py: 503:Result : <str @ 0x21cdf80> ('AcquireCredentialsHandle')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(LPAREN,'(',597,13175)
   yacc.py: 443:Action : Shift and goto state 48
   yacc.py: 408:
   yacc.py: 409:State  : 48
   yacc.py: 433:Stack  : direct_declarator LPAREN . LexToken(ICONST,'0',597,13176)
   yacc.py: 573:Error  : direct_declarator LPAREN . LexToken(ICONST,'0',597,13176)
   yacc.py: 408:
   yacc.py: 409:State  : 48
   yacc.py: 433:Stack  : direct_declarator LPAREN . error
   yacc.py: 573:Error  : direct_declarator LPAREN . error
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . error
   yacc.py: 573:Error  : direct_declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(COMMA,',',597,13177)
   yacc.py: 573:Error  : . LexToken(COMMA,',',597,13177)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'UNISP_NAME',597,13178)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(COMMA,',',597,13188)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['UNISP_NAME'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f97c60> ('UNISP_NAME')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(COMMA,',',597,13188)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['UNISP_NAME'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f97c60> ('UNISP_NAME')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(COMMA,',',597,13188)
   yacc.py: 573:Error  : declarator . LexToken(COMMA,',',597,13188)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'SECPKG_CRED_OUTBOUND',597,13189)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(COMMA,',',597,13209)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with [<str @ 0x21cdf80>] and goto state 22
   yacc.py: 503:Result : <str @ 0x21cdf80> ('SECPKG_CRED_OUTBOUND')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(COMMA,',',597,13209)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with [<str @ 0x21cdf80>] and goto state 37
   yacc.py: 503:Result : <str @ 0x21cdf80> ('SECPKG_CRED_OUTBOUND')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(COMMA,',',597,13209)
   yacc.py: 573:Error  : declarator . LexToken(COMMA,',',597,13209)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'0',597,13210)
   yacc.py: 573:Error  : . LexToken(ICONST,'0',597,13210)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(COMMA,',',597,13211)
   yacc.py: 573:Error  : . LexToken(COMMA,',',597,13211)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(AND,'&',597,13212)
   yacc.py: 573:Error  : . LexToken(AND,'&',597,13212)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'m_SchannelCred',597,13213)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(COMMA,',',597,13227)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with [<str @ 0x21c0c50>] and goto state 22
   yacc.py: 503:Result : <str @ 0x21c0c50> ('m_SchannelCred')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(COMMA,',',597,13227)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with [<str @ 0x21c0c50>] and goto state 37
   yacc.py: 503:Result : <str @ 0x21c0c50> ('m_SchannelCred')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(COMMA,',',597,13227)
   yacc.py: 573:Error  : declarator . LexToken(COMMA,',',597,13227)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'0',597,13228)
   yacc.py: 573:Error  : . LexToken(ICONST,'0',597,13228)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(COMMA,',',597,13229)
   yacc.py: 573:Error  : . LexToken(COMMA,',',597,13229)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'0',597,13230)
   yacc.py: 573:Error  : . LexToken(ICONST,'0',597,13230)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(COMMA,',',597,13231)
   yacc.py: 573:Error  : . LexToken(COMMA,',',597,13231)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(AND,'&',597,13232)
   yacc.py: 573:Error  : . LexToken(AND,'&',597,13232)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'hCred',597,13233)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(COMMA,',',597,13238)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['hCred'] and goto state 22
   yacc.py: 503:Result : <str @ 0x21ae280> ('hCred')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(COMMA,',',597,13238)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['hCred'] and goto state 37
   yacc.py: 503:Result : <str @ 0x21ae280> ('hCred')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(COMMA,',',597,13238)
   yacc.py: 573:Error  : declarator . LexToken(COMMA,',',597,13238)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'0',597,13239)
   yacc.py: 573:Error  : . LexToken(ICONST,'0',597,13239)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(RPAREN,')',597,13240)
   yacc.py: 573:Error  : . LexToken(RPAREN,')',597,13240)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(SEMI,';',597,13241)
   yacc.py: 573:Error  : . LexToken(SEMI,';',597,13241)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(IF,'if',598,13244)
   yacc.py: 573:Error  : . LexToken(IF,'if',598,13244)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(LPAREN,'(',598,13247)
   yacc.py: 443:Action : Shift and goto state 4
   yacc.py: 408:
   yacc.py: 409:State  : 4
   yacc.py: 433:Stack  : LPAREN . LexToken(ID,'FAILED',598,13248)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : LPAREN ID . LexToken(LPAREN,'(',598,13254)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['FAILED'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f97c00> ('FAILED')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : LPAREN direct_declarator . LexToken(LPAREN,'(',598,13254)
   yacc.py: 443:Action : Shift and goto state 48
   yacc.py: 408:
   yacc.py: 409:State  : 48
   yacc.py: 433:Stack  : LPAREN direct_declarator LPAREN . LexToken(ID,'ss',598,13255)
   yacc.py: 443:Action : Shift and goto state 113
   yacc.py: 408:
   yacc.py: 409:State  : 113
   yacc.py: 433:Stack  : LPAREN direct_declarator LPAREN ID . LexToken(RPAREN,')',598,13257)
   yacc.py: 469:Action : Reduce rule [identifier_list -> ID] with ['ss'] and goto state 112
   yacc.py: 503:Result : <str @ 0x1f85f68> ('ss')
   yacc.py: 408:
   yacc.py: 409:State  : 112
   yacc.py: 433:Stack  : LPAREN direct_declarator LPAREN identifier_list . LexToken(RPAREN,')',598,13257)
   yacc.py: 443:Action : Shift and goto state 211
   yacc.py: 408:
   yacc.py: 409:State  : 211
   yacc.py: 433:Stack  : LPAREN direct_declarator LPAREN identifier_list RPAREN . LexToken(RPAREN,')',598,13258)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> direct_declarator LPAREN identifier_list RPAREN] with ['FAILED','(','ss',')'] and goto state 22
   yacc.py: 503:Result : <instance @ 0x21c0ad0> (<c_ast.Node instance at 0x021C0AD0>)
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : LPAREN direct_declarator . LexToken(RPAREN,')',598,13258)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with [<instance @ 0x21c0ad0>] and goto state 39
   yacc.py: 503:Result : <instance @ 0x21c0ad0> (<c_ast.Node instance at 0x021C0AD0>)
   yacc.py: 408:
   yacc.py: 409:State  : 39
   yacc.py: 433:Stack  : LPAREN declarator . LexToken(RPAREN,')',598,13258)
   yacc.py: 443:Action : Shift and goto state 62
   yacc.py: 408:
   yacc.py: 409:State  : 62
   yacc.py: 433:Stack  : LPAREN declarator RPAREN . LexToken(RETURN,'return',599,13262)
   yacc.py: 573:Error  : LPAREN declarator RPAREN . LexToken(RETURN,'return',599,13262)
   yacc.py: 408:
   yacc.py: 409:State  : 62
   yacc.py: 433:Stack  : LPAREN declarator RPAREN . error
   yacc.py: 573:Error  : LPAREN declarator RPAREN . error
   yacc.py: 408:
   yacc.py: 409:State  : 39
   yacc.py: 433:Stack  : LPAREN declarator . error
   yacc.py: 573:Error  : LPAREN declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 4
   yacc.py: 433:Stack  : LPAREN . error
   yacc.py: 573:Error  : LPAREN . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'0',599,13269)
   yacc.py: 573:Error  : . LexToken(ICONST,'0',599,13269)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(SEMI,';',599,13270)
   yacc.py: 573:Error  : . LexToken(SEMI,';',599,13270)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(IF,'if',601,13274)
   yacc.py: 573:Error  : . LexToken(IF,'if',601,13274)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(LPAREN,'(',601,13277)
   yacc.py: 443:Action : Shift and goto state 4
   yacc.py: 408:
   yacc.py: 409:State  : 4
   yacc.py: 433:Stack  : LPAREN . LexToken(ID,'NoLoop',601,13278)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : LPAREN ID . LexToken(RPAREN,')',601,13284)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['NoLoop'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f97680> ('NoLoop')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : LPAREN direct_declarator . LexToken(RPAREN,')',601,13284)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['NoLoop'] and goto state 39
   yacc.py: 503:Result : <str @ 0x1f97680> ('NoLoop')
   yacc.py: 408:
   yacc.py: 409:State  : 39
   yacc.py: 433:Stack  : LPAREN declarator . LexToken(RPAREN,')',601,13284)
   yacc.py: 443:Action : Shift and goto state 62
   yacc.py: 408:
   yacc.py: 409:State  : 62
   yacc.py: 433:Stack  : LPAREN declarator RPAREN . LexToken(RETURN,'return',602,13288)
   yacc.py: 573:Error  : LPAREN declarator RPAREN . LexToken(RETURN,'return',602,13288)
   yacc.py: 408:
   yacc.py: 409:State  : 62
   yacc.py: 433:Stack  : LPAREN declarator RPAREN . error
   yacc.py: 573:Error  : LPAREN declarator RPAREN . error
   yacc.py: 408:
   yacc.py: 409:State  : 39
   yacc.py: 433:Stack  : LPAREN declarator . error
   yacc.py: 573:Error  : LPAREN declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 4
   yacc.py: 433:Stack  : LPAREN . error
   yacc.py: 573:Error  : LPAREN . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'0',602,13295)
   yacc.py: 573:Error  : . LexToken(ICONST,'0',602,13295)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(SEMI,';',602,13296)
   yacc.py: 573:Error  : . LexToken(SEMI,';',602,13296)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(RETURN,'return',603,13299)
   yacc.py: 573:Error  : . LexToken(RETURN,'return',603,13299)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'ClientLoop',603,13306)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(LPAREN,'(',603,13316)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['ClientLoop'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f97c00> ('ClientLoop')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(LPAREN,'(',603,13316)
   yacc.py: 443:Action : Shift and goto state 48
   yacc.py: 408:
   yacc.py: 409:State  : 48
   yacc.py: 433:Stack  : direct_declarator LPAREN . LexToken(RPAREN,')',603,13317)
   yacc.py: 443:Action : Shift and goto state 108
   yacc.py: 408:
   yacc.py: 409:State  : 108
   yacc.py: 433:Stack  : direct_declarator LPAREN RPAREN . LexToken(SEMI,';',603,13318)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> direct_declarator LPAREN RPAREN] with ['ClientLoop','(',')'] and goto state 22
   yacc.py: 503:Result : <instance @ 0x21c0c60> (<c_ast.Node instance at 0x021C0C60>)
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(SEMI,';',603,13318)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with [<instance @ 0x21c0c60>] and goto state 37
   yacc.py: 503:Result : <instance @ 0x21c0c60> (<c_ast.Node instance at 0x021C0C60>)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(SEMI,';',603,13318)
   yacc.py: 573:Error  : declarator . LexToken(SEMI,';',603,13318)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(RBRACE,'}',604,13321)
   yacc.py: 573:Error  : . LexToken(RBRACE,'}',604,13321)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(INT,'int',606,13324)
   yacc.py: 443:Action : Shift and goto state 31
   yacc.py: 408:
   yacc.py: 409:State  : 31
   yacc.py: 433:Stack  : INT . LexToken(ID,'SSL_SOCKET',606,13328)
   yacc.py: 469:Action : Reduce rule [type_specifier -> INT] with ['int'] and goto state 13
   yacc.py: 503:Result : <str @ 0x1f85e48> ('int')
   yacc.py: 408:
   yacc.py: 409:State  : 13
   yacc.py: 433:Stack  : type_specifier . LexToken(ID,'SSL_SOCKET',606,13328)
   yacc.py: 469:Action : Reduce rule [declaration_specifiers -> type_specifier] with ['int'] and goto state 24
   yacc.py: 503:Result : <str @ 0x1f85e48> ('int')
   yacc.py: 408:
   yacc.py: 409:State  : 24
   yacc.py: 433:Stack  : declaration_specifiers . LexToken(ID,'SSL_SOCKET',606,13328)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : declaration_specifiers ID . LexToken(COLON,':',606,13339)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['SSL_SOCKET'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f97c60> ('SSL_SOCKET')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : declaration_specifiers direct_declarator . LexToken(COLON,':',606,13339)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['SSL_SOCKET'] and goto state 55
   yacc.py: 503:Result : <str @ 0x1f97c60> ('SSL_SOCKET')
   yacc.py: 408:
   yacc.py: 409:State  : 55
   yacc.py: 433:Stack  : declaration_specifiers declarator . LexToken(COLON,':',606,13339)
   yacc.py: 573:Error  : declaration_specifiers declarator . LexToken(COLON,':',606,13339)
   yacc.py: 408:
   yacc.py: 409:State  : 55
   yacc.py: 433:Stack  : declaration_specifiers declarator . error
   yacc.py: 573:Error  : declaration_specifiers declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 24
   yacc.py: 433:Stack  : declaration_specifiers . error
   yacc.py: 573:Error  : declaration_specifiers . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(COLON,':',606,13340)
   yacc.py: 573:Error  : . LexToken(COLON,':',606,13340)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'ServerLoop',606,13342)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(LPAREN,'(',606,13352)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['ServerLoop'] and goto state 22
   yacc.py: 503:Result : <str @ 0x21ae280> ('ServerLoop')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(LPAREN,'(',606,13352)
   yacc.py: 443:Action : Shift and goto state 48
   yacc.py: 408:
   yacc.py: 409:State  : 48
   yacc.py: 433:Stack  : direct_declarator LPAREN . LexToken(RPAREN,')',606,13353)
   yacc.py: 443:Action : Shift and goto state 108
   yacc.py: 408:
   yacc.py: 409:State  : 108
   yacc.py: 433:Stack  : direct_declarator LPAREN RPAREN . LexToken(LBRACE,'{',607,13356)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> direct_declarator LPAREN RPAREN] with ['ServerLoop','(',')'] and goto state 22
   yacc.py: 503:Result : <instance @ 0x21c0c60> (<c_ast.Node instance at 0x021C0C60>)
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(LBRACE,'{',607,13356)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with [<instance @ 0x21c0c60>] and goto state 37
   yacc.py: 503:Result : <instance @ 0x21c0c60> (<c_ast.Node instance at 0x021C0C60>)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(LBRACE,'{',607,13356)
   yacc.py: 443:Action : Shift and goto state 60
   yacc.py: 408:
   yacc.py: 409:State  : 60
   yacc.py: 433:Stack  : declarator LBRACE . LexToken(DIVIDE,'/',608,13359)
   yacc.py: 573:Error  : declarator LBRACE . LexToken(DIVIDE,'/',608,13359)
   yacc.py: 408:
   yacc.py: 409:State  : 60
   yacc.py: 433:Stack  : declarator LBRACE . error
   yacc.py: 573:Error  : declarator LBRACE . error
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(DIVIDE,'/',608,13360)
   yacc.py: 573:Error  : . LexToken(DIVIDE,'/',608,13360)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'Loop',608,13362)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(ID,'AcceptSecurityContext',608,13367)
   yacc.py: 573:Error  : ID . LexToken(ID,'AcceptSecurityContext',608,13367)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'SECURITY_STATUS',609,13390)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(ID,'ss',609,13406)
   yacc.py: 573:Error  : ID . LexToken(ID,'ss',609,13406)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(EQUALS,'=',609,13409)
   yacc.py: 573:Error  : . LexToken(EQUALS,'=',609,13409)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'SEC_I_CONTINUE_NEEDED',609,13411)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(SEMI,';',609,13432)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with [<str @ 0x21cdf80>] and goto state 22
   yacc.py: 503:Result : <str @ 0x21cdf80> ('SEC_I_CONTINUE_NEEDED')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(SEMI,';',609,13432)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with [<str @ 0x21cdf80>] and goto state 37
   yacc.py: 503:Result : <str @ 0x21cdf80> ('SEC_I_CONTINUE_NEEDED')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(SEMI,';',609,13432)
   yacc.py: 573:Error  : declarator . LexToken(SEMI,';',609,13432)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'Z',610,13435)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(LT,'<',610,13436)
   yacc.py: 573:Error  : ID . LexToken(LT,'<',610,13436)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(CHAR,'char',610,13437)
   yacc.py: 443:Action : Shift and goto state 8
   yacc.py: 408:
   yacc.py: 409:State  : 8
   yacc.py: 433:Stack  : CHAR . LexToken(GT,'>',610,13441)
   yacc.py: 573:Error  : CHAR . LexToken(GT,'>',610,13441)
   yacc.py: 408:
   yacc.py: 409:State  : 8
   yacc.py: 433:Stack  : CHAR . error
   yacc.py: 573:Error  : CHAR . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'t',610,13443)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(LPAREN,'(',610,13444)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['t'] and goto state 22
   yacc.py: 503:Result : <str @ 0x5b4aa0> ('t')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(LPAREN,'(',610,13444)
   yacc.py: 443:Action : Shift and goto state 48
   yacc.py: 408:
   yacc.py: 409:State  : 48
   yacc.py: 433:Stack  : direct_declarator LPAREN . LexToken(ICONST,'0',610,13445)
   yacc.py: 573:Error  : direct_declarator LPAREN . LexToken(ICONST,'0',610,13445)
   yacc.py: 408:
   yacc.py: 409:State  : 48
   yacc.py: 433:Stack  : direct_declarator LPAREN . error
   yacc.py: 573:Error  : direct_declarator LPAREN . error
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . error
   yacc.py: 573:Error  : direct_declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'x11000',610,13446)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(RPAREN,')',610,13452)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['x11000'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f97660> ('x11000')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(RPAREN,')',610,13452)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['x11000'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f97660> ('x11000')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(RPAREN,')',610,13452)
   yacc.py: 573:Error  : declarator . LexToken(RPAREN,')',610,13452)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(SEMI,';',610,13453)
   yacc.py: 573:Error  : . LexToken(SEMI,';',610,13453)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'Z',611,13456)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(LT,'<',611,13457)
   yacc.py: 573:Error  : ID . LexToken(LT,'<',611,13457)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'SecBuffer',611,13458)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(GT,'>',611,13467)
   yacc.py: 573:Error  : ID . LexToken(GT,'>',611,13467)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'bufsi',611,13469)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(LPAREN,'(',611,13474)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['bufsi'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f976a0> ('bufsi')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(LPAREN,'(',611,13474)
   yacc.py: 443:Action : Shift and goto state 48
   yacc.py: 408:
   yacc.py: 409:State  : 48
   yacc.py: 433:Stack  : direct_declarator LPAREN . LexToken(ICONST,'100',611,13475)
   yacc.py: 573:Error  : direct_declarator LPAREN . LexToken(ICONST,'100',611,13475)
   yacc.py: 408:
   yacc.py: 409:State  : 48
   yacc.py: 433:Stack  : direct_declarator LPAREN . error
   yacc.py: 573:Error  : direct_declarator LPAREN . error
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . error
   yacc.py: 573:Error  : direct_declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(RPAREN,')',611,13478)
   yacc.py: 573:Error  : . LexToken(RPAREN,')',611,13478)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(SEMI,';',611,13479)
   yacc.py: 573:Error  : . LexToken(SEMI,';',611,13479)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'Z',612,13482)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(LT,'<',612,13483)
   yacc.py: 573:Error  : ID . LexToken(LT,'<',612,13483)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'SecBuffer',612,13484)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(GT,'>',612,13493)
   yacc.py: 573:Error  : ID . LexToken(GT,'>',612,13493)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'bufso',612,13495)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(LPAREN,'(',612,13500)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['bufso'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f97680> ('bufso')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(LPAREN,'(',612,13500)
   yacc.py: 443:Action : Shift and goto state 48
   yacc.py: 408:
   yacc.py: 409:State  : 48
   yacc.py: 433:Stack  : direct_declarator LPAREN . LexToken(ICONST,'100',612,13501)
   yacc.py: 573:Error  : direct_declarator LPAREN . LexToken(ICONST,'100',612,13501)
   yacc.py: 408:
   yacc.py: 409:State  : 48
   yacc.py: 433:Stack  : direct_declarator LPAREN . error
   yacc.py: 573:Error  : direct_declarator LPAREN . error
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . error
   yacc.py: 573:Error  : direct_declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(RPAREN,')',612,13504)
   yacc.py: 573:Error  : . LexToken(RPAREN,')',612,13504)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(SEMI,';',612,13505)
   yacc.py: 573:Error  : . LexToken(SEMI,';',612,13505)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(INT,'int',613,13508)
   yacc.py: 443:Action : Shift and goto state 31
   yacc.py: 408:
   yacc.py: 409:State  : 31
   yacc.py: 433:Stack  : INT . LexToken(ID,'pt',613,13512)
   yacc.py: 469:Action : Reduce rule [type_specifier -> INT] with ['int'] and goto state 13
   yacc.py: 503:Result : <str @ 0x1f85e60> ('int')
   yacc.py: 408:
   yacc.py: 409:State  : 13
   yacc.py: 433:Stack  : type_specifier . LexToken(ID,'pt',613,13512)
   yacc.py: 469:Action : Reduce rule [declaration_specifiers -> type_specifier] with ['int'] and goto state 24
   yacc.py: 503:Result : <str @ 0x1f85e60> ('int')
   yacc.py: 408:
   yacc.py: 409:State  : 24
   yacc.py: 433:Stack  : declaration_specifiers . LexToken(ID,'pt',613,13512)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : declaration_specifiers ID . LexToken(EQUALS,'=',613,13515)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['pt'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f85e48> ('pt')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : declaration_specifiers direct_declarator . LexToken(EQUALS,'=',613,13515)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['pt'] and goto state 55
   yacc.py: 503:Result : <str @ 0x1f85e48> ('pt')
   yacc.py: 408:
   yacc.py: 409:State  : 55
   yacc.py: 433:Stack  : declaration_specifiers declarator . LexToken(EQUALS,'=',613,13515)
   yacc.py: 443:Action : Shift and goto state 120
   yacc.py: 408:
   yacc.py: 409:State  : 120
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS . LexToken(ICONST,'0',613,13517)
   yacc.py: 443:Action : Shift and goto state 95
   yacc.py: 408:
   yacc.py: 409:State  : 95
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS ICONST . LexToken(SEMI,';',613,13518)
   yacc.py: 469:Action : Reduce rule [constant -> ICONST] with ['0'] and goto state 79
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 79
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS constant . LexToken(SEMI,';',613,13518)
   yacc.py: 469:Action : Reduce rule [primary_expression -> constant] with ['0'] and goto state 96
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 96
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS primary_expression . LexToken(SEMI,';',613,13518)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> primary_expression] with ['0'] and goto state 86
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS postfix_expression . LexToken(SEMI,';',613,13518)
   yacc.py: 469:Action : Reduce rule [unary_expression -> postfix_expression] with ['0'] and goto state 130
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 130
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS unary_expression . LexToken(SEMI,';',613,13518)
   yacc.py: 469:Action : Reduce rule [cast_expression -> unary_expression] with ['0'] and goto state 98
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 98
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS cast_expression . LexToken(SEMI,';',613,13518)
   yacc.py: 469:Action : Reduce rule [multiplicative_expression -> cast_expression] with ['0'] and goto state 103
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 103
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS multiplicative_expression . LexToken(SEMI,';',613,13518)
   yacc.py: 469:Action : Reduce rule [additive_expression -> multiplicative_expression] with ['0'] and goto state 77
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 77
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS additive_expression . LexToken(SEMI,';',613,13518)
   yacc.py: 469:Action : Reduce rule [shift_expression -> additive_expression] with ['0'] and goto state 100
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 100
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS shift_expression . LexToken(SEMI,';',613,13518)
   yacc.py: 469:Action : Reduce rule [relational_expression -> shift_expression] with ['0'] and goto state 88
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 88
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS relational_expression . LexToken(SEMI,';',613,13518)
   yacc.py: 469:Action : Reduce rule [equality_expression -> relational_expression] with ['0'] and goto state 101
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 101
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS equality_expression . LexToken(SEMI,';',613,13518)
   yacc.py: 469:Action : Reduce rule [and_expression -> equality_expression] with ['0'] and goto state 82
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 82
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS and_expression . LexToken(SEMI,';',613,13518)
   yacc.py: 469:Action : Reduce rule [exclusive_or_expression -> and_expression] with ['0'] and goto state 76
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 76
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS exclusive_or_expression . LexToken(SEMI,';',613,13518)
   yacc.py: 469:Action : Reduce rule [inclusive_or_expression -> exclusive_or_expression] with ['0'] and goto state 84
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 84
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS inclusive_or_expression . LexToken(SEMI,';',613,13518)
   yacc.py: 469:Action : Reduce rule [logical_and_expression -> inclusive_or_expression] with ['0'] and goto state 99
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 99
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS logical_and_expression . LexToken(SEMI,';',613,13518)
   yacc.py: 469:Action : Reduce rule [logical_or_expression -> logical_and_expression] with ['0'] and goto state 91
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 91
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS logical_or_expression . LexToken(SEMI,';',613,13518)
   yacc.py: 469:Action : Reduce rule [conditional_expression -> logical_or_expression] with ['0'] and goto state 151
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 151
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS conditional_expression . LexToken(SEMI,';',613,13518)
   yacc.py: 469:Action : Reduce rule [assignment_expression -> conditional_expression] with ['0'] and goto state 216
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 216
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS assignment_expression . LexToken(SEMI,';',613,13518)
   yacc.py: 469:Action : Reduce rule [initializer -> assignment_expression] with ['0'] and goto state 215
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 215
   yacc.py: 433:Stack  : declaration_specifiers declarator EQUALS initializer . LexToken(SEMI,';',613,13518)
   yacc.py: 469:Action : Reduce rule [init_declarator -> declarator EQUALS initializer] with ['pt','=','0'] and goto state 54
   yacc.py: 503:Result : <instance @ 0x21c0b20> (<c_ast.Node instance at 0x021C0B20>)
   yacc.py: 408:
   yacc.py: 409:State  : 54
   yacc.py: 433:Stack  : declaration_specifiers init_declarator . LexToken(SEMI,';',613,13518)
   yacc.py: 469:Action : Reduce rule [init_declarator_list -> init_declarator] with [<instance @ 0x21c0b20>] and goto state 53
   yacc.py: 503:Result : <instance @ 0x21c0b20> (<c_ast.Node instance at 0x021C0B20>)
   yacc.py: 408:
   yacc.py: 409:State  : 53
   yacc.py: 433:Stack  : declaration_specifiers init_declarator_list . LexToken(SEMI,';',613,13518)
   yacc.py: 443:Action : Shift and goto state 118
   yacc.py: 408:
   yacc.py: 409:State  : 118
   yacc.py: 433:Stack  : declaration_specifiers init_declarator_list SEMI . LexToken(DIVIDE,'/',615,13522)
   yacc.py: 573:Error  : declaration_specifiers init_declarator_list SEMI . LexToken(DIVIDE,'/',615,13522)
   yacc.py: 408:
   yacc.py: 409:State  : 118
   yacc.py: 433:Stack  : declaration_specifiers init_declarator_list SEMI . error
   yacc.py: 573:Error  : declaration_specifiers init_declarator_list SEMI . error
   yacc.py: 408:
   yacc.py: 409:State  : 53
   yacc.py: 433:Stack  : declaration_specifiers init_declarator_list . error
   yacc.py: 573:Error  : declaration_specifiers init_declarator_list . error
   yacc.py: 408:
   yacc.py: 409:State  : 24
   yacc.py: 433:Stack  : declaration_specifiers . error
   yacc.py: 573:Error  : declaration_specifiers . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(DIVIDE,'/',615,13523)
   yacc.py: 573:Error  : . LexToken(DIVIDE,'/',615,13523)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'Loop',615,13525)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(ID,'using',615,13530)
   yacc.py: 573:Error  : ID . LexToken(ID,'using',615,13530)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'InitializeSecurityContext',615,13536)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(ID,'until',615,13562)
   yacc.py: 573:Error  : ID . LexToken(ID,'until',615,13562)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'success',615,13568)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(FOR,'for',616,13577)
   yacc.py: 573:Error  : ID . LexToken(FOR,'for',616,13577)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(LPAREN,'(',616,13580)
   yacc.py: 443:Action : Shift and goto state 4
   yacc.py: 408:
   yacc.py: 409:State  : 4
   yacc.py: 433:Stack  : LPAREN . LexToken(SEMI,';',616,13581)
   yacc.py: 573:Error  : LPAREN . LexToken(SEMI,';',616,13581)
   yacc.py: 408:
   yacc.py: 409:State  : 4
   yacc.py: 433:Stack  : LPAREN . error
   yacc.py: 573:Error  : LPAREN . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(SEMI,';',616,13582)
   yacc.py: 573:Error  : . LexToken(SEMI,';',616,13582)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(RPAREN,')',616,13583)
   yacc.py: 573:Error  : . LexToken(RPAREN,')',616,13583)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(LBRACE,'{',617,13587)
   yacc.py: 573:Error  : . LexToken(LBRACE,'{',617,13587)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(IF,'if',618,13591)
   yacc.py: 573:Error  : . LexToken(IF,'if',618,13591)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(LPAREN,'(',618,13594)
   yacc.py: 443:Action : Shift and goto state 4
   yacc.py: 408:
   yacc.py: 409:State  : 4
   yacc.py: 433:Stack  : LPAREN . LexToken(ID,'ss',618,13595)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : LPAREN ID . LexToken(NE,'!=',618,13598)
   yacc.py: 573:Error  : LPAREN ID . LexToken(NE,'!=',618,13598)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : LPAREN ID . error
   yacc.py: 573:Error  : LPAREN ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 4
   yacc.py: 433:Stack  : LPAREN . error
   yacc.py: 573:Error  : LPAREN . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'SEC_I_CONTINUE_NEEDED',618,13601)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(LAND,'&&',618,13623)
   yacc.py: 573:Error  : ID . LexToken(LAND,'&&',618,13623)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'ss',618,13626)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(NE,'!=',618,13629)
   yacc.py: 573:Error  : ID . LexToken(NE,'!=',618,13629)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'SEC_E_INCOMPLETE_MESSAGE',618,13632)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(LAND,'&&',618,13657)
   yacc.py: 573:Error  : ID . LexToken(LAND,'&&',618,13657)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'ss',618,13660)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(NE,'!=',618,13663)
   yacc.py: 573:Error  : ID . LexToken(NE,'!=',618,13663)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'SEC_I_INCOMPLETE_CREDENTIALS',618,13666)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(RPAREN,')',618,13694)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with [<str @ 0x1f88f70>] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f88f70> ('SEC_I_INCOMPLETE_CREDENTIALS')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(RPAREN,')',618,13694)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with [<str @ 0x1f88f70>] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f88f70> ('SEC_I_INCOMPLETE_CREDENTIALS')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(RPAREN,')',618,13694)
   yacc.py: 573:Error  : declarator . LexToken(RPAREN,')',618,13694)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(BREAK,'break',619,13699)
   yacc.py: 573:Error  : . LexToken(BREAK,'break',619,13699)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(SEMI,';',619,13704)
   yacc.py: 573:Error  : . LexToken(SEMI,';',619,13704)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'DWORD',621,13709)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(ID,'dwSSPIFlags',621,13715)
   yacc.py: 573:Error  : ID . LexToken(ID,'dwSSPIFlags',621,13715)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(EQUALS,'=',621,13727)
   yacc.py: 573:Error  : . LexToken(EQUALS,'=',621,13727)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'ISC_REQ_SEQUENCE_DETECT',621,13729)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(OR,'|',621,13755)
   yacc.py: 573:Error  : ID . LexToken(OR,'|',621,13755)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'ISC_REQ_REPLAY_DETECT',622,13775)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(OR,'|',622,13801)
   yacc.py: 573:Error  : ID . LexToken(OR,'|',622,13801)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'ISC_REQ_CONFIDENTIALITY',623,13821)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(OR,'|',623,13847)
   yacc.py: 573:Error  : ID . LexToken(OR,'|',623,13847)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'ISC_RET_EXTENDED_ERROR',624,13867)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(OR,'|',624,13893)
   yacc.py: 573:Error  : ID . LexToken(OR,'|',624,13893)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'ISC_REQ_ALLOCATE_MEMORY',625,13913)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(OR,'|',625,13939)
   yacc.py: 573:Error  : ID . LexToken(OR,'|',625,13939)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'ISC_REQ_STREAM',626,13959)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(SEMI,';',626,13973)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with [<str @ 0x21c0c50>] and goto state 22
   yacc.py: 503:Result : <str @ 0x21c0c50> ('ISC_REQ_STREAM')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(SEMI,';',626,13973)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with [<str @ 0x21c0c50>] and goto state 37
   yacc.py: 503:Result : <str @ 0x21c0c50> ('ISC_REQ_STREAM')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(SEMI,';',626,13973)
   yacc.py: 573:Error  : declarator . LexToken(SEMI,';',626,13973)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'dwSSPIFlags',628,13978)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(OREQUAL,'|=',628,13990)
   yacc.py: 573:Error  : ID . LexToken(OREQUAL,'|=',628,13990)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'ISC_REQ_MANUAL_CRED_VALIDATION',628,13993)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(SEMI,';',628,14023)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with [<str @ 0x1f88f70>] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f88f70> ('ISC_REQ_MANUAL_CRED_VALIDATION')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(SEMI,';',628,14023)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with [<str @ 0x1f88f70>] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f88f70> ('ISC_REQ_MANUAL_CRED_VALIDATION')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(SEMI,';',628,14023)
   yacc.py: 573:Error  : declarator . LexToken(SEMI,';',628,14023)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(DIVIDE,'/',630,14029)
   yacc.py: 573:Error  : . LexToken(DIVIDE,'/',630,14029)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(DIVIDE,'/',630,14030)
   yacc.py: 573:Error  : . LexToken(DIVIDE,'/',630,14030)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'Get',630,14032)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(ID,'Some',630,14036)
   yacc.py: 573:Error  : ID . LexToken(ID,'Some',630,14036)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'data',630,14041)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(ID,'from',630,14046)
   yacc.py: 573:Error  : ID . LexToken(ID,'from',630,14046)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'the',630,14051)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(ID,'remote',630,14055)
   yacc.py: 573:Error  : ID . LexToken(ID,'remote',630,14055)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'site',630,14062)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(INT,'int',631,14069)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['site'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f97680> ('site')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(INT,'int',631,14069)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['site'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f97680> ('site')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(INT,'int',631,14069)
   yacc.py: 443:Action : Shift and goto state 31
   yacc.py: 408:
   yacc.py: 409:State  : 31
   yacc.py: 433:Stack  : declarator INT . LexToken(ID,'rval',631,14073)
   yacc.py: 469:Action : Reduce rule [type_specifier -> INT] with ['int'] and goto state 13
   yacc.py: 503:Result : <str @ 0x1f85e78> ('int')
   yacc.py: 408:
   yacc.py: 409:State  : 13
   yacc.py: 433:Stack  : declarator type_specifier . LexToken(ID,'rval',631,14073)
   yacc.py: 469:Action : Reduce rule [declaration_specifiers -> type_specifier] with ['int'] and goto state 58
   yacc.py: 503:Result : <str @ 0x1f85e78> ('int')
   yacc.py: 408:
   yacc.py: 409:State  : 58
   yacc.py: 433:Stack  : declarator declaration_specifiers . LexToken(ID,'rval',631,14073)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : declarator declaration_specifiers ID . LexToken(EQUALS,'=',631,14078)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['rval'] and goto state 22
   yacc.py: 503:Result : <str @ 0x671440> ('rval')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : declarator declaration_specifiers direct_declarator . LexToken(EQUALS,'=',631,14078)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['rval'] and goto state 122
   yacc.py: 503:Result : <str @ 0x671440> ('rval')
   yacc.py: 408:
   yacc.py: 409:State  : 122
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator . LexToken(EQUALS,'=',631,14078)
   yacc.py: 443:Action : Shift and goto state 120
   yacc.py: 408:
   yacc.py: 409:State  : 120
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS . LexToken(ID,'recv',631,14080)
   yacc.py: 443:Action : Shift and goto state 87
   yacc.py: 408:
   yacc.py: 409:State  : 87
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS ID . LexToken(LPAREN,'(',631,14084)
   yacc.py: 469:Action : Reduce rule [primary_expression -> ID] with ['recv'] and goto state 96
   yacc.py: 503:Result : <str @ 0x1f97480> ('recv')
   yacc.py: 408:
   yacc.py: 409:State  : 96
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS primary_expression . LexToken(LPAREN,'(',631,14084)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> primary_expression] with ['recv'] and goto state 86
   yacc.py: 503:Result : <str @ 0x1f97480> ('recv')
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression . LexToken(LPAREN,'(',631,14084)
   yacc.py: 443:Action : Shift and goto state 181
   yacc.py: 408:
   yacc.py: 409:State  : 181
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN . LexToken(ID,'X',631,14085)
   yacc.py: 443:Action : Shift and goto state 87
   yacc.py: 408:
   yacc.py: 409:State  : 87
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN ID . LexToken(COMMA,',',631,14086)
   yacc.py: 469:Action : Reduce rule [primary_expression -> ID] with ['X'] and goto state 96
   yacc.py: 503:Result : <str @ 0x6666e0> ('X')
   yacc.py: 408:
   yacc.py: 409:State  : 96
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN primary_expression . LexToken(COMMA,',',631,14086)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> primary_expression] with ['X'] and goto state 86
   yacc.py: 503:Result : <str @ 0x6666e0> ('X')
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN postfix_expression . LexToken(COMMA,',',631,14086)
   yacc.py: 469:Action : Reduce rule [unary_expression -> postfix_expression] with ['X'] and goto state 130
   yacc.py: 503:Result : <str @ 0x6666e0> ('X')
   yacc.py: 408:
   yacc.py: 409:State  : 130
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN unary_expression . LexToken(COMMA,',',631,14086)
   yacc.py: 469:Action : Reduce rule [cast_expression -> unary_expression] with ['X'] and goto state 98
   yacc.py: 503:Result : <str @ 0x6666e0> ('X')
   yacc.py: 408:
   yacc.py: 409:State  : 98
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN cast_expression . LexToken(COMMA,',',631,14086)
   yacc.py: 469:Action : Reduce rule [multiplicative_expression -> cast_expression] with ['X'] and goto state 103
   yacc.py: 503:Result : <str @ 0x6666e0> ('X')
   yacc.py: 408:
   yacc.py: 409:State  : 103
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN multiplicative_expression . LexToken(COMMA,',',631,14086)
   yacc.py: 469:Action : Reduce rule [additive_expression -> multiplicative_expression] with ['X'] and goto state 77
   yacc.py: 503:Result : <str @ 0x6666e0> ('X')
   yacc.py: 408:
   yacc.py: 409:State  : 77
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN additive_expression . LexToken(COMMA,',',631,14086)
   yacc.py: 469:Action : Reduce rule [shift_expression -> additive_expression] with ['X'] and goto state 100
   yacc.py: 503:Result : <str @ 0x6666e0> ('X')
   yacc.py: 408:
   yacc.py: 409:State  : 100
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN shift_expression . LexToken(COMMA,',',631,14086)
   yacc.py: 469:Action : Reduce rule [relational_expression -> shift_expression] with ['X'] and goto state 88
   yacc.py: 503:Result : <str @ 0x6666e0> ('X')
   yacc.py: 408:
   yacc.py: 409:State  : 88
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN relational_expression . LexToken(COMMA,',',631,14086)
   yacc.py: 469:Action : Reduce rule [equality_expression -> relational_expression] with ['X'] and goto state 101
   yacc.py: 503:Result : <str @ 0x6666e0> ('X')
   yacc.py: 408:
   yacc.py: 409:State  : 101
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN equality_expression . LexToken(COMMA,',',631,14086)
   yacc.py: 469:Action : Reduce rule [and_expression -> equality_expression] with ['X'] and goto state 82
   yacc.py: 503:Result : <str @ 0x6666e0> ('X')
   yacc.py: 408:
   yacc.py: 409:State  : 82
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN and_expression . LexToken(COMMA,',',631,14086)
   yacc.py: 469:Action : Reduce rule [exclusive_or_expression -> and_expression] with ['X'] and goto state 76
   yacc.py: 503:Result : <str @ 0x6666e0> ('X')
   yacc.py: 408:
   yacc.py: 409:State  : 76
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN exclusive_or_expression . LexToken(COMMA,',',631,14086)
   yacc.py: 469:Action : Reduce rule [inclusive_or_expression -> exclusive_or_expression] with ['X'] and goto state 84
   yacc.py: 503:Result : <str @ 0x6666e0> ('X')
   yacc.py: 408:
   yacc.py: 409:State  : 84
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN inclusive_or_expression . LexToken(COMMA,',',631,14086)
   yacc.py: 469:Action : Reduce rule [logical_and_expression -> inclusive_or_expression] with ['X'] and goto state 99
   yacc.py: 503:Result : <str @ 0x6666e0> ('X')
   yacc.py: 408:
   yacc.py: 409:State  : 99
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN logical_and_expression . LexToken(COMMA,',',631,14086)
   yacc.py: 469:Action : Reduce rule [logical_or_expression -> logical_and_expression] with ['X'] and goto state 91
   yacc.py: 503:Result : <str @ 0x6666e0> ('X')
   yacc.py: 408:
   yacc.py: 409:State  : 91
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN logical_or_expression . LexToken(COMMA,',',631,14086)
   yacc.py: 469:Action : Reduce rule [conditional_expression -> logical_or_expression] with ['X'] and goto state 151
   yacc.py: 503:Result : <str @ 0x6666e0> ('X')
   yacc.py: 408:
   yacc.py: 409:State  : 151
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN conditional_expression . LexToken(COMMA,',',631,14086)
   yacc.py: 469:Action : Reduce rule [assignment_expression -> conditional_expression] with ['X'] and goto state 267
   yacc.py: 503:Result : <str @ 0x6666e0> ('X')
   yacc.py: 408:
   yacc.py: 409:State  : 267
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN assignment_expression . LexToken(COMMA,',',631,14086)
   yacc.py: 469:Action : Reduce rule [argument_expression_list -> assignment_expression] with ['X'] and goto state 268
   yacc.py: 503:Result : <str @ 0x6666e0> ('X')
   yacc.py: 408:
   yacc.py: 409:State  : 268
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list . LexToken(COMMA,',',631,14086)
   yacc.py: 443:Action : Shift and goto state 319
   yacc.py: 408:
   yacc.py: 409:State  : 319
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA . LexToken(ID,'t',631,14087)
   yacc.py: 443:Action : Shift and goto state 87
   yacc.py: 408:
   yacc.py: 409:State  : 87
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA ID . LexToken(PLUS,'+',631,14089)
   yacc.py: 469:Action : Reduce rule [primary_expression -> ID] with ['t'] and goto state 96
   yacc.py: 503:Result : <str @ 0x5b4aa0> ('t')
   yacc.py: 408:
   yacc.py: 409:State  : 96
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA primary_expression . LexToken(PLUS,'+',631,14089)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> primary_expression] with ['t'] and goto state 86
   yacc.py: 503:Result : <str @ 0x5b4aa0> ('t')
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression . LexToken(PLUS,'+',631,14089)
   yacc.py: 469:Action : Reduce rule [unary_expression -> postfix_expression] with ['t'] and goto state 130
   yacc.py: 503:Result : <str @ 0x5b4aa0> ('t')
   yacc.py: 408:
   yacc.py: 409:State  : 130
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA unary_expression . LexToken(PLUS,'+',631,14089)
   yacc.py: 469:Action : Reduce rule [cast_expression -> unary_expression] with ['t'] and goto state 98
   yacc.py: 503:Result : <str @ 0x5b4aa0> ('t')
   yacc.py: 408:
   yacc.py: 409:State  : 98
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA cast_expression . LexToken(PLUS,'+',631,14089)
   yacc.py: 469:Action : Reduce rule [multiplicative_expression -> cast_expression] with ['t'] and goto state 103
   yacc.py: 503:Result : <str @ 0x5b4aa0> ('t')
   yacc.py: 408:
   yacc.py: 409:State  : 103
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA multiplicative_expression . LexToken(PLUS,'+',631,14089)
   yacc.py: 469:Action : Reduce rule [additive_expression -> multiplicative_expression] with ['t'] and goto state 77
   yacc.py: 503:Result : <str @ 0x5b4aa0> ('t')
   yacc.py: 408:
   yacc.py: 409:State  : 77
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA additive_expression . LexToken(PLUS,'+',631,14089)
   yacc.py: 443:Action : Shift and goto state 170
   yacc.py: 408:
   yacc.py: 409:State  : 170
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA additive_expression PLUS . LexToken(ID,'pt',631,14091)
   yacc.py: 443:Action : Shift and goto state 87
   yacc.py: 408:
   yacc.py: 409:State  : 87
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA additive_expression PLUS ID . LexToken(COMMA,',',631,14093)
   yacc.py: 469:Action : Reduce rule [primary_expression -> ID] with ['pt'] and goto state 96
   yacc.py: 503:Result : <str @ 0x1f85e48> ('pt')
   yacc.py: 408:
   yacc.py: 409:State  : 96
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA additive_expression PLUS primary_expression . LexToken(COMMA,',',631,14093)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> primary_expression] with ['pt'] and goto state 86
   yacc.py: 503:Result : <str @ 0x1f85e48> ('pt')
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA additive_expression PLUS postfix_expression . LexToken(COMMA,',',631,14093)
   yacc.py: 469:Action : Reduce rule [unary_expression -> postfix_expression] with ['pt'] and goto state 75
   yacc.py: 503:Result : <str @ 0x1f85e48> ('pt')
   yacc.py: 408:
   yacc.py: 409:State  : 75
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA additive_expression PLUS unary_expression . LexToken(COMMA,',',631,14093)
   yacc.py: 469:Action : Reduce rule [cast_expression -> unary_expression] with ['pt'] and goto state 98
   yacc.py: 503:Result : <str @ 0x1f85e48> ('pt')
   yacc.py: 408:
   yacc.py: 409:State  : 98
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA additive_expression PLUS cast_expression . LexToken(COMMA,',',631,14093)
   yacc.py: 469:Action : Reduce rule [multiplicative_expression -> cast_expression] with ['pt'] and goto state 258
   yacc.py: 503:Result : <str @ 0x1f85e48> ('pt')
   yacc.py: 408:
   yacc.py: 409:State  : 258
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA additive_expression PLUS multiplicative_expression . LexToken(COMMA,',',631,14093)
   yacc.py: 469:Action : Reduce rule [additive_expression -> additive_expression PLUS multiplicative_expression] with ['t','+','pt'] and goto state 77
   yacc.py: 503:Result : <instance @ 0x21c0af8> (<c_ast.Node instance at 0x021C0AF8>)
   yacc.py: 408:
   yacc.py: 409:State  : 77
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA additive_expression . LexToken(COMMA,',',631,14093)
   yacc.py: 469:Action : Reduce rule [shift_expression -> additive_expression] with [<instance @ 0x21c0af8>] and goto state 100
   yacc.py: 503:Result : <instance @ 0x21c0af8> (<c_ast.Node instance at 0x021C0AF8>)
   yacc.py: 408:
   yacc.py: 409:State  : 100
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA shift_expression . LexToken(COMMA,',',631,14093)
   yacc.py: 469:Action : Reduce rule [relational_expression -> shift_expression] with [<instance @ 0x21c0af8>] and goto state 88
   yacc.py: 503:Result : <instance @ 0x21c0af8> (<c_ast.Node instance at 0x021C0AF8>)
   yacc.py: 408:
   yacc.py: 409:State  : 88
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA relational_expression . LexToken(COMMA,',',631,14093)
   yacc.py: 469:Action : Reduce rule [equality_expression -> relational_expression] with [<instance @ 0x21c0af8>] and goto state 101
   yacc.py: 503:Result : <instance @ 0x21c0af8> (<c_ast.Node instance at 0x021C0AF8>)
   yacc.py: 408:
   yacc.py: 409:State  : 101
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA equality_expression . LexToken(COMMA,',',631,14093)
   yacc.py: 469:Action : Reduce rule [and_expression -> equality_expression] with [<instance @ 0x21c0af8>] and goto state 82
   yacc.py: 503:Result : <instance @ 0x21c0af8> (<c_ast.Node instance at 0x021C0AF8>)
   yacc.py: 408:
   yacc.py: 409:State  : 82
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA and_expression . LexToken(COMMA,',',631,14093)
   yacc.py: 469:Action : Reduce rule [exclusive_or_expression -> and_expression] with [<instance @ 0x21c0af8>] and goto state 76
   yacc.py: 503:Result : <instance @ 0x21c0af8> (<c_ast.Node instance at 0x021C0AF8>)
   yacc.py: 408:
   yacc.py: 409:State  : 76
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA exclusive_or_expression . LexToken(COMMA,',',631,14093)
   yacc.py: 469:Action : Reduce rule [inclusive_or_expression -> exclusive_or_expression] with [<instance @ 0x21c0af8>] and goto state 84
   yacc.py: 503:Result : <instance @ 0x21c0af8> (<c_ast.Node instance at 0x021C0AF8>)
   yacc.py: 408:
   yacc.py: 409:State  : 84
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA inclusive_or_expression . LexToken(COMMA,',',631,14093)
   yacc.py: 469:Action : Reduce rule [logical_and_expression -> inclusive_or_expression] with [<instance @ 0x21c0af8>] and goto state 99
   yacc.py: 503:Result : <instance @ 0x21c0af8> (<c_ast.Node instance at 0x021C0AF8>)
   yacc.py: 408:
   yacc.py: 409:State  : 99
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA logical_and_expression . LexToken(COMMA,',',631,14093)
   yacc.py: 469:Action : Reduce rule [logical_or_expression -> logical_and_expression] with [<instance @ 0x21c0af8>] and goto state 91
   yacc.py: 503:Result : <instance @ 0x21c0af8> (<c_ast.Node instance at 0x021C0AF8>)
   yacc.py: 408:
   yacc.py: 409:State  : 91
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA logical_or_expression . LexToken(COMMA,',',631,14093)
   yacc.py: 469:Action : Reduce rule [conditional_expression -> logical_or_expression] with [<instance @ 0x21c0af8>] and goto state 151
   yacc.py: 503:Result : <instance @ 0x21c0af8> (<c_ast.Node instance at 0x021C0AF8>)
   yacc.py: 408:
   yacc.py: 409:State  : 151
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA conditional_expression . LexToken(COMMA,',',631,14093)
   yacc.py: 469:Action : Reduce rule [assignment_expression -> conditional_expression] with [<instance @ 0x21c0af8>] and goto state 335
   yacc.py: 503:Result : <instance @ 0x21c0af8> (<c_ast.Node instance at 0x021C0AF8>)
   yacc.py: 408:
   yacc.py: 409:State  : 335
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA assignment_expression . LexToken(COMMA,',',631,14093)
   yacc.py: 469:Action : Reduce rule [argument_expression_list -> argument_expression_list COMMA assignment_expression] with ['X',',',<instance @ 0x21c0af8>] and goto state 268
   yacc.py: 503:Result : <instance @ 0x21c0cb0> (<c_ast.Node instance at 0x021C0CB0>)
   yacc.py: 408:
   yacc.py: 409:State  : 268
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list . LexToken(COMMA,',',631,14093)
   yacc.py: 443:Action : Shift and goto state 319
   yacc.py: 408:
   yacc.py: 409:State  : 319
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA . LexToken(ICONST,'0',631,14094)
   yacc.py: 443:Action : Shift and goto state 95
   yacc.py: 408:
   yacc.py: 409:State  : 95
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA ICONST . LexToken(ID,'x10000',631,14095)
   yacc.py: 573:Error  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA ICONST . LexToken(ID,'x10000',631,14095)
   yacc.py: 408:
   yacc.py: 409:State  : 95
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA ICONST . error
   yacc.py: 573:Error  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA ICONST . error
   yacc.py: 408:
   yacc.py: 409:State  : 319
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA . error
   yacc.py: 573:Error  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA . error
   yacc.py: 408:
   yacc.py: 409:State  : 268
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list . error
   yacc.py: 573:Error  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list . error
   yacc.py: 408:
   yacc.py: 409:State  : 181
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN . error
   yacc.py: 573:Error  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN . error
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression . error
   yacc.py: 573:Error  : declarator declaration_specifiers declarator EQUALS postfix_expression . error
   yacc.py: 408:
   yacc.py: 409:State  : 120
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS . error
   yacc.py: 573:Error  : declarator declaration_specifiers declarator EQUALS . error
   yacc.py: 408:
   yacc.py: 409:State  : 122
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator . error
   yacc.py: 573:Error  : declarator declaration_specifiers declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 58
   yacc.py: 433:Stack  : declarator declaration_specifiers . error
   yacc.py: 573:Error  : declarator declaration_specifiers . error
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(COMMA,',',631,14101)
   yacc.py: 573:Error  : . LexToken(COMMA,',',631,14101)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'0',631,14102)
   yacc.py: 573:Error  : . LexToken(ICONST,'0',631,14102)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(RPAREN,')',631,14103)
   yacc.py: 573:Error  : . LexToken(RPAREN,')',631,14103)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(SEMI,';',631,14104)
   yacc.py: 573:Error  : . LexToken(SEMI,';',631,14104)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(IF,'if',632,14108)
   yacc.py: 573:Error  : . LexToken(IF,'if',632,14108)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(LPAREN,'(',632,14111)
   yacc.py: 443:Action : Shift and goto state 4
   yacc.py: 408:
   yacc.py: 409:State  : 4
   yacc.py: 433:Stack  : LPAREN . LexToken(ID,'rval',632,14112)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : LPAREN ID . LexToken(EQ,'==',632,14117)
   yacc.py: 573:Error  : LPAREN ID . LexToken(EQ,'==',632,14117)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : LPAREN ID . error
   yacc.py: 573:Error  : LPAREN ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 4
   yacc.py: 433:Stack  : LPAREN . error
   yacc.py: 573:Error  : LPAREN . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'0',632,14120)
   yacc.py: 573:Error  : . LexToken(ICONST,'0',632,14120)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(LOR,'||',632,14122)
   yacc.py: 573:Error  : . LexToken(LOR,'||',632,14122)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'rval',632,14125)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(EQ,'==',632,14130)
   yacc.py: 573:Error  : ID . LexToken(EQ,'==',632,14130)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(MINUS,'-',632,14133)
   yacc.py: 573:Error  : . LexToken(MINUS,'-',632,14133)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'1',632,14134)
   yacc.py: 573:Error  : . LexToken(ICONST,'1',632,14134)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(RPAREN,')',632,14135)
   yacc.py: 573:Error  : . LexToken(RPAREN,')',632,14135)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(RETURN,'return',633,14140)
   yacc.py: 573:Error  : . LexToken(RETURN,'return',633,14140)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(MINUS,'-',633,14147)
   yacc.py: 573:Error  : . LexToken(MINUS,'-',633,14147)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'1',633,14148)
   yacc.py: 573:Error  : . LexToken(ICONST,'1',633,14148)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(SEMI,';',633,14149)
   yacc.py: 573:Error  : . LexToken(SEMI,';',633,14149)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'pt',634,14153)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(PLUSEQUAL,'+=',634,14156)
   yacc.py: 573:Error  : ID . LexToken(PLUSEQUAL,'+=',634,14156)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'rval',634,14159)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(SEMI,';',634,14163)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['rval'] and goto state 22
   yacc.py: 503:Result : <str @ 0x21ae280> ('rval')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(SEMI,';',634,14163)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['rval'] and goto state 37
   yacc.py: 503:Result : <str @ 0x21ae280> ('rval')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(SEMI,';',634,14163)
   yacc.py: 573:Error  : declarator . LexToken(SEMI,';',634,14163)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(DIVIDE,'/',636,14168)
   yacc.py: 573:Error  : . LexToken(DIVIDE,'/',636,14168)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(DIVIDE,'/',636,14169)
   yacc.py: 573:Error  : . LexToken(DIVIDE,'/',636,14169)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'Put',636,14171)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(ID,'this',636,14175)
   yacc.py: 573:Error  : ID . LexToken(ID,'this',636,14175)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'data',636,14180)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(ID,'into',636,14185)
   yacc.py: 573:Error  : ID . LexToken(ID,'into',636,14185)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'the',636,14190)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(ID,'buffer',636,14194)
   yacc.py: 573:Error  : ID . LexToken(ID,'buffer',636,14194)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'so',636,14201)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(ID,'InitializeSecurityContext',636,14204)
   yacc.py: 573:Error  : ID . LexToken(ID,'InitializeSecurityContext',636,14204)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'will',636,14230)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(DO,'do',636,14235)
   yacc.py: 573:Error  : ID . LexToken(DO,'do',636,14235)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'bufsi',637,14240)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(LBRACKET,'[',637,14245)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['bufsi'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f97680> ('bufsi')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(LBRACKET,'[',637,14245)
   yacc.py: 443:Action : Shift and goto state 47
   yacc.py: 408:
   yacc.py: 409:State  : 47
   yacc.py: 433:Stack  : direct_declarator LBRACKET . LexToken(ICONST,'0',637,14246)
   yacc.py: 443:Action : Shift and goto state 95
   yacc.py: 408:
   yacc.py: 409:State  : 95
   yacc.py: 433:Stack  : direct_declarator LBRACKET ICONST . LexToken(RBRACKET,']',637,14247)
   yacc.py: 469:Action : Reduce rule [constant -> ICONST] with ['0'] and goto state 79
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 79
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant . LexToken(RBRACKET,']',637,14247)
   yacc.py: 469:Action : Reduce rule [primary_expression -> constant] with ['0'] and goto state 96
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 96
   yacc.py: 433:Stack  : direct_declarator LBRACKET primary_expression . LexToken(RBRACKET,']',637,14247)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> primary_expression] with ['0'] and goto state 86
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : direct_declarator LBRACKET postfix_expression . LexToken(RBRACKET,']',637,14247)
   yacc.py: 469:Action : Reduce rule [unary_expression -> postfix_expression] with ['0'] and goto state 75
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 75
   yacc.py: 433:Stack  : direct_declarator LBRACKET unary_expression . LexToken(RBRACKET,']',637,14247)
   yacc.py: 469:Action : Reduce rule [cast_expression -> unary_expression] with ['0'] and goto state 98
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 98
   yacc.py: 433:Stack  : direct_declarator LBRACKET cast_expression . LexToken(RBRACKET,']',637,14247)
   yacc.py: 469:Action : Reduce rule [multiplicative_expression -> cast_expression] with ['0'] and goto state 103
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 103
   yacc.py: 433:Stack  : direct_declarator LBRACKET multiplicative_expression . LexToken(RBRACKET,']',637,14247)
   yacc.py: 469:Action : Reduce rule [additive_expression -> multiplicative_expression] with ['0'] and goto state 77
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 77
   yacc.py: 433:Stack  : direct_declarator LBRACKET additive_expression . LexToken(RBRACKET,']',637,14247)
   yacc.py: 469:Action : Reduce rule [shift_expression -> additive_expression] with ['0'] and goto state 100
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 100
   yacc.py: 433:Stack  : direct_declarator LBRACKET shift_expression . LexToken(RBRACKET,']',637,14247)
   yacc.py: 469:Action : Reduce rule [relational_expression -> shift_expression] with ['0'] and goto state 88
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 88
   yacc.py: 433:Stack  : direct_declarator LBRACKET relational_expression . LexToken(RBRACKET,']',637,14247)
   yacc.py: 469:Action : Reduce rule [equality_expression -> relational_expression] with ['0'] and goto state 101
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 101
   yacc.py: 433:Stack  : direct_declarator LBRACKET equality_expression . LexToken(RBRACKET,']',637,14247)
   yacc.py: 469:Action : Reduce rule [and_expression -> equality_expression] with ['0'] and goto state 82
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 82
   yacc.py: 433:Stack  : direct_declarator LBRACKET and_expression . LexToken(RBRACKET,']',637,14247)
   yacc.py: 469:Action : Reduce rule [exclusive_or_expression -> and_expression] with ['0'] and goto state 76
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 76
   yacc.py: 433:Stack  : direct_declarator LBRACKET exclusive_or_expression . LexToken(RBRACKET,']',637,14247)
   yacc.py: 469:Action : Reduce rule [inclusive_or_expression -> exclusive_or_expression] with ['0'] and goto state 84
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 84
   yacc.py: 433:Stack  : direct_declarator LBRACKET inclusive_or_expression . LexToken(RBRACKET,']',637,14247)
   yacc.py: 469:Action : Reduce rule [logical_and_expression -> inclusive_or_expression] with ['0'] and goto state 99
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 99
   yacc.py: 433:Stack  : direct_declarator LBRACKET logical_and_expression . LexToken(RBRACKET,']',637,14247)
   yacc.py: 469:Action : Reduce rule [logical_or_expression -> logical_and_expression] with ['0'] and goto state 91
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 91
   yacc.py: 433:Stack  : direct_declarator LBRACKET logical_or_expression . LexToken(RBRACKET,']',637,14247)
   yacc.py: 469:Action : Reduce rule [conditional_expression -> logical_or_expression] with ['0'] and goto state 106
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 106
   yacc.py: 433:Stack  : direct_declarator LBRACKET conditional_expression . LexToken(RBRACKET,']',637,14247)
   yacc.py: 469:Action : Reduce rule [constant_expression -> conditional_expression] with ['0'] and goto state 105
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 105
   yacc.py: 428:Defaulted state 105: Reduce using 105
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression . LexToken(RBRACKET,']',637,14247)
   yacc.py: 469:Action : Reduce rule [constant_expression_opt -> constant_expression] with ['0'] and goto state 104
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 104
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt . LexToken(RBRACKET,']',637,14247)
   yacc.py: 443:Action : Shift and goto state 201
   yacc.py: 408:
   yacc.py: 409:State  : 201
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt RBRACKET . LexToken(PERIOD,'.',637,14248)
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt RBRACKET . LexToken(PERIOD,'.',637,14248)
   yacc.py: 408:
   yacc.py: 409:State  : 201
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt RBRACKET . error
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt RBRACKET . error
   yacc.py: 408:
   yacc.py: 409:State  : 104
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt . error
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt . error
   yacc.py: 408:
   yacc.py: 409:State  : 47
   yacc.py: 433:Stack  : direct_declarator LBRACKET . error
   yacc.py: 573:Error  : direct_declarator LBRACKET . error
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . error
   yacc.py: 573:Error  : direct_declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'BufferType',637,14249)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(EQUALS,'=',637,14260)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['BufferType'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1de43e0> ('BufferType')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(EQUALS,'=',637,14260)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['BufferType'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1de43e0> ('BufferType')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(EQUALS,'=',637,14260)
   yacc.py: 573:Error  : declarator . LexToken(EQUALS,'=',637,14260)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'SECBUFFER_TOKEN',637,14262)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(SEMI,';',637,14277)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with [<str @ 0x21c0bb0>] and goto state 22
   yacc.py: 503:Result : <str @ 0x21c0bb0> ('SECBUFFER_TOKEN')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(SEMI,';',637,14277)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with [<str @ 0x21c0bb0>] and goto state 37
   yacc.py: 503:Result : <str @ 0x21c0bb0> ('SECBUFFER_TOKEN')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(SEMI,';',637,14277)
   yacc.py: 573:Error  : declarator . LexToken(SEMI,';',637,14277)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'bufsi',638,14281)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(LBRACKET,'[',638,14286)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['bufsi'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1de43e0> ('bufsi')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(LBRACKET,'[',638,14286)
   yacc.py: 443:Action : Shift and goto state 47
   yacc.py: 408:
   yacc.py: 409:State  : 47
   yacc.py: 433:Stack  : direct_declarator LBRACKET . LexToken(ICONST,'0',638,14287)
   yacc.py: 443:Action : Shift and goto state 95
   yacc.py: 408:
   yacc.py: 409:State  : 95
   yacc.py: 433:Stack  : direct_declarator LBRACKET ICONST . LexToken(RBRACKET,']',638,14288)
   yacc.py: 469:Action : Reduce rule [constant -> ICONST] with ['0'] and goto state 79
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 79
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant . LexToken(RBRACKET,']',638,14288)
   yacc.py: 469:Action : Reduce rule [primary_expression -> constant] with ['0'] and goto state 96
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 96
   yacc.py: 433:Stack  : direct_declarator LBRACKET primary_expression . LexToken(RBRACKET,']',638,14288)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> primary_expression] with ['0'] and goto state 86
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : direct_declarator LBRACKET postfix_expression . LexToken(RBRACKET,']',638,14288)
   yacc.py: 469:Action : Reduce rule [unary_expression -> postfix_expression] with ['0'] and goto state 75
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 75
   yacc.py: 433:Stack  : direct_declarator LBRACKET unary_expression . LexToken(RBRACKET,']',638,14288)
   yacc.py: 469:Action : Reduce rule [cast_expression -> unary_expression] with ['0'] and goto state 98
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 98
   yacc.py: 433:Stack  : direct_declarator LBRACKET cast_expression . LexToken(RBRACKET,']',638,14288)
   yacc.py: 469:Action : Reduce rule [multiplicative_expression -> cast_expression] with ['0'] and goto state 103
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 103
   yacc.py: 433:Stack  : direct_declarator LBRACKET multiplicative_expression . LexToken(RBRACKET,']',638,14288)
   yacc.py: 469:Action : Reduce rule [additive_expression -> multiplicative_expression] with ['0'] and goto state 77
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 77
   yacc.py: 433:Stack  : direct_declarator LBRACKET additive_expression . LexToken(RBRACKET,']',638,14288)
   yacc.py: 469:Action : Reduce rule [shift_expression -> additive_expression] with ['0'] and goto state 100
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 100
   yacc.py: 433:Stack  : direct_declarator LBRACKET shift_expression . LexToken(RBRACKET,']',638,14288)
   yacc.py: 469:Action : Reduce rule [relational_expression -> shift_expression] with ['0'] and goto state 88
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 88
   yacc.py: 433:Stack  : direct_declarator LBRACKET relational_expression . LexToken(RBRACKET,']',638,14288)
   yacc.py: 469:Action : Reduce rule [equality_expression -> relational_expression] with ['0'] and goto state 101
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 101
   yacc.py: 433:Stack  : direct_declarator LBRACKET equality_expression . LexToken(RBRACKET,']',638,14288)
   yacc.py: 469:Action : Reduce rule [and_expression -> equality_expression] with ['0'] and goto state 82
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 82
   yacc.py: 433:Stack  : direct_declarator LBRACKET and_expression . LexToken(RBRACKET,']',638,14288)
   yacc.py: 469:Action : Reduce rule [exclusive_or_expression -> and_expression] with ['0'] and goto state 76
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 76
   yacc.py: 433:Stack  : direct_declarator LBRACKET exclusive_or_expression . LexToken(RBRACKET,']',638,14288)
   yacc.py: 469:Action : Reduce rule [inclusive_or_expression -> exclusive_or_expression] with ['0'] and goto state 84
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 84
   yacc.py: 433:Stack  : direct_declarator LBRACKET inclusive_or_expression . LexToken(RBRACKET,']',638,14288)
   yacc.py: 469:Action : Reduce rule [logical_and_expression -> inclusive_or_expression] with ['0'] and goto state 99
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 99
   yacc.py: 433:Stack  : direct_declarator LBRACKET logical_and_expression . LexToken(RBRACKET,']',638,14288)
   yacc.py: 469:Action : Reduce rule [logical_or_expression -> logical_and_expression] with ['0'] and goto state 91
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 91
   yacc.py: 433:Stack  : direct_declarator LBRACKET logical_or_expression . LexToken(RBRACKET,']',638,14288)
   yacc.py: 469:Action : Reduce rule [conditional_expression -> logical_or_expression] with ['0'] and goto state 106
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 106
   yacc.py: 433:Stack  : direct_declarator LBRACKET conditional_expression . LexToken(RBRACKET,']',638,14288)
   yacc.py: 469:Action : Reduce rule [constant_expression -> conditional_expression] with ['0'] and goto state 105
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 105
   yacc.py: 428:Defaulted state 105: Reduce using 105
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression . LexToken(RBRACKET,']',638,14288)
   yacc.py: 469:Action : Reduce rule [constant_expression_opt -> constant_expression] with ['0'] and goto state 104
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 104
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt . LexToken(RBRACKET,']',638,14288)
   yacc.py: 443:Action : Shift and goto state 201
   yacc.py: 408:
   yacc.py: 409:State  : 201
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt RBRACKET . LexToken(PERIOD,'.',638,14289)
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt RBRACKET . LexToken(PERIOD,'.',638,14289)
   yacc.py: 408:
   yacc.py: 409:State  : 201
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt RBRACKET . error
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt RBRACKET . error
   yacc.py: 408:
   yacc.py: 409:State  : 104
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt . error
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt . error
   yacc.py: 408:
   yacc.py: 409:State  : 47
   yacc.py: 433:Stack  : direct_declarator LBRACKET . error
   yacc.py: 573:Error  : direct_declarator LBRACKET . error
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . error
   yacc.py: 573:Error  : direct_declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'cbBuffer',638,14290)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(EQUALS,'=',638,14299)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['cbBuffer'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f97c00> ('cbBuffer')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(EQUALS,'=',638,14299)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['cbBuffer'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f97c00> ('cbBuffer')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(EQUALS,'=',638,14299)
   yacc.py: 573:Error  : declarator . LexToken(EQUALS,'=',638,14299)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'pt',638,14301)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(SEMI,';',638,14303)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['pt'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f85e48> ('pt')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(SEMI,';',638,14303)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['pt'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f85e48> ('pt')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(SEMI,';',638,14303)
   yacc.py: 573:Error  : declarator . LexToken(SEMI,';',638,14303)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'bufsi',639,14307)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(LBRACKET,'[',639,14312)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['bufsi'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1de43e0> ('bufsi')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(LBRACKET,'[',639,14312)
   yacc.py: 443:Action : Shift and goto state 47
   yacc.py: 408:
   yacc.py: 409:State  : 47
   yacc.py: 433:Stack  : direct_declarator LBRACKET . LexToken(ICONST,'0',639,14313)
   yacc.py: 443:Action : Shift and goto state 95
   yacc.py: 408:
   yacc.py: 409:State  : 95
   yacc.py: 433:Stack  : direct_declarator LBRACKET ICONST . LexToken(RBRACKET,']',639,14314)
   yacc.py: 469:Action : Reduce rule [constant -> ICONST] with ['0'] and goto state 79
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 79
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant . LexToken(RBRACKET,']',639,14314)
   yacc.py: 469:Action : Reduce rule [primary_expression -> constant] with ['0'] and goto state 96
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 96
   yacc.py: 433:Stack  : direct_declarator LBRACKET primary_expression . LexToken(RBRACKET,']',639,14314)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> primary_expression] with ['0'] and goto state 86
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : direct_declarator LBRACKET postfix_expression . LexToken(RBRACKET,']',639,14314)
   yacc.py: 469:Action : Reduce rule [unary_expression -> postfix_expression] with ['0'] and goto state 75
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 75
   yacc.py: 433:Stack  : direct_declarator LBRACKET unary_expression . LexToken(RBRACKET,']',639,14314)
   yacc.py: 469:Action : Reduce rule [cast_expression -> unary_expression] with ['0'] and goto state 98
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 98
   yacc.py: 433:Stack  : direct_declarator LBRACKET cast_expression . LexToken(RBRACKET,']',639,14314)
   yacc.py: 469:Action : Reduce rule [multiplicative_expression -> cast_expression] with ['0'] and goto state 103
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 103
   yacc.py: 433:Stack  : direct_declarator LBRACKET multiplicative_expression . LexToken(RBRACKET,']',639,14314)
   yacc.py: 469:Action : Reduce rule [additive_expression -> multiplicative_expression] with ['0'] and goto state 77
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 77
   yacc.py: 433:Stack  : direct_declarator LBRACKET additive_expression . LexToken(RBRACKET,']',639,14314)
   yacc.py: 469:Action : Reduce rule [shift_expression -> additive_expression] with ['0'] and goto state 100
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 100
   yacc.py: 433:Stack  : direct_declarator LBRACKET shift_expression . LexToken(RBRACKET,']',639,14314)
   yacc.py: 469:Action : Reduce rule [relational_expression -> shift_expression] with ['0'] and goto state 88
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 88
   yacc.py: 433:Stack  : direct_declarator LBRACKET relational_expression . LexToken(RBRACKET,']',639,14314)
   yacc.py: 469:Action : Reduce rule [equality_expression -> relational_expression] with ['0'] and goto state 101
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 101
   yacc.py: 433:Stack  : direct_declarator LBRACKET equality_expression . LexToken(RBRACKET,']',639,14314)
   yacc.py: 469:Action : Reduce rule [and_expression -> equality_expression] with ['0'] and goto state 82
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 82
   yacc.py: 433:Stack  : direct_declarator LBRACKET and_expression . LexToken(RBRACKET,']',639,14314)
   yacc.py: 469:Action : Reduce rule [exclusive_or_expression -> and_expression] with ['0'] and goto state 76
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 76
   yacc.py: 433:Stack  : direct_declarator LBRACKET exclusive_or_expression . LexToken(RBRACKET,']',639,14314)
   yacc.py: 469:Action : Reduce rule [inclusive_or_expression -> exclusive_or_expression] with ['0'] and goto state 84
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 84
   yacc.py: 433:Stack  : direct_declarator LBRACKET inclusive_or_expression . LexToken(RBRACKET,']',639,14314)
   yacc.py: 469:Action : Reduce rule [logical_and_expression -> inclusive_or_expression] with ['0'] and goto state 99
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 99
   yacc.py: 433:Stack  : direct_declarator LBRACKET logical_and_expression . LexToken(RBRACKET,']',639,14314)
   yacc.py: 469:Action : Reduce rule [logical_or_expression -> logical_and_expression] with ['0'] and goto state 91
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 91
   yacc.py: 433:Stack  : direct_declarator LBRACKET logical_or_expression . LexToken(RBRACKET,']',639,14314)
   yacc.py: 469:Action : Reduce rule [conditional_expression -> logical_or_expression] with ['0'] and goto state 106
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 106
   yacc.py: 433:Stack  : direct_declarator LBRACKET conditional_expression . LexToken(RBRACKET,']',639,14314)
   yacc.py: 469:Action : Reduce rule [constant_expression -> conditional_expression] with ['0'] and goto state 105
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 105
   yacc.py: 428:Defaulted state 105: Reduce using 105
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression . LexToken(RBRACKET,']',639,14314)
   yacc.py: 469:Action : Reduce rule [constant_expression_opt -> constant_expression] with ['0'] and goto state 104
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 104
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt . LexToken(RBRACKET,']',639,14314)
   yacc.py: 443:Action : Shift and goto state 201
   yacc.py: 408:
   yacc.py: 409:State  : 201
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt RBRACKET . LexToken(PERIOD,'.',639,14315)
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt RBRACKET . LexToken(PERIOD,'.',639,14315)
   yacc.py: 408:
   yacc.py: 409:State  : 201
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt RBRACKET . error
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt RBRACKET . error
   yacc.py: 408:
   yacc.py: 409:State  : 104
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt . error
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt . error
   yacc.py: 408:
   yacc.py: 409:State  : 47
   yacc.py: 433:Stack  : direct_declarator LBRACKET . error
   yacc.py: 573:Error  : direct_declarator LBRACKET . error
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . error
   yacc.py: 573:Error  : direct_declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'pvBuffer',639,14316)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(EQUALS,'=',639,14325)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['pvBuffer'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f97bc0> ('pvBuffer')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(EQUALS,'=',639,14325)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['pvBuffer'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f97bc0> ('pvBuffer')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(EQUALS,'=',639,14325)
   yacc.py: 573:Error  : declarator . LexToken(EQUALS,'=',639,14325)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'t',639,14327)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(SEMI,';',639,14328)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['t'] and goto state 22
   yacc.py: 503:Result : <str @ 0x5b4aa0> ('t')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(SEMI,';',639,14328)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['t'] and goto state 37
   yacc.py: 503:Result : <str @ 0x5b4aa0> ('t')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(SEMI,';',639,14328)
   yacc.py: 573:Error  : declarator . LexToken(SEMI,';',639,14328)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'bufsi',640,14332)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(LBRACKET,'[',640,14337)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['bufsi'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1de43e0> ('bufsi')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(LBRACKET,'[',640,14337)
   yacc.py: 443:Action : Shift and goto state 47
   yacc.py: 408:
   yacc.py: 409:State  : 47
   yacc.py: 433:Stack  : direct_declarator LBRACKET . LexToken(ICONST,'1',640,14338)
   yacc.py: 443:Action : Shift and goto state 95
   yacc.py: 408:
   yacc.py: 409:State  : 95
   yacc.py: 433:Stack  : direct_declarator LBRACKET ICONST . LexToken(RBRACKET,']',640,14339)
   yacc.py: 469:Action : Reduce rule [constant -> ICONST] with ['1'] and goto state 79
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 79
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant . LexToken(RBRACKET,']',640,14339)
   yacc.py: 469:Action : Reduce rule [primary_expression -> constant] with ['1'] and goto state 96
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 96
   yacc.py: 433:Stack  : direct_declarator LBRACKET primary_expression . LexToken(RBRACKET,']',640,14339)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> primary_expression] with ['1'] and goto state 86
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : direct_declarator LBRACKET postfix_expression . LexToken(RBRACKET,']',640,14339)
   yacc.py: 469:Action : Reduce rule [unary_expression -> postfix_expression] with ['1'] and goto state 75
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 75
   yacc.py: 433:Stack  : direct_declarator LBRACKET unary_expression . LexToken(RBRACKET,']',640,14339)
   yacc.py: 469:Action : Reduce rule [cast_expression -> unary_expression] with ['1'] and goto state 98
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 98
   yacc.py: 433:Stack  : direct_declarator LBRACKET cast_expression . LexToken(RBRACKET,']',640,14339)
   yacc.py: 469:Action : Reduce rule [multiplicative_expression -> cast_expression] with ['1'] and goto state 103
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 103
   yacc.py: 433:Stack  : direct_declarator LBRACKET multiplicative_expression . LexToken(RBRACKET,']',640,14339)
   yacc.py: 469:Action : Reduce rule [additive_expression -> multiplicative_expression] with ['1'] and goto state 77
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 77
   yacc.py: 433:Stack  : direct_declarator LBRACKET additive_expression . LexToken(RBRACKET,']',640,14339)
   yacc.py: 469:Action : Reduce rule [shift_expression -> additive_expression] with ['1'] and goto state 100
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 100
   yacc.py: 433:Stack  : direct_declarator LBRACKET shift_expression . LexToken(RBRACKET,']',640,14339)
   yacc.py: 469:Action : Reduce rule [relational_expression -> shift_expression] with ['1'] and goto state 88
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 88
   yacc.py: 433:Stack  : direct_declarator LBRACKET relational_expression . LexToken(RBRACKET,']',640,14339)
   yacc.py: 469:Action : Reduce rule [equality_expression -> relational_expression] with ['1'] and goto state 101
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 101
   yacc.py: 433:Stack  : direct_declarator LBRACKET equality_expression . LexToken(RBRACKET,']',640,14339)
   yacc.py: 469:Action : Reduce rule [and_expression -> equality_expression] with ['1'] and goto state 82
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 82
   yacc.py: 433:Stack  : direct_declarator LBRACKET and_expression . LexToken(RBRACKET,']',640,14339)
   yacc.py: 469:Action : Reduce rule [exclusive_or_expression -> and_expression] with ['1'] and goto state 76
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 76
   yacc.py: 433:Stack  : direct_declarator LBRACKET exclusive_or_expression . LexToken(RBRACKET,']',640,14339)
   yacc.py: 469:Action : Reduce rule [inclusive_or_expression -> exclusive_or_expression] with ['1'] and goto state 84
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 84
   yacc.py: 433:Stack  : direct_declarator LBRACKET inclusive_or_expression . LexToken(RBRACKET,']',640,14339)
   yacc.py: 469:Action : Reduce rule [logical_and_expression -> inclusive_or_expression] with ['1'] and goto state 99
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 99
   yacc.py: 433:Stack  : direct_declarator LBRACKET logical_and_expression . LexToken(RBRACKET,']',640,14339)
   yacc.py: 469:Action : Reduce rule [logical_or_expression -> logical_and_expression] with ['1'] and goto state 91
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 91
   yacc.py: 433:Stack  : direct_declarator LBRACKET logical_or_expression . LexToken(RBRACKET,']',640,14339)
   yacc.py: 469:Action : Reduce rule [conditional_expression -> logical_or_expression] with ['1'] and goto state 106
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 106
   yacc.py: 433:Stack  : direct_declarator LBRACKET conditional_expression . LexToken(RBRACKET,']',640,14339)
   yacc.py: 469:Action : Reduce rule [constant_expression -> conditional_expression] with ['1'] and goto state 105
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 105
   yacc.py: 428:Defaulted state 105: Reduce using 105
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression . LexToken(RBRACKET,']',640,14339)
   yacc.py: 469:Action : Reduce rule [constant_expression_opt -> constant_expression] with ['1'] and goto state 104
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 104
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt . LexToken(RBRACKET,']',640,14339)
   yacc.py: 443:Action : Shift and goto state 201
   yacc.py: 408:
   yacc.py: 409:State  : 201
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt RBRACKET . LexToken(PERIOD,'.',640,14340)
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt RBRACKET . LexToken(PERIOD,'.',640,14340)
   yacc.py: 408:
   yacc.py: 409:State  : 201
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt RBRACKET . error
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt RBRACKET . error
   yacc.py: 408:
   yacc.py: 409:State  : 104
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt . error
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt . error
   yacc.py: 408:
   yacc.py: 409:State  : 47
   yacc.py: 433:Stack  : direct_declarator LBRACKET . error
   yacc.py: 573:Error  : direct_declarator LBRACKET . error
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . error
   yacc.py: 573:Error  : direct_declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'BufferType',640,14341)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(EQUALS,'=',640,14352)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['BufferType'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f974c0> ('BufferType')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(EQUALS,'=',640,14352)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['BufferType'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f974c0> ('BufferType')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(EQUALS,'=',640,14352)
   yacc.py: 573:Error  : declarator . LexToken(EQUALS,'=',640,14352)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'SECBUFFER_EMPTY',640,14354)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(SEMI,';',640,14369)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with [<str @ 0x21c0ca0>] and goto state 22
   yacc.py: 503:Result : <str @ 0x21c0ca0> ('SECBUFFER_EMPTY')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(SEMI,';',640,14369)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with [<str @ 0x21c0ca0>] and goto state 37
   yacc.py: 503:Result : <str @ 0x21c0ca0> ('SECBUFFER_EMPTY')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(SEMI,';',640,14369)
   yacc.py: 573:Error  : declarator . LexToken(SEMI,';',640,14369)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'bufsi',641,14373)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(LBRACKET,'[',641,14378)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['bufsi'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1de43e0> ('bufsi')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(LBRACKET,'[',641,14378)
   yacc.py: 443:Action : Shift and goto state 47
   yacc.py: 408:
   yacc.py: 409:State  : 47
   yacc.py: 433:Stack  : direct_declarator LBRACKET . LexToken(ICONST,'1',641,14379)
   yacc.py: 443:Action : Shift and goto state 95
   yacc.py: 408:
   yacc.py: 409:State  : 95
   yacc.py: 433:Stack  : direct_declarator LBRACKET ICONST . LexToken(RBRACKET,']',641,14380)
   yacc.py: 469:Action : Reduce rule [constant -> ICONST] with ['1'] and goto state 79
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 79
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant . LexToken(RBRACKET,']',641,14380)
   yacc.py: 469:Action : Reduce rule [primary_expression -> constant] with ['1'] and goto state 96
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 96
   yacc.py: 433:Stack  : direct_declarator LBRACKET primary_expression . LexToken(RBRACKET,']',641,14380)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> primary_expression] with ['1'] and goto state 86
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : direct_declarator LBRACKET postfix_expression . LexToken(RBRACKET,']',641,14380)
   yacc.py: 469:Action : Reduce rule [unary_expression -> postfix_expression] with ['1'] and goto state 75
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 75
   yacc.py: 433:Stack  : direct_declarator LBRACKET unary_expression . LexToken(RBRACKET,']',641,14380)
   yacc.py: 469:Action : Reduce rule [cast_expression -> unary_expression] with ['1'] and goto state 98
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 98
   yacc.py: 433:Stack  : direct_declarator LBRACKET cast_expression . LexToken(RBRACKET,']',641,14380)
   yacc.py: 469:Action : Reduce rule [multiplicative_expression -> cast_expression] with ['1'] and goto state 103
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 103
   yacc.py: 433:Stack  : direct_declarator LBRACKET multiplicative_expression . LexToken(RBRACKET,']',641,14380)
   yacc.py: 469:Action : Reduce rule [additive_expression -> multiplicative_expression] with ['1'] and goto state 77
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 77
   yacc.py: 433:Stack  : direct_declarator LBRACKET additive_expression . LexToken(RBRACKET,']',641,14380)
   yacc.py: 469:Action : Reduce rule [shift_expression -> additive_expression] with ['1'] and goto state 100
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 100
   yacc.py: 433:Stack  : direct_declarator LBRACKET shift_expression . LexToken(RBRACKET,']',641,14380)
   yacc.py: 469:Action : Reduce rule [relational_expression -> shift_expression] with ['1'] and goto state 88
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 88
   yacc.py: 433:Stack  : direct_declarator LBRACKET relational_expression . LexToken(RBRACKET,']',641,14380)
   yacc.py: 469:Action : Reduce rule [equality_expression -> relational_expression] with ['1'] and goto state 101
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 101
   yacc.py: 433:Stack  : direct_declarator LBRACKET equality_expression . LexToken(RBRACKET,']',641,14380)
   yacc.py: 469:Action : Reduce rule [and_expression -> equality_expression] with ['1'] and goto state 82
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 82
   yacc.py: 433:Stack  : direct_declarator LBRACKET and_expression . LexToken(RBRACKET,']',641,14380)
   yacc.py: 469:Action : Reduce rule [exclusive_or_expression -> and_expression] with ['1'] and goto state 76
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 76
   yacc.py: 433:Stack  : direct_declarator LBRACKET exclusive_or_expression . LexToken(RBRACKET,']',641,14380)
   yacc.py: 469:Action : Reduce rule [inclusive_or_expression -> exclusive_or_expression] with ['1'] and goto state 84
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 84
   yacc.py: 433:Stack  : direct_declarator LBRACKET inclusive_or_expression . LexToken(RBRACKET,']',641,14380)
   yacc.py: 469:Action : Reduce rule [logical_and_expression -> inclusive_or_expression] with ['1'] and goto state 99
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 99
   yacc.py: 433:Stack  : direct_declarator LBRACKET logical_and_expression . LexToken(RBRACKET,']',641,14380)
   yacc.py: 469:Action : Reduce rule [logical_or_expression -> logical_and_expression] with ['1'] and goto state 91
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 91
   yacc.py: 433:Stack  : direct_declarator LBRACKET logical_or_expression . LexToken(RBRACKET,']',641,14380)
   yacc.py: 469:Action : Reduce rule [conditional_expression -> logical_or_expression] with ['1'] and goto state 106
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 106
   yacc.py: 433:Stack  : direct_declarator LBRACKET conditional_expression . LexToken(RBRACKET,']',641,14380)
   yacc.py: 469:Action : Reduce rule [constant_expression -> conditional_expression] with ['1'] and goto state 105
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 105
   yacc.py: 428:Defaulted state 105: Reduce using 105
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression . LexToken(RBRACKET,']',641,14380)
   yacc.py: 469:Action : Reduce rule [constant_expression_opt -> constant_expression] with ['1'] and goto state 104
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 104
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt . LexToken(RBRACKET,']',641,14380)
   yacc.py: 443:Action : Shift and goto state 201
   yacc.py: 408:
   yacc.py: 409:State  : 201
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt RBRACKET . LexToken(PERIOD,'.',641,14381)
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt RBRACKET . LexToken(PERIOD,'.',641,14381)
   yacc.py: 408:
   yacc.py: 409:State  : 201
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt RBRACKET . error
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt RBRACKET . error
   yacc.py: 408:
   yacc.py: 409:State  : 104
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt . error
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt . error
   yacc.py: 408:
   yacc.py: 409:State  : 47
   yacc.py: 433:Stack  : direct_declarator LBRACKET . error
   yacc.py: 573:Error  : direct_declarator LBRACKET . error
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . error
   yacc.py: 573:Error  : direct_declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'cbBuffer',641,14382)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(EQUALS,'=',641,14391)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['cbBuffer'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f97680> ('cbBuffer')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(EQUALS,'=',641,14391)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['cbBuffer'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f97680> ('cbBuffer')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(EQUALS,'=',641,14391)
   yacc.py: 573:Error  : declarator . LexToken(EQUALS,'=',641,14391)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'0',641,14393)
   yacc.py: 573:Error  : . LexToken(ICONST,'0',641,14393)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(SEMI,';',641,14394)
   yacc.py: 573:Error  : . LexToken(SEMI,';',641,14394)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'bufsi',642,14398)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(LBRACKET,'[',642,14403)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['bufsi'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1de43e0> ('bufsi')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(LBRACKET,'[',642,14403)
   yacc.py: 443:Action : Shift and goto state 47
   yacc.py: 408:
   yacc.py: 409:State  : 47
   yacc.py: 433:Stack  : direct_declarator LBRACKET . LexToken(ICONST,'1',642,14404)
   yacc.py: 443:Action : Shift and goto state 95
   yacc.py: 408:
   yacc.py: 409:State  : 95
   yacc.py: 433:Stack  : direct_declarator LBRACKET ICONST . LexToken(RBRACKET,']',642,14405)
   yacc.py: 469:Action : Reduce rule [constant -> ICONST] with ['1'] and goto state 79
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 79
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant . LexToken(RBRACKET,']',642,14405)
   yacc.py: 469:Action : Reduce rule [primary_expression -> constant] with ['1'] and goto state 96
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 96
   yacc.py: 433:Stack  : direct_declarator LBRACKET primary_expression . LexToken(RBRACKET,']',642,14405)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> primary_expression] with ['1'] and goto state 86
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : direct_declarator LBRACKET postfix_expression . LexToken(RBRACKET,']',642,14405)
   yacc.py: 469:Action : Reduce rule [unary_expression -> postfix_expression] with ['1'] and goto state 75
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 75
   yacc.py: 433:Stack  : direct_declarator LBRACKET unary_expression . LexToken(RBRACKET,']',642,14405)
   yacc.py: 469:Action : Reduce rule [cast_expression -> unary_expression] with ['1'] and goto state 98
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 98
   yacc.py: 433:Stack  : direct_declarator LBRACKET cast_expression . LexToken(RBRACKET,']',642,14405)
   yacc.py: 469:Action : Reduce rule [multiplicative_expression -> cast_expression] with ['1'] and goto state 103
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 103
   yacc.py: 433:Stack  : direct_declarator LBRACKET multiplicative_expression . LexToken(RBRACKET,']',642,14405)
   yacc.py: 469:Action : Reduce rule [additive_expression -> multiplicative_expression] with ['1'] and goto state 77
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 77
   yacc.py: 433:Stack  : direct_declarator LBRACKET additive_expression . LexToken(RBRACKET,']',642,14405)
   yacc.py: 469:Action : Reduce rule [shift_expression -> additive_expression] with ['1'] and goto state 100
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 100
   yacc.py: 433:Stack  : direct_declarator LBRACKET shift_expression . LexToken(RBRACKET,']',642,14405)
   yacc.py: 469:Action : Reduce rule [relational_expression -> shift_expression] with ['1'] and goto state 88
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 88
   yacc.py: 433:Stack  : direct_declarator LBRACKET relational_expression . LexToken(RBRACKET,']',642,14405)
   yacc.py: 469:Action : Reduce rule [equality_expression -> relational_expression] with ['1'] and goto state 101
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 101
   yacc.py: 433:Stack  : direct_declarator LBRACKET equality_expression . LexToken(RBRACKET,']',642,14405)
   yacc.py: 469:Action : Reduce rule [and_expression -> equality_expression] with ['1'] and goto state 82
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 82
   yacc.py: 433:Stack  : direct_declarator LBRACKET and_expression . LexToken(RBRACKET,']',642,14405)
   yacc.py: 469:Action : Reduce rule [exclusive_or_expression -> and_expression] with ['1'] and goto state 76
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 76
   yacc.py: 433:Stack  : direct_declarator LBRACKET exclusive_or_expression . LexToken(RBRACKET,']',642,14405)
   yacc.py: 469:Action : Reduce rule [inclusive_or_expression -> exclusive_or_expression] with ['1'] and goto state 84
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 84
   yacc.py: 433:Stack  : direct_declarator LBRACKET inclusive_or_expression . LexToken(RBRACKET,']',642,14405)
   yacc.py: 469:Action : Reduce rule [logical_and_expression -> inclusive_or_expression] with ['1'] and goto state 99
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 99
   yacc.py: 433:Stack  : direct_declarator LBRACKET logical_and_expression . LexToken(RBRACKET,']',642,14405)
   yacc.py: 469:Action : Reduce rule [logical_or_expression -> logical_and_expression] with ['1'] and goto state 91
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 91
   yacc.py: 433:Stack  : direct_declarator LBRACKET logical_or_expression . LexToken(RBRACKET,']',642,14405)
   yacc.py: 469:Action : Reduce rule [conditional_expression -> logical_or_expression] with ['1'] and goto state 106
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 106
   yacc.py: 433:Stack  : direct_declarator LBRACKET conditional_expression . LexToken(RBRACKET,']',642,14405)
   yacc.py: 469:Action : Reduce rule [constant_expression -> conditional_expression] with ['1'] and goto state 105
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 105
   yacc.py: 428:Defaulted state 105: Reduce using 105
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression . LexToken(RBRACKET,']',642,14405)
   yacc.py: 469:Action : Reduce rule [constant_expression_opt -> constant_expression] with ['1'] and goto state 104
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 104
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt . LexToken(RBRACKET,']',642,14405)
   yacc.py: 443:Action : Shift and goto state 201
   yacc.py: 408:
   yacc.py: 409:State  : 201
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt RBRACKET . LexToken(PERIOD,'.',642,14406)
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt RBRACKET . LexToken(PERIOD,'.',642,14406)
   yacc.py: 408:
   yacc.py: 409:State  : 201
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt RBRACKET . error
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt RBRACKET . error
   yacc.py: 408:
   yacc.py: 409:State  : 104
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt . error
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt . error
   yacc.py: 408:
   yacc.py: 409:State  : 47
   yacc.py: 433:Stack  : direct_declarator LBRACKET . error
   yacc.py: 573:Error  : direct_declarator LBRACKET . error
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . error
   yacc.py: 573:Error  : direct_declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'pvBuffer',642,14407)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(EQUALS,'=',642,14416)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['pvBuffer'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f974e0> ('pvBuffer')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(EQUALS,'=',642,14416)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['pvBuffer'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f974e0> ('pvBuffer')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(EQUALS,'=',642,14416)
   yacc.py: 573:Error  : declarator . LexToken(EQUALS,'=',642,14416)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'0',642,14418)
   yacc.py: 573:Error  : . LexToken(ICONST,'0',642,14418)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(SEMI,';',642,14419)
   yacc.py: 573:Error  : . LexToken(SEMI,';',642,14419)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'sbin',643,14423)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(PERIOD,'.',643,14427)
   yacc.py: 573:Error  : ID . LexToken(PERIOD,'.',643,14427)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'ulVersion',643,14428)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(EQUALS,'=',643,14438)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['ulVersion'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f97c00> ('ulVersion')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(EQUALS,'=',643,14438)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['ulVersion'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f97c00> ('ulVersion')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(EQUALS,'=',643,14438)
   yacc.py: 573:Error  : declarator . LexToken(EQUALS,'=',643,14438)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'SECBUFFER_VERSION',643,14440)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(SEMI,';',643,14457)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with [<str @ 0x21c0bb0>] and goto state 22
   yacc.py: 503:Result : <str @ 0x21c0bb0> ('SECBUFFER_VERSION')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(SEMI,';',643,14457)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with [<str @ 0x21c0bb0>] and goto state 37
   yacc.py: 503:Result : <str @ 0x21c0bb0> ('SECBUFFER_VERSION')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(SEMI,';',643,14457)
   yacc.py: 573:Error  : declarator . LexToken(SEMI,';',643,14457)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'sbin',644,14461)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(PERIOD,'.',644,14465)
   yacc.py: 573:Error  : ID . LexToken(PERIOD,'.',644,14465)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'pBuffers',644,14466)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(EQUALS,'=',644,14475)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['pBuffers'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f97c60> ('pBuffers')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(EQUALS,'=',644,14475)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['pBuffers'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f97c60> ('pBuffers')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(EQUALS,'=',644,14475)
   yacc.py: 573:Error  : declarator . LexToken(EQUALS,'=',644,14475)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'bufsi',644,14477)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(SEMI,';',644,14482)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['bufsi'] and goto state 22
   yacc.py: 503:Result : <str @ 0x21ae280> ('bufsi')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(SEMI,';',644,14482)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['bufsi'] and goto state 37
   yacc.py: 503:Result : <str @ 0x21ae280> ('bufsi')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(SEMI,';',644,14482)
   yacc.py: 573:Error  : declarator . LexToken(SEMI,';',644,14482)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'sbin',645,14486)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(PERIOD,'.',645,14490)
   yacc.py: 573:Error  : ID . LexToken(PERIOD,'.',645,14490)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'cBuffers',645,14491)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(EQUALS,'=',645,14500)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['cBuffers'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f97680> ('cBuffers')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(EQUALS,'=',645,14500)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['cBuffers'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f97680> ('cBuffers')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(EQUALS,'=',645,14500)
   yacc.py: 573:Error  : declarator . LexToken(EQUALS,'=',645,14500)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'2',645,14502)
   yacc.py: 573:Error  : . LexToken(ICONST,'2',645,14502)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(SEMI,';',645,14503)
   yacc.py: 573:Error  : . LexToken(SEMI,';',645,14503)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'bufso',647,14508)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(LBRACKET,'[',647,14513)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['bufso'] and goto state 22
   yacc.py: 503:Result : <str @ 0x671440> ('bufso')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(LBRACKET,'[',647,14513)
   yacc.py: 443:Action : Shift and goto state 47
   yacc.py: 408:
   yacc.py: 409:State  : 47
   yacc.py: 433:Stack  : direct_declarator LBRACKET . LexToken(ICONST,'0',647,14514)
   yacc.py: 443:Action : Shift and goto state 95
   yacc.py: 408:
   yacc.py: 409:State  : 95
   yacc.py: 433:Stack  : direct_declarator LBRACKET ICONST . LexToken(RBRACKET,']',647,14515)
   yacc.py: 469:Action : Reduce rule [constant -> ICONST] with ['0'] and goto state 79
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 79
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant . LexToken(RBRACKET,']',647,14515)
   yacc.py: 469:Action : Reduce rule [primary_expression -> constant] with ['0'] and goto state 96
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 96
   yacc.py: 433:Stack  : direct_declarator LBRACKET primary_expression . LexToken(RBRACKET,']',647,14515)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> primary_expression] with ['0'] and goto state 86
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : direct_declarator LBRACKET postfix_expression . LexToken(RBRACKET,']',647,14515)
   yacc.py: 469:Action : Reduce rule [unary_expression -> postfix_expression] with ['0'] and goto state 75
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 75
   yacc.py: 433:Stack  : direct_declarator LBRACKET unary_expression . LexToken(RBRACKET,']',647,14515)
   yacc.py: 469:Action : Reduce rule [cast_expression -> unary_expression] with ['0'] and goto state 98
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 98
   yacc.py: 433:Stack  : direct_declarator LBRACKET cast_expression . LexToken(RBRACKET,']',647,14515)
   yacc.py: 469:Action : Reduce rule [multiplicative_expression -> cast_expression] with ['0'] and goto state 103
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 103
   yacc.py: 433:Stack  : direct_declarator LBRACKET multiplicative_expression . LexToken(RBRACKET,']',647,14515)
   yacc.py: 469:Action : Reduce rule [additive_expression -> multiplicative_expression] with ['0'] and goto state 77
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 77
   yacc.py: 433:Stack  : direct_declarator LBRACKET additive_expression . LexToken(RBRACKET,']',647,14515)
   yacc.py: 469:Action : Reduce rule [shift_expression -> additive_expression] with ['0'] and goto state 100
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 100
   yacc.py: 433:Stack  : direct_declarator LBRACKET shift_expression . LexToken(RBRACKET,']',647,14515)
   yacc.py: 469:Action : Reduce rule [relational_expression -> shift_expression] with ['0'] and goto state 88
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 88
   yacc.py: 433:Stack  : direct_declarator LBRACKET relational_expression . LexToken(RBRACKET,']',647,14515)
   yacc.py: 469:Action : Reduce rule [equality_expression -> relational_expression] with ['0'] and goto state 101
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 101
   yacc.py: 433:Stack  : direct_declarator LBRACKET equality_expression . LexToken(RBRACKET,']',647,14515)
   yacc.py: 469:Action : Reduce rule [and_expression -> equality_expression] with ['0'] and goto state 82
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 82
   yacc.py: 433:Stack  : direct_declarator LBRACKET and_expression . LexToken(RBRACKET,']',647,14515)
   yacc.py: 469:Action : Reduce rule [exclusive_or_expression -> and_expression] with ['0'] and goto state 76
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 76
   yacc.py: 433:Stack  : direct_declarator LBRACKET exclusive_or_expression . LexToken(RBRACKET,']',647,14515)
   yacc.py: 469:Action : Reduce rule [inclusive_or_expression -> exclusive_or_expression] with ['0'] and goto state 84
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 84
   yacc.py: 433:Stack  : direct_declarator LBRACKET inclusive_or_expression . LexToken(RBRACKET,']',647,14515)
   yacc.py: 469:Action : Reduce rule [logical_and_expression -> inclusive_or_expression] with ['0'] and goto state 99
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 99
   yacc.py: 433:Stack  : direct_declarator LBRACKET logical_and_expression . LexToken(RBRACKET,']',647,14515)
   yacc.py: 469:Action : Reduce rule [logical_or_expression -> logical_and_expression] with ['0'] and goto state 91
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 91
   yacc.py: 433:Stack  : direct_declarator LBRACKET logical_or_expression . LexToken(RBRACKET,']',647,14515)
   yacc.py: 469:Action : Reduce rule [conditional_expression -> logical_or_expression] with ['0'] and goto state 106
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 106
   yacc.py: 433:Stack  : direct_declarator LBRACKET conditional_expression . LexToken(RBRACKET,']',647,14515)
   yacc.py: 469:Action : Reduce rule [constant_expression -> conditional_expression] with ['0'] and goto state 105
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 105
   yacc.py: 428:Defaulted state 105: Reduce using 105
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression . LexToken(RBRACKET,']',647,14515)
   yacc.py: 469:Action : Reduce rule [constant_expression_opt -> constant_expression] with ['0'] and goto state 104
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 104
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt . LexToken(RBRACKET,']',647,14515)
   yacc.py: 443:Action : Shift and goto state 201
   yacc.py: 408:
   yacc.py: 409:State  : 201
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt RBRACKET . LexToken(PERIOD,'.',647,14516)
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt RBRACKET . LexToken(PERIOD,'.',647,14516)
   yacc.py: 408:
   yacc.py: 409:State  : 201
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt RBRACKET . error
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt RBRACKET . error
   yacc.py: 408:
   yacc.py: 409:State  : 104
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt . error
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt . error
   yacc.py: 408:
   yacc.py: 409:State  : 47
   yacc.py: 433:Stack  : direct_declarator LBRACKET . error
   yacc.py: 573:Error  : direct_declarator LBRACKET . error
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . error
   yacc.py: 573:Error  : direct_declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'pvBuffer',647,14517)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(EQUALS,'=',647,14527)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['pvBuffer'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f974c0> ('pvBuffer')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(EQUALS,'=',647,14527)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['pvBuffer'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f974c0> ('pvBuffer')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(EQUALS,'=',647,14527)
   yacc.py: 573:Error  : declarator . LexToken(EQUALS,'=',647,14527)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'NULL',647,14529)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(SEMI,';',647,14533)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['NULL'] and goto state 22
   yacc.py: 503:Result : <str @ 0x21ae280> ('NULL')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(SEMI,';',647,14533)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['NULL'] and goto state 37
   yacc.py: 503:Result : <str @ 0x21ae280> ('NULL')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(SEMI,';',647,14533)
   yacc.py: 573:Error  : declarator . LexToken(SEMI,';',647,14533)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'bufso',648,14537)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(LBRACKET,'[',648,14542)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['bufso'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1de43e0> ('bufso')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(LBRACKET,'[',648,14542)
   yacc.py: 443:Action : Shift and goto state 47
   yacc.py: 408:
   yacc.py: 409:State  : 47
   yacc.py: 433:Stack  : direct_declarator LBRACKET . LexToken(ICONST,'0',648,14543)
   yacc.py: 443:Action : Shift and goto state 95
   yacc.py: 408:
   yacc.py: 409:State  : 95
   yacc.py: 433:Stack  : direct_declarator LBRACKET ICONST . LexToken(RBRACKET,']',648,14544)
   yacc.py: 469:Action : Reduce rule [constant -> ICONST] with ['0'] and goto state 79
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 79
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant . LexToken(RBRACKET,']',648,14544)
   yacc.py: 469:Action : Reduce rule [primary_expression -> constant] with ['0'] and goto state 96
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 96
   yacc.py: 433:Stack  : direct_declarator LBRACKET primary_expression . LexToken(RBRACKET,']',648,14544)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> primary_expression] with ['0'] and goto state 86
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : direct_declarator LBRACKET postfix_expression . LexToken(RBRACKET,']',648,14544)
   yacc.py: 469:Action : Reduce rule [unary_expression -> postfix_expression] with ['0'] and goto state 75
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 75
   yacc.py: 433:Stack  : direct_declarator LBRACKET unary_expression . LexToken(RBRACKET,']',648,14544)
   yacc.py: 469:Action : Reduce rule [cast_expression -> unary_expression] with ['0'] and goto state 98
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 98
   yacc.py: 433:Stack  : direct_declarator LBRACKET cast_expression . LexToken(RBRACKET,']',648,14544)
   yacc.py: 469:Action : Reduce rule [multiplicative_expression -> cast_expression] with ['0'] and goto state 103
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 103
   yacc.py: 433:Stack  : direct_declarator LBRACKET multiplicative_expression . LexToken(RBRACKET,']',648,14544)
   yacc.py: 469:Action : Reduce rule [additive_expression -> multiplicative_expression] with ['0'] and goto state 77
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 77
   yacc.py: 433:Stack  : direct_declarator LBRACKET additive_expression . LexToken(RBRACKET,']',648,14544)
   yacc.py: 469:Action : Reduce rule [shift_expression -> additive_expression] with ['0'] and goto state 100
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 100
   yacc.py: 433:Stack  : direct_declarator LBRACKET shift_expression . LexToken(RBRACKET,']',648,14544)
   yacc.py: 469:Action : Reduce rule [relational_expression -> shift_expression] with ['0'] and goto state 88
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 88
   yacc.py: 433:Stack  : direct_declarator LBRACKET relational_expression . LexToken(RBRACKET,']',648,14544)
   yacc.py: 469:Action : Reduce rule [equality_expression -> relational_expression] with ['0'] and goto state 101
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 101
   yacc.py: 433:Stack  : direct_declarator LBRACKET equality_expression . LexToken(RBRACKET,']',648,14544)
   yacc.py: 469:Action : Reduce rule [and_expression -> equality_expression] with ['0'] and goto state 82
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 82
   yacc.py: 433:Stack  : direct_declarator LBRACKET and_expression . LexToken(RBRACKET,']',648,14544)
   yacc.py: 469:Action : Reduce rule [exclusive_or_expression -> and_expression] with ['0'] and goto state 76
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 76
   yacc.py: 433:Stack  : direct_declarator LBRACKET exclusive_or_expression . LexToken(RBRACKET,']',648,14544)
   yacc.py: 469:Action : Reduce rule [inclusive_or_expression -> exclusive_or_expression] with ['0'] and goto state 84
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 84
   yacc.py: 433:Stack  : direct_declarator LBRACKET inclusive_or_expression . LexToken(RBRACKET,']',648,14544)
   yacc.py: 469:Action : Reduce rule [logical_and_expression -> inclusive_or_expression] with ['0'] and goto state 99
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 99
   yacc.py: 433:Stack  : direct_declarator LBRACKET logical_and_expression . LexToken(RBRACKET,']',648,14544)
   yacc.py: 469:Action : Reduce rule [logical_or_expression -> logical_and_expression] with ['0'] and goto state 91
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 91
   yacc.py: 433:Stack  : direct_declarator LBRACKET logical_or_expression . LexToken(RBRACKET,']',648,14544)
   yacc.py: 469:Action : Reduce rule [conditional_expression -> logical_or_expression] with ['0'] and goto state 106
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 106
   yacc.py: 433:Stack  : direct_declarator LBRACKET conditional_expression . LexToken(RBRACKET,']',648,14544)
   yacc.py: 469:Action : Reduce rule [constant_expression -> conditional_expression] with ['0'] and goto state 105
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 105
   yacc.py: 428:Defaulted state 105: Reduce using 105
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression . LexToken(RBRACKET,']',648,14544)
   yacc.py: 469:Action : Reduce rule [constant_expression_opt -> constant_expression] with ['0'] and goto state 104
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 104
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt . LexToken(RBRACKET,']',648,14544)
   yacc.py: 443:Action : Shift and goto state 201
   yacc.py: 408:
   yacc.py: 409:State  : 201
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt RBRACKET . LexToken(PERIOD,'.',648,14545)
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt RBRACKET . LexToken(PERIOD,'.',648,14545)
   yacc.py: 408:
   yacc.py: 409:State  : 201
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt RBRACKET . error
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt RBRACKET . error
   yacc.py: 408:
   yacc.py: 409:State  : 104
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt . error
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt . error
   yacc.py: 408:
   yacc.py: 409:State  : 47
   yacc.py: 433:Stack  : direct_declarator LBRACKET . error
   yacc.py: 573:Error  : direct_declarator LBRACKET . error
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . error
   yacc.py: 573:Error  : direct_declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'BufferType',648,14546)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(EQUALS,'=',648,14556)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['BufferType'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f97bc0> ('BufferType')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(EQUALS,'=',648,14556)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['BufferType'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f97bc0> ('BufferType')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(EQUALS,'=',648,14556)
   yacc.py: 573:Error  : declarator . LexToken(EQUALS,'=',648,14556)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'SECBUFFER_TOKEN',648,14558)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(SEMI,';',648,14573)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with [<str @ 0x21c0c28>] and goto state 22
   yacc.py: 503:Result : <str @ 0x21c0c28> ('SECBUFFER_TOKEN')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(SEMI,';',648,14573)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with [<str @ 0x21c0c28>] and goto state 37
   yacc.py: 503:Result : <str @ 0x21c0c28> ('SECBUFFER_TOKEN')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(SEMI,';',648,14573)
   yacc.py: 573:Error  : declarator . LexToken(SEMI,';',648,14573)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'bufso',649,14581)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(LBRACKET,'[',649,14586)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['bufso'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1de43e0> ('bufso')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(LBRACKET,'[',649,14586)
   yacc.py: 443:Action : Shift and goto state 47
   yacc.py: 408:
   yacc.py: 409:State  : 47
   yacc.py: 433:Stack  : direct_declarator LBRACKET . LexToken(ICONST,'0',649,14587)
   yacc.py: 443:Action : Shift and goto state 95
   yacc.py: 408:
   yacc.py: 409:State  : 95
   yacc.py: 433:Stack  : direct_declarator LBRACKET ICONST . LexToken(RBRACKET,']',649,14588)
   yacc.py: 469:Action : Reduce rule [constant -> ICONST] with ['0'] and goto state 79
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 79
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant . LexToken(RBRACKET,']',649,14588)
   yacc.py: 469:Action : Reduce rule [primary_expression -> constant] with ['0'] and goto state 96
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 96
   yacc.py: 433:Stack  : direct_declarator LBRACKET primary_expression . LexToken(RBRACKET,']',649,14588)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> primary_expression] with ['0'] and goto state 86
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : direct_declarator LBRACKET postfix_expression . LexToken(RBRACKET,']',649,14588)
   yacc.py: 469:Action : Reduce rule [unary_expression -> postfix_expression] with ['0'] and goto state 75
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 75
   yacc.py: 433:Stack  : direct_declarator LBRACKET unary_expression . LexToken(RBRACKET,']',649,14588)
   yacc.py: 469:Action : Reduce rule [cast_expression -> unary_expression] with ['0'] and goto state 98
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 98
   yacc.py: 433:Stack  : direct_declarator LBRACKET cast_expression . LexToken(RBRACKET,']',649,14588)
   yacc.py: 469:Action : Reduce rule [multiplicative_expression -> cast_expression] with ['0'] and goto state 103
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 103
   yacc.py: 433:Stack  : direct_declarator LBRACKET multiplicative_expression . LexToken(RBRACKET,']',649,14588)
   yacc.py: 469:Action : Reduce rule [additive_expression -> multiplicative_expression] with ['0'] and goto state 77
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 77
   yacc.py: 433:Stack  : direct_declarator LBRACKET additive_expression . LexToken(RBRACKET,']',649,14588)
   yacc.py: 469:Action : Reduce rule [shift_expression -> additive_expression] with ['0'] and goto state 100
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 100
   yacc.py: 433:Stack  : direct_declarator LBRACKET shift_expression . LexToken(RBRACKET,']',649,14588)
   yacc.py: 469:Action : Reduce rule [relational_expression -> shift_expression] with ['0'] and goto state 88
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 88
   yacc.py: 433:Stack  : direct_declarator LBRACKET relational_expression . LexToken(RBRACKET,']',649,14588)
   yacc.py: 469:Action : Reduce rule [equality_expression -> relational_expression] with ['0'] and goto state 101
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 101
   yacc.py: 433:Stack  : direct_declarator LBRACKET equality_expression . LexToken(RBRACKET,']',649,14588)
   yacc.py: 469:Action : Reduce rule [and_expression -> equality_expression] with ['0'] and goto state 82
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 82
   yacc.py: 433:Stack  : direct_declarator LBRACKET and_expression . LexToken(RBRACKET,']',649,14588)
   yacc.py: 469:Action : Reduce rule [exclusive_or_expression -> and_expression] with ['0'] and goto state 76
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 76
   yacc.py: 433:Stack  : direct_declarator LBRACKET exclusive_or_expression . LexToken(RBRACKET,']',649,14588)
   yacc.py: 469:Action : Reduce rule [inclusive_or_expression -> exclusive_or_expression] with ['0'] and goto state 84
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 84
   yacc.py: 433:Stack  : direct_declarator LBRACKET inclusive_or_expression . LexToken(RBRACKET,']',649,14588)
   yacc.py: 469:Action : Reduce rule [logical_and_expression -> inclusive_or_expression] with ['0'] and goto state 99
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 99
   yacc.py: 433:Stack  : direct_declarator LBRACKET logical_and_expression . LexToken(RBRACKET,']',649,14588)
   yacc.py: 469:Action : Reduce rule [logical_or_expression -> logical_and_expression] with ['0'] and goto state 91
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 91
   yacc.py: 433:Stack  : direct_declarator LBRACKET logical_or_expression . LexToken(RBRACKET,']',649,14588)
   yacc.py: 469:Action : Reduce rule [conditional_expression -> logical_or_expression] with ['0'] and goto state 106
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 106
   yacc.py: 433:Stack  : direct_declarator LBRACKET conditional_expression . LexToken(RBRACKET,']',649,14588)
   yacc.py: 469:Action : Reduce rule [constant_expression -> conditional_expression] with ['0'] and goto state 105
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 105
   yacc.py: 428:Defaulted state 105: Reduce using 105
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression . LexToken(RBRACKET,']',649,14588)
   yacc.py: 469:Action : Reduce rule [constant_expression_opt -> constant_expression] with ['0'] and goto state 104
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 104
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt . LexToken(RBRACKET,']',649,14588)
   yacc.py: 443:Action : Shift and goto state 201
   yacc.py: 408:
   yacc.py: 409:State  : 201
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt RBRACKET . LexToken(PERIOD,'.',649,14589)
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt RBRACKET . LexToken(PERIOD,'.',649,14589)
   yacc.py: 408:
   yacc.py: 409:State  : 201
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt RBRACKET . error
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt RBRACKET . error
   yacc.py: 408:
   yacc.py: 409:State  : 104
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt . error
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt . error
   yacc.py: 408:
   yacc.py: 409:State  : 47
   yacc.py: 433:Stack  : direct_declarator LBRACKET . error
   yacc.py: 573:Error  : direct_declarator LBRACKET . error
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . error
   yacc.py: 573:Error  : direct_declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'cbBuffer',649,14590)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(EQUALS,'=',649,14600)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['cbBuffer'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f974e0> ('cbBuffer')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(EQUALS,'=',649,14600)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['cbBuffer'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f974e0> ('cbBuffer')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(EQUALS,'=',649,14600)
   yacc.py: 573:Error  : declarator . LexToken(EQUALS,'=',649,14600)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'0',649,14602)
   yacc.py: 573:Error  : . LexToken(ICONST,'0',649,14602)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(SEMI,';',649,14603)
   yacc.py: 573:Error  : . LexToken(SEMI,';',649,14603)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'bufso',650,14607)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(LBRACKET,'[',650,14612)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['bufso'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1de43e0> ('bufso')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(LBRACKET,'[',650,14612)
   yacc.py: 443:Action : Shift and goto state 47
   yacc.py: 408:
   yacc.py: 409:State  : 47
   yacc.py: 433:Stack  : direct_declarator LBRACKET . LexToken(ICONST,'1',650,14613)
   yacc.py: 443:Action : Shift and goto state 95
   yacc.py: 408:
   yacc.py: 409:State  : 95
   yacc.py: 433:Stack  : direct_declarator LBRACKET ICONST . LexToken(RBRACKET,']',650,14614)
   yacc.py: 469:Action : Reduce rule [constant -> ICONST] with ['1'] and goto state 79
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 79
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant . LexToken(RBRACKET,']',650,14614)
   yacc.py: 469:Action : Reduce rule [primary_expression -> constant] with ['1'] and goto state 96
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 96
   yacc.py: 433:Stack  : direct_declarator LBRACKET primary_expression . LexToken(RBRACKET,']',650,14614)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> primary_expression] with ['1'] and goto state 86
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : direct_declarator LBRACKET postfix_expression . LexToken(RBRACKET,']',650,14614)
   yacc.py: 469:Action : Reduce rule [unary_expression -> postfix_expression] with ['1'] and goto state 75
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 75
   yacc.py: 433:Stack  : direct_declarator LBRACKET unary_expression . LexToken(RBRACKET,']',650,14614)
   yacc.py: 469:Action : Reduce rule [cast_expression -> unary_expression] with ['1'] and goto state 98
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 98
   yacc.py: 433:Stack  : direct_declarator LBRACKET cast_expression . LexToken(RBRACKET,']',650,14614)
   yacc.py: 469:Action : Reduce rule [multiplicative_expression -> cast_expression] with ['1'] and goto state 103
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 103
   yacc.py: 433:Stack  : direct_declarator LBRACKET multiplicative_expression . LexToken(RBRACKET,']',650,14614)
   yacc.py: 469:Action : Reduce rule [additive_expression -> multiplicative_expression] with ['1'] and goto state 77
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 77
   yacc.py: 433:Stack  : direct_declarator LBRACKET additive_expression . LexToken(RBRACKET,']',650,14614)
   yacc.py: 469:Action : Reduce rule [shift_expression -> additive_expression] with ['1'] and goto state 100
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 100
   yacc.py: 433:Stack  : direct_declarator LBRACKET shift_expression . LexToken(RBRACKET,']',650,14614)
   yacc.py: 469:Action : Reduce rule [relational_expression -> shift_expression] with ['1'] and goto state 88
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 88
   yacc.py: 433:Stack  : direct_declarator LBRACKET relational_expression . LexToken(RBRACKET,']',650,14614)
   yacc.py: 469:Action : Reduce rule [equality_expression -> relational_expression] with ['1'] and goto state 101
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 101
   yacc.py: 433:Stack  : direct_declarator LBRACKET equality_expression . LexToken(RBRACKET,']',650,14614)
   yacc.py: 469:Action : Reduce rule [and_expression -> equality_expression] with ['1'] and goto state 82
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 82
   yacc.py: 433:Stack  : direct_declarator LBRACKET and_expression . LexToken(RBRACKET,']',650,14614)
   yacc.py: 469:Action : Reduce rule [exclusive_or_expression -> and_expression] with ['1'] and goto state 76
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 76
   yacc.py: 433:Stack  : direct_declarator LBRACKET exclusive_or_expression . LexToken(RBRACKET,']',650,14614)
   yacc.py: 469:Action : Reduce rule [inclusive_or_expression -> exclusive_or_expression] with ['1'] and goto state 84
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 84
   yacc.py: 433:Stack  : direct_declarator LBRACKET inclusive_or_expression . LexToken(RBRACKET,']',650,14614)
   yacc.py: 469:Action : Reduce rule [logical_and_expression -> inclusive_or_expression] with ['1'] and goto state 99
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 99
   yacc.py: 433:Stack  : direct_declarator LBRACKET logical_and_expression . LexToken(RBRACKET,']',650,14614)
   yacc.py: 469:Action : Reduce rule [logical_or_expression -> logical_and_expression] with ['1'] and goto state 91
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 91
   yacc.py: 433:Stack  : direct_declarator LBRACKET logical_or_expression . LexToken(RBRACKET,']',650,14614)
   yacc.py: 469:Action : Reduce rule [conditional_expression -> logical_or_expression] with ['1'] and goto state 106
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 106
   yacc.py: 433:Stack  : direct_declarator LBRACKET conditional_expression . LexToken(RBRACKET,']',650,14614)
   yacc.py: 469:Action : Reduce rule [constant_expression -> conditional_expression] with ['1'] and goto state 105
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 105
   yacc.py: 428:Defaulted state 105: Reduce using 105
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression . LexToken(RBRACKET,']',650,14614)
   yacc.py: 469:Action : Reduce rule [constant_expression_opt -> constant_expression] with ['1'] and goto state 104
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 104
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt . LexToken(RBRACKET,']',650,14614)
   yacc.py: 443:Action : Shift and goto state 201
   yacc.py: 408:
   yacc.py: 409:State  : 201
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt RBRACKET . LexToken(PERIOD,'.',650,14615)
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt RBRACKET . LexToken(PERIOD,'.',650,14615)
   yacc.py: 408:
   yacc.py: 409:State  : 201
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt RBRACKET . error
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt RBRACKET . error
   yacc.py: 408:
   yacc.py: 409:State  : 104
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt . error
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt . error
   yacc.py: 408:
   yacc.py: 409:State  : 47
   yacc.py: 433:Stack  : direct_declarator LBRACKET . error
   yacc.py: 573:Error  : direct_declarator LBRACKET . error
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . error
   yacc.py: 573:Error  : direct_declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'BufferType',650,14616)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(EQUALS,'=',650,14627)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['BufferType'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f97c60> ('BufferType')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(EQUALS,'=',650,14627)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['BufferType'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f97c60> ('BufferType')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(EQUALS,'=',650,14627)
   yacc.py: 573:Error  : declarator . LexToken(EQUALS,'=',650,14627)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'SECBUFFER_EMPTY',650,14629)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(SEMI,';',650,14644)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with [<str @ 0x21c0c78>] and goto state 22
   yacc.py: 503:Result : <str @ 0x21c0c78> ('SECBUFFER_EMPTY')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(SEMI,';',650,14644)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with [<str @ 0x21c0c78>] and goto state 37
   yacc.py: 503:Result : <str @ 0x21c0c78> ('SECBUFFER_EMPTY')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(SEMI,';',650,14644)
   yacc.py: 573:Error  : declarator . LexToken(SEMI,';',650,14644)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'bufso',651,14648)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(LBRACKET,'[',651,14653)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['bufso'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1de43e0> ('bufso')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(LBRACKET,'[',651,14653)
   yacc.py: 443:Action : Shift and goto state 47
   yacc.py: 408:
   yacc.py: 409:State  : 47
   yacc.py: 433:Stack  : direct_declarator LBRACKET . LexToken(ICONST,'1',651,14654)
   yacc.py: 443:Action : Shift and goto state 95
   yacc.py: 408:
   yacc.py: 409:State  : 95
   yacc.py: 433:Stack  : direct_declarator LBRACKET ICONST . LexToken(RBRACKET,']',651,14655)
   yacc.py: 469:Action : Reduce rule [constant -> ICONST] with ['1'] and goto state 79
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 79
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant . LexToken(RBRACKET,']',651,14655)
   yacc.py: 469:Action : Reduce rule [primary_expression -> constant] with ['1'] and goto state 96
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 96
   yacc.py: 433:Stack  : direct_declarator LBRACKET primary_expression . LexToken(RBRACKET,']',651,14655)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> primary_expression] with ['1'] and goto state 86
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : direct_declarator LBRACKET postfix_expression . LexToken(RBRACKET,']',651,14655)
   yacc.py: 469:Action : Reduce rule [unary_expression -> postfix_expression] with ['1'] and goto state 75
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 75
   yacc.py: 433:Stack  : direct_declarator LBRACKET unary_expression . LexToken(RBRACKET,']',651,14655)
   yacc.py: 469:Action : Reduce rule [cast_expression -> unary_expression] with ['1'] and goto state 98
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 98
   yacc.py: 433:Stack  : direct_declarator LBRACKET cast_expression . LexToken(RBRACKET,']',651,14655)
   yacc.py: 469:Action : Reduce rule [multiplicative_expression -> cast_expression] with ['1'] and goto state 103
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 103
   yacc.py: 433:Stack  : direct_declarator LBRACKET multiplicative_expression . LexToken(RBRACKET,']',651,14655)
   yacc.py: 469:Action : Reduce rule [additive_expression -> multiplicative_expression] with ['1'] and goto state 77
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 77
   yacc.py: 433:Stack  : direct_declarator LBRACKET additive_expression . LexToken(RBRACKET,']',651,14655)
   yacc.py: 469:Action : Reduce rule [shift_expression -> additive_expression] with ['1'] and goto state 100
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 100
   yacc.py: 433:Stack  : direct_declarator LBRACKET shift_expression . LexToken(RBRACKET,']',651,14655)
   yacc.py: 469:Action : Reduce rule [relational_expression -> shift_expression] with ['1'] and goto state 88
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 88
   yacc.py: 433:Stack  : direct_declarator LBRACKET relational_expression . LexToken(RBRACKET,']',651,14655)
   yacc.py: 469:Action : Reduce rule [equality_expression -> relational_expression] with ['1'] and goto state 101
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 101
   yacc.py: 433:Stack  : direct_declarator LBRACKET equality_expression . LexToken(RBRACKET,']',651,14655)
   yacc.py: 469:Action : Reduce rule [and_expression -> equality_expression] with ['1'] and goto state 82
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 82
   yacc.py: 433:Stack  : direct_declarator LBRACKET and_expression . LexToken(RBRACKET,']',651,14655)
   yacc.py: 469:Action : Reduce rule [exclusive_or_expression -> and_expression] with ['1'] and goto state 76
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 76
   yacc.py: 433:Stack  : direct_declarator LBRACKET exclusive_or_expression . LexToken(RBRACKET,']',651,14655)
   yacc.py: 469:Action : Reduce rule [inclusive_or_expression -> exclusive_or_expression] with ['1'] and goto state 84
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 84
   yacc.py: 433:Stack  : direct_declarator LBRACKET inclusive_or_expression . LexToken(RBRACKET,']',651,14655)
   yacc.py: 469:Action : Reduce rule [logical_and_expression -> inclusive_or_expression] with ['1'] and goto state 99
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 99
   yacc.py: 433:Stack  : direct_declarator LBRACKET logical_and_expression . LexToken(RBRACKET,']',651,14655)
   yacc.py: 469:Action : Reduce rule [logical_or_expression -> logical_and_expression] with ['1'] and goto state 91
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 91
   yacc.py: 433:Stack  : direct_declarator LBRACKET logical_or_expression . LexToken(RBRACKET,']',651,14655)
   yacc.py: 469:Action : Reduce rule [conditional_expression -> logical_or_expression] with ['1'] and goto state 106
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 106
   yacc.py: 433:Stack  : direct_declarator LBRACKET conditional_expression . LexToken(RBRACKET,']',651,14655)
   yacc.py: 469:Action : Reduce rule [constant_expression -> conditional_expression] with ['1'] and goto state 105
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 105
   yacc.py: 428:Defaulted state 105: Reduce using 105
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression . LexToken(RBRACKET,']',651,14655)
   yacc.py: 469:Action : Reduce rule [constant_expression_opt -> constant_expression] with ['1'] and goto state 104
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 104
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt . LexToken(RBRACKET,']',651,14655)
   yacc.py: 443:Action : Shift and goto state 201
   yacc.py: 408:
   yacc.py: 409:State  : 201
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt RBRACKET . LexToken(PERIOD,'.',651,14656)
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt RBRACKET . LexToken(PERIOD,'.',651,14656)
   yacc.py: 408:
   yacc.py: 409:State  : 201
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt RBRACKET . error
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt RBRACKET . error
   yacc.py: 408:
   yacc.py: 409:State  : 104
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt . error
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt . error
   yacc.py: 408:
   yacc.py: 409:State  : 47
   yacc.py: 433:Stack  : direct_declarator LBRACKET . error
   yacc.py: 573:Error  : direct_declarator LBRACKET . error
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . error
   yacc.py: 573:Error  : direct_declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'cbBuffer',651,14657)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(EQUALS,'=',651,14666)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['cbBuffer'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f97680> ('cbBuffer')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(EQUALS,'=',651,14666)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['cbBuffer'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f97680> ('cbBuffer')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(EQUALS,'=',651,14666)
   yacc.py: 573:Error  : declarator . LexToken(EQUALS,'=',651,14666)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'0',651,14668)
   yacc.py: 573:Error  : . LexToken(ICONST,'0',651,14668)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(SEMI,';',651,14669)
   yacc.py: 573:Error  : . LexToken(SEMI,';',651,14669)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'bufso',652,14673)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(LBRACKET,'[',652,14678)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['bufso'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1de43e0> ('bufso')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(LBRACKET,'[',652,14678)
   yacc.py: 443:Action : Shift and goto state 47
   yacc.py: 408:
   yacc.py: 409:State  : 47
   yacc.py: 433:Stack  : direct_declarator LBRACKET . LexToken(ICONST,'1',652,14679)
   yacc.py: 443:Action : Shift and goto state 95
   yacc.py: 408:
   yacc.py: 409:State  : 95
   yacc.py: 433:Stack  : direct_declarator LBRACKET ICONST . LexToken(RBRACKET,']',652,14680)
   yacc.py: 469:Action : Reduce rule [constant -> ICONST] with ['1'] and goto state 79
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 79
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant . LexToken(RBRACKET,']',652,14680)
   yacc.py: 469:Action : Reduce rule [primary_expression -> constant] with ['1'] and goto state 96
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 96
   yacc.py: 433:Stack  : direct_declarator LBRACKET primary_expression . LexToken(RBRACKET,']',652,14680)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> primary_expression] with ['1'] and goto state 86
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : direct_declarator LBRACKET postfix_expression . LexToken(RBRACKET,']',652,14680)
   yacc.py: 469:Action : Reduce rule [unary_expression -> postfix_expression] with ['1'] and goto state 75
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 75
   yacc.py: 433:Stack  : direct_declarator LBRACKET unary_expression . LexToken(RBRACKET,']',652,14680)
   yacc.py: 469:Action : Reduce rule [cast_expression -> unary_expression] with ['1'] and goto state 98
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 98
   yacc.py: 433:Stack  : direct_declarator LBRACKET cast_expression . LexToken(RBRACKET,']',652,14680)
   yacc.py: 469:Action : Reduce rule [multiplicative_expression -> cast_expression] with ['1'] and goto state 103
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 103
   yacc.py: 433:Stack  : direct_declarator LBRACKET multiplicative_expression . LexToken(RBRACKET,']',652,14680)
   yacc.py: 469:Action : Reduce rule [additive_expression -> multiplicative_expression] with ['1'] and goto state 77
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 77
   yacc.py: 433:Stack  : direct_declarator LBRACKET additive_expression . LexToken(RBRACKET,']',652,14680)
   yacc.py: 469:Action : Reduce rule [shift_expression -> additive_expression] with ['1'] and goto state 100
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 100
   yacc.py: 433:Stack  : direct_declarator LBRACKET shift_expression . LexToken(RBRACKET,']',652,14680)
   yacc.py: 469:Action : Reduce rule [relational_expression -> shift_expression] with ['1'] and goto state 88
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 88
   yacc.py: 433:Stack  : direct_declarator LBRACKET relational_expression . LexToken(RBRACKET,']',652,14680)
   yacc.py: 469:Action : Reduce rule [equality_expression -> relational_expression] with ['1'] and goto state 101
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 101
   yacc.py: 433:Stack  : direct_declarator LBRACKET equality_expression . LexToken(RBRACKET,']',652,14680)
   yacc.py: 469:Action : Reduce rule [and_expression -> equality_expression] with ['1'] and goto state 82
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 82
   yacc.py: 433:Stack  : direct_declarator LBRACKET and_expression . LexToken(RBRACKET,']',652,14680)
   yacc.py: 469:Action : Reduce rule [exclusive_or_expression -> and_expression] with ['1'] and goto state 76
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 76
   yacc.py: 433:Stack  : direct_declarator LBRACKET exclusive_or_expression . LexToken(RBRACKET,']',652,14680)
   yacc.py: 469:Action : Reduce rule [inclusive_or_expression -> exclusive_or_expression] with ['1'] and goto state 84
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 84
   yacc.py: 433:Stack  : direct_declarator LBRACKET inclusive_or_expression . LexToken(RBRACKET,']',652,14680)
   yacc.py: 469:Action : Reduce rule [logical_and_expression -> inclusive_or_expression] with ['1'] and goto state 99
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 99
   yacc.py: 433:Stack  : direct_declarator LBRACKET logical_and_expression . LexToken(RBRACKET,']',652,14680)
   yacc.py: 469:Action : Reduce rule [logical_or_expression -> logical_and_expression] with ['1'] and goto state 91
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 91
   yacc.py: 433:Stack  : direct_declarator LBRACKET logical_or_expression . LexToken(RBRACKET,']',652,14680)
   yacc.py: 469:Action : Reduce rule [conditional_expression -> logical_or_expression] with ['1'] and goto state 106
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 106
   yacc.py: 433:Stack  : direct_declarator LBRACKET conditional_expression . LexToken(RBRACKET,']',652,14680)
   yacc.py: 469:Action : Reduce rule [constant_expression -> conditional_expression] with ['1'] and goto state 105
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 105
   yacc.py: 428:Defaulted state 105: Reduce using 105
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression . LexToken(RBRACKET,']',652,14680)
   yacc.py: 469:Action : Reduce rule [constant_expression_opt -> constant_expression] with ['1'] and goto state 104
   yacc.py: 503:Result : <str @ 0x1df73e0> ('1')
   yacc.py: 408:
   yacc.py: 409:State  : 104
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt . LexToken(RBRACKET,']',652,14680)
   yacc.py: 443:Action : Shift and goto state 201
   yacc.py: 408:
   yacc.py: 409:State  : 201
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt RBRACKET . LexToken(PERIOD,'.',652,14681)
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt RBRACKET . LexToken(PERIOD,'.',652,14681)
   yacc.py: 408:
   yacc.py: 409:State  : 201
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt RBRACKET . error
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt RBRACKET . error
   yacc.py: 408:
   yacc.py: 409:State  : 104
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt . error
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt . error
   yacc.py: 408:
   yacc.py: 409:State  : 47
   yacc.py: 433:Stack  : direct_declarator LBRACKET . error
   yacc.py: 573:Error  : direct_declarator LBRACKET . error
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . error
   yacc.py: 573:Error  : direct_declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'pvBuffer',652,14682)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(EQUALS,'=',652,14691)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['pvBuffer'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f974c0> ('pvBuffer')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(EQUALS,'=',652,14691)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['pvBuffer'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f974c0> ('pvBuffer')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(EQUALS,'=',652,14691)
   yacc.py: 573:Error  : declarator . LexToken(EQUALS,'=',652,14691)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'0',652,14693)
   yacc.py: 573:Error  : . LexToken(ICONST,'0',652,14693)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(SEMI,';',652,14694)
   yacc.py: 573:Error  : . LexToken(SEMI,';',652,14694)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'sbout',653,14698)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(PERIOD,'.',653,14703)
   yacc.py: 573:Error  : ID . LexToken(PERIOD,'.',653,14703)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'cBuffers',653,14704)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(EQUALS,'=',653,14718)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['cBuffers'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f97bc0> ('cBuffers')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(EQUALS,'=',653,14718)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['cBuffers'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f97bc0> ('cBuffers')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(EQUALS,'=',653,14718)
   yacc.py: 573:Error  : declarator . LexToken(EQUALS,'=',653,14718)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'2',653,14720)
   yacc.py: 573:Error  : . LexToken(ICONST,'2',653,14720)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(SEMI,';',653,14721)
   yacc.py: 573:Error  : . LexToken(SEMI,';',653,14721)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'sbout',654,14725)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(PERIOD,'.',654,14730)
   yacc.py: 573:Error  : ID . LexToken(PERIOD,'.',654,14730)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'pBuffers',654,14731)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(EQUALS,'=',654,14745)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['pBuffers'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f974c0> ('pBuffers')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(EQUALS,'=',654,14745)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['pBuffers'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f974c0> ('pBuffers')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(EQUALS,'=',654,14745)
   yacc.py: 573:Error  : declarator . LexToken(EQUALS,'=',654,14745)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'bufso',654,14747)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(SEMI,';',654,14752)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['bufso'] and goto state 22
   yacc.py: 503:Result : <str @ 0x21ae280> ('bufso')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(SEMI,';',654,14752)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['bufso'] and goto state 37
   yacc.py: 503:Result : <str @ 0x21ae280> ('bufso')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(SEMI,';',654,14752)
   yacc.py: 573:Error  : declarator . LexToken(SEMI,';',654,14752)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'sbout',655,14756)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(PERIOD,'.',655,14761)
   yacc.py: 573:Error  : ID . LexToken(PERIOD,'.',655,14761)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'ulVersion',655,14762)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(EQUALS,'=',655,14776)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['ulVersion'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f974e0> ('ulVersion')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(EQUALS,'=',655,14776)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['ulVersion'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f974e0> ('ulVersion')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(EQUALS,'=',655,14776)
   yacc.py: 573:Error  : declarator . LexToken(EQUALS,'=',655,14776)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'SECBUFFER_VERSION',655,14778)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(SEMI,';',655,14795)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with [<str @ 0x21c0ca0>] and goto state 22
   yacc.py: 503:Result : <str @ 0x21c0ca0> ('SECBUFFER_VERSION')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(SEMI,';',655,14795)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with [<str @ 0x21c0ca0>] and goto state 37
   yacc.py: 503:Result : <str @ 0x21c0ca0> ('SECBUFFER_VERSION')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(SEMI,';',655,14795)
   yacc.py: 573:Error  : declarator . LexToken(SEMI,';',655,14795)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'SEC_E_INTERNAL_ERROR',658,14801)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(SEMI,';',658,14821)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with [<str @ 0x21cdfb0>] and goto state 22
   yacc.py: 503:Result : <str @ 0x21cdfb0> ('SEC_E_INTERNAL_ERROR')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(SEMI,';',658,14821)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with [<str @ 0x21cdfb0>] and goto state 37
   yacc.py: 503:Result : <str @ 0x21cdfb0> ('SEC_E_INTERNAL_ERROR')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(SEMI,';',658,14821)
   yacc.py: 573:Error  : declarator . LexToken(SEMI,';',658,14821)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'DWORD',659,14825)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(ID,'flg',659,14831)
   yacc.py: 573:Error  : ID . LexToken(ID,'flg',659,14831)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(EQUALS,'=',659,14835)
   yacc.py: 573:Error  : . LexToken(EQUALS,'=',659,14835)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'0',659,14837)
   yacc.py: 573:Error  : . LexToken(ICONST,'0',659,14837)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(SEMI,';',659,14838)
   yacc.py: 573:Error  : . LexToken(SEMI,';',659,14838)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'ss',660,14842)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(EQUALS,'=',660,14845)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['ss'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f85e48> ('ss')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(EQUALS,'=',660,14845)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['ss'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f85e48> ('ss')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(EQUALS,'=',660,14845)
   yacc.py: 573:Error  : declarator . LexToken(EQUALS,'=',660,14845)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'AcceptSecurityContext',660,14847)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(LPAREN,'(',660,14868)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with [<str @ 0x21cdfb0>] and goto state 22
   yacc.py: 503:Result : <str @ 0x21cdfb0> ('AcceptSecurityContext')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(LPAREN,'(',660,14868)
   yacc.py: 443:Action : Shift and goto state 48
   yacc.py: 408:
   yacc.py: 409:State  : 48
   yacc.py: 433:Stack  : direct_declarator LPAREN . LexToken(AND,'&',661,14873)
   yacc.py: 573:Error  : direct_declarator LPAREN . LexToken(AND,'&',661,14873)
   yacc.py: 408:
   yacc.py: 409:State  : 48
   yacc.py: 433:Stack  : direct_declarator LPAREN . error
   yacc.py: 573:Error  : direct_declarator LPAREN . error
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . error
   yacc.py: 573:Error  : direct_declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'hCred',661,14874)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(COMMA,',',661,14879)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['hCred'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f974c0> ('hCred')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(COMMA,',',661,14879)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['hCred'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f974c0> ('hCred')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(COMMA,',',661,14879)
   yacc.py: 573:Error  : declarator . LexToken(COMMA,',',661,14879)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'InitContext',662,14884)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(CONDOP,'?',662,14896)
   yacc.py: 573:Error  : ID . LexToken(CONDOP,'?',662,14896)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(AND,'&',662,14898)
   yacc.py: 573:Error  : . LexToken(AND,'&',662,14898)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'hCtx',662,14899)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(COLON,':',662,14904)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['hCtx'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f97c00> ('hCtx')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(COLON,':',662,14904)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['hCtx'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f97c00> ('hCtx')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(COLON,':',662,14904)
   yacc.py: 573:Error  : declarator . LexToken(COLON,':',662,14904)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'0',662,14906)
   yacc.py: 573:Error  : . LexToken(ICONST,'0',662,14906)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(COMMA,',',662,14907)
   yacc.py: 573:Error  : . LexToken(COMMA,',',662,14907)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(AND,'&',663,14912)
   yacc.py: 573:Error  : . LexToken(AND,'&',663,14912)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'sbin',663,14913)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(COMMA,',',663,14917)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['sbin'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1de43e0> ('sbin')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(COMMA,',',663,14917)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['sbin'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1de43e0> ('sbin')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(COMMA,',',663,14917)
   yacc.py: 573:Error  : declarator . LexToken(COMMA,',',663,14917)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'ASC_REQ_ALLOCATE_MEMORY',664,14922)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(COMMA,',',664,14945)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with [<str @ 0x21cdfb0>] and goto state 22
   yacc.py: 503:Result : <str @ 0x21cdfb0> ('ASC_REQ_ALLOCATE_MEMORY')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(COMMA,',',664,14945)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with [<str @ 0x21cdfb0>] and goto state 37
   yacc.py: 503:Result : <str @ 0x21cdfb0> ('ASC_REQ_ALLOCATE_MEMORY')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(COMMA,',',664,14945)
   yacc.py: 573:Error  : declarator . LexToken(COMMA,',',664,14945)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'0',664,14946)
   yacc.py: 573:Error  : . LexToken(ICONST,'0',664,14946)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(COMMA,',',664,14947)
   yacc.py: 573:Error  : . LexToken(COMMA,',',664,14947)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'InitContext',665,14952)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(CONDOP,'?',665,14964)
   yacc.py: 573:Error  : ID . LexToken(CONDOP,'?',665,14964)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'0',665,14966)
   yacc.py: 573:Error  : . LexToken(ICONST,'0',665,14966)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(COLON,':',665,14968)
   yacc.py: 573:Error  : . LexToken(COLON,':',665,14968)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(AND,'&',665,14970)
   yacc.py: 573:Error  : . LexToken(AND,'&',665,14970)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'hCtx',665,14971)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(COMMA,',',665,14975)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['hCtx'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f97480> ('hCtx')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(COMMA,',',665,14975)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['hCtx'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f97480> ('hCtx')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(COMMA,',',665,14975)
   yacc.py: 573:Error  : declarator . LexToken(COMMA,',',665,14975)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(AND,'&',666,14980)
   yacc.py: 573:Error  : . LexToken(AND,'&',666,14980)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'sbout',666,14981)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(COMMA,',',666,14986)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['sbout'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1de43e0> ('sbout')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(COMMA,',',666,14986)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['sbout'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1de43e0> ('sbout')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(COMMA,',',666,14986)
   yacc.py: 573:Error  : declarator . LexToken(COMMA,',',666,14986)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(AND,'&',667,14991)
   yacc.py: 573:Error  : . LexToken(AND,'&',667,14991)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'flg',667,14992)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(COMMA,',',667,14995)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['flg'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f85f68> ('flg')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(COMMA,',',667,14995)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['flg'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f85f68> ('flg')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(COMMA,',',667,14995)
   yacc.py: 573:Error  : declarator . LexToken(COMMA,',',667,14995)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'0',668,15000)
   yacc.py: 573:Error  : . LexToken(ICONST,'0',668,15000)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(RPAREN,')',668,15001)
   yacc.py: 573:Error  : . LexToken(RPAREN,')',668,15001)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(SEMI,';',668,15002)
   yacc.py: 573:Error  : . LexToken(SEMI,';',668,15002)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'InitContext',670,15007)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(EQUALS,'=',670,15019)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['InitContext'] and goto state 22
   yacc.py: 503:Result : <str @ 0x671440> ('InitContext')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(EQUALS,'=',670,15019)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['InitContext'] and goto state 37
   yacc.py: 503:Result : <str @ 0x671440> ('InitContext')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(EQUALS,'=',670,15019)
   yacc.py: 573:Error  : declarator . LexToken(EQUALS,'=',670,15019)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'true',670,15021)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(SEMI,';',670,15025)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['true'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f97bc0> ('true')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(SEMI,';',670,15025)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['true'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f97bc0> ('true')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(SEMI,';',670,15025)
   yacc.py: 573:Error  : declarator . LexToken(SEMI,';',670,15025)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(IF,'if',672,15030)
   yacc.py: 573:Error  : . LexToken(IF,'if',672,15030)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(LPAREN,'(',672,15033)
   yacc.py: 443:Action : Shift and goto state 4
   yacc.py: 408:
   yacc.py: 409:State  : 4
   yacc.py: 433:Stack  : LPAREN . LexToken(ID,'ss',672,15034)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : LPAREN ID . LexToken(EQ,'==',672,15037)
   yacc.py: 573:Error  : LPAREN ID . LexToken(EQ,'==',672,15037)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : LPAREN ID . error
   yacc.py: 573:Error  : LPAREN ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 4
   yacc.py: 433:Stack  : LPAREN . error
   yacc.py: 573:Error  : LPAREN . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'SEC_E_INCOMPLETE_MESSAGE',672,15040)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(RPAREN,')',672,15064)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with [<str @ 0x21cdfb0>] and goto state 22
   yacc.py: 503:Result : <str @ 0x21cdfb0> ('SEC_E_INCOMPLETE_MESSAGE')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(RPAREN,')',672,15064)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with [<str @ 0x21cdfb0>] and goto state 37
   yacc.py: 503:Result : <str @ 0x21cdfb0> ('SEC_E_INCOMPLETE_MESSAGE')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(RPAREN,')',672,15064)
   yacc.py: 573:Error  : declarator . LexToken(RPAREN,')',672,15064)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(CONTINUE,'continue',673,15069)
   yacc.py: 573:Error  : . LexToken(CONTINUE,'continue',673,15069)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(SEMI,';',673,15077)
   yacc.py: 573:Error  : . LexToken(SEMI,';',673,15077)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(DIVIDE,'/',673,15079)
   yacc.py: 573:Error  : . LexToken(DIVIDE,'/',673,15079)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(DIVIDE,'/',673,15080)
   yacc.py: 573:Error  : . LexToken(DIVIDE,'/',673,15080)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'allow',673,15082)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(ID,'more',673,15088)
   yacc.py: 573:Error  : ID . LexToken(ID,'more',673,15088)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'pt',675,15096)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(EQUALS,'=',675,15099)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['pt'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f85e48> ('pt')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(EQUALS,'=',675,15099)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['pt'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f85e48> ('pt')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(EQUALS,'=',675,15099)
   yacc.py: 573:Error  : declarator . LexToken(EQUALS,'=',675,15099)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'0',675,15101)
   yacc.py: 573:Error  : . LexToken(ICONST,'0',675,15101)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(SEMI,';',675,15102)
   yacc.py: 573:Error  : . LexToken(SEMI,';',675,15102)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(IF,'if',677,15107)
   yacc.py: 573:Error  : . LexToken(IF,'if',677,15107)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(LPAREN,'(',677,15110)
   yacc.py: 443:Action : Shift and goto state 4
   yacc.py: 408:
   yacc.py: 409:State  : 4
   yacc.py: 433:Stack  : LPAREN . LexToken(ID,'FAILED',677,15111)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : LPAREN ID . LexToken(LPAREN,'(',677,15117)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['FAILED'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f97480> ('FAILED')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : LPAREN direct_declarator . LexToken(LPAREN,'(',677,15117)
   yacc.py: 443:Action : Shift and goto state 48
   yacc.py: 408:
   yacc.py: 409:State  : 48
   yacc.py: 433:Stack  : LPAREN direct_declarator LPAREN . LexToken(ID,'ss',677,15118)
   yacc.py: 443:Action : Shift and goto state 113
   yacc.py: 408:
   yacc.py: 409:State  : 113
   yacc.py: 433:Stack  : LPAREN direct_declarator LPAREN ID . LexToken(RPAREN,')',677,15120)
   yacc.py: 469:Action : Reduce rule [identifier_list -> ID] with ['ss'] and goto state 112
   yacc.py: 503:Result : <str @ 0x1f85f68> ('ss')
   yacc.py: 408:
   yacc.py: 409:State  : 112
   yacc.py: 433:Stack  : LPAREN direct_declarator LPAREN identifier_list . LexToken(RPAREN,')',677,15120)
   yacc.py: 443:Action : Shift and goto state 211
   yacc.py: 408:
   yacc.py: 409:State  : 211
   yacc.py: 433:Stack  : LPAREN direct_declarator LPAREN identifier_list RPAREN . LexToken(RPAREN,')',677,15121)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> direct_declarator LPAREN identifier_list RPAREN] with ['FAILED','(','ss',')'] and goto state 22
   yacc.py: 503:Result : <instance @ 0x21c0aa8> (<c_ast.Node instance at 0x021C0AA8>)
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : LPAREN direct_declarator . LexToken(RPAREN,')',677,15121)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with [<instance @ 0x21c0aa8>] and goto state 39
   yacc.py: 503:Result : <instance @ 0x21c0aa8> (<c_ast.Node instance at 0x021C0AA8>)
   yacc.py: 408:
   yacc.py: 409:State  : 39
   yacc.py: 433:Stack  : LPAREN declarator . LexToken(RPAREN,')',677,15121)
   yacc.py: 443:Action : Shift and goto state 62
   yacc.py: 408:
   yacc.py: 409:State  : 62
   yacc.py: 433:Stack  : LPAREN declarator RPAREN . LexToken(RETURN,'return',678,15126)
   yacc.py: 573:Error  : LPAREN declarator RPAREN . LexToken(RETURN,'return',678,15126)
   yacc.py: 408:
   yacc.py: 409:State  : 62
   yacc.py: 433:Stack  : LPAREN declarator RPAREN . error
   yacc.py: 573:Error  : LPAREN declarator RPAREN . error
   yacc.py: 408:
   yacc.py: 409:State  : 39
   yacc.py: 433:Stack  : LPAREN declarator . error
   yacc.py: 573:Error  : LPAREN declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 4
   yacc.py: 433:Stack  : LPAREN . error
   yacc.py: 573:Error  : LPAREN . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(MINUS,'-',678,15133)
   yacc.py: 573:Error  : . LexToken(MINUS,'-',678,15133)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'1',678,15134)
   yacc.py: 573:Error  : . LexToken(ICONST,'1',678,15134)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(SEMI,';',678,15135)
   yacc.py: 573:Error  : . LexToken(SEMI,';',678,15135)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(IF,'if',680,15140)
   yacc.py: 573:Error  : . LexToken(IF,'if',680,15140)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(LPAREN,'(',680,15143)
   yacc.py: 443:Action : Shift and goto state 4
   yacc.py: 408:
   yacc.py: 409:State  : 4
   yacc.py: 433:Stack  : LPAREN . LexToken(ID,'InitContext',680,15144)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : LPAREN ID . LexToken(EQ,'==',680,15156)
   yacc.py: 573:Error  : LPAREN ID . LexToken(EQ,'==',680,15156)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : LPAREN ID . error
   yacc.py: 573:Error  : LPAREN ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 4
   yacc.py: 433:Stack  : LPAREN . error
   yacc.py: 573:Error  : LPAREN . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'0',680,15159)
   yacc.py: 573:Error  : . LexToken(ICONST,'0',680,15159)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(LAND,'&&',680,15161)
   yacc.py: 573:Error  : . LexToken(LAND,'&&',680,15161)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'ss',680,15164)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(NE,'!=',680,15167)
   yacc.py: 573:Error  : ID . LexToken(NE,'!=',680,15167)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'SEC_I_CONTINUE_NEEDED',680,15170)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(RPAREN,')',680,15191)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with [<str @ 0x21cdfb0>] and goto state 22
   yacc.py: 503:Result : <str @ 0x21cdfb0> ('SEC_I_CONTINUE_NEEDED')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(RPAREN,')',680,15191)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with [<str @ 0x21cdfb0>] and goto state 37
   yacc.py: 503:Result : <str @ 0x21cdfb0> ('SEC_I_CONTINUE_NEEDED')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(RPAREN,')',680,15191)
   yacc.py: 573:Error  : declarator . LexToken(RPAREN,')',680,15191)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(RETURN,'return',681,15196)
   yacc.py: 573:Error  : . LexToken(RETURN,'return',681,15196)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(MINUS,'-',681,15203)
   yacc.py: 573:Error  : . LexToken(MINUS,'-',681,15203)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'1',681,15204)
   yacc.py: 573:Error  : . LexToken(ICONST,'1',681,15204)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(SEMI,';',681,15205)
   yacc.py: 573:Error  : . LexToken(SEMI,';',681,15205)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(DIVIDE,'/',683,15210)
   yacc.py: 573:Error  : . LexToken(DIVIDE,'/',683,15210)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(DIVIDE,'/',683,15211)
   yacc.py: 573:Error  : . LexToken(DIVIDE,'/',683,15211)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'Pass',683,15213)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(ID,'data',683,15218)
   yacc.py: 573:Error  : ID . LexToken(ID,'data',683,15218)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'to',683,15223)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(ID,'the',683,15226)
   yacc.py: 573:Error  : ID . LexToken(ID,'the',683,15226)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'remote',683,15230)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(ID,'site',683,15237)
   yacc.py: 573:Error  : ID . LexToken(ID,'site',683,15237)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'rval',684,15244)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(EQUALS,'=',684,15249)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['rval'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f974e0> ('rval')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(EQUALS,'=',684,15249)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['rval'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f974e0> ('rval')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(EQUALS,'=',684,15249)
   yacc.py: 573:Error  : declarator . LexToken(EQUALS,'=',684,15249)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'ssend_p',684,15251)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(LPAREN,'(',684,15258)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['ssend_p'] and goto state 22
   yacc.py: 503:Result : <str @ 0x671440> ('ssend_p')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(LPAREN,'(',684,15258)
   yacc.py: 443:Action : Shift and goto state 48
   yacc.py: 408:
   yacc.py: 409:State  : 48
   yacc.py: 433:Stack  : direct_declarator LPAREN . LexToken(LPAREN,'(',684,15259)
   yacc.py: 573:Error  : direct_declarator LPAREN . LexToken(LPAREN,'(',684,15259)
   yacc.py: 408:
   yacc.py: 409:State  : 48
   yacc.py: 433:Stack  : direct_declarator LPAREN . error
   yacc.py: 573:Error  : direct_declarator LPAREN . error
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . error
   yacc.py: 573:Error  : direct_declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(CHAR,'char',684,15260)
   yacc.py: 443:Action : Shift and goto state 8
   yacc.py: 408:
   yacc.py: 409:State  : 8
   yacc.py: 433:Stack  : CHAR . LexToken(TIMES,'*',684,15264)
   yacc.py: 469:Action : Reduce rule [type_specifier -> CHAR] with ['char'] and goto state 13
   yacc.py: 503:Result : <str @ 0x1f97680> ('char')
   yacc.py: 408:
   yacc.py: 409:State  : 13
   yacc.py: 433:Stack  : type_specifier . LexToken(TIMES,'*',684,15264)
   yacc.py: 469:Action : Reduce rule [declaration_specifiers -> type_specifier] with ['char'] and goto state 24
   yacc.py: 503:Result : <str @ 0x1f97680> ('char')
   yacc.py: 408:
   yacc.py: 409:State  : 24
   yacc.py: 433:Stack  : declaration_specifiers . LexToken(TIMES,'*',684,15264)
   yacc.py: 443:Action : Shift and goto state 23
   yacc.py: 408:
   yacc.py: 409:State  : 23
   yacc.py: 433:Stack  : declaration_specifiers TIMES . LexToken(RPAREN,')',684,15265)
   yacc.py: 469:Action : Reduce rule [pointer -> TIMES] with ['*'] and goto state 11
   yacc.py: 503:Result : <str @ 0x1df7278> ('*')
   yacc.py: 408:
   yacc.py: 409:State  : 11
   yacc.py: 433:Stack  : declaration_specifiers pointer . LexToken(RPAREN,')',684,15265)
   yacc.py: 573:Error  : declaration_specifiers pointer . LexToken(RPAREN,')',684,15265)
   yacc.py: 408:
   yacc.py: 409:State  : 11
   yacc.py: 433:Stack  : declaration_specifiers pointer . error
   yacc.py: 573:Error  : declaration_specifiers pointer . error
   yacc.py: 408:
   yacc.py: 409:State  : 24
   yacc.py: 433:Stack  : declaration_specifiers . error
   yacc.py: 573:Error  : declaration_specifiers . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'bufso',684,15266)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(LBRACKET,'[',684,15271)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['bufso'] and goto state 22
   yacc.py: 503:Result : <str @ 0x21ae280> ('bufso')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(LBRACKET,'[',684,15271)
   yacc.py: 443:Action : Shift and goto state 47
   yacc.py: 408:
   yacc.py: 409:State  : 47
   yacc.py: 433:Stack  : direct_declarator LBRACKET . LexToken(ICONST,'0',684,15272)
   yacc.py: 443:Action : Shift and goto state 95
   yacc.py: 408:
   yacc.py: 409:State  : 95
   yacc.py: 433:Stack  : direct_declarator LBRACKET ICONST . LexToken(RBRACKET,']',684,15273)
   yacc.py: 469:Action : Reduce rule [constant -> ICONST] with ['0'] and goto state 79
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 79
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant . LexToken(RBRACKET,']',684,15273)
   yacc.py: 469:Action : Reduce rule [primary_expression -> constant] with ['0'] and goto state 96
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 96
   yacc.py: 433:Stack  : direct_declarator LBRACKET primary_expression . LexToken(RBRACKET,']',684,15273)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> primary_expression] with ['0'] and goto state 86
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : direct_declarator LBRACKET postfix_expression . LexToken(RBRACKET,']',684,15273)
   yacc.py: 469:Action : Reduce rule [unary_expression -> postfix_expression] with ['0'] and goto state 75
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 75
   yacc.py: 433:Stack  : direct_declarator LBRACKET unary_expression . LexToken(RBRACKET,']',684,15273)
   yacc.py: 469:Action : Reduce rule [cast_expression -> unary_expression] with ['0'] and goto state 98
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 98
   yacc.py: 433:Stack  : direct_declarator LBRACKET cast_expression . LexToken(RBRACKET,']',684,15273)
   yacc.py: 469:Action : Reduce rule [multiplicative_expression -> cast_expression] with ['0'] and goto state 103
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 103
   yacc.py: 433:Stack  : direct_declarator LBRACKET multiplicative_expression . LexToken(RBRACKET,']',684,15273)
   yacc.py: 469:Action : Reduce rule [additive_expression -> multiplicative_expression] with ['0'] and goto state 77
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 77
   yacc.py: 433:Stack  : direct_declarator LBRACKET additive_expression . LexToken(RBRACKET,']',684,15273)
   yacc.py: 469:Action : Reduce rule [shift_expression -> additive_expression] with ['0'] and goto state 100
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 100
   yacc.py: 433:Stack  : direct_declarator LBRACKET shift_expression . LexToken(RBRACKET,']',684,15273)
   yacc.py: 469:Action : Reduce rule [relational_expression -> shift_expression] with ['0'] and goto state 88
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 88
   yacc.py: 433:Stack  : direct_declarator LBRACKET relational_expression . LexToken(RBRACKET,']',684,15273)
   yacc.py: 469:Action : Reduce rule [equality_expression -> relational_expression] with ['0'] and goto state 101
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 101
   yacc.py: 433:Stack  : direct_declarator LBRACKET equality_expression . LexToken(RBRACKET,']',684,15273)
   yacc.py: 469:Action : Reduce rule [and_expression -> equality_expression] with ['0'] and goto state 82
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 82
   yacc.py: 433:Stack  : direct_declarator LBRACKET and_expression . LexToken(RBRACKET,']',684,15273)
   yacc.py: 469:Action : Reduce rule [exclusive_or_expression -> and_expression] with ['0'] and goto state 76
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 76
   yacc.py: 433:Stack  : direct_declarator LBRACKET exclusive_or_expression . LexToken(RBRACKET,']',684,15273)
   yacc.py: 469:Action : Reduce rule [inclusive_or_expression -> exclusive_or_expression] with ['0'] and goto state 84
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 84
   yacc.py: 433:Stack  : direct_declarator LBRACKET inclusive_or_expression . LexToken(RBRACKET,']',684,15273)
   yacc.py: 469:Action : Reduce rule [logical_and_expression -> inclusive_or_expression] with ['0'] and goto state 99
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 99
   yacc.py: 433:Stack  : direct_declarator LBRACKET logical_and_expression . LexToken(RBRACKET,']',684,15273)
   yacc.py: 469:Action : Reduce rule [logical_or_expression -> logical_and_expression] with ['0'] and goto state 91
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 91
   yacc.py: 433:Stack  : direct_declarator LBRACKET logical_or_expression . LexToken(RBRACKET,']',684,15273)
   yacc.py: 469:Action : Reduce rule [conditional_expression -> logical_or_expression] with ['0'] and goto state 106
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 106
   yacc.py: 433:Stack  : direct_declarator LBRACKET conditional_expression . LexToken(RBRACKET,']',684,15273)
   yacc.py: 469:Action : Reduce rule [constant_expression -> conditional_expression] with ['0'] and goto state 105
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 105
   yacc.py: 428:Defaulted state 105: Reduce using 105
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression . LexToken(RBRACKET,']',684,15273)
   yacc.py: 469:Action : Reduce rule [constant_expression_opt -> constant_expression] with ['0'] and goto state 104
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 104
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt . LexToken(RBRACKET,']',684,15273)
   yacc.py: 443:Action : Shift and goto state 201
   yacc.py: 408:
   yacc.py: 409:State  : 201
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt RBRACKET . LexToken(PERIOD,'.',684,15274)
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt RBRACKET . LexToken(PERIOD,'.',684,15274)
   yacc.py: 408:
   yacc.py: 409:State  : 201
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt RBRACKET . error
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt RBRACKET . error
   yacc.py: 408:
   yacc.py: 409:State  : 104
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt . error
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt . error
   yacc.py: 408:
   yacc.py: 409:State  : 47
   yacc.py: 433:Stack  : direct_declarator LBRACKET . error
   yacc.py: 573:Error  : direct_declarator LBRACKET . error
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . error
   yacc.py: 573:Error  : direct_declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'pvBuffer',684,15275)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(COMMA,',',684,15283)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['pvBuffer'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f97c60> ('pvBuffer')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(COMMA,',',684,15283)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['pvBuffer'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f97c60> ('pvBuffer')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(COMMA,',',684,15283)
   yacc.py: 573:Error  : declarator . LexToken(COMMA,',',684,15283)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'bufso',684,15284)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(LBRACKET,'[',684,15289)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['bufso'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1de43e0> ('bufso')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(LBRACKET,'[',684,15289)
   yacc.py: 443:Action : Shift and goto state 47
   yacc.py: 408:
   yacc.py: 409:State  : 47
   yacc.py: 433:Stack  : direct_declarator LBRACKET . LexToken(ICONST,'0',684,15290)
   yacc.py: 443:Action : Shift and goto state 95
   yacc.py: 408:
   yacc.py: 409:State  : 95
   yacc.py: 433:Stack  : direct_declarator LBRACKET ICONST . LexToken(RBRACKET,']',684,15291)
   yacc.py: 469:Action : Reduce rule [constant -> ICONST] with ['0'] and goto state 79
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 79
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant . LexToken(RBRACKET,']',684,15291)
   yacc.py: 469:Action : Reduce rule [primary_expression -> constant] with ['0'] and goto state 96
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 96
   yacc.py: 433:Stack  : direct_declarator LBRACKET primary_expression . LexToken(RBRACKET,']',684,15291)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> primary_expression] with ['0'] and goto state 86
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : direct_declarator LBRACKET postfix_expression . LexToken(RBRACKET,']',684,15291)
   yacc.py: 469:Action : Reduce rule [unary_expression -> postfix_expression] with ['0'] and goto state 75
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 75
   yacc.py: 433:Stack  : direct_declarator LBRACKET unary_expression . LexToken(RBRACKET,']',684,15291)
   yacc.py: 469:Action : Reduce rule [cast_expression -> unary_expression] with ['0'] and goto state 98
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 98
   yacc.py: 433:Stack  : direct_declarator LBRACKET cast_expression . LexToken(RBRACKET,']',684,15291)
   yacc.py: 469:Action : Reduce rule [multiplicative_expression -> cast_expression] with ['0'] and goto state 103
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 103
   yacc.py: 433:Stack  : direct_declarator LBRACKET multiplicative_expression . LexToken(RBRACKET,']',684,15291)
   yacc.py: 469:Action : Reduce rule [additive_expression -> multiplicative_expression] with ['0'] and goto state 77
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 77
   yacc.py: 433:Stack  : direct_declarator LBRACKET additive_expression . LexToken(RBRACKET,']',684,15291)
   yacc.py: 469:Action : Reduce rule [shift_expression -> additive_expression] with ['0'] and goto state 100
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 100
   yacc.py: 433:Stack  : direct_declarator LBRACKET shift_expression . LexToken(RBRACKET,']',684,15291)
   yacc.py: 469:Action : Reduce rule [relational_expression -> shift_expression] with ['0'] and goto state 88
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 88
   yacc.py: 433:Stack  : direct_declarator LBRACKET relational_expression . LexToken(RBRACKET,']',684,15291)
   yacc.py: 469:Action : Reduce rule [equality_expression -> relational_expression] with ['0'] and goto state 101
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 101
   yacc.py: 433:Stack  : direct_declarator LBRACKET equality_expression . LexToken(RBRACKET,']',684,15291)
   yacc.py: 469:Action : Reduce rule [and_expression -> equality_expression] with ['0'] and goto state 82
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 82
   yacc.py: 433:Stack  : direct_declarator LBRACKET and_expression . LexToken(RBRACKET,']',684,15291)
   yacc.py: 469:Action : Reduce rule [exclusive_or_expression -> and_expression] with ['0'] and goto state 76
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 76
   yacc.py: 433:Stack  : direct_declarator LBRACKET exclusive_or_expression . LexToken(RBRACKET,']',684,15291)
   yacc.py: 469:Action : Reduce rule [inclusive_or_expression -> exclusive_or_expression] with ['0'] and goto state 84
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 84
   yacc.py: 433:Stack  : direct_declarator LBRACKET inclusive_or_expression . LexToken(RBRACKET,']',684,15291)
   yacc.py: 469:Action : Reduce rule [logical_and_expression -> inclusive_or_expression] with ['0'] and goto state 99
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 99
   yacc.py: 433:Stack  : direct_declarator LBRACKET logical_and_expression . LexToken(RBRACKET,']',684,15291)
   yacc.py: 469:Action : Reduce rule [logical_or_expression -> logical_and_expression] with ['0'] and goto state 91
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 91
   yacc.py: 433:Stack  : direct_declarator LBRACKET logical_or_expression . LexToken(RBRACKET,']',684,15291)
   yacc.py: 469:Action : Reduce rule [conditional_expression -> logical_or_expression] with ['0'] and goto state 106
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 106
   yacc.py: 433:Stack  : direct_declarator LBRACKET conditional_expression . LexToken(RBRACKET,']',684,15291)
   yacc.py: 469:Action : Reduce rule [constant_expression -> conditional_expression] with ['0'] and goto state 105
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 105
   yacc.py: 428:Defaulted state 105: Reduce using 105
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression . LexToken(RBRACKET,']',684,15291)
   yacc.py: 469:Action : Reduce rule [constant_expression_opt -> constant_expression] with ['0'] and goto state 104
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 104
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt . LexToken(RBRACKET,']',684,15291)
   yacc.py: 443:Action : Shift and goto state 201
   yacc.py: 408:
   yacc.py: 409:State  : 201
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt RBRACKET . LexToken(PERIOD,'.',684,15292)
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt RBRACKET . LexToken(PERIOD,'.',684,15292)
   yacc.py: 408:
   yacc.py: 409:State  : 201
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt RBRACKET . error
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt RBRACKET . error
   yacc.py: 408:
   yacc.py: 409:State  : 104
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt . error
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt . error
   yacc.py: 408:
   yacc.py: 409:State  : 47
   yacc.py: 433:Stack  : direct_declarator LBRACKET . error
   yacc.py: 573:Error  : direct_declarator LBRACKET . error
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . error
   yacc.py: 573:Error  : direct_declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'cbBuffer',684,15293)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(RPAREN,')',684,15301)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['cbBuffer'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f97480> ('cbBuffer')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(RPAREN,')',684,15301)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['cbBuffer'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f97480> ('cbBuffer')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(RPAREN,')',684,15301)
   yacc.py: 573:Error  : declarator . LexToken(RPAREN,')',684,15301)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(SEMI,';',684,15302)
   yacc.py: 573:Error  : . LexToken(SEMI,';',684,15302)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'FreeContextBuffer',685,15306)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(LPAREN,'(',685,15323)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with [<str @ 0x21c0ae8>] and goto state 22
   yacc.py: 503:Result : <str @ 0x21c0ae8> ('FreeContextBuffer')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(LPAREN,'(',685,15323)
   yacc.py: 443:Action : Shift and goto state 48
   yacc.py: 408:
   yacc.py: 409:State  : 48
   yacc.py: 433:Stack  : direct_declarator LPAREN . LexToken(ID,'bufso',685,15324)
   yacc.py: 443:Action : Shift and goto state 113
   yacc.py: 408:
   yacc.py: 409:State  : 113
   yacc.py: 433:Stack  : direct_declarator LPAREN ID . LexToken(LBRACKET,'[',685,15329)
   yacc.py: 573:Error  : direct_declarator LPAREN ID . LexToken(LBRACKET,'[',685,15329)
   yacc.py: 408:
   yacc.py: 409:State  : 113
   yacc.py: 433:Stack  : direct_declarator LPAREN ID . error
   yacc.py: 573:Error  : direct_declarator LPAREN ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 48
   yacc.py: 433:Stack  : direct_declarator LPAREN . error
   yacc.py: 573:Error  : direct_declarator LPAREN . error
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . error
   yacc.py: 573:Error  : direct_declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'0',685,15330)
   yacc.py: 573:Error  : . LexToken(ICONST,'0',685,15330)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(RBRACKET,']',685,15331)
   yacc.py: 573:Error  : . LexToken(RBRACKET,']',685,15331)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(PERIOD,'.',685,15332)
   yacc.py: 573:Error  : . LexToken(PERIOD,'.',685,15332)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'pvBuffer',685,15333)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(RPAREN,')',685,15341)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['pvBuffer'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f97680> ('pvBuffer')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(RPAREN,')',685,15341)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['pvBuffer'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f97680> ('pvBuffer')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(RPAREN,')',685,15341)
   yacc.py: 573:Error  : declarator . LexToken(RPAREN,')',685,15341)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(SEMI,';',685,15342)
   yacc.py: 573:Error  : . LexToken(SEMI,';',685,15342)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(IF,'if',686,15346)
   yacc.py: 573:Error  : . LexToken(IF,'if',686,15346)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(LPAREN,'(',686,15349)
   yacc.py: 443:Action : Shift and goto state 4
   yacc.py: 408:
   yacc.py: 409:State  : 4
   yacc.py: 433:Stack  : LPAREN . LexToken(ID,'rval',686,15350)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : LPAREN ID . LexToken(NE,'!=',686,15355)
   yacc.py: 573:Error  : LPAREN ID . LexToken(NE,'!=',686,15355)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : LPAREN ID . error
   yacc.py: 573:Error  : LPAREN ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 4
   yacc.py: 433:Stack  : LPAREN . error
   yacc.py: 573:Error  : LPAREN . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'bufso',686,15358)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(LBRACKET,'[',686,15363)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['bufso'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f974c0> ('bufso')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(LBRACKET,'[',686,15363)
   yacc.py: 443:Action : Shift and goto state 47
   yacc.py: 408:
   yacc.py: 409:State  : 47
   yacc.py: 433:Stack  : direct_declarator LBRACKET . LexToken(ICONST,'0',686,15364)
   yacc.py: 443:Action : Shift and goto state 95
   yacc.py: 408:
   yacc.py: 409:State  : 95
   yacc.py: 433:Stack  : direct_declarator LBRACKET ICONST . LexToken(RBRACKET,']',686,15365)
   yacc.py: 469:Action : Reduce rule [constant -> ICONST] with ['0'] and goto state 79
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 79
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant . LexToken(RBRACKET,']',686,15365)
   yacc.py: 469:Action : Reduce rule [primary_expression -> constant] with ['0'] and goto state 96
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 96
   yacc.py: 433:Stack  : direct_declarator LBRACKET primary_expression . LexToken(RBRACKET,']',686,15365)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> primary_expression] with ['0'] and goto state 86
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : direct_declarator LBRACKET postfix_expression . LexToken(RBRACKET,']',686,15365)
   yacc.py: 469:Action : Reduce rule [unary_expression -> postfix_expression] with ['0'] and goto state 75
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 75
   yacc.py: 433:Stack  : direct_declarator LBRACKET unary_expression . LexToken(RBRACKET,']',686,15365)
   yacc.py: 469:Action : Reduce rule [cast_expression -> unary_expression] with ['0'] and goto state 98
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 98
   yacc.py: 433:Stack  : direct_declarator LBRACKET cast_expression . LexToken(RBRACKET,']',686,15365)
   yacc.py: 469:Action : Reduce rule [multiplicative_expression -> cast_expression] with ['0'] and goto state 103
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 103
   yacc.py: 433:Stack  : direct_declarator LBRACKET multiplicative_expression . LexToken(RBRACKET,']',686,15365)
   yacc.py: 469:Action : Reduce rule [additive_expression -> multiplicative_expression] with ['0'] and goto state 77
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 77
   yacc.py: 433:Stack  : direct_declarator LBRACKET additive_expression . LexToken(RBRACKET,']',686,15365)
   yacc.py: 469:Action : Reduce rule [shift_expression -> additive_expression] with ['0'] and goto state 100
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 100
   yacc.py: 433:Stack  : direct_declarator LBRACKET shift_expression . LexToken(RBRACKET,']',686,15365)
   yacc.py: 469:Action : Reduce rule [relational_expression -> shift_expression] with ['0'] and goto state 88
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 88
   yacc.py: 433:Stack  : direct_declarator LBRACKET relational_expression . LexToken(RBRACKET,']',686,15365)
   yacc.py: 469:Action : Reduce rule [equality_expression -> relational_expression] with ['0'] and goto state 101
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 101
   yacc.py: 433:Stack  : direct_declarator LBRACKET equality_expression . LexToken(RBRACKET,']',686,15365)
   yacc.py: 469:Action : Reduce rule [and_expression -> equality_expression] with ['0'] and goto state 82
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 82
   yacc.py: 433:Stack  : direct_declarator LBRACKET and_expression . LexToken(RBRACKET,']',686,15365)
   yacc.py: 469:Action : Reduce rule [exclusive_or_expression -> and_expression] with ['0'] and goto state 76
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 76
   yacc.py: 433:Stack  : direct_declarator LBRACKET exclusive_or_expression . LexToken(RBRACKET,']',686,15365)
   yacc.py: 469:Action : Reduce rule [inclusive_or_expression -> exclusive_or_expression] with ['0'] and goto state 84
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 84
   yacc.py: 433:Stack  : direct_declarator LBRACKET inclusive_or_expression . LexToken(RBRACKET,']',686,15365)
   yacc.py: 469:Action : Reduce rule [logical_and_expression -> inclusive_or_expression] with ['0'] and goto state 99
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 99
   yacc.py: 433:Stack  : direct_declarator LBRACKET logical_and_expression . LexToken(RBRACKET,']',686,15365)
   yacc.py: 469:Action : Reduce rule [logical_or_expression -> logical_and_expression] with ['0'] and goto state 91
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 91
   yacc.py: 433:Stack  : direct_declarator LBRACKET logical_or_expression . LexToken(RBRACKET,']',686,15365)
   yacc.py: 469:Action : Reduce rule [conditional_expression -> logical_or_expression] with ['0'] and goto state 106
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 106
   yacc.py: 433:Stack  : direct_declarator LBRACKET conditional_expression . LexToken(RBRACKET,']',686,15365)
   yacc.py: 469:Action : Reduce rule [constant_expression -> conditional_expression] with ['0'] and goto state 105
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 105
   yacc.py: 428:Defaulted state 105: Reduce using 105
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression . LexToken(RBRACKET,']',686,15365)
   yacc.py: 469:Action : Reduce rule [constant_expression_opt -> constant_expression] with ['0'] and goto state 104
   yacc.py: 503:Result : <str @ 0x1df73c8> ('0')
   yacc.py: 408:
   yacc.py: 409:State  : 104
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt . LexToken(RBRACKET,']',686,15365)
   yacc.py: 443:Action : Shift and goto state 201
   yacc.py: 408:
   yacc.py: 409:State  : 201
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt RBRACKET . LexToken(PERIOD,'.',686,15366)
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt RBRACKET . LexToken(PERIOD,'.',686,15366)
   yacc.py: 408:
   yacc.py: 409:State  : 201
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt RBRACKET . error
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt RBRACKET . error
   yacc.py: 408:
   yacc.py: 409:State  : 104
   yacc.py: 433:Stack  : direct_declarator LBRACKET constant_expression_opt . error
   yacc.py: 573:Error  : direct_declarator LBRACKET constant_expression_opt . error
   yacc.py: 408:
   yacc.py: 409:State  : 47
   yacc.py: 433:Stack  : direct_declarator LBRACKET . error
   yacc.py: 573:Error  : direct_declarator LBRACKET . error
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . error
   yacc.py: 573:Error  : direct_declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'cbBuffer',686,15367)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(RPAREN,')',686,15375)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['cbBuffer'] and goto state 22
   yacc.py: 503:Result : <str @ 0x671440> ('cbBuffer')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(RPAREN,')',686,15375)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['cbBuffer'] and goto state 37
   yacc.py: 503:Result : <str @ 0x671440> ('cbBuffer')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(RPAREN,')',686,15375)
   yacc.py: 573:Error  : declarator . LexToken(RPAREN,')',686,15375)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(RETURN,'return',687,15380)
   yacc.py: 573:Error  : . LexToken(RETURN,'return',687,15380)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(MINUS,'-',687,15387)
   yacc.py: 573:Error  : . LexToken(MINUS,'-',687,15387)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'1',687,15388)
   yacc.py: 573:Error  : . LexToken(ICONST,'1',687,15388)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(SEMI,';',687,15389)
   yacc.py: 573:Error  : . LexToken(SEMI,';',687,15389)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(IF,'if',689,15394)
   yacc.py: 573:Error  : . LexToken(IF,'if',689,15394)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(LPAREN,'(',689,15397)
   yacc.py: 443:Action : Shift and goto state 4
   yacc.py: 408:
   yacc.py: 409:State  : 4
   yacc.py: 433:Stack  : LPAREN . LexToken(ID,'ss',689,15398)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : LPAREN ID . LexToken(EQ,'==',689,15401)
   yacc.py: 573:Error  : LPAREN ID . LexToken(EQ,'==',689,15401)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : LPAREN ID . error
   yacc.py: 573:Error  : LPAREN ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 4
   yacc.py: 433:Stack  : LPAREN . error
   yacc.py: 573:Error  : LPAREN . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'S_OK',689,15404)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(RPAREN,')',689,15408)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['S_OK'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f97680> ('S_OK')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(RPAREN,')',689,15408)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['S_OK'] and goto state 37
   yacc.py: 503:Result : <str @ 0x1f97680> ('S_OK')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(RPAREN,')',689,15408)
   yacc.py: 573:Error  : declarator . LexToken(RPAREN,')',689,15408)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(BREAK,'break',690,15413)
   yacc.py: 573:Error  : . LexToken(BREAK,'break',690,15413)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(SEMI,';',690,15418)
   yacc.py: 573:Error  : . LexToken(SEMI,';',690,15418)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(DIVIDE,'/',690,15420)
   yacc.py: 573:Error  : . LexToken(DIVIDE,'/',690,15420)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(DIVIDE,'/',690,15421)
   yacc.py: 573:Error  : . LexToken(DIVIDE,'/',690,15421)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'wow',690,15423)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(LNOT,'!',690,15426)
   yacc.py: 573:Error  : ID . LexToken(LNOT,'!',690,15426)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(LNOT,'!',690,15427)
   yacc.py: 573:Error  : . LexToken(LNOT,'!',690,15427)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(RBRACE,'}',692,15434)
   yacc.py: 573:Error  : . LexToken(RBRACE,'}',692,15434)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(RETURN,'return',693,15437)
   yacc.py: 573:Error  : . LexToken(RETURN,'return',693,15437)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'0',693,15444)
   yacc.py: 573:Error  : . LexToken(ICONST,'0',693,15444)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(SEMI,';',693,15445)
   yacc.py: 573:Error  : . LexToken(SEMI,';',693,15445)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(RBRACE,'}',694,15448)
   yacc.py: 573:Error  : . LexToken(RBRACE,'}',694,15448)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'SECURITY_STATUS',696,15451)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(ID,'SSL_SOCKET',696,15467)
   yacc.py: 573:Error  : ID . LexToken(ID,'SSL_SOCKET',696,15467)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . error
   yacc.py: 573:Error  : ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(COLON,':',696,15478)
   yacc.py: 573:Error  : . LexToken(COLON,':',696,15478)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(COLON,':',696,15479)
   yacc.py: 573:Error  : . LexToken(COLON,':',696,15479)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'Verify',696,15481)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(LPAREN,'(',696,15487)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['Verify'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1de43e0> ('Verify')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(LPAREN,'(',696,15487)
   yacc.py: 443:Action : Shift and goto state 48
   yacc.py: 408:
   yacc.py: 409:State  : 48
   yacc.py: 433:Stack  : direct_declarator LPAREN . LexToken(ID,'PCCERT_CONTEXT',696,15488)
   yacc.py: 443:Action : Shift and goto state 113
   yacc.py: 408:
   yacc.py: 409:State  : 113
   yacc.py: 433:Stack  : direct_declarator LPAREN ID . LexToken(ID,'px',696,15503)
   yacc.py: 573:Error  : direct_declarator LPAREN ID . LexToken(ID,'px',696,15503)
   yacc.py: 408:
   yacc.py: 409:State  : 113
   yacc.py: 433:Stack  : direct_declarator LPAREN ID . error
   yacc.py: 573:Error  : direct_declarator LPAREN ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 48
   yacc.py: 433:Stack  : direct_declarator LPAREN . error
   yacc.py: 573:Error  : direct_declarator LPAREN . error
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . error
   yacc.py: 573:Error  : direct_declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(RPAREN,')',696,15505)
   yacc.py: 573:Error  : . LexToken(RPAREN,')',696,15505)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(LBRACE,'{',697,15508)
   yacc.py: 573:Error  : . LexToken(LBRACE,'{',697,15508)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(IF,'if',698,15511)
   yacc.py: 573:Error  : . LexToken(IF,'if',698,15511)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(LPAREN,'(',698,15514)
   yacc.py: 443:Action : Shift and goto state 4
   yacc.py: 408:
   yacc.py: 409:State  : 4
   yacc.py: 433:Stack  : LPAREN . LexToken(ID,'px',698,15515)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : LPAREN ID . LexToken(EQ,'==',698,15518)
   yacc.py: 573:Error  : LPAREN ID . LexToken(EQ,'==',698,15518)
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : LPAREN ID . error
   yacc.py: 573:Error  : LPAREN ID . error
   yacc.py: 408:
   yacc.py: 409:State  : 4
   yacc.py: 433:Stack  : LPAREN . error
   yacc.py: 573:Error  : LPAREN . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ICONST,'0',698,15521)
   yacc.py: 573:Error  : . LexToken(ICONST,'0',698,15521)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(RPAREN,')',698,15522)
   yacc.py: 573:Error  : . LexToken(RPAREN,')',698,15522)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(RETURN,'return',699,15526)
   yacc.py: 573:Error  : . LexToken(RETURN,'return',699,15526)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'SEC_E_WRONG_PRINCIPAL',699,15533)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(SEMI,';',699,15554)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with [<str @ 0x21cdfb0>] and goto state 22
   yacc.py: 503:Result : <str @ 0x21cdfb0> ('SEC_E_WRONG_PRINCIPAL')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(SEMI,';',699,15554)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with [<str @ 0x21cdfb0>] and goto state 37
   yacc.py: 503:Result : <str @ 0x21cdfb0> ('SEC_E_WRONG_PRINCIPAL')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(SEMI,';',699,15554)
   yacc.py: 573:Error  : declarator . LexToken(SEMI,';',699,15554)
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . error
   yacc.py: 573:Error  : declarator . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . error
   yacc.py: 573:Error  : . error
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(DIVIDE,'/',701,15558)
   yacc.py: 573:Error  : . LexToken(DIVIDE,'/',701,15558)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(DIVIDE,'/',701,15559)
   yacc.py: 573:Error  : . LexToken(DIVIDE,'/',701,15559)
   yacc.py: 408:
   yacc.py: 409:State  : 0
   yacc.py: 433:Stack  : . LexToken(ID,'Time',701,15561)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : ID . LexToken(INT,'int',702,15567)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['Time'] and goto state 22
   yacc.py: 503:Result : <str @ 0x21ae280> ('Time')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : direct_declarator . LexToken(INT,'int',702,15567)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['Time'] and goto state 37
   yacc.py: 503:Result : <str @ 0x21ae280> ('Time')
   yacc.py: 408:
   yacc.py: 409:State  : 37
   yacc.py: 433:Stack  : declarator . LexToken(INT,'int',702,15567)
   yacc.py: 443:Action : Shift and goto state 31
   yacc.py: 408:
   yacc.py: 409:State  : 31
   yacc.py: 433:Stack  : declarator INT . LexToken(ID,'iRc',702,15571)
   yacc.py: 469:Action : Reduce rule [type_specifier -> INT] with ['int'] and goto state 13
   yacc.py: 503:Result : <str @ 0x1f85f68> ('int')
   yacc.py: 408:
   yacc.py: 409:State  : 13
   yacc.py: 433:Stack  : declarator type_specifier . LexToken(ID,'iRc',702,15571)
   yacc.py: 469:Action : Reduce rule [declaration_specifiers -> type_specifier] with ['int'] and goto state 58
   yacc.py: 503:Result : <str @ 0x1f85f68> ('int')
   yacc.py: 408:
   yacc.py: 409:State  : 58
   yacc.py: 433:Stack  : declarator declaration_specifiers . LexToken(ID,'iRc',702,15571)
   yacc.py: 443:Action : Shift and goto state 26
   yacc.py: 408:
   yacc.py: 409:State  : 26
   yacc.py: 433:Stack  : declarator declaration_specifiers ID . LexToken(EQUALS,'=',702,15575)
   yacc.py: 469:Action : Reduce rule [direct_declarator -> ID] with ['iRc'] and goto state 22
   yacc.py: 503:Result : <str @ 0x1f85e60> ('iRc')
   yacc.py: 408:
   yacc.py: 409:State  : 22
   yacc.py: 433:Stack  : declarator declaration_specifiers direct_declarator . LexToken(EQUALS,'=',702,15575)
   yacc.py: 469:Action : Reduce rule [declarator -> direct_declarator] with ['iRc'] and goto state 122
   yacc.py: 503:Result : <str @ 0x1f85e60> ('iRc')
   yacc.py: 408:
   yacc.py: 409:State  : 122
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator . LexToken(EQUALS,'=',702,15575)
   yacc.py: 443:Action : Shift and goto state 120
   yacc.py: 408:
   yacc.py: 409:State  : 120
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS . LexToken(ID,'CertVerifyTimeValidity',702,15577)
   yacc.py: 443:Action : Shift and goto state 87
   yacc.py: 408:
   yacc.py: 409:State  : 87
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS ID . LexToken(LPAREN,'(',702,15599)
   yacc.py: 469:Action : Reduce rule [primary_expression -> ID] with [<str @ 0x21cdfb0>] and goto state 96
   yacc.py: 503:Result : <str @ 0x21cdfb0> ('CertVerifyTimeValidity')
   yacc.py: 408:
   yacc.py: 409:State  : 96
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS primary_expression . LexToken(LPAREN,'(',702,15599)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> primary_expression] with [<str @ 0x21cdfb0>] and goto state 86
   yacc.py: 503:Result : <str @ 0x21cdfb0> ('CertVerifyTimeValidity')
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression . LexToken(LPAREN,'(',702,15599)
   yacc.py: 443:Action : Shift and goto state 181
   yacc.py: 408:
   yacc.py: 409:State  : 181
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN . LexToken(ID,'NULL',702,15600)
   yacc.py: 443:Action : Shift and goto state 87
   yacc.py: 408:
   yacc.py: 409:State  : 87
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN ID . LexToken(COMMA,',',702,15604)
   yacc.py: 469:Action : Reduce rule [primary_expression -> ID] with ['NULL'] and goto state 96
   yacc.py: 503:Result : <str @ 0x1f97c60> ('NULL')
   yacc.py: 408:
   yacc.py: 409:State  : 96
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN primary_expression . LexToken(COMMA,',',702,15604)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> primary_expression] with ['NULL'] and goto state 86
   yacc.py: 503:Result : <str @ 0x1f97c60> ('NULL')
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN postfix_expression . LexToken(COMMA,',',702,15604)
   yacc.py: 469:Action : Reduce rule [unary_expression -> postfix_expression] with ['NULL'] and goto state 130
   yacc.py: 503:Result : <str @ 0x1f97c60> ('NULL')
   yacc.py: 408:
   yacc.py: 409:State  : 130
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN unary_expression . LexToken(COMMA,',',702,15604)
   yacc.py: 469:Action : Reduce rule [cast_expression -> unary_expression] with ['NULL'] and goto state 98
   yacc.py: 503:Result : <str @ 0x1f97c60> ('NULL')
   yacc.py: 408:
   yacc.py: 409:State  : 98
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN cast_expression . LexToken(COMMA,',',702,15604)
   yacc.py: 469:Action : Reduce rule [multiplicative_expression -> cast_expression] with ['NULL'] and goto state 103
   yacc.py: 503:Result : <str @ 0x1f97c60> ('NULL')
   yacc.py: 408:
   yacc.py: 409:State  : 103
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN multiplicative_expression . LexToken(COMMA,',',702,15604)
   yacc.py: 469:Action : Reduce rule [additive_expression -> multiplicative_expression] with ['NULL'] and goto state 77
   yacc.py: 503:Result : <str @ 0x1f97c60> ('NULL')
   yacc.py: 408:
   yacc.py: 409:State  : 77
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN additive_expression . LexToken(COMMA,',',702,15604)
   yacc.py: 469:Action : Reduce rule [shift_expression -> additive_expression] with ['NULL'] and goto state 100
   yacc.py: 503:Result : <str @ 0x1f97c60> ('NULL')
   yacc.py: 408:
   yacc.py: 409:State  : 100
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN shift_expression . LexToken(COMMA,',',702,15604)
   yacc.py: 469:Action : Reduce rule [relational_expression -> shift_expression] with ['NULL'] and goto state 88
   yacc.py: 503:Result : <str @ 0x1f97c60> ('NULL')
   yacc.py: 408:
   yacc.py: 409:State  : 88
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN relational_expression . LexToken(COMMA,',',702,15604)
   yacc.py: 469:Action : Reduce rule [equality_expression -> relational_expression] with ['NULL'] and goto state 101
   yacc.py: 503:Result : <str @ 0x1f97c60> ('NULL')
   yacc.py: 408:
   yacc.py: 409:State  : 101
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN equality_expression . LexToken(COMMA,',',702,15604)
   yacc.py: 469:Action : Reduce rule [and_expression -> equality_expression] with ['NULL'] and goto state 82
   yacc.py: 503:Result : <str @ 0x1f97c60> ('NULL')
   yacc.py: 408:
   yacc.py: 409:State  : 82
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN and_expression . LexToken(COMMA,',',702,15604)
   yacc.py: 469:Action : Reduce rule [exclusive_or_expression -> and_expression] with ['NULL'] and goto state 76
   yacc.py: 503:Result : <str @ 0x1f97c60> ('NULL')
   yacc.py: 408:
   yacc.py: 409:State  : 76
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN exclusive_or_expression . LexToken(COMMA,',',702,15604)
   yacc.py: 469:Action : Reduce rule [inclusive_or_expression -> exclusive_or_expression] with ['NULL'] and goto state 84
   yacc.py: 503:Result : <str @ 0x1f97c60> ('NULL')
   yacc.py: 408:
   yacc.py: 409:State  : 84
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN inclusive_or_expression . LexToken(COMMA,',',702,15604)
   yacc.py: 469:Action : Reduce rule [logical_and_expression -> inclusive_or_expression] with ['NULL'] and goto state 99
   yacc.py: 503:Result : <str @ 0x1f97c60> ('NULL')
   yacc.py: 408:
   yacc.py: 409:State  : 99
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN logical_and_expression . LexToken(COMMA,',',702,15604)
   yacc.py: 469:Action : Reduce rule [logical_or_expression -> logical_and_expression] with ['NULL'] and goto state 91
   yacc.py: 503:Result : <str @ 0x1f97c60> ('NULL')
   yacc.py: 408:
   yacc.py: 409:State  : 91
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN logical_or_expression . LexToken(COMMA,',',702,15604)
   yacc.py: 469:Action : Reduce rule [conditional_expression -> logical_or_expression] with ['NULL'] and goto state 151
   yacc.py: 503:Result : <str @ 0x1f97c60> ('NULL')
   yacc.py: 408:
   yacc.py: 409:State  : 151
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN conditional_expression . LexToken(COMMA,',',702,15604)
   yacc.py: 469:Action : Reduce rule [assignment_expression -> conditional_expression] with ['NULL'] and goto state 267
   yacc.py: 503:Result : <str @ 0x1f97c60> ('NULL')
   yacc.py: 408:
   yacc.py: 409:State  : 267
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN assignment_expression . LexToken(COMMA,',',702,15604)
   yacc.py: 469:Action : Reduce rule [argument_expression_list -> assignment_expression] with ['NULL'] and goto state 268
   yacc.py: 503:Result : <str @ 0x1f97c60> ('NULL')
   yacc.py: 408:
   yacc.py: 409:State  : 268
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list . LexToken(COMMA,',',702,15604)
   yacc.py: 443:Action : Shift and goto state 319
   yacc.py: 408:
   yacc.py: 409:State  : 319
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA . LexToken(ID,'px',702,15605)
   yacc.py: 443:Action : Shift and goto state 87
   yacc.py: 408:
   yacc.py: 409:State  : 87
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA ID . LexToken(ARROW,'->',702,15607)
   yacc.py: 469:Action : Reduce rule [primary_expression -> ID] with ['px'] and goto state 96
   yacc.py: 503:Result : <str @ 0x1f85e48> ('px')
   yacc.py: 408:
   yacc.py: 409:State  : 96
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA primary_expression . LexToken(ARROW,'->',702,15607)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> primary_expression] with ['px'] and goto state 86
   yacc.py: 503:Result : <str @ 0x1f85e48> ('px')
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression . LexToken(ARROW,'->',702,15607)
   yacc.py: 443:Action : Shift and goto state 177
   yacc.py: 408:
   yacc.py: 409:State  : 177
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression ARROW . LexToken(ID,'pCertInfo',702,15609)
   yacc.py: 443:Action : Shift and goto state 263
   yacc.py: 408:
   yacc.py: 409:State  : 263
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression ARROW ID . LexToken(RPAREN,')',702,15618)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> postfix_expression ARROW ID] with ['px','->','pCertInfo'] and goto state 86
   yacc.py: 503:Result : <instance @ 0x21c0b48> (<c_ast.Node instance at 0x021C0B48>)
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA postfix_expression . LexToken(RPAREN,')',702,15618)
   yacc.py: 469:Action : Reduce rule [unary_expression -> postfix_expression] with [<instance @ 0x21c0b48>] and goto state 130
   yacc.py: 503:Result : <instance @ 0x21c0b48> (<c_ast.Node instance at 0x021C0B48>)
   yacc.py: 408:
   yacc.py: 409:State  : 130
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA unary_expression . LexToken(RPAREN,')',702,15618)
   yacc.py: 469:Action : Reduce rule [cast_expression -> unary_expression] with [<instance @ 0x21c0b48>] and goto state 98
   yacc.py: 503:Result : <instance @ 0x21c0b48> (<c_ast.Node instance at 0x021C0B48>)
   yacc.py: 408:
   yacc.py: 409:State  : 98
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA cast_expression . LexToken(RPAREN,')',702,15618)
   yacc.py: 469:Action : Reduce rule [multiplicative_expression -> cast_expression] with [<instance @ 0x21c0b48>] and goto state 103
   yacc.py: 503:Result : <instance @ 0x21c0b48> (<c_ast.Node instance at 0x021C0B48>)
   yacc.py: 408:
   yacc.py: 409:State  : 103
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA multiplicative_expression . LexToken(RPAREN,')',702,15618)
   yacc.py: 469:Action : Reduce rule [additive_expression -> multiplicative_expression] with [<instance @ 0x21c0b48>] and goto state 77
   yacc.py: 503:Result : <instance @ 0x21c0b48> (<c_ast.Node instance at 0x021C0B48>)
   yacc.py: 408:
   yacc.py: 409:State  : 77
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA additive_expression . LexToken(RPAREN,')',702,15618)
   yacc.py: 469:Action : Reduce rule [shift_expression -> additive_expression] with [<instance @ 0x21c0b48>] and goto state 100
   yacc.py: 503:Result : <instance @ 0x21c0b48> (<c_ast.Node instance at 0x021C0B48>)
   yacc.py: 408:
   yacc.py: 409:State  : 100
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA shift_expression . LexToken(RPAREN,')',702,15618)
   yacc.py: 469:Action : Reduce rule [relational_expression -> shift_expression] with [<instance @ 0x21c0b48>] and goto state 88
   yacc.py: 503:Result : <instance @ 0x21c0b48> (<c_ast.Node instance at 0x021C0B48>)
   yacc.py: 408:
   yacc.py: 409:State  : 88
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA relational_expression . LexToken(RPAREN,')',702,15618)
   yacc.py: 469:Action : Reduce rule [equality_expression -> relational_expression] with [<instance @ 0x21c0b48>] and goto state 101
   yacc.py: 503:Result : <instance @ 0x21c0b48> (<c_ast.Node instance at 0x021C0B48>)
   yacc.py: 408:
   yacc.py: 409:State  : 101
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA equality_expression . LexToken(RPAREN,')',702,15618)
   yacc.py: 469:Action : Reduce rule [and_expression -> equality_expression] with [<instance @ 0x21c0b48>] and goto state 82
   yacc.py: 503:Result : <instance @ 0x21c0b48> (<c_ast.Node instance at 0x021C0B48>)
   yacc.py: 408:
   yacc.py: 409:State  : 82
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA and_expression . LexToken(RPAREN,')',702,15618)
   yacc.py: 469:Action : Reduce rule [exclusive_or_expression -> and_expression] with [<instance @ 0x21c0b48>] and goto state 76
   yacc.py: 503:Result : <instance @ 0x21c0b48> (<c_ast.Node instance at 0x021C0B48>)
   yacc.py: 408:
   yacc.py: 409:State  : 76
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA exclusive_or_expression . LexToken(RPAREN,')',702,15618)
   yacc.py: 469:Action : Reduce rule [inclusive_or_expression -> exclusive_or_expression] with [<instance @ 0x21c0b48>] and goto state 84
   yacc.py: 503:Result : <instance @ 0x21c0b48> (<c_ast.Node instance at 0x021C0B48>)
   yacc.py: 408:
   yacc.py: 409:State  : 84
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA inclusive_or_expression . LexToken(RPAREN,')',702,15618)
   yacc.py: 469:Action : Reduce rule [logical_and_expression -> inclusive_or_expression] with [<instance @ 0x21c0b48>] and goto state 99
   yacc.py: 503:Result : <instance @ 0x21c0b48> (<c_ast.Node instance at 0x021C0B48>)
   yacc.py: 408:
   yacc.py: 409:State  : 99
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA logical_and_expression . LexToken(RPAREN,')',702,15618)
   yacc.py: 469:Action : Reduce rule [logical_or_expression -> logical_and_expression] with [<instance @ 0x21c0b48>] and goto state 91
   yacc.py: 503:Result : <instance @ 0x21c0b48> (<c_ast.Node instance at 0x021C0B48>)
   yacc.py: 408:
   yacc.py: 409:State  : 91
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA logical_or_expression . LexToken(RPAREN,')',702,15618)
   yacc.py: 469:Action : Reduce rule [conditional_expression -> logical_or_expression] with [<instance @ 0x21c0b48>] and goto state 151
   yacc.py: 503:Result : <instance @ 0x21c0b48> (<c_ast.Node instance at 0x021C0B48>)
   yacc.py: 408:
   yacc.py: 409:State  : 151
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA conditional_expression . LexToken(RPAREN,')',702,15618)
   yacc.py: 469:Action : Reduce rule [assignment_expression -> conditional_expression] with [<instance @ 0x21c0b48>] and goto state 335
   yacc.py: 503:Result : <instance @ 0x21c0b48> (<c_ast.Node instance at 0x021C0B48>)
   yacc.py: 408:
   yacc.py: 409:State  : 335
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list COMMA assignment_expression . LexToken(RPAREN,')',702,15618)
   yacc.py: 469:Action : Reduce rule [argument_expression_list -> argument_expression_list COMMA assignment_expression] with ['NULL',',',<instance @ 0x21c0b48>] and goto state 268
   yacc.py: 503:Result : <instance @ 0x21c0ad0> (<c_ast.Node instance at 0x021C0AD0>)
   yacc.py: 408:
   yacc.py: 409:State  : 268
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list . LexToken(RPAREN,')',702,15618)
   yacc.py: 443:Action : Shift and goto state 318
   yacc.py: 408:
   yacc.py: 409:State  : 318
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression LPAREN argument_expression_list RPAREN . LexToken(SEMI,';',702,15619)
   yacc.py: 469:Action : Reduce rule [postfix_expression -> postfix_expression LPAREN argument_expression_list RPAREN] with [<str @ 0x21cdfb0>,'(',<instance @ 0x21c0ad0>,')'] and goto state 86
   yacc.py: 503:Result : <instance @ 0x21c0c38> (<c_ast.Node instance at 0x021C0C38>)
   yacc.py: 408:
   yacc.py: 409:State  : 86
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS postfix_expression . LexToken(SEMI,';',702,15619)
   yacc.py: 469:Action : Reduce rule [unary_expression -> postfix_expression] with [<instance @ 0x21c0c38>] and goto state 130
   yacc.py: 503:Result : <instance @ 0x21c0c38> (<c_ast.Node instance at 0x021C0C38>)
   yacc.py: 408:
   yacc.py: 409:State  : 130
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS unary_expression . LexToken(SEMI,';',702,15619)
   yacc.py: 469:Action : Reduce rule [cast_expression -> unary_expression] with [<instance @ 0x21c0c38>] and goto state 98
   yacc.py: 503:Result : <instance @ 0x21c0c38> (<c_ast.Node instance at 0x021C0C38>)
   yacc.py: 408:
   yacc.py: 409:State  : 98
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS cast_expression . LexToken(SEMI,';',702,15619)
   yacc.py: 469:Action : Reduce rule [multiplicative_expression -> cast_expression] with [<instance @ 0x21c0c38>] and goto state 103
   yacc.py: 503:Result : <instance @ 0x21c0c38> (<c_ast.Node instance at 0x021C0C38>)
   yacc.py: 408:
   yacc.py: 409:State  : 103
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS multiplicative_expression . LexToken(SEMI,';',702,15619)
   yacc.py: 469:Action : Reduce rule [additive_expression -> multiplicative_expression] with [<instance @ 0x21c0c38>] and goto state 77
   yacc.py: 503:Result : <instance @ 0x21c0c38> (<c_ast.Node instance at 0x021C0C38>)
   yacc.py: 408:
   yacc.py: 409:State  : 77
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS additive_expression . LexToken(SEMI,';',702,15619)
   yacc.py: 469:Action : Reduce rule [shift_expression -> additive_expression] with [<instance @ 0x21c0c38>] and goto state 100
   yacc.py: 503:Result : <instance @ 0x21c0c38> (<c_ast.Node instance at 0x021C0C38>)
   yacc.py: 408:
   yacc.py: 409:State  : 100
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS shift_expression . LexToken(SEMI,';',702,15619)
   yacc.py: 469:Action : Reduce rule [relational_expression -> shift_expression] with [<instance @ 0x21c0c38>] and goto state 88
   yacc.py: 503:Result : <instance @ 0x21c0c38> (<c_ast.Node instance at 0x021C0C38>)
   yacc.py: 408:
   yacc.py: 409:State  : 88
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS relational_expression . LexToken(SEMI,';',702,15619)
   yacc.py: 469:Action : Reduce rule [equality_expression -> relational_expression] with [<instance @ 0x21c0c38>] and goto state 101
   yacc.py: 503:Result : <instance @ 0x21c0c38> (<c_ast.Node instance at 0x021C0C38>)
   yacc.py: 408:
   yacc.py: 409:State  : 101
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS equality_expression . LexToken(SEMI,';',702,15619)
   yacc.py: 469:Action : Reduce rule [and_expression -> equality_expression] with [<instance @ 0x21c0c38>] and goto state 82
   yacc.py: 503:Result : <instance @ 0x21c0c38> (<c_ast.Node instance at 0x021C0C38>)
   yacc.py: 408:
   yacc.py: 409:State  : 82
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS and_expression . LexToken(SEMI,';',702,15619)
   yacc.py: 469:Action : Reduce rule [exclusive_or_expression -> and_expression] with [<instance @ 0x21c0c38>] and goto state 76
   yacc.py: 503:Result : <instance @ 0x21c0c38> (<c_ast.Node instance at 0x021C0C38>)
   yacc.py: 408:
   yacc.py: 409:State  : 76
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS exclusive_or_expression . LexToken(SEMI,';',702,15619)
   yacc.py: 469:Action : Reduce rule [inclusive_or_expression -> exclusive_or_expression] with [<instance @ 0x21c0c38>] and goto state 84
   yacc.py: 503:Result : <instance @ 0x21c0c38> (<c_ast.Node instance at 0x021C0C38>)
   yacc.py: 408:
   yacc.py: 409:State  : 84
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS inclusive_or_expression . LexToken(SEMI,';',702,15619)
   yacc.py: 469:Action : Reduce rule [logical_and_expression -> inclusive_or_expression] with [<instance @ 0x21c0c38>] and goto state 99
   yacc.py: 503:Result : <instance @ 0x21c0c38> (<c_ast.Node instance at 0x021C0C38>)
   yacc.py: 408:
   yacc.py: 409:State  : 99
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS logical_and_expression . LexToken(SEMI,';',702,15619)
   yacc.py: 469:Action : Reduce rule [logical_or_expression -> logical_and_expression] with [<instance @ 0x21c0c38>] and goto state 91
   yacc.py: 503:Result : <instance @ 0x21c0c38> (<c_ast.Node instance at 0x021C0C38>)
   yacc.py: 408:
   yacc.py: 409:State  : 91
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS logical_or_expression . LexToken(SEMI,';',702,15619)
   yacc.py: 469:Action : Reduce rule [conditional_expression -> logical_or_expression] with [<instance @ 0x21c0c38>] and goto state 151
   yacc.py: 503:Result : <instance @ 0x21c0c38> (<c_ast.Node instance at 0x021C0C38>)
   yacc.py: 408:
   yacc.py: 409:State  : 151
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS conditional_expression . LexToken(SEMI,';',702,15619)
   yacc.py: 469:Action : Reduce rule [assignment_expression -> conditional_expression] with [<instance @ 0x21c0c38>] and goto state 216
   yacc.py: 503:Result : <instance @ 0x21c0c38> (<c_ast.Node instance at 0x021C0C38>)
   yacc.py: 408:
   yacc.py: 409:State  : 216
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS assignment_expression . LexToken(SEMI,';',702,15619)
   yacc.py: 469:Action : Reduce rule [initializer -> assignment_expression] with [<instance @ 0x21c0c38>] and goto state 215
   yacc.py: 503:Result : <instance @ 0x21c0c38> (<c_ast.Node instance at 0x021C0C38>)
   yacc.py: 408:
   yacc.py: 409:State  : 215
   yacc.py: 433:Stack  : declarator declaration_specifiers declarator EQUALS initializer . LexToken(SEMI,';',702,15619)
   yacc.py: 469:Action : Reduce rule [init_declarator -> declarator EQUALS initializer] with ['iRc','=',<instance @ 0x21c0c38>] and goto state 54
   yacc.py: 503:Result : <instance @ 0x21c0c88> (<c_ast.Node instance at 0x021C0C88>)
   yacc.py: 408:
   yacc.py: 409:State  : 54
   yacc.py: 433:Stack  : declarator declaration_specifiers init_declarator . LexToken(SEMI,';',702,15619)
   yacc.py: 469:Action : Reduce rule [init_declarator_list -> init_declarator] with [<instance @ 0x21c0c88>] and goto state 53
   yacc.py: 503:Result : <instance @ 0x21c0c88> (<c_ast.Node instance at 0x021C0C88>)
   yacc.py: 408:
   yacc.py: 409:State  : 53
   yacc.py: 433:Stack  : declarator declaration_specifiers init_declarator_list . LexToken(SEMI,';',702,15619)
   yacc.py: 443:Action : Shift and goto state 118
   yacc.py: 408:
   yacc.py: 409:State  : 118
   yacc.py: 433:Stack  : declarator declaration_specifiers init_declarator_list SEMI . LexToken(IF,'if',703,15622)
   yacc.py: 469:Action : Reduce rule [declaration -> declaration_specifiers init_declarator_list SEMI] with ['int',<instance @ 0x21c0c88>,';'] and goto state 59
   yacc.py: 503:Result : <instance @ 0x21c0bc0> (<c_ast.Node instance at 0x021C0BC0>)
   yacc.py: 408:
   yacc.py: 409:State  : 59
   yacc.py: 433:Stack  : declarator declaration . LexToken(IF,'if',703,15622)
   yacc.py: 469:Action : Reduce rule [declaration_list -> declaration] with [<instance @ 0x21c0bc0>] and goto state 61
