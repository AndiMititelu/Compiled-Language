/* A Bison parser, made by GNU Bison 3.8.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30800

/* Bison version string.  */
#define YYBISON_VERSION "3.8"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "limbaj1.y"

#include <stdio.h>
#include <string.h>
#include "./source.h"

int yylex();

extern FILE* yyin;
extern char* yytext;
extern int yylineno;

#line 83 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 207 "y.tab.c"

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
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_BGIN = 3,                       /* BGIN  */
  YYSYMBOL_END = 4,                        /* END  */
  YYSYMBOL_ASSIGN = 5,                     /* ASSIGN  */
  YYSYMBOL_CLASS = 6,                      /* CLASS  */
  YYSYMBOL_ACCESS = 7,                     /* ACCESS  */
  YYSYMBOL_CONST = 8,                      /* CONST  */
  YYSYMBOL_RETURN = 9,                     /* RETURN  */
  YYSYMBOL_ID = 10,                        /* ID  */
  YYSYMBOL_CLASS_ID = 11,                  /* CLASS_ID  */
  YYSYMBOL_NR = 12,                        /* NR  */
  YYSYMBOL_TIP = 13,                       /* TIP  */
  YYSYMBOL_VOID = 14,                      /* VOID  */
  YYSYMBOL_WORD = 15,                      /* WORD  */
  YYSYMBOL_FLT = 16,                       /* FLT  */
  YYSYMBOL_LETTER = 17,                    /* LETTER  */
  YYSYMBOL_AND = 18,                       /* AND  */
  YYSYMBOL_OR = 19,                        /* OR  */
  YYSYMBOL_LE = 20,                        /* LE  */
  YYSYMBOL_GE = 21,                        /* GE  */
  YYSYMBOL_EQ = 22,                        /* EQ  */
  YYSYMBOL_NEQ = 23,                       /* NEQ  */
  YYSYMBOL_LS = 24,                        /* LS  */
  YYSYMBOL_GR = 25,                        /* GR  */
  YYSYMBOL_NOT = 26,                       /* NOT  */
  YYSYMBOL_PRINT = 27,                     /* PRINT  */
  YYSYMBOL_WHILE = 28,                     /* WHILE  */
  YYSYMBOL_IF = 29,                        /* IF  */
  YYSYMBOL_ELSE = 30,                      /* ELSE  */
  YYSYMBOL_FOR = 31,                       /* FOR  */
  YYSYMBOL_EVAL = 32,                      /* EVAL  */
  YYSYMBOL_33_ = 33,                       /* '+'  */
  YYSYMBOL_34_ = 34,                       /* '-'  */
  YYSYMBOL_35_ = 35,                       /* '*'  */
  YYSYMBOL_36_ = 36,                       /* '/'  */
  YYSYMBOL_37_ = 37,                       /* ';'  */
  YYSYMBOL_38_ = 38,                       /* ':'  */
  YYSYMBOL_39_ = 39,                       /* '{'  */
  YYSYMBOL_40_ = 40,                       /* '}'  */
  YYSYMBOL_41_ = 41,                       /* '['  */
  YYSYMBOL_42_ = 42,                       /* ']'  */
  YYSYMBOL_43_ = 43,                       /* '.'  */
  YYSYMBOL_44_ = 44,                       /* '('  */
  YYSYMBOL_45_ = 45,                       /* ')'  */
  YYSYMBOL_46_ = 46,                       /* ','  */
  YYSYMBOL_YYACCEPT = 47,                  /* $accept  */
  YYSYMBOL_progr = 48,                     /* progr  */
  YYSYMBOL_49_1 = 49,                      /* $@1  */
  YYSYMBOL_50_2 = 50,                      /* $@2  */
  YYSYMBOL_declaratii_clasa = 51,          /* declaratii_clasa  */
  YYSYMBOL_declaratii = 52,                /* declaratii  */
  YYSYMBOL_global_declaratie = 53,         /* global_declaratie  */
  YYSYMBOL_initialization = 54,            /* initialization  */
  YYSYMBOL_class_member = 55,              /* class_member  */
  YYSYMBOL_local_declaratie = 56,          /* local_declaratie  */
  YYSYMBOL_class_declaration = 57,         /* class_declaration  */
  YYSYMBOL_58_3 = 58,                      /* $@3  */
  YYSYMBOL_size = 59,                      /* size  */
  YYSYMBOL_array_position = 60,            /* array_position  */
  YYSYMBOL_bloc = 61,                      /* bloc  */
  YYSYMBOL_list = 62,                      /* list  */
  YYSYMBOL_named_obj = 63,                 /* named_obj  */
  YYSYMBOL_assignment = 64,                /* assignment  */
  YYSYMBOL_statement = 65,                 /* statement  */
  YYSYMBOL_function_call = 66,             /* function_call  */
  YYSYMBOL_67_4 = 67,                      /* $@4  */
  YYSYMBOL_return = 68,                    /* return  */
  YYSYMBOL_procedure = 69,                 /* procedure  */
  YYSYMBOL_70_5 = 70,                      /* $@5  */
  YYSYMBOL_procedure_signature = 71,       /* procedure_signature  */
  YYSYMBOL_function = 72,                  /* function  */
  YYSYMBOL_73_6 = 73,                      /* $@6  */
  YYSYMBOL_function_signature = 74,        /* function_signature  */
  YYSYMBOL_eval = 75,                      /* eval  */
  YYSYMBOL_aritm_expr = 76,                /* aritm_expr  */
  YYSYMBOL_e = 77,                         /* e  */
  YYSYMBOL_while = 78,                     /* while  */
  YYSYMBOL_if_stmt = 79,                   /* if_stmt  */
  YYSYMBOL_for_stmt = 80,                  /* for_stmt  */
  YYSYMBOL_comma_assign = 81,              /* comma_assign  */
  YYSYMBOL_args = 82,                      /* args  */
  YYSYMBOL_lista_apel = 83                 /* lista_apel  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   746

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  156
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  324

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   287


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      44,    45,    35,    33,    46,    34,    43,    36,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    38,    37,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    41,     2,    42,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    39,     2,    40,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    42,    42,    43,    42,    44,    47,    48,    49,    52,
      53,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      68,    70,    72,    75,    78,    81,    85,    86,    87,    88,
      89,    90,    93,    94,    95,    96,    99,    99,   104,   105,
     108,   109,   115,   116,   120,   121,   124,   125,   126,   127,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   155,
     155,   157,   157,   158,   161,   161,   164,   165,   166,   169,
     169,   172,   173,   174,   175,   176,   178,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   216,   220,   221,   224,   225,
     226,   227,   228,   229,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   246,   247,   249,   250,
     251,   252,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "BGIN", "END",
  "ASSIGN", "CLASS", "ACCESS", "CONST", "RETURN", "ID", "CLASS_ID", "NR",
  "TIP", "VOID", "WORD", "FLT", "LETTER", "AND", "OR", "LE", "GE", "EQ",
  "NEQ", "LS", "GR", "NOT", "PRINT", "WHILE", "IF", "ELSE", "FOR", "EVAL",
  "'+'", "'-'", "'*'", "'/'", "';'", "':'", "'{'", "'}'", "'['", "']'",
  "'.'", "'('", "')'", "','", "$accept", "progr", "$@1", "$@2",
  "declaratii_clasa", "declaratii", "global_declaratie", "initialization",
  "class_member", "local_declaratie", "class_declaration", "$@3", "size",
  "array_position", "bloc", "list", "named_obj", "assignment", "statement",
  "function_call", "$@4", "return", "procedure", "$@5",
  "procedure_signature", "function", "$@6", "function_signature", "eval",
  "aritm_expr", "e", "while", "if_stmt", "for_stmt", "comma_assign",
  "args", "lista_apel", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-180)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-156)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       0,   -30,    19,   356,  -180,   640,  -180,    12,   356,    10,
      27,    33,    47,   356,    24,  -180,  -180,    62,    80,  -180,
    -180,  -180,   157,    89,    10,   102,   122,   114,   125,   134,
     161,   170,  -180,  -180,   640,  -180,   101,  -180,   173,  -180,
    -180,  -180,  -180,  -180,  -180,    72,   189,   207,  -180,     5,
    -180,     0,   198,  -180,   216,     4,   232,  -180,  -180,  -180,
     209,  -180,     6,   245,   133,   103,    22,   133,   231,   236,
    -180,   271,   243,    96,   -24,  -180,  -180,  -180,   183,   183,
     146,  -180,   655,   235,   123,  -180,   164,   285,  -180,   249,
     269,  -180,  -180,   123,  -180,   153,   166,  -180,  -180,  -180,
     284,   172,  -180,   291,   295,  -180,   301,   309,   305,   133,
     310,   314,   320,  -180,   355,   328,   651,   183,    58,   621,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   333,    42,   343,  -180,  -180,  -180,  -180,   345,
      15,  -180,    45,  -180,   246,    63,  -180,  -180,  -180,   140,
    -180,   212,  -180,   358,   360,   362,   368,   401,   133,  -180,
     378,  -180,   357,   385,   414,   416,   387,   391,  -180,  -180,
     204,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,  -180,   188,   648,   662,   667,   681,   686,   700,
     204,   226,   292,   199,   242,   417,   389,   421,   422,   397,
     261,   403,   265,  -180,   203,   344,  -180,   350,   118,  -180,
     418,  -180,   651,  -180,  -180,    39,  -180,   651,   204,   204,
     204,   204,   204,   204,   204,   281,   281,  -180,  -180,   407,
     445,  -180,  -180,   640,   419,   162,   238,   420,   259,   274,
    -180,  -180,  -180,   286,  -180,  -180,   375,   430,   381,     1,
     423,   428,   435,   127,  -180,  -180,  -180,  -180,   425,   640,
     424,   313,   453,   476,   406,   412,  -180,   449,   459,   238,
     451,   452,   454,   447,   466,  -180,   457,   458,  -180,   640,
     467,  -180,  -180,  -180,  -180,   437,   443,   478,   468,   238,
     238,   238,   480,   481,   482,  -180,   484,   483,  -180,  -180,
     474,   499,  -180,   505,   530,   536,   238,   561,  -180,   485,
    -180,  -180,  -180,   567,  -180,  -180,  -180,   592,  -180,   598,
    -180,  -180,  -180,  -180
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     0,     5,    71,     1,     0,     0,     0,
       0,     0,     0,     3,     0,    18,    13,    46,     0,    19,
      17,    16,     0,     0,    69,     0,     0,     0,     0,     0,
       0,     0,    61,    63,    71,    60,     0,    62,     0,    67,
      64,    65,    66,    36,    15,     0,     0,     0,    14,    11,
      74,     0,     0,     9,     0,     0,     0,    35,    73,    72,
       0,    34,    32,     0,     0,     0,     0,     0,     0,     0,
      44,     0,     0,   114,   113,    54,    57,    56,     0,     0,
     115,    52,     0,     0,    49,    47,     0,     0,    12,     0,
       0,     4,    10,     0,    48,   114,   113,    53,   115,    50,
      32,   156,    33,     0,   114,   113,     0,     0,     0,     0,
     136,     0,     0,    45,     0,     0,     8,     0,   105,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    40,   114,   113,    21,    24,    23,    20,     0,
       0,    80,     0,    75,   114,   113,   150,   152,   148,   115,
     144,     0,    68,     0,     0,     0,     0,     0,     0,    86,
       0,    43,     0,     0,     0,     0,     0,     0,    31,    30,
     105,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   103,   106,   104,   107,   108,   109,   110,   111,
     112,    99,   100,   101,   102,     0,    38,     0,     0,     0,
       0,     0,     0,    70,     0,     0,   119,     0,     0,   137,
       0,    42,     8,    29,    28,    26,    37,     8,   106,   104,
     107,   108,   109,   110,   111,    99,   100,   101,   102,     0,
       0,   140,   138,    71,     0,     0,     0,     0,   114,   113,
     151,   153,   149,   115,   145,   116,     0,     0,     0,   114,
     128,     0,     0,     0,     7,    27,     6,    41,     0,    71,
       0,    71,     0,     0,     0,     0,   117,     0,   118,     0,
     126,   127,   125,     0,     0,    39,     0,     0,    81,    71,
       0,   139,   141,    77,    76,     0,     0,     0,     0,     0,
       0,     0,     0,   124,     0,    83,     0,     0,    78,   123,
       0,     0,   135,     0,     0,     0,     0,     0,    82,     0,
      84,   121,   122,     0,   133,   134,   132,     0,   131,     0,
      85,   120,   129,   130
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -180,  -180,  -180,  -180,  -179,  -180,   141,    28,   361,   507,
    -180,  -180,   -48,  -180,   491,  -155,   -20,    -1,    30,    -5,
    -180,   -29,    94,  -180,  -180,   147,  -180,  -180,  -180,   -47,
     -54,  -180,  -180,  -180,  -153,   393,  -180
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,    51,   166,    13,    14,    32,   167,    33,
      16,    72,   102,    17,     4,    34,    18,    35,    36,    98,
      60,    38,   168,    90,   143,   169,    89,   141,    39,    81,
      82,    40,    41,    42,   111,   200,   151
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      37,    88,    19,     1,   209,    69,    45,    19,    99,     5,
      86,    86,    19,   -55,    95,    45,    96,   106,   108,     6,
     112,   -55,   -55,    43,   118,   119,   197,    85,   198,    37,
      78,    15,     9,   254,    94,    97,    15,    48,   256,   138,
      80,    15,    46,    49,    47,   -69,    87,    87,    79,   -79,
     246,    46,   248,    47,   150,   252,   197,    50,   198,   109,
     199,    53,   156,   170,    68,   110,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   259,   -25,
      87,   264,    73,   -79,    74,    55,   -69,    75,    76,    77,
     201,   178,   179,   180,   181,   -92,   149,    20,    78,    58,
     274,    59,    20,   -92,   -92,    54,   279,    20,  -142,  -142,
     285,   210,    61,   104,   288,   105,    79,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   249,    78,
     105,   300,    62,   -58,   303,   304,   305,   249,    70,   105,
     -69,   -58,   -58,   104,    78,   105,   313,    79,   107,    44,
      21,   317,   319,    78,    52,    21,   110,   244,    63,    78,
      21,   251,    79,   250,    46,    22,    47,   255,    25,    64,
      56,    79,   272,   262,   133,   263,   134,    79,    65,   135,
     136,   137,   144,   -59,   145,  -154,  -154,   146,   147,   148,
      78,   -59,   -59,   104,    46,   105,    47,   -69,    78,   243,
      37,    83,    37,   -51,   260,    66,   273,   110,    79,   117,
      71,   -51,   -51,   238,    67,   239,    79,    84,   240,   241,
     242,   178,   179,   180,   181,   -93,    93,    79,    37,    78,
     276,    37,   280,   -93,   -93,    92,   -89,   178,   179,   180,
     181,    37,   100,    37,   -89,   -89,    22,    79,    24,    25,
     296,    26,   110,   101,    37,   103,    37,   203,   204,    37,
      37,   180,   181,   -87,    37,    27,    28,    29,   113,    30,
      31,   -87,   -87,   114,    37,   115,    68,   132,    68,   -90,
      37,    37,   116,    37,    37,    37,    37,   -90,   -90,    68,
     -69,  -146,  -146,   140,    68,    37,    37,   139,    37,    37,
      37,    37,    37,   -69,  -147,  -147,   234,   235,    37,    68,
     237,   235,    37,   142,    37,    68,   180,   181,    68,  -143,
    -143,    22,    23,    24,    25,    87,    26,   180,   181,   -88,
      68,  -155,  -155,    68,    68,    68,   152,   -88,   -88,   -69,
      27,    28,    29,    68,    30,    31,   153,    68,   154,    68,
     155,   158,    22,   278,    24,    25,   157,    26,    22,   160,
      24,    25,     7,    26,     8,   159,     9,    10,   161,    11,
      12,    27,    28,    29,   195,    30,    31,    27,    28,    29,
     -22,    30,    31,    22,   245,    24,    25,   196,    26,    22,
     247,    24,    25,   163,    26,   212,   164,   205,   165,    12,
     206,   207,    27,    28,    29,   208,    30,    31,    27,    28,
      29,     9,    30,    31,    22,   266,    24,    25,   211,    26,
      22,   268,    24,    25,   214,    26,   215,   216,   217,   229,
     230,   231,   232,    27,    28,    29,   233,    30,    31,    27,
      28,    29,   236,    30,    31,    22,   283,    24,    25,   257,
      26,    22,   284,    24,    25,   253,    26,   258,   261,   265,
     267,   277,   269,   281,    27,    28,    29,   275,    30,    31,
      27,    28,    29,   270,    30,    31,    22,   298,    24,    25,
     271,    26,    22,   299,    24,    25,   282,    26,   286,   287,
     289,   290,   292,   291,   294,    27,    28,    29,   295,    30,
      31,    27,    28,    29,   297,    30,    31,    22,   302,    24,
      25,   293,    26,    22,   311,    24,    25,   301,    26,   306,
     307,   309,   308,   310,   213,   320,    27,    28,    29,    57,
      30,    31,    27,    28,    29,   202,    30,    31,    22,   312,
      24,    25,    91,    26,    22,   314,    24,    25,     0,    26,
       0,     0,     0,     0,     0,     0,     0,    27,    28,    29,
       0,    30,    31,    27,    28,    29,     0,    30,    31,    22,
     315,    24,    25,     0,    26,    22,   316,    24,    25,     0,
      26,     0,     0,     0,     0,     0,     0,     0,    27,    28,
      29,     0,    30,    31,    27,    28,    29,     0,    30,    31,
      22,   318,    24,    25,     0,    26,    22,   321,    24,    25,
       0,    26,     0,     0,     0,     0,     0,     0,     0,    27,
      28,    29,     0,    30,    31,    27,    28,    29,     0,    30,
      31,     0,   322,     0,     0,     0,     0,     0,   323,   171,
     172,   173,   174,   175,   176,   177,   127,     0,    22,    23,
      24,    25,     0,    26,   178,   179,   180,   181,   162,   163,
       0,     0,   164,     0,   165,    12,   182,    27,    28,    29,
       0,    30,    31,   120,   121,   122,   123,   124,   125,   126,
     127,   178,   179,   180,   181,   -91,     0,     0,   128,   129,
     130,   131,     0,   -91,   -91,   178,   179,   180,   181,   -94,
     178,   179,   180,   181,   -95,     0,     0,   -94,   -94,     0,
       0,     0,   -95,   -95,   178,   179,   180,   181,   -96,   178,
     179,   180,   181,   -97,     0,     0,   -96,   -96,     0,     0,
       0,   -97,   -97,   178,   179,   180,   181,   -98,     0,     0,
       0,     0,     0,     0,     0,   -98,   -98
};

static const yytype_int16 yycheck[] =
{
       5,    49,     3,     3,   157,    34,     5,     8,    55,    39,
       5,     5,    13,    37,    10,     5,    12,    64,    65,     0,
      67,    45,    46,    11,    78,    79,    11,    47,    13,    34,
      26,     3,    10,   212,    54,    55,     8,    10,   217,    86,
      45,    13,    41,    10,    43,    44,    41,    41,    44,    44,
     205,    41,   207,    43,   101,   208,    11,    10,    13,    37,
      45,    37,   109,   117,    34,    66,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   233,    37,
      41,   236,    10,    44,    12,     5,    44,    15,    16,    17,
      45,    33,    34,    35,    36,    37,   101,     3,    26,    10,
     253,    12,     8,    45,    46,    43,   261,    13,    45,    46,
     265,   158,    10,    10,   269,    12,    44,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,    10,    26,
      12,   286,    10,    37,   289,   290,   291,    10,    37,    12,
      44,    45,    46,    10,    26,    12,   301,    44,    45,     8,
       3,   306,   307,    26,    13,     8,   157,   204,    44,    26,
      13,   208,    44,    45,    41,     8,    43,   215,    11,    44,
      13,    44,    45,    11,    10,    13,    12,    44,    44,    15,
      16,    17,    10,    37,    12,    45,    46,    15,    16,    17,
      26,    45,    46,    10,    41,    12,    43,    44,    26,   204,
     205,    12,   207,    37,   233,    44,   253,   208,    44,    26,
      37,    45,    46,    10,    44,    12,    44,    10,    15,    16,
      17,    33,    34,    35,    36,    37,    10,    44,   233,    26,
     259,   236,   261,    45,    46,    37,    37,    33,    34,    35,
      36,   246,    10,   248,    45,    46,     8,    44,    10,    11,
     279,    13,   253,    44,   259,    10,   261,    45,    46,   264,
     265,    35,    36,    37,   269,    27,    28,    29,    37,    31,
      32,    45,    46,    37,   279,     4,   246,    42,   248,    37,
     285,   286,    39,   288,   289,   290,   291,    45,    46,   259,
      44,    45,    46,    44,   264,   300,   301,    12,   303,   304,
     305,   306,   307,    44,    45,    46,    45,    46,   313,   279,
      45,    46,   317,    44,   319,   285,    35,    36,   288,    45,
      46,     8,     9,    10,    11,    41,    13,    35,    36,    37,
     300,    45,    46,   303,   304,   305,    45,    45,    46,    44,
      27,    28,    29,   313,    31,    32,    45,   317,    39,   319,
      45,    37,     8,    40,    10,    11,    46,    13,     8,     4,
      10,    11,     6,    13,     8,    45,    10,    11,    40,    13,
      14,    27,    28,    29,    41,    31,    32,    27,    28,    29,
      37,    31,    32,     8,    40,    10,    11,    42,    13,     8,
      40,    10,    11,     8,    13,    38,    11,    39,    13,    14,
      40,    39,    27,    28,    29,    37,    31,    32,    27,    28,
      29,    10,    31,    32,     8,    40,    10,    11,    40,    13,
       8,    40,    10,    11,    10,    13,    10,    40,    37,    12,
      41,    10,    10,    27,    28,    29,    39,    31,    32,    27,
      28,    29,    39,    31,    32,     8,    40,    10,    11,    42,
      13,     8,    40,    10,    11,    37,    13,    12,    39,    39,
      30,    37,    39,    10,    27,    28,    29,    42,    31,    32,
      27,    28,    29,    45,    31,    32,     8,    40,    10,    11,
      45,    13,     8,    40,    10,    11,    10,    13,    39,    30,
      39,    39,    45,    39,    37,    27,    28,    29,    40,    31,
      32,    27,    28,    29,    37,    31,    32,     8,    40,    10,
      11,    45,    13,     8,    40,    10,    11,    39,    13,    39,
      39,    37,    40,    40,   163,    40,    27,    28,    29,    22,
      31,    32,    27,    28,    29,   142,    31,    32,     8,    40,
      10,    11,    51,    13,     8,    40,    10,    11,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      -1,    31,    32,    27,    28,    29,    -1,    31,    32,     8,
      40,    10,    11,    -1,    13,     8,    40,    10,    11,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    -1,    31,    32,    27,    28,    29,    -1,    31,    32,
       8,    40,    10,    11,    -1,    13,     8,    40,    10,    11,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    -1,    31,    32,    27,    28,    29,    -1,    31,
      32,    -1,    40,    -1,    -1,    -1,    -1,    -1,    40,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,     8,     9,
      10,    11,    -1,    13,    33,    34,    35,    36,     7,     8,
      -1,    -1,    11,    -1,    13,    14,    45,    27,    28,    29,
      -1,    31,    32,    18,    19,    20,    21,    22,    23,    24,
      25,    33,    34,    35,    36,    37,    -1,    -1,    33,    34,
      35,    36,    -1,    45,    46,    33,    34,    35,    36,    37,
      33,    34,    35,    36,    37,    -1,    -1,    45,    46,    -1,
      -1,    -1,    45,    46,    33,    34,    35,    36,    37,    33,
      34,    35,    36,    37,    -1,    -1,    45,    46,    -1,    -1,
      -1,    45,    46,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    48,    49,    61,    39,     0,     6,     8,    10,
      11,    13,    14,    52,    53,    54,    57,    60,    63,    64,
      69,    72,     8,     9,    10,    11,    13,    27,    28,    29,
      31,    32,    54,    56,    62,    64,    65,    66,    68,    75,
      78,    79,    80,    11,    53,     5,    41,    43,    10,    10,
      10,    50,    53,    37,    43,     5,    13,    56,    10,    12,
      67,    10,    10,    44,    44,    44,    44,    44,    65,    68,
      37,    37,    58,    10,    12,    15,    16,    17,    26,    44,
      66,    76,    77,    12,    10,    63,     5,    41,    59,    73,
      70,    61,    37,    10,    63,    10,    12,    63,    66,    76,
      10,    44,    59,    10,    10,    12,    76,    45,    76,    37,
      64,    81,    76,    37,    37,     4,    39,    26,    77,    77,
      18,    19,    20,    21,    22,    23,    24,    25,    33,    34,
      35,    36,    42,    10,    12,    15,    16,    17,    76,    12,
      44,    74,    44,    71,    10,    12,    15,    16,    17,    66,
      76,    83,    45,    45,    39,    45,    76,    46,    37,    45,
       4,    40,     7,     8,    11,    13,    51,    55,    69,    72,
      77,    18,    19,    20,    21,    22,    23,    24,    33,    34,
      35,    36,    45,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    41,    42,    11,    13,    45,
      82,    45,    82,    45,    46,    39,    40,    39,    37,    81,
      76,    40,    38,    55,    10,    10,    40,    37,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    12,
      41,    10,    10,    39,    45,    46,    39,    45,    10,    12,
      15,    16,    17,    66,    76,    40,    62,    40,    62,    10,
      45,    76,    81,    37,    51,    59,    51,    42,    12,    62,
      68,    39,    11,    13,    62,    39,    40,    30,    40,    39,
      45,    45,    45,    76,    81,    42,    68,    37,    40,    62,
      68,    10,    10,    40,    40,    62,    39,    30,    62,    39,
      39,    39,    45,    45,    37,    40,    68,    37,    40,    40,
      62,    39,    40,    62,    62,    62,    39,    39,    40,    37,
      40,    40,    40,    62,    40,    40,    40,    62,    40,    62,
      40,    40,    40,    40
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    49,    50,    48,    48,    51,    51,    51,    52,
      52,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      54,    54,    54,    54,    54,    54,    55,    55,    55,    55,
      55,    55,    56,    56,    56,    56,    58,    57,    59,    59,
      60,    60,    61,    61,    62,    62,    63,    63,    63,    63,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    67,
      66,    68,    68,    68,    70,    69,    71,    71,    71,    73,
      72,    74,    74,    74,    74,    74,    75,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    78,    78,    79,    79,
      79,    79,    79,    79,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    81,    81,    82,    82,
      82,    82,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     0,     4,     1,     3,     3,     0,     2,
       3,     2,     3,     1,     2,     2,     1,     1,     1,     1,
       4,     4,     4,     4,     4,     4,     2,     3,     2,     2,
       1,     1,     2,     3,     2,     2,     0,     6,     3,     6,
       4,     7,     7,     6,     2,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     0,
       5,     0,     2,     2,     0,     4,     5,     5,     6,     0,
       4,     5,     7,     6,     7,     8,     4,     3,     3,     3,
       3,     3,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     6,     7,     7,     5,
      11,    10,    10,     9,     8,     7,     7,     7,     6,    11,
      11,    10,    10,    10,    10,     9,     1,     3,     2,     4,
       2,     4,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* $@1: %empty  */
#line 42 "limbaj1.y"
       {change_scope("global"); }
#line 1570 "y.tab.c"
    break;

  case 3: /* $@2: %empty  */
#line 43 "limbaj1.y"
                     {change_scope("main"); }
#line 1576 "y.tab.c"
    break;

  case 4: /* progr: $@1 declaratii $@2 bloc  */
#line 43 "limbaj1.y"
                                                   {printf("program corect sintactic\n");print_symbol_table_txt(); print_function_table_txt();}
#line 1582 "y.tab.c"
    break;

  case 5: /* progr: bloc  */
#line 44 "limbaj1.y"
            {printf("program corect sintactic\n"); print_symbol_table_txt(); print_function_table_txt();}
#line 1588 "y.tab.c"
    break;

  case 8: /* declaratii_clasa: %empty  */
#line 49 "limbaj1.y"
                   {}
#line 1594 "y.tab.c"
    break;

  case 11: /* global_declaratie: TIP ID  */
#line 57 "limbaj1.y"
                           {if(insert_symbol((yyvsp[-1].intValue), (yyvsp[0].stringValue))==-1) { printf("[global]invalid id name %s \n", (yyvsp[0].stringValue)); return -1;}}
#line 1600 "y.tab.c"
    break;

  case 16: /* global_declaratie: function  */
#line 62 "limbaj1.y"
                          {change_scope("global");}
#line 1606 "y.tab.c"
    break;

  case 17: /* global_declaratie: procedure  */
#line 63 "limbaj1.y"
                           {change_scope("global");}
#line 1612 "y.tab.c"
    break;

  case 20: /* initialization: TIP ID ASSIGN aritm_expr  */
#line 68 "limbaj1.y"
                                         {if(check_scope("main") == 0 || check_scope("global") == 0)
                                             {insert_symbol((yyvsp[-3].intValue), (yyvsp[-2].stringValue)); set_value_to_int((yyvsp[-2].stringValue), (yyvsp[0].intValue));}}
#line 1619 "y.tab.c"
    break;

  case 21: /* initialization: TIP ID ASSIGN WORD  */
#line 70 "limbaj1.y"
                                   {if(check_scope("main") == 0 || check_scope("global") == 0)
                                             {insert_symbol((yyvsp[-3].intValue), (yyvsp[-2].stringValue)); set_value_to_string((yyvsp[-2].stringValue), (yyvsp[0].stringValue));}}
#line 1626 "y.tab.c"
    break;

  case 22: /* initialization: TIP ID ASSIGN NR  */
#line 72 "limbaj1.y"
                                   {if(check_scope("main") == 0 || check_scope("global") == 0)
                                             {insert_symbol((yyvsp[-3].intValue), (yyvsp[-2].stringValue)); set_value_to_int((yyvsp[-2].stringValue), (yyvsp[0].intValue));}}
#line 1633 "y.tab.c"
    break;

  case 23: /* initialization: TIP ID ASSIGN LETTER  */
#line 75 "limbaj1.y"
                                        {if(check_scope("main") == 0 || check_scope("global") == 0)
                                             {insert_symbol((yyvsp[-3].intValue), (yyvsp[-2].stringValue)); set_value_to_char((yyvsp[-2].stringValue), (yyvsp[0].charValue));}}
#line 1640 "y.tab.c"
    break;

  case 24: /* initialization: TIP ID ASSIGN FLT  */
#line 78 "limbaj1.y"
                                   {if(check_scope("main") == 0 || check_scope("global") == 0)
                                             {insert_symbol((yyvsp[-3].intValue), (yyvsp[-2].stringValue)); set_value_to_float((yyvsp[-2].stringValue), (yyvsp[0].floatValue));}}
#line 1647 "y.tab.c"
    break;

  case 25: /* initialization: TIP ID ASSIGN ID  */
#line 81 "limbaj1.y"
                                   {if(check_scope("main") == 0 || check_scope("global") == 0)
                                             {insert_symbol((yyvsp[-3].intValue), (yyvsp[-2].stringValue)); set_value_id((yyvsp[-2].stringValue), (yyvsp[0].stringValue));}}
#line 1654 "y.tab.c"
    break;

  case 26: /* class_member: TIP ID  */
#line 85 "limbaj1.y"
                      {if(insert_symbol((yyvsp[-1].intValue), (yyvsp[0].stringValue))==-1) { printf("invalid id name %s \n", (yyvsp[0].stringValue)); return -1;}}
#line 1660 "y.tab.c"
    break;

  case 32: /* local_declaratie: TIP ID  */
#line 93 "limbaj1.y"
                          {if(insert_symbol((yyvsp[-1].intValue), (yyvsp[0].stringValue)) == -1) { printf("invalid id name %s \n", (yyvsp[0].stringValue)); return -1;}}
#line 1666 "y.tab.c"
    break;

  case 36: /* $@3: %empty  */
#line 99 "limbaj1.y"
                                   {change_scope((yyvsp[0].stringValue)); }
#line 1672 "y.tab.c"
    break;

  case 52: /* assignment: ID ASSIGN aritm_expr  */
#line 134 "limbaj1.y"
                                { if(get_value_by_index((yyvsp[-2].stringValue)) == -1) return -1; if(check_scope("main") == 0 || check_scope("global") == 0) set_value_to_int((yyvsp[-2].stringValue), (yyvsp[0].intValue));}
#line 1678 "y.tab.c"
    break;

  case 54: /* assignment: ID ASSIGN WORD  */
#line 136 "limbaj1.y"
                          {if(get_value_by_index((yyvsp[-2].stringValue)) == -1) return -1; if(check_scope("main") == 0 || check_scope("global") == 0) set_value_to_string((yyvsp[-2].stringValue), (yyvsp[0].stringValue));}
#line 1684 "y.tab.c"
    break;

  case 55: /* assignment: ID ASSIGN NR  */
#line 137 "limbaj1.y"
                         {if(get_value_by_index((yyvsp[-2].stringValue)) == -1) return -1; if(check_scope("main") == 0 || check_scope("global") == 0) set_value_to_int((yyvsp[-2].stringValue), (yyvsp[0].intValue));}
#line 1690 "y.tab.c"
    break;

  case 56: /* assignment: ID ASSIGN LETTER  */
#line 138 "limbaj1.y"
                             {if(get_value_by_index((yyvsp[-2].stringValue)) == -1) return -1; if(check_scope("main") == 0 || check_scope("global") == 0) set_value_to_char((yyvsp[-2].stringValue), (yyvsp[0].charValue));}
#line 1696 "y.tab.c"
    break;

  case 57: /* assignment: ID ASSIGN FLT  */
#line 139 "limbaj1.y"
                         {if(get_value_by_index((yyvsp[-2].stringValue)) == -1) return -1; if(check_scope("main") == 0 || check_scope("global") == 0) set_value_to_float((yyvsp[-2].stringValue), (yyvsp[0].floatValue));}
#line 1702 "y.tab.c"
    break;

  case 58: /* assignment: ID ASSIGN ID  */
#line 140 "limbaj1.y"
                        { if(set_value_id((yyvsp[-2].stringValue), (yyvsp[0].stringValue))==-1) return -1;}
#line 1708 "y.tab.c"
    break;

  case 68: /* statement: PRINT '(' ID ')'  */
#line 152 "limbaj1.y"
                             { if(check_scope("main") == 0) {if(get_value_by_index((yyvsp[-1].stringValue)) == -1) return -1;  print((yyvsp[-1].stringValue)); }}
#line 1714 "y.tab.c"
    break;

  case 69: /* $@4: %empty  */
#line 155 "limbaj1.y"
                 {if(start_call((yyvsp[0].stringValue))==-1) return -1;}
#line 1720 "y.tab.c"
    break;

  case 70: /* function_call: ID $@4 '(' lista_apel ')'  */
#line 155 "limbaj1.y"
                                                                        {end_call(); strcpy((yyval.stringValue), (yyvsp[-4].stringValue));}
#line 1726 "y.tab.c"
    break;

  case 73: /* return: RETURN ID  */
#line 158 "limbaj1.y"
                     {if(get_value_by_index((yyvsp[0].stringValue)) == -1) return -1; }
#line 1732 "y.tab.c"
    break;

  case 74: /* $@5: %empty  */
#line 161 "limbaj1.y"
                    {change_scope((yyvsp[0].stringValue)); insert_function((yyvsp[-1].intValue), (yyvsp[0].stringValue));}
#line 1738 "y.tab.c"
    break;

  case 75: /* procedure: VOID ID $@5 procedure_signature  */
#line 161 "limbaj1.y"
                                                                                     {if(check_signature()==-1) return -1;}
#line 1744 "y.tab.c"
    break;

  case 79: /* $@6: %empty  */
#line 169 "limbaj1.y"
                   {change_scope((yyvsp[0].stringValue)); insert_function((yyvsp[-1].intValue), (yyvsp[0].stringValue));}
#line 1750 "y.tab.c"
    break;

  case 80: /* function: TIP ID $@6 function_signature  */
#line 169 "limbaj1.y"
                                                                                   {if(check_signature()==-1) return -1;}
#line 1756 "y.tab.c"
    break;

  case 87: /* aritm_expr: e '+' e  */
#line 181 "limbaj1.y"
                      {(yyval.intValue)=(yyvsp[-2].intValue)+(yyvsp[0].intValue); }
#line 1762 "y.tab.c"
    break;

  case 88: /* aritm_expr: e '-' e  */
#line 182 "limbaj1.y"
                    {(yyval.intValue)=(yyvsp[-2].intValue)-(yyvsp[0].intValue); }
#line 1768 "y.tab.c"
    break;

  case 89: /* aritm_expr: e '*' e  */
#line 183 "limbaj1.y"
                      {(yyval.intValue)=(yyvsp[-2].intValue)*(yyvsp[0].intValue); }
#line 1774 "y.tab.c"
    break;

  case 90: /* aritm_expr: e '/' e  */
#line 184 "limbaj1.y"
                    {(yyval.intValue)=(yyvsp[-2].intValue)/(yyvsp[0].intValue); }
#line 1780 "y.tab.c"
    break;

  case 91: /* aritm_expr: e OR e  */
#line 185 "limbaj1.y"
                    {(yyval.intValue)=(yyvsp[-2].intValue) || (yyvsp[0].intValue);  }
#line 1786 "y.tab.c"
    break;

  case 92: /* aritm_expr: NOT e  */
#line 186 "limbaj1.y"
                  {(yyval.intValue) = !(yyvsp[0].intValue); }
#line 1792 "y.tab.c"
    break;

  case 93: /* aritm_expr: e AND e  */
#line 187 "limbaj1.y"
                     {(yyval.intValue)=(yyvsp[-2].intValue) && (yyvsp[0].intValue);  }
#line 1798 "y.tab.c"
    break;

  case 94: /* aritm_expr: e LE e  */
#line 188 "limbaj1.y"
                   { (yyval.intValue) = (yyvsp[-2].intValue)<=(yyvsp[0].intValue)? 1 : 0; }
#line 1804 "y.tab.c"
    break;

  case 95: /* aritm_expr: e GE e  */
#line 189 "limbaj1.y"
                   { (yyval.intValue) = (yyvsp[-2].intValue)>=(yyvsp[0].intValue)? 1 : 0; }
#line 1810 "y.tab.c"
    break;

  case 96: /* aritm_expr: e EQ e  */
#line 190 "limbaj1.y"
                   { (yyval.intValue) = (yyvsp[-2].intValue)==(yyvsp[0].intValue)? 1 : 0;  }
#line 1816 "y.tab.c"
    break;

  case 97: /* aritm_expr: e NEQ e  */
#line 191 "limbaj1.y"
                    { (yyval.intValue) = (yyvsp[-2].intValue)!=(yyvsp[0].intValue)? 1 : 0; }
#line 1822 "y.tab.c"
    break;

  case 98: /* aritm_expr: e LS e  */
#line 192 "limbaj1.y"
                   { (yyval.intValue) = (yyvsp[-2].intValue)<(yyvsp[0].intValue)? 1 : 0; }
#line 1828 "y.tab.c"
    break;

  case 99: /* e: e '+' e  */
#line 195 "limbaj1.y"
                        {(yyval.intValue)=(yyvsp[-2].intValue)+(yyvsp[0].intValue);  }
#line 1834 "y.tab.c"
    break;

  case 100: /* e: e '-' e  */
#line 196 "limbaj1.y"
                    {(yyval.intValue)=(yyvsp[-2].intValue)-(yyvsp[0].intValue);  }
#line 1840 "y.tab.c"
    break;

  case 101: /* e: e '*' e  */
#line 197 "limbaj1.y"
                      {(yyval.intValue)=(yyvsp[-2].intValue)*(yyvsp[0].intValue); }
#line 1846 "y.tab.c"
    break;

  case 102: /* e: e '/' e  */
#line 198 "limbaj1.y"
                    {(yyval.intValue)=(yyvsp[-2].intValue)/(yyvsp[0].intValue);  }
#line 1852 "y.tab.c"
    break;

  case 103: /* e: '(' e ')'  */
#line 199 "limbaj1.y"
                     {(yyval.intValue)= (yyvsp[-1].intValue);  }
#line 1858 "y.tab.c"
    break;

  case 104: /* e: e OR e  */
#line 200 "limbaj1.y"
                    {(yyval.intValue)=((yyvsp[-2].intValue) || (yyvsp[0].intValue)); }
#line 1864 "y.tab.c"
    break;

  case 105: /* e: NOT e  */
#line 201 "limbaj1.y"
                  {(yyval.intValue) = !(yyvsp[0].intValue);  }
#line 1870 "y.tab.c"
    break;

  case 106: /* e: e AND e  */
#line 202 "limbaj1.y"
                     {(yyval.intValue)=(yyvsp[-2].intValue) && (yyvsp[0].intValue);  }
#line 1876 "y.tab.c"
    break;

  case 107: /* e: e LE e  */
#line 203 "limbaj1.y"
                   { (yyval.intValue) = (yyvsp[-2].intValue)<=(yyvsp[0].intValue)? 1 : 0;}
#line 1882 "y.tab.c"
    break;

  case 108: /* e: e GE e  */
#line 204 "limbaj1.y"
                   { (yyval.intValue) = (yyvsp[-2].intValue)>=(yyvsp[0].intValue)? 1 : 0;}
#line 1888 "y.tab.c"
    break;

  case 109: /* e: e EQ e  */
#line 205 "limbaj1.y"
                   { (yyval.intValue) = (yyvsp[-2].intValue)==(yyvsp[0].intValue)? 1 : 0;}
#line 1894 "y.tab.c"
    break;

  case 110: /* e: e NEQ e  */
#line 206 "limbaj1.y"
                    { (yyval.intValue) = (yyvsp[-2].intValue)!=(yyvsp[0].intValue)? 1 : 0;}
#line 1900 "y.tab.c"
    break;

  case 111: /* e: e LS e  */
#line 207 "limbaj1.y"
                   { (yyval.intValue) = (yyvsp[-2].intValue)<(yyvsp[0].intValue)? 1 : 0;}
#line 1906 "y.tab.c"
    break;

  case 112: /* e: e GR e  */
#line 208 "limbaj1.y"
                   { (yyval.intValue) = (yyvsp[-2].intValue)>(yyvsp[0].intValue)? 1 : 0;}
#line 1912 "y.tab.c"
    break;

  case 113: /* e: NR  */
#line 209 "limbaj1.y"
               { (yyval.intValue)=(yyvsp[0].intValue);  }
#line 1918 "y.tab.c"
    break;

  case 114: /* e: ID  */
#line 210 "limbaj1.y"
               {    
                    int t=request_integer_type((yyvsp[0].stringValue));
                    if (t==-1)
                         return -1;
                    (yyval.intValue)=t;
               }
#line 1929 "y.tab.c"
    break;

  case 115: /* e: function_call  */
#line 216 "limbaj1.y"
                         {(yyval.intValue)=0;}
#line 1935 "y.tab.c"
    break;

  case 138: /* args: TIP ID  */
#line 249 "limbaj1.y"
              {insert_symbol((yyvsp[-1].intValue), (yyvsp[0].stringValue)); add_arg((yyvsp[-1].intValue));}
#line 1941 "y.tab.c"
    break;

  case 141: /* args: args ',' TIP ID  */
#line 252 "limbaj1.y"
                        {insert_symbol((yyvsp[-1].intValue), (yyvsp[0].stringValue)); add_arg((yyvsp[-1].intValue));}
#line 1947 "y.tab.c"
    break;

  case 142: /* lista_apel: NR  */
#line 255 "limbaj1.y"
                {if (check_compatible_type(INT)==-1) return -1;}
#line 1953 "y.tab.c"
    break;

  case 143: /* lista_apel: lista_apel ',' NR  */
#line 256 "limbaj1.y"
                               {if (check_compatible_type(INT)==-1) return -1;}
#line 1959 "y.tab.c"
    break;

  case 144: /* lista_apel: aritm_expr  */
#line 257 "limbaj1.y"
                        {if (check_compatible_type(INT)==-1) return -1;}
#line 1965 "y.tab.c"
    break;

  case 145: /* lista_apel: lista_apel ',' aritm_expr  */
#line 258 "limbaj1.y"
                                       {if (check_compatible_type(INT)==-1) return -1;}
#line 1971 "y.tab.c"
    break;

  case 146: /* lista_apel: ID  */
#line 259 "limbaj1.y"
                {if (check_compatible_type(get_variable_type((yyvsp[0].stringValue)))==-1) return -1;}
#line 1977 "y.tab.c"
    break;

  case 147: /* lista_apel: lista_apel ',' ID  */
#line 260 "limbaj1.y"
                               {if (check_compatible_type(get_variable_type((yyvsp[0].stringValue)))==-1) return -1;}
#line 1983 "y.tab.c"
    break;

  case 148: /* lista_apel: LETTER  */
#line 261 "limbaj1.y"
                    {if (check_compatible_type(CHAR)==-1) return -1;}
#line 1989 "y.tab.c"
    break;

  case 149: /* lista_apel: lista_apel ',' LETTER  */
#line 262 "limbaj1.y"
                                   {if (check_compatible_type(CHAR)==-1) return -1;}
#line 1995 "y.tab.c"
    break;

  case 150: /* lista_apel: WORD  */
#line 263 "limbaj1.y"
                     {if (check_compatible_type(STRING)==-1) return -1;}
#line 2001 "y.tab.c"
    break;

  case 151: /* lista_apel: lista_apel ',' WORD  */
#line 264 "limbaj1.y"
                                 {if (check_compatible_type(STRING)==-1) return -1;}
#line 2007 "y.tab.c"
    break;

  case 152: /* lista_apel: FLT  */
#line 265 "limbaj1.y"
                 {if (check_compatible_type(FLOAT)==-1) return -1;}
#line 2013 "y.tab.c"
    break;

  case 153: /* lista_apel: lista_apel ',' FLT  */
#line 266 "limbaj1.y"
                                {if (check_compatible_type(FLOAT)==-1) return -1;}
#line 2019 "y.tab.c"
    break;

  case 154: /* lista_apel: function_call  */
#line 267 "limbaj1.y"
                           {if (check_compatible_type(get_function_type((yyvsp[0].stringValue)))==-1) return -1;}
#line 2025 "y.tab.c"
    break;

  case 155: /* lista_apel: lista_apel ',' function_call  */
#line 268 "limbaj1.y"
                                          {if (check_compatible_type(get_function_type((yyvsp[0].stringValue)))==-1) return -1;}
#line 2031 "y.tab.c"
    break;

  case 156: /* lista_apel: %empty  */
#line 269 "limbaj1.y"
             {}
#line 2037 "y.tab.c"
    break;


#line 2041 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 271 "limbaj1.y"

void yyerror(const char * s){
     printf("eroare: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv){
yyin=fopen(argv[1],"r");
yyparse();
} 
