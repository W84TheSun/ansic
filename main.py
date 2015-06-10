#encoding: utf-8
import sys
from ply import lex, yacc
import clex
import cparse
import logging
import re
import os.path as path


if __name__ == '__main__':
    
    if len(sys.argv) < 2:
        print("Not enough aguments! Exiting..")
        print("Usage %s %s" % (sys.argv[0], "[file_to_analyse]"))
        exit()


    data = open(sys.argv[1]).read()

    file_name = path.split(sys.argv[1])[1][:-2]

    logging.basicConfig(level = logging.DEBUG, filename = file_name,
        filemode = 'w', format = "%(filename)10s:%(lineno)4d:%(message)s")

    log = logging.getLogger()

    lex.lex(module=clex,debug=True,debuglog=log)
    yacc.yacc(module=cparse,debug=True,debuglog=log)

    prog = yacc.parse(data,debug=log)

    print prog