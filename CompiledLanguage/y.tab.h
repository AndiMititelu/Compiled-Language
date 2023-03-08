/* A Bison parser, made by GNU Bison 3.8.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    BGIN = 258,                    /* BGIN  */
    END = 259,                     /* END  */
    ASSIGN = 260,                  /* ASSIGN  */
    CLASS = 261,                   /* CLASS  */
    ACCESS = 262,                  /* ACCESS  */
    CONST = 263,                   /* CONST  */
    RETURN = 264,                  /* RETURN  */
    ID = 265,                      /* ID  */
    CLASS_ID = 266,                /* CLASS_ID  */
    NR = 267,                      /* NR  */
    TIP = 268,                     /* TIP  */
    VOID = 269,                    /* VOID  */
    WORD = 270,                    /* WORD  */
    FLT = 271,                     /* FLT  */
    LETTER = 272,                  /* LETTER  */
    AND = 273,                     /* AND  */
    OR = 274,                      /* OR  */
    LE = 275,                      /* LE  */
    GE = 276,                      /* GE  */
    EQ = 277,                      /* EQ  */
    NEQ = 278,                     /* NEQ  */
    LS = 279,                      /* LS  */
    GR = 280,                      /* GR  */
    NOT = 281,                     /* NOT  */
    PRINT = 282,                   /* PRINT  */
    WHILE = 283,                   /* WHILE  */
    IF = 284,                      /* IF  */
    ELSE = 285,                    /* ELSE  */
    FOR = 286,                     /* FOR  */
    EVAL = 287                     /* EVAL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define BGIN 258
#define END 259
#define ASSIGN 260
#define CLASS 261
#define ACCESS 262
#define CONST 263
#define RETURN 264
#define ID 265
#define CLASS_ID 266
#define NR 267
#define TIP 268
#define VOID 269
#define WORD 270
#define FLT 271
#define LETTER 272
#define AND 273
#define OR 274
#define LE 275
#define GE 276
#define EQ 277
#define NEQ 278
#define LS 279
#define GR 280
#define NOT 281
#define PRINT 282
#define WHILE 283
#define IF 284
#define ELSE 285
#define FOR 286
#define EVAL 287

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "limbaj1.y"

    int intValue;
    float floatValue;
    char charValue;
    char stringValue[256];

#line 138 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

#if !defined yyerror && !defined YYERROR_IS_DECLARED
void yyerror (const char *msg);
#endif
#if !defined yylex && !defined YYLEX_IS_DECLARED
int yylex (void);
#endif

int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
