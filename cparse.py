# -----------------------------------------------------------------------------
# cparse.py
#
# Simple parser for ANSI C.  Based on the grammar in K&R, 2nd Ed.
# -----------------------------------------------------------------------------

import sys
import clex
import ply.yacc as yacc
from c_ast import *

# Get the token map
tokens = clex.tokens

#TODO:
# 1. change p[1:]
# 2. make sure opt statements work as they should

# translation-unit:

def p_translation_unit_1(p):
    'translation_unit : external_declaration'
    p[0] = create_node('translation_unit', p[1:])

def p_translation_unit_2(p):
    'translation_unit : translation_unit external_declaration'
    p[0] = create_node('translation_unit', p[1:])

# external-declaration:

def p_external_declaration_1(p):
    'external_declaration : function_definition'
    p[0] = create_node('external_declaration', p[1:])

def p_external_declaration_2(p):
    'external_declaration : declaration'
    p[0] = create_node('external_declaration', p[1:])

# function-definition:

def p_function_definition_1(p):
    'function_definition : declaration_specifiers declarator declaration_list compound_statement'
    p[0] = create_node('function_definition' , p[1:])

def p_function_definition_2(p):
    'function_definition : declarator declaration_list compound_statement'
    p[0] = create_node('function_definition', p[1:])

def p_function_definition_3(p):
    'function_definition : declarator compound_statement'
    p[0] = create_node('function_definition', p[1:])

def p_function_definition_4(p):
    'function_definition : declaration_specifiers declarator compound_statement'
    p[0] = create_node('function_definition', p[1:])

# declaration:

def p_declaration_1(p):
    'declaration : declaration_specifiers init_declarator_list SEMI'
    p[0] = create_node('declaration', p[1:])

def p_declaration_2(p):
    'declaration : declaration_specifiers SEMI'
    p[0] = create_node('declaration', p[1:])

# declaration-list:

def p_declaration_list_1(p):
    'declaration_list : declaration'
    p[0] = create_node('declaration_list', p[1:])

def p_declaration_list_2(p):
    'declaration_list : declaration_list declaration '
    p[0] = create_node('declaration_list', p[1:])

# declaration-specifiers
def p_declaration_specifiers_1(p):
    'declaration_specifiers : storage_class_specifier declaration_specifiers'
    p[0] = create_node('declaration_specifiers', p[1:])

def p_declaration_specifiers_2(p):
    'declaration_specifiers : type_specifier declaration_specifiers'
    p[0] = create_node('declaration_specifiers', p[1:])

def p_declaration_specifiers_3(p):
    'declaration_specifiers : type_qualifier declaration_specifiers'
    p[0] = create_node('declaration_specifiers', p[1:])

def p_declaration_specifiers_4(p):
    'declaration_specifiers : storage_class_specifier'
    p[0] = create_node('declaration_specifiers', p[1:])

def p_declaration_specifiers_5(p):
    'declaration_specifiers : type_specifier'
    p[0] = create_node('declaration_specifiers', p[1:])

def p_declaration_specifiers_6(p):
    'declaration_specifiers : type_qualifier'
    p[0] = create_node('declaration_specifiers', p[1:])

# storage-class-specifier
def p_storage_class_specifier(p):
    '''storage_class_specifier : AUTO
                               | REGISTER
                               | STATIC
                               | EXTERN
                               | TYPEDEF
                               '''
    p[0] = create_node('storage_class_specifier', p[1:])

# type-specifier:
def p_type_specifier(p):
    '''type_specifier : VOID
                      | CHAR
                      | SHORT
                      | INT
                      | LONG
                      | FLOAT
                      | DOUBLE
                      | SIGNED
                      | UNSIGNED
                      | struct_or_union_specifier
                      | enum_specifier
                      | TYPEID
                      '''
    p[0] = create_node('type_specifier', p[1:])

# type-qualifier:
def p_type_qualifier(p):
    '''type_qualifier : CONST
                      | VOLATILE'''
    p[0] = create_node('type_qualifier', p[1:])

# struct-or-union-specifier

def p_struct_or_union_specifier_1(p):
    'struct_or_union_specifier : struct_or_union ID LBRACE struct_declaration_list RBRACE'
    p[0] = create_node('struct_or_union_specifier', p[1:])

def p_struct_or_union_specifier_2(p):
    'struct_or_union_specifier : struct_or_union LBRACE struct_declaration_list RBRACE'
    p[0] = create_node('struct_or_union_specifier', p[1:])

def p_struct_or_union_specifier_3(p):
    'struct_or_union_specifier : struct_or_union ID'
    p[0] = create_node('struct_or_union_specifier', p[1:])

# struct-or-union:
def p_struct_or_union(p):
    '''struct_or_union : STRUCT
                       | UNION
                       '''
    p[0] = create_node('struct_or_union', p[1:])

# struct-declaration-list:

def p_struct_declaration_list_1(p):
    'struct_declaration_list : struct_declaration'
    p[0] = create_node('struct_declaration_list', p[1:])

def p_struct_declaration_list_2(p):
    'struct_declaration_list : struct_declaration_list struct_declaration'
    p[0] = create_node('struct_declaration_list', p[1:])

# init-declarator-list:

def p_init_declarator_list_1(p):
    'init_declarator_list : init_declarator'
    p[0] = create_node('init_declarator_list', p[1:])

def p_init_declarator_list_2(p):
    'init_declarator_list : init_declarator_list COMMA init_declarator'
    p[0] = create_node('init_declarator_list', p[1:])

# init-declarator

def p_init_declarator_1(p):
    'init_declarator : declarator'
    p[0] = create_node('init_declarator', p[1:])

def p_init_declarator_2(p):
    'init_declarator : declarator EQUALS initializer'
    p[0] = create_node('init_declarator', p[1:])

# struct-declaration:

def p_struct_declaration(p):
    'struct_declaration : specifier_qualifier_list struct_declarator_list SEMI'
    p[0] = create_node('struct_declaration', p[1:])

# specifier-qualifier-list:

def p_specifier_qualifier_list_1(p):
    'specifier_qualifier_list : type_specifier specifier_qualifier_list'
    p[0] = create_node('specifier_qualifier_list', p[1:])

def p_specifier_qualifier_list_2(p):
    'specifier_qualifier_list : type_specifier'
    p[0] = create_node('specifier_qualifier_list', p[1:])

def p_specifier_qualifier_list_3(p):
    'specifier_qualifier_list : type_qualifier specifier_qualifier_list'
    p[0] = create_node('specifier_qualifier_list', p[1:])

def p_specifier_qualifier_list_4(p):
    'specifier_qualifier_list : type_qualifier'
    p[0] = create_node('specifier_qualifier_list', p[1:])

# struct-declarator-list:

def p_struct_declarator_list_1(p):
    'struct_declarator_list : struct_declarator'
    p[0] = create_node('struct_declarator_list', p[1:])

def p_struct_declarator_list_2(p):
    'struct_declarator_list : struct_declarator_list COMMA struct_declarator'
    p[0] = create_node('struct_declarator_list', p[1:])

# struct-declarator:

def p_struct_declarator_1(p):
    'struct_declarator : declarator'
    p[0] = create_node('struct_declarator', p[1:])

def p_struct_declarator_2(p):
    'struct_declarator : declarator COLON constant_expression'
    p[0] = create_node('struct_declarator', p[1:])

def p_struct_declarator_3(p):
    'struct_declarator : COLON constant_expression'
    p[0] = create_node('struct_declarator', p[1:])

# enum-specifier:

def p_enum_specifier_1(p):
    'enum_specifier : ENUM ID LBRACE enumerator_list RBRACE'
    p[0] = create_node('enum_specifier', p[1:])

def p_enum_specifier_2(p):
    'enum_specifier : ENUM LBRACE enumerator_list RBRACE'
    p[0] = create_node('enum_specifier', p[1:])

def p_enum_specifier_3(p):
    'enum_specifier : ENUM ID'
    p[0] = create_node('enum_specifier', p[1:])

# enumerator_list:
def p_enumerator_list_1(p):
    'enumerator_list : enumerator'
    p[0] = create_node('enumerator_list', p[1:])

def p_enumerator_list_2(p):
    'enumerator_list : enumerator_list COMMA enumerator'
    p[0] = create_node('enumerator_list', p[1:])

# enumerator:
def p_enumerator_1(p):
    'enumerator : ID'
    p[0] = create_node('enumerator', p[1:])

def p_enumerator_2(p):
    'enumerator : ID EQUALS constant_expression'
    p[0] = create_node('enumerator', p[1:])

# declarator:

def p_declarator_1(p):
    'declarator : pointer direct_declarator'
    p[0] = create_node('declarator', p[1:])

def p_declarator_2(p):
    'declarator : direct_declarator'
    p[0] = create_node('declarator', p[1:])

# direct-declarator:

def p_direct_declarator_1(p):
    'direct_declarator : ID'
    p[0] = create_node('direct_declarator', p[1:])

def p_direct_declarator_2(p):
    'direct_declarator : LPAREN declarator RPAREN'
    p[0] = create_node('direct_declarator', p[1:])

def p_direct_declarator_3(p):
    'direct_declarator : direct_declarator LBRACKET constant_expression_opt RBRACKET'
    p[0] = create_node('direct_declarator', p[1:])

def p_direct_declarator_4(p):
    'direct_declarator : direct_declarator LPAREN parameter_type_list RPAREN '
    p[0] = create_node('direct_declarator', p[1:])

def p_direct_declarator_5(p):
    'direct_declarator : direct_declarator LPAREN identifier_list RPAREN '
    p[0] = create_node('direct_declarator', p[1:])

def p_direct_declarator_6(p):
    'direct_declarator : direct_declarator LPAREN RPAREN '
    p[0] = create_node('direct_declarator', p[1:])

# pointer:
def p_pointer_1(p):
    'pointer : TIMES type_qualifier_list'
    p[0] = create_node('pointer', p[1:])

def p_pointer_2(p):
    'pointer : TIMES'
    p[0] = create_node('pointer', p[1:])

def p_pointer_3(p):
    'pointer : TIMES type_qualifier_list pointer'
    p[0] = create_node('pointer', p[1:])

def p_pointer_4(p):
    'pointer : TIMES pointer'
    p[0] = create_node('pointer', p[1:])

# type-qualifier-list:

def p_type_qualifier_list_1(p):
    'type_qualifier_list : type_qualifier'
    p[0] = create_node('type_qualifier_list', p[1:])

def p_type_qualifier_list_2(p):
    'type_qualifier_list : type_qualifier_list type_qualifier'
    p[0] = create_node('type_qualifier_list', p[1:])

# parameter-type-list:

def p_parameter_type_list_1(p):
    'parameter_type_list : parameter_list'
    p[0] = create_node('parameter_type_list', p[1:])

def p_parameter_type_list_2(p):
    'parameter_type_list : parameter_list COMMA ELLIPSIS'
    p[0] = create_node('parameter_type_list', p[1:])

# parameter-list:

def p_parameter_list_1(p):
    'parameter_list : parameter_declaration'
    p[0] = create_node('parameter_list', p[1:])

def p_parameter_list_2(p):
    'parameter_list : parameter_list COMMA parameter_declaration'
    p[0] = create_node('parameter_list', p[1:])

# parameter-declaration:
def p_parameter_declaration_1(p):
    'parameter_declaration : declaration_specifiers declarator'
    p[0] = create_node('parameter_declaration', p[1:])

def p_parameter_declaration_2(p):
    'parameter_declaration : declaration_specifiers abstract_declarator_opt'
    p[0] = create_node('parameter_declaration', p[1:])

# identifier-list:
def p_identifier_list_1(p):
    'identifier_list : ID'
    p[0] = create_node('identifier_list', p[1:])

def p_identifier_list_2(p):
    'identifier_list : identifier_list COMMA ID'
    p[0] = create_node('identifier_list', p[1:])

# initializer:

def p_initializer_1(p):
    'initializer : assignment_expression'
    p[0] = create_node('initializer', p[1:])

def p_initializer_2(p):
    '''initializer : LBRACE initializer_list RBRACE
                   | LBRACE initializer_list COMMA RBRACE'''
    if len(p) == 4:
        p[0] = create_node('initializer', p[1:])
    else:
        p[0] = create_node('initializer', p[1:])

# initializer-list:

def p_initializer_list_1(p):
    'initializer_list : initializer'
    p[0] = create_node('initializer_list', p[1:])

def p_initializer_list_2(p):
    'initializer_list : initializer_list COMMA initializer'
    p[0] = create_node('initializer_list', p[1:])

# type-name:

def p_type_name(p):
    'type_name : specifier_qualifier_list abstract_declarator_opt'
    p[0] = create_node('type_name', p[1:])

def p_abstract_declarator_opt_1(p):
    'abstract_declarator_opt : empty'
    p[0] = create_node('abstract_declarator_opt', p[1:])

def p_abstract_declarator_opt_2(p):
    'abstract_declarator_opt : abstract_declarator'
    p[0] = create_node('abstract_declarator_opt', p[1:])

# abstract-declarator:

def p_abstract_declarator_1(p):
    'abstract_declarator : pointer '
    p[0] = create_node('abstract_declarator', p[1:])

def p_abstract_declarator_2(p):
    'abstract_declarator : pointer direct_abstract_declarator'
    p[0] = create_node('abstract_declarator', p[1:])

def p_abstract_declarator_3(p):
    'abstract_declarator : direct_abstract_declarator'
    p[0] = create_node('abstract_declarator', p[1:])

# direct-abstract-declarator:

def p_direct_abstract_declarator_1(p):
    'direct_abstract_declarator : LPAREN abstract_declarator RPAREN'
    p[0] = create_node('direct_abstract_declarator', p[1:])

def p_direct_abstract_declarator_2(p):
    'direct_abstract_declarator : direct_abstract_declarator LBRACKET constant_expression_opt RBRACKET'
    p[0] = create_node('direct_abstract_declarator', p[1:])

def p_direct_abstract_declarator_3(p):
    'direct_abstract_declarator : LBRACKET constant_expression_opt RBRACKET'
    p[0] = create_node('direct_abstract_declarator', p[1:])

def p_direct_abstract_declarator_4(p):
    'direct_abstract_declarator : direct_abstract_declarator LPAREN parameter_type_list_opt RPAREN'
    p[0] = create_node('direct_abstract_declarator', p[1:])

def p_direct_abstract_declarator_5(p):
    'direct_abstract_declarator : LPAREN parameter_type_list_opt RPAREN'
    p[0] = create_node('direct_abstract_declarator', p[1:])

# Optional fields in abstract declarators

def p_constant_expression_opt_1(p):
    'constant_expression_opt : empty'
    p[0] = create_node('constant_expression_opt', p[1:])

def p_constant_expression_opt_2(p):
    'constant_expression_opt : constant_expression'
    p[0] = create_node('constant_expression_opt', p[1:])

def p_parameter_type_list_opt_1(p):
    'parameter_type_list_opt : empty'
    p[0] = create_node('parameter_type_list_opt', p[1:])

def p_parameter_type_list_opt_2(p):
    'parameter_type_list_opt : parameter_type_list'
    p[0] = create_node('parameter_type_list_opt', p[1:])

# statement:

def p_statement(p):
    '''
    statement : labeled_statement
              | expression_statement
              | compound_statement
              | selection_statement
              | iteration_statement
              | jump_statement
              '''
    p[0] = create_node('statement', p[1:])

# labeled-statement:

def p_labeled_statement_1(p):
    'labeled_statement : ID COLON statement'
    p[0] = create_node('labeled_statement', p[1:])

def p_labeled_statement_2(p):
    'labeled_statement : CASE constant_expression COLON statement'
    p[0] = create_node('labeled_statement', p[1:])

def p_labeled_statement_3(p):
    'labeled_statement : DEFAULT COLON statement'
    p[0] = create_node('labeled_statement', p[1:])

# expression-statement:
def p_expression_statement(p):
    'expression_statement : expression_opt SEMI'
    p[0] = create_node('expression_statement', p[1:])

# compound-statement:

def p_compound_statement_1(p):
    'compound_statement : LBRACE declaration_list statement_list RBRACE'
    p[0] = create_node('compound_statement', p[1:])

def p_compound_statement_2(p):
    'compound_statement : LBRACE statement_list RBRACE'
    p[0] = create_node('compound_statement', p[1:])

def p_compound_statement_3(p):
    'compound_statement : LBRACE declaration_list RBRACE'
    p[0] = create_node('compound_statement', p[1:])

def p_compound_statement_4(p):
    'compound_statement : LBRACE RBRACE'
    p[0] = create_node('compound_statement', p[1:])

# statement-list:

def p_statement_list_1(p):
    'statement_list : statement'
    p[0] = create_node('statement_list', p[1:])

def p_statement_list_2(p):
    'statement_list : statement_list statement'
    p[0] = create_node('statement_list', p[1:])

# selection-statement

def p_selection_statement_1(p):
    'selection_statement : IF LPAREN expression RPAREN statement'
    p[0] = create_node('selection_statement', p[1:])

def p_selection_statement_2(p):
    'selection_statement : IF LPAREN expression RPAREN statement ELSE statement '
    p[0] = create_node('selection_statement', p[1:])

def p_selection_statement_3(p):
    'selection_statement : SWITCH LPAREN expression RPAREN statement '
    p[0] = create_node('selection_statement', p[1:])

# iteration_statement:

def p_iteration_statement_1(p):
    'iteration_statement : WHILE LPAREN expression RPAREN statement'
    p[0] = create_node('iteration_statement', p[1:])

def p_iteration_statement_2(p):
    'iteration_statement : FOR LPAREN expression_opt SEMI expression_opt SEMI expression_opt RPAREN statement '
    p[0] = create_node('iteration_statement', p[1:])

def p_iteration_statement_3(p):
    'iteration_statement : DO statement WHILE LPAREN expression RPAREN SEMI'
    p[0] = create_node('iteration_statement', p[1:])

# jump_statement:

def p_jump_statement_1(p):
    'jump_statement : GOTO ID SEMI'
    p[0] = create_node('jump_statement', p[1:])

def p_jump_statement_2(p):
    'jump_statement : CONTINUE SEMI'
    p[0] = create_node('jump_statement', p[1:])

def p_jump_statement_3(p):
    'jump_statement : BREAK SEMI'
    p[0] = create_node('jump_statement', p[1:])

def p_jump_statement_4(p):
    'jump_statement : RETURN expression_opt SEMI'
    p[0] = create_node('jump_statement', p[1:])

def p_expression_opt_1(p):
    'expression_opt : empty'
    p[0] = create_node('expression_opt', p[1:])

def p_expression_opt_2(p):
    'expression_opt : expression'
    p[0] = create_node('expression_opt', p[1:])

# expression:
def p_expression_1(p):
    'expression : assignment_expression'
    p[0] = create_node('expression', p[1:])

def p_expression_2(p):
    'expression : expression COMMA assignment_expression'
    p[0] = create_node('expression', p[1:])

# assigment_expression:
def p_assignment_expression_1(p):
    'assignment_expression : conditional_expression'
    p[0] = create_node('assignment_expression', p[1:])

def p_assignment_expression_2(p):
    'assignment_expression : unary_expression assignment_operator assignment_expression'
    p[0] = create_node('assignment_expression', p[1:])

# assignment_operator:
def p_assignment_operator(p):
    '''
    assignment_operator : EQUALS
                        | TIMESEQUAL
                        | DIVEQUAL
                        | MODEQUAL
                        | PLUSEQUAL
                        | MINUSEQUAL
                        | LSHIFTEQUAL
                        | RSHIFTEQUAL
                        | ANDEQUAL
                        | OREQUAL
                        | XOREQUAL
                        '''
    p[0] = create_node('assignment_operator', p[1:])

# conditional-expression
def p_conditional_expression_1(p):
    'conditional_expression : logical_or_expression'
    p[0] = create_node('conditional_expression', p[1:])

def p_conditional_expression_2(p):
    'conditional_expression : logical_or_expression CONDOP expression COLON conditional_expression '
    p[0] = create_node('conditional_expression', p[1:])

# constant-expression

def p_constant_expression(p):
    'constant_expression : conditional_expression'
    p[0] = create_node('constant_expression', p[1:])

# logical-or-expression

def p_logical_or_expression_1(p):
    'logical_or_expression : logical_and_expression'
    p[0] = create_node('logical_or_expression', p[1:])

def p_logical_or_expression_2(p):
    'logical_or_expression : logical_or_expression LOR logical_and_expression'
    p[0] = create_node('logical_or_expression', p[1:])

# logical-and-expression

def p_logical_and_expression_1(p):
    'logical_and_expression : inclusive_or_expression'
    p[0] = create_node('logical_and_expression', p[1:])

def p_logical_and_expression_2(p):
    'logical_and_expression : logical_and_expression LAND inclusive_or_expression'
    p[0] = create_node('logical_and_expression', p[1:])

# inclusive-or-expression:

def p_inclusive_or_expression_1(p):
    'inclusive_or_expression : exclusive_or_expression'
    p[0] = create_node('inclusive_or_expression', p[1:])

def p_inclusive_or_expression_2(p):
    'inclusive_or_expression : inclusive_or_expression OR exclusive_or_expression'
    p[0] = create_node('inclusive_or_expression', p[1:])

# exclusive-or-expression:

def p_exclusive_or_expression_1(p):
    'exclusive_or_expression :  and_expression'
    p[0] = create_node('exclusive_or_expression', p[1:])

def p_exclusive_or_expression_2(p):
    'exclusive_or_expression :  exclusive_or_expression XOR and_expression'
    p[0] = create_node('exclusive_or_expression', p[1:])

# AND-expression

def p_and_expression_1(p):
    'and_expression : equality_expression'
    p[0] = create_node('and_expression', p[1:])

def p_and_expression_2(p):
    'and_expression : and_expression AND equality_expression'
    p[0] = create_node('and_expression', p[1:])


# equality-expression:
def p_equality_expression_1(p):
    'equality_expression : relational_expression'
    p[0] = create_node('equality_expression', p[1:])

def p_equality_expression_2(p):
    'equality_expression : equality_expression EQ relational_expression'
    p[0] = create_node('equality_expression', p[1:])

def p_equality_expression_3(p):
    'equality_expression : equality_expression NE relational_expression'
    p[0] = create_node('equality_expression', p[1:])


# relational-expression:
def p_relational_expression_1(p):
    'relational_expression : shift_expression'
    p[0] = create_node('relational_expression', p[1:])

def p_relational_expression_2(p):
    'relational_expression : relational_expression LT shift_expression'
    p[0] = create_node('relational_expression', p[1:])

def p_relational_expression_3(p):
    'relational_expression : relational_expression GT shift_expression'
    p[0] = create_node('relational_expression', p[1:])

def p_relational_expression_4(p):
    'relational_expression : relational_expression LE shift_expression'
    p[0] = create_node('relational_expression', p[1:])

def p_relational_expression_5(p):
    'relational_expression : relational_expression GE shift_expression'
    p[0] = create_node('relational_expression', p[1:])

# shift-expression

def p_shift_expression_1(p):
    'shift_expression : additive_expression'
    p[0] = create_node('shift_expression', p[1:])

def p_shift_expression_2(p):
    'shift_expression : shift_expression LSHIFT additive_expression'
    p[0] = create_node('shift_expression', p[1:])

def p_shift_expression_3(p):
    'shift_expression : shift_expression RSHIFT additive_expression'
    p[0] = create_node('shift_expression', p[1:])

# additive-expression

def p_additive_expression_1(p):
    'additive_expression : multiplicative_expression'
    p[0] = create_node('additive_expression', p[1:])

def p_additive_expression_2(p):
    'additive_expression : additive_expression PLUS multiplicative_expression'
    p[0] = create_node('additive_expression', p[1:])

def p_additive_expression_3(p):
    'additive_expression : additive_expression MINUS multiplicative_expression'
    p[0] = create_node('additive_expression', p[1:])

# multiplicative-expression

def p_multiplicative_expression_1(p):
    'multiplicative_expression : cast_expression'
    p[0] = create_node('multiplicative_expression', p[1:])

def p_multiplicative_expression_2(p):
    'multiplicative_expression : multiplicative_expression TIMES cast_expression'
    p[0] = create_node('multiplicative_expression', p[1:])

def p_multiplicative_expression_3(p):
    'multiplicative_expression : multiplicative_expression DIVIDE cast_expression'
    p[0] = create_node('multiplicative_expression', p[1:])

def p_multiplicative_expression_4(p):
    'multiplicative_expression : multiplicative_expression MOD cast_expression'
    p[0] = create_node('multiplicative_expression', p[1:])

# cast-expression:

def p_cast_expression_1(p):
    'cast_expression : unary_expression'
    p[0] = create_node('cast_expression', p[1:])

def p_cast_expression_2(p):
    'cast_expression : LPAREN type_name RPAREN cast_expression'
    p[0] = create_node('cast_expression', p[1:])

# unary-expression:
def p_unary_expression_1(p):
    'unary_expression : postfix_expression'
    p[0] = create_node('unary_expression', p[1:])

def p_unary_expression_2(p):
    'unary_expression : PLUSPLUS unary_expression'
    p[0] = create_node('unary_expression', p[1:])

def p_unary_expression_3(p):
    'unary_expression : MINUSMINUS unary_expression'
    p[0] = create_node('unary_expression', p[1:])

def p_unary_expression_4(p):
    'unary_expression : unary_operator cast_expression'
    p[0] = create_node('unary_expression', p[1:])

def p_unary_expression_5(p):
    'unary_expression : SIZEOF unary_expression'
    p[0] = create_node('unary_expression', p[1:])

def p_unary_expression_6(p):
    'unary_expression : SIZEOF LPAREN type_name RPAREN'
    p[0] = create_node('unary_expression', p[1:])
    
#unary-operator
def p_unary_operator(p):
    '''unary_operator : AND
                    | TIMES
                    | PLUS 
                    | MINUS
                    | NOT
                    | LNOT '''
    p[0] = create_node('unary_expression', p[1:])

# postfix-expression:
def p_postfix_expression_1(p):
    'postfix_expression : primary_expression'
    p[0] = create_node('postfix_expression', p[1:])

def p_postfix_expression_2(p):
    'postfix_expression : postfix_expression LBRACKET expression RBRACKET'
    p[0] = create_node('postfix_expression', p[1:])

def p_postfix_expression_3(p):
    'postfix_expression : postfix_expression LPAREN argument_expression_list RPAREN'
    p[0] = create_node('postfix_expression', p[1:])

def p_postfix_expression_4(p):
    'postfix_expression : postfix_expression LPAREN RPAREN'
    p[0] = create_node('postfix_expression', p[1:])

def p_postfix_expression_5(p):
    'postfix_expression : postfix_expression PERIOD ID'
    p[0] = create_node('postfix_expression', p[1:])

def p_postfix_expression_6(p):
    'postfix_expression : postfix_expression ARROW ID'
    p[0] = create_node('postfix_expression', p[1:])

def p_postfix_expression_7(p):
    'postfix_expression : postfix_expression PLUSPLUS'
    p[0] = create_node('postfix_expression', p[1:])

def p_postfix_expression_8(p):
    'postfix_expression : postfix_expression MINUSMINUS'
    p[0] = create_node('postfix_expression', p[1:])

# primary-expression:
def p_primary_expression(p):
    '''primary_expression :  ID
                        |  constant
                        |  SCONST
                        |  LPAREN expression RPAREN'''
    if len(p) == 2:
        p[0] = create_node('primary_expression', p[1:])
    else:
        p[0] = create_node('primary_expression', p[1:])

# argument-expression-list:
def p_argument_expression_list(p):
    '''argument_expression_list :  assignment_expression
                              |  argument_expression_list COMMA assignment_expression'''
    if len(p) == 2:
        p[0] = create_node('argument_expression_list', p[1:])
    else:
        p[0] = create_node('argument_expression_list', p[1:])

# constant:
def p_constant(p): 
   '''constant : ICONST
              | FCONST
              | CCONST'''
   p[0] = create_node('constant', p[1:])


def p_empty(p):
    'empty : '
    pass

def p_error(p):
    print("Whoa. We're hosed")

import profile
# Build the grammar

yacc.yacc()
#yacc.yacc(method='LALR',write_tables=False,debug=True)

#profile.run("yacc.yacc(method='LALR')")

