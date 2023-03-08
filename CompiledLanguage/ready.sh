#!/bin/bash

lex limbaj1.l

yacc -d limbaj1.y

gcc lex.yy.c source.c y.tab.c -o lmb1
