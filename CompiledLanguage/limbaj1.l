%{
#include <stdio.h>
#include "./source.h"
#include "y.tab.h"
%}
%option noyywrap
%option yylineno
%%
"int"|"float"|"char"|"string"|"bool" {yylval.intValue=get_type(yytext);  return TIP;}
"void" {yylval.intValue=get_type(yytext);  return VOID;}
"const" {return CONST;}
"return" {return RETURN;}
"begin_progr" {return BGIN;}
"end_progr" {return END;}
"Class" {return CLASS;}
"private"|"public" {return ACCESS;}
"While" {return WHILE;}
"If" {return IF;}
"Else" {return ELSE;}
"For" {return FOR;}
"Eval" {return EVAL;}
"&&" {return AND; }
"||" {return OR; }
"<=" {return LE; }
">=" {return GE; }
"==" {return EQ; }
"!=" {return NEQ; }
"<" {return LS; }
">" {return GR; }
"!" {return NOT; }
"println" {return PRINT;}
"true" {yylval.intValue=1; return NR;}
"false" {yylval.intValue=0; return NR;}
@[_a-zA-Z][_a-zA-Z0-9]* {strcpy(yylval.stringValue, yytext); return ID;}
[_a-zA-Z][_a-zA-Z0-9]* {strcpy(yylval.stringValue, yytext); return CLASS_ID;}
":=" {return ASSIGN;}
[0-9]+ {yylval.intValue=atoi(yytext); return NR;} 
["][^"]+["] { strncpy(yylval.stringValue, yytext+1, strlen(yytext)-2); return WORD;}
[0-9]+"."[0-9]+ {yylval.floatValue=atof(yytext); return FLT;} 
['][a-zA-Z_]['] {yylval.charValue = yytext[0]; return LETTER;}
 
[ \t] ;
\n {yylineno++;}
. {return yytext[0];}
%%
