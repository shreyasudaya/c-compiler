/* A Bison parser, made by GNU Bison 3.8.2.  */

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
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parse.y"

	void yyerror(char* s);
	int yylex();
	#include "stdio.h"
	#include "stdlib.h"
	#include "ctype.h"
	#include "string.h"
	void ins();
	void insV();
	int flag=0;
	#define ANSI_COLOR_RED		"\x1b[31m"
	#define ANSI_COLOR_GREEN	"\x1b[32m"
	#define ANSI_COLOR_CYAN		"\x1b[36m"
	#define ANSI_COLOR_RESET	"\x1b[0m"
	extern char curid[20];
	extern char curtype[20];
	extern char curval[20];
	extern int currnest;
	void deletedata (int );
	int checkscope(char*);
	int check_id_is_func(char *);
	void insertST(char*, char*);
	void insertSTnest(char*, int);
	void insertSTparamscount(char*, int);
	int getSTparamscount(char*);
	int check_duplicate(char*);
	int check_declaration(char*, char *);
	int check_params(char*);
	int duplicate(char *s);
	int checkarray(char*);
	char currfunctype[100];
	char currfunc[100];
	char currfunccall[100];
	void insertSTF(char*);
	char gettype(char*,int);
	char getfirst(char*);
	extern int params_count;
	int call_params_count;

#line 111 "y.tab.c"

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
    IF = 258,                      /* IF  */
    INT = 259,                     /* INT  */
    CHAR = 260,                    /* CHAR  */
    FLOAT = 261,                   /* FLOAT  */
    DOUBLE = 262,                  /* DOUBLE  */
    LONG = 263,                    /* LONG  */
    SHORT = 264,                   /* SHORT  */
    SIGNED = 265,                  /* SIGNED  */
    UNSIGNED = 266,                /* UNSIGNED  */
    STRUCT = 267,                  /* STRUCT  */
    UNION = 268,                   /* UNION  */
    VOLATILE = 269,                /* VOLATILE  */
    ENUM = 270,                    /* ENUM  */
    ELLIPSIS = 271,                /* ELLIPSIS  */
    RETURN = 272,                  /* RETURN  */
    MAIN = 273,                    /* MAIN  */
    VOID = 274,                    /* VOID  */
    WHILE = 275,                   /* WHILE  */
    FOR = 276,                     /* FOR  */
    DO = 277,                      /* DO  */
    BREAK = 278,                   /* BREAK  */
    ENDIF = 279,                   /* ENDIF  */
    CASE = 280,                    /* CASE  */
    DEFAULT = 281,                 /* DEFAULT  */
    SWITCH = 282,                  /* SWITCH  */
    GOTO = 283,                    /* GOTO  */
    CONTINUE = 284,                /* CONTINUE  */
    identifier = 285,              /* identifier  */
    array_identifier = 286,        /* array_identifier  */
    func_identifier = 287,         /* func_identifier  */
    integer_constant = 288,        /* integer_constant  */
    string_constant = 289,         /* string_constant  */
    float_constant = 290,          /* float_constant  */
    character_constant = 291,      /* character_constant  */
    SIZEOF = 292,                  /* SIZEOF  */
    CONST = 293,                   /* CONST  */
    ELSE = 294,                    /* ELSE  */
    LEFT_ASSIGN = 295,             /* LEFT_ASSIGN  */
    RIGHT_ASSIGN = 296,            /* RIGHT_ASSIGN  */
    XOR_ASSIGN = 297,              /* XOR_ASSIGN  */
    OR_ASSIGN = 298,               /* OR_ASSIGN  */
    AND_ASSIGN = 299,              /* AND_ASSIGN  */
    MOD_ASSIGN = 300,              /* MOD_ASSIGN  */
    MUL_ASSIGN = 301,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 302,              /* DIV_ASSIGN  */
    PLUS_ASSIGN = 303,             /* PLUS_ASSIGN  */
    MINUS_ASSIGN = 304,            /* MINUS_ASSIGN  */
    assignment_operator = 305,     /* assignment_operator  */
    OR = 306,                      /* OR  */
    AND = 307,                     /* AND  */
    PIPE = 308,                    /* PIPE  */
    TYPEDEF = 309,                 /* TYPEDEF  */
    EXTERN = 310,                  /* EXTERN  */
    STATIC = 311,                  /* STATIC  */
    AUTO = 312,                    /* AUTO  */
    REGISTER = 313,                /* REGISTER  */
    EQ = 314,                      /* EQ  */
    NOT_EQ = 315,                  /* NOT_EQ  */
    LESS_THAN_EQ = 316,            /* LESS_THAN_EQ  */
    GR_THAN_EQ = 317,              /* GR_THAN_EQ  */
    LEFT_OP = 318,                 /* LEFT_OP  */
    RIGHT_OP = 319,                /* RIGHT_OP  */
    INCREMENT = 320,               /* INCREMENT  */
    DECREMENT = 321                /* DECREMENT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IF 258
#define INT 259
#define CHAR 260
#define FLOAT 261
#define DOUBLE 262
#define LONG 263
#define SHORT 264
#define SIGNED 265
#define UNSIGNED 266
#define STRUCT 267
#define UNION 268
#define VOLATILE 269
#define ENUM 270
#define ELLIPSIS 271
#define RETURN 272
#define MAIN 273
#define VOID 274
#define WHILE 275
#define FOR 276
#define DO 277
#define BREAK 278
#define ENDIF 279
#define CASE 280
#define DEFAULT 281
#define SWITCH 282
#define GOTO 283
#define CONTINUE 284
#define identifier 285
#define array_identifier 286
#define func_identifier 287
#define integer_constant 288
#define string_constant 289
#define float_constant 290
#define character_constant 291
#define SIZEOF 292
#define CONST 293
#define ELSE 294
#define LEFT_ASSIGN 295
#define RIGHT_ASSIGN 296
#define XOR_ASSIGN 297
#define OR_ASSIGN 298
#define AND_ASSIGN 299
#define MOD_ASSIGN 300
#define MUL_ASSIGN 301
#define DIV_ASSIGN 302
#define PLUS_ASSIGN 303
#define MINUS_ASSIGN 304
#define assignment_operator 305
#define OR 306
#define AND 307
#define PIPE 308
#define TYPEDEF 309
#define EXTERN 310
#define STATIC 311
#define AUTO 312
#define REGISTER 313
#define EQ 314
#define NOT_EQ 315
#define LESS_THAN_EQ 316
#define GR_THAN_EQ 317
#define LEFT_OP 318
#define RIGHT_OP 319
#define INCREMENT 320
#define DECREMENT 321

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IF = 3,                         /* IF  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_CHAR = 5,                       /* CHAR  */
  YYSYMBOL_FLOAT = 6,                      /* FLOAT  */
  YYSYMBOL_DOUBLE = 7,                     /* DOUBLE  */
  YYSYMBOL_LONG = 8,                       /* LONG  */
  YYSYMBOL_SHORT = 9,                      /* SHORT  */
  YYSYMBOL_SIGNED = 10,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 11,                  /* UNSIGNED  */
  YYSYMBOL_STRUCT = 12,                    /* STRUCT  */
  YYSYMBOL_UNION = 13,                     /* UNION  */
  YYSYMBOL_VOLATILE = 14,                  /* VOLATILE  */
  YYSYMBOL_ENUM = 15,                      /* ENUM  */
  YYSYMBOL_ELLIPSIS = 16,                  /* ELLIPSIS  */
  YYSYMBOL_RETURN = 17,                    /* RETURN  */
  YYSYMBOL_MAIN = 18,                      /* MAIN  */
  YYSYMBOL_VOID = 19,                      /* VOID  */
  YYSYMBOL_WHILE = 20,                     /* WHILE  */
  YYSYMBOL_FOR = 21,                       /* FOR  */
  YYSYMBOL_DO = 22,                        /* DO  */
  YYSYMBOL_BREAK = 23,                     /* BREAK  */
  YYSYMBOL_ENDIF = 24,                     /* ENDIF  */
  YYSYMBOL_CASE = 25,                      /* CASE  */
  YYSYMBOL_DEFAULT = 26,                   /* DEFAULT  */
  YYSYMBOL_SWITCH = 27,                    /* SWITCH  */
  YYSYMBOL_GOTO = 28,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 29,                  /* CONTINUE  */
  YYSYMBOL_identifier = 30,                /* identifier  */
  YYSYMBOL_array_identifier = 31,          /* array_identifier  */
  YYSYMBOL_func_identifier = 32,           /* func_identifier  */
  YYSYMBOL_integer_constant = 33,          /* integer_constant  */
  YYSYMBOL_string_constant = 34,           /* string_constant  */
  YYSYMBOL_float_constant = 35,            /* float_constant  */
  YYSYMBOL_character_constant = 36,        /* character_constant  */
  YYSYMBOL_SIZEOF = 37,                    /* SIZEOF  */
  YYSYMBOL_CONST = 38,                     /* CONST  */
  YYSYMBOL_ELSE = 39,                      /* ELSE  */
  YYSYMBOL_LEFT_ASSIGN = 40,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 41,              /* RIGHT_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 42,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 43,                 /* OR_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 44,                /* AND_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 45,                /* MOD_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 46,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 47,                /* DIV_ASSIGN  */
  YYSYMBOL_PLUS_ASSIGN = 48,               /* PLUS_ASSIGN  */
  YYSYMBOL_MINUS_ASSIGN = 49,              /* MINUS_ASSIGN  */
  YYSYMBOL_assignment_operator = 50,       /* assignment_operator  */
  YYSYMBOL_OR = 51,                        /* OR  */
  YYSYMBOL_AND = 52,                       /* AND  */
  YYSYMBOL_PIPE = 53,                      /* PIPE  */
  YYSYMBOL_TYPEDEF = 54,                   /* TYPEDEF  */
  YYSYMBOL_EXTERN = 55,                    /* EXTERN  */
  YYSYMBOL_STATIC = 56,                    /* STATIC  */
  YYSYMBOL_AUTO = 57,                      /* AUTO  */
  YYSYMBOL_REGISTER = 58,                  /* REGISTER  */
  YYSYMBOL_EQ = 59,                        /* EQ  */
  YYSYMBOL_NOT_EQ = 60,                    /* NOT_EQ  */
  YYSYMBOL_LESS_THAN_EQ = 61,              /* LESS_THAN_EQ  */
  YYSYMBOL_62_ = 62,                       /* '<'  */
  YYSYMBOL_GR_THAN_EQ = 63,                /* GR_THAN_EQ  */
  YYSYMBOL_64_ = 64,                       /* '>'  */
  YYSYMBOL_LEFT_OP = 65,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 66,                  /* RIGHT_OP  */
  YYSYMBOL_67_ = 67,                       /* '+'  */
  YYSYMBOL_68_ = 68,                       /* '-'  */
  YYSYMBOL_69_ = 69,                       /* '*'  */
  YYSYMBOL_70_ = 70,                       /* '/'  */
  YYSYMBOL_71_ = 71,                       /* '%'  */
  YYSYMBOL_72_ = 72,                       /* '~'  */
  YYSYMBOL_73_ = 73,                       /* '!'  */
  YYSYMBOL_INCREMENT = 74,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 75,                 /* DECREMENT  */
  YYSYMBOL_76_ = 76,                       /* ';'  */
  YYSYMBOL_77_ = 77,                       /* ','  */
  YYSYMBOL_78_ = 78,                       /* '['  */
  YYSYMBOL_79_ = 79,                       /* ']'  */
  YYSYMBOL_80_ = 80,                       /* '('  */
  YYSYMBOL_81_ = 81,                       /* ')'  */
  YYSYMBOL_82_ = 82,                       /* '{'  */
  YYSYMBOL_83_ = 83,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 84,                  /* $accept  */
  YYSYMBOL_program = 85,                   /* program  */
  YYSYMBOL_declaration_list = 86,          /* declaration_list  */
  YYSYMBOL_D = 87,                         /* D  */
  YYSYMBOL_declaration = 88,               /* declaration  */
  YYSYMBOL_variable_declaration = 89,      /* variable_declaration  */
  YYSYMBOL_variable_declaration_list = 90, /* variable_declaration_list  */
  YYSYMBOL_variable_declaration_identifier = 91, /* variable_declaration_identifier  */
  YYSYMBOL_92_1 = 92,                      /* $@1  */
  YYSYMBOL_93_2 = 93,                      /* $@2  */
  YYSYMBOL_vdi = 94,                       /* vdi  */
  YYSYMBOL_identifier_array_type = 95,     /* identifier_array_type  */
  YYSYMBOL_initilization_params = 96,      /* initilization_params  */
  YYSYMBOL_initilization = 97,             /* initilization  */
  YYSYMBOL_type_specifier = 98,            /* type_specifier  */
  YYSYMBOL_unsigned_grammar = 99,          /* unsigned_grammar  */
  YYSYMBOL_signed_grammar = 100,           /* signed_grammar  */
  YYSYMBOL_long_grammar = 101,             /* long_grammar  */
  YYSYMBOL_short_grammar = 102,            /* short_grammar  */
  YYSYMBOL_function_declaration = 103,     /* function_declaration  */
  YYSYMBOL_function_declaration_type = 104, /* function_declaration_type  */
  YYSYMBOL_function_declaration_param_statement = 105, /* function_declaration_param_statement  */
  YYSYMBOL_params = 106,                   /* params  */
  YYSYMBOL_parameters_list = 107,          /* parameters_list  */
  YYSYMBOL_108_3 = 108,                    /* $@3  */
  YYSYMBOL_parameters_identifier_list = 109, /* parameters_identifier_list  */
  YYSYMBOL_parameters_identifier_list_breakup = 110, /* parameters_identifier_list_breakup  */
  YYSYMBOL_param_identifier = 111,         /* param_identifier  */
  YYSYMBOL_112_4 = 112,                    /* $@4  */
  YYSYMBOL_param_identifier_breakup = 113, /* param_identifier_breakup  */
  YYSYMBOL_statement = 114,                /* statement  */
  YYSYMBOL_compound_statement = 115,       /* compound_statement  */
  YYSYMBOL_116_5 = 116,                    /* $@5  */
  YYSYMBOL_statment_list = 117,            /* statment_list  */
  YYSYMBOL_expression_statment = 118,      /* expression_statment  */
  YYSYMBOL_conditional_statements = 119,   /* conditional_statements  */
  YYSYMBOL_120_6 = 120,                    /* $@6  */
  YYSYMBOL_conditional_statements_breakup = 121, /* conditional_statements_breakup  */
  YYSYMBOL_iterative_statements = 122,     /* iterative_statements  */
  YYSYMBOL_123_7 = 123,                    /* $@7  */
  YYSYMBOL_124_8 = 124,                    /* $@8  */
  YYSYMBOL_125_9 = 125,                    /* $@9  */
  YYSYMBOL_return_statement = 126,         /* return_statement  */
  YYSYMBOL_break_statement = 127,          /* break_statement  */
  YYSYMBOL_string_initilization = 128,     /* string_initilization  */
  YYSYMBOL_array_initialization = 129,     /* array_initialization  */
  YYSYMBOL_array_int_declarations = 130,   /* array_int_declarations  */
  YYSYMBOL_array_int_declarations_breakup = 131, /* array_int_declarations_breakup  */
  YYSYMBOL_expression = 132,               /* expression  */
  YYSYMBOL_simple_expression = 133,        /* simple_expression  */
  YYSYMBOL_and_expression = 134,           /* and_expression  */
  YYSYMBOL_unary_relation_expression = 135, /* unary_relation_expression  */
  YYSYMBOL_regular_expression = 136,       /* regular_expression  */
  YYSYMBOL_relational_operators = 137,     /* relational_operators  */
  YYSYMBOL_sum_expression = 138,           /* sum_expression  */
  YYSYMBOL_sum_operators = 139,            /* sum_operators  */
  YYSYMBOL_term = 140,                     /* term  */
  YYSYMBOL_MULOP = 141,                    /* MULOP  */
  YYSYMBOL_factor = 142,                   /* factor  */
  YYSYMBOL_mutable = 143,                  /* mutable  */
  YYSYMBOL_144_10 = 144,                   /* $@10  */
  YYSYMBOL_immutable = 145,                /* immutable  */
  YYSYMBOL_call = 146,                     /* call  */
  YYSYMBOL_147_11 = 147,                   /* $@11  */
  YYSYMBOL_arguments = 148,                /* arguments  */
  YYSYMBOL_arguments_list = 149,           /* arguments_list  */
  YYSYMBOL_150_12 = 150,                   /* $@12  */
  YYSYMBOL_A = 151,                        /* A  */
  YYSYMBOL_152_13 = 152,                   /* $@13  */
  YYSYMBOL_constant = 153                  /* constant  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   267

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  84
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  70
/* YYNRULES -- Number of rules.  */
#define YYNRULES  142
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  217

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   321


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
       2,     2,     2,    73,     2,     2,     2,    71,     2,     2,
      80,    81,    69,    67,    77,    68,     2,    70,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    76,
      62,     2,    64,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    78,     2,    79,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    82,     2,    83,    72,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    63,    65,    66,
      74,    75
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    82,    82,    85,    88,    89,    92,    93,    96,    99,
      99,   102,   102,   103,   103,   107,   107,   110,   111,   114,
     115,   118,   119,   120,   123,   123,   123,   123,   124,   125,
     126,   127,   128,   131,   131,   131,   131,   134,   134,   134,
     134,   137,   137,   140,   140,   143,   146,   149,   152,   152,
     155,   155,   158,   161,   162,   165,   165,   168,   169,   172,
     172,   173,   173,   174,   174,   175,   178,   178,   181,   182,
     185,   186,   189,   189,   192,   193,   196,   196,   197,   197,
     198,   198,   200,   201,   214,   217,   220,   223,   226,   227,
     230,   238,   244,   250,   256,   262,   268,   269,   270,   274,
     275,   278,   279,   283,   284,   287,   288,   291,   291,   291,
     292,   292,   292,   295,   296,   299,   300,   303,   304,   307,
     307,   307,   310,   311,   314,   326,   326,   334,   335,   336,
     339,   339,   357,   357,   360,   360,   363,   363,   364,   367,
     368,   369,   370
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
  "\"end of file\"", "error", "\"invalid token\"", "IF", "INT", "CHAR",
  "FLOAT", "DOUBLE", "LONG", "SHORT", "SIGNED", "UNSIGNED", "STRUCT",
  "UNION", "VOLATILE", "ENUM", "ELLIPSIS", "RETURN", "MAIN", "VOID",
  "WHILE", "FOR", "DO", "BREAK", "ENDIF", "CASE", "DEFAULT", "SWITCH",
  "GOTO", "CONTINUE", "identifier", "array_identifier", "func_identifier",
  "integer_constant", "string_constant", "float_constant",
  "character_constant", "SIZEOF", "CONST", "ELSE", "LEFT_ASSIGN",
  "RIGHT_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "AND_ASSIGN", "MOD_ASSIGN",
  "MUL_ASSIGN", "DIV_ASSIGN", "PLUS_ASSIGN", "MINUS_ASSIGN",
  "assignment_operator", "OR", "AND", "PIPE", "TYPEDEF", "EXTERN",
  "STATIC", "AUTO", "REGISTER", "EQ", "NOT_EQ", "LESS_THAN_EQ", "'<'",
  "GR_THAN_EQ", "'>'", "LEFT_OP", "RIGHT_OP", "'+'", "'-'", "'*'", "'/'",
  "'%'", "'~'", "'!'", "INCREMENT", "DECREMENT", "';'", "','", "'['",
  "']'", "'('", "')'", "'{'", "'}'", "$accept", "program",
  "declaration_list", "D", "declaration", "variable_declaration",
  "variable_declaration_list", "variable_declaration_identifier", "$@1",
  "$@2", "vdi", "identifier_array_type", "initilization_params",
  "initilization", "type_specifier", "unsigned_grammar", "signed_grammar",
  "long_grammar", "short_grammar", "function_declaration",
  "function_declaration_type", "function_declaration_param_statement",
  "params", "parameters_list", "$@3", "parameters_identifier_list",
  "parameters_identifier_list_breakup", "param_identifier", "$@4",
  "param_identifier_breakup", "statement", "compound_statement", "$@5",
  "statment_list", "expression_statment", "conditional_statements", "$@6",
  "conditional_statements_breakup", "iterative_statements", "$@7", "$@8",
  "$@9", "return_statement", "break_statement", "string_initilization",
  "array_initialization", "array_int_declarations",
  "array_int_declarations_breakup", "expression", "simple_expression",
  "and_expression", "unary_relation_expression", "regular_expression",
  "relational_operators", "sum_expression", "sum_operators", "term",
  "MULOP", "factor", "mutable", "$@10", "immutable", "call", "$@11",
  "arguments", "arguments_list", "$@12", "A", "$@13", "constant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-66)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-70)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      94,   -66,   -66,   -66,   -66,    18,    24,    28,   102,   -66,
      63,   -66,    94,   -66,     4,   -66,    94,   -66,   -66,   -66,
     -66,   -66,    18,    24,   -66,   -66,    18,    24,   -66,   -66,
     -66,   -66,   -40,   -66,     9,   -66,   -66,   -66,   -16,   -66,
     -66,   -66,   -66,   -66,   -66,   -20,   -20,   -66,    61,    52,
     187,    17,   -15,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
      12,    32,     8,    43,    44,   187,    49,    46,   -66,   -66,
     -66,   -66,   -66,    17,   -66,    17,   -66,    61,   -66,   -66,
      45,   -66,   -66,   -66,   -66,   -66,    57,    77,    82,   -66,
      55,    40,    51,   -66,    21,   -66,   -66,   -66,    77,   -66,
      56,    86,   -66,    62,    94,   -66,    17,   -66,    65,    17,
      17,   122,   -66,   -66,    66,   -66,    64,   153,   -66,    17,
      17,   -66,   -66,   -66,   -66,   -66,   -66,   -24,   -66,   -66,
     -24,   -66,   -66,   -66,   -24,    17,    17,    17,    17,    17,
      17,   -66,   -66,    93,   113,   -66,    69,   -66,   -66,   -48,
     -66,   -35,    73,    70,    17,    17,   -66,   153,    68,    82,
     -66,    40,    51,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -21,   -66,   -66,   -66,   -66,   -66,   -66,   -66,    17,    17,
     -66,    71,   -66,    74,   -66,   -66,   121,   187,   187,   -31,
     -27,    88,   -66,   -66,    89,    84,   129,   -66,   -66,   -66,
      17,   -66,   121,   -66,   -66,   187,   -66,    17,    95,   -66,
     -66,   -66,    96,   -66,    88,   -66,   -66
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    24,    25,    26,    27,    42,    44,    40,    36,    32,
       0,     2,     5,     6,     0,     7,    49,    41,    28,    43,
      29,    37,    42,    44,    31,    33,    42,    44,    30,     1,
       4,     3,    11,    13,     0,    10,    50,    45,     0,    48,
      38,    39,    34,    35,    46,    18,    18,     8,     0,     0,
      66,     0,     0,    12,    15,    14,    11,     9,    55,    51,
      54,     0,     0,     0,     0,    66,     0,   124,   125,   139,
     140,   141,   142,     0,    71,     0,    65,     0,    47,    60,
       0,    59,    61,    62,    63,    64,     0,    98,   100,   102,
     104,   106,   114,   118,   123,   122,   128,   129,    16,   123,
       0,     0,    17,    58,     0,    52,     0,    82,     0,     0,
       0,     0,    84,   130,     0,   103,     0,    66,    70,     0,
       0,   111,   112,   108,   110,   107,   109,     0,   115,   116,
       0,   119,   120,   121,     0,     0,     0,     0,     0,     0,
       0,    96,    97,    23,     0,    20,     0,    56,    53,     0,
      83,     0,     0,     0,   133,     0,   127,    66,     0,    99,
     101,   105,   113,   117,    95,    93,    94,    91,    92,    90,
       0,    19,    21,    22,    85,    57,    72,    76,     0,     0,
     134,     0,   132,     0,    68,    67,     0,    66,    66,     0,
       0,   138,   131,   126,    89,     0,    75,    77,    78,    80,
       0,   135,     0,    87,    86,    66,    73,     0,     0,   136,
      88,    74,     0,    81,   138,    79,   137
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -66,   -66,   157,   -66,   -66,    19,   -66,   130,   -66,   -66,
     133,   -66,   -66,   -66,     5,   -66,   -66,     1,     2,   -66,
     -66,   -66,   -66,    76,   -66,   -66,   -66,   -66,   -66,   -66,
     -50,   -66,   -66,    25,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,    38,   -66,   -17,   -66,   -61,   -49,
      80,   -65,   -66,   -66,    75,   -66,    81,   -66,    67,   -47,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -14,   -66,   -66
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    10,    11,    31,    12,    76,    34,    35,    45,    46,
      53,    54,   102,   171,    77,    28,    24,    18,    20,    15,
      16,    37,    38,    39,    49,    59,   105,    60,   103,   147,
     157,    79,    80,   158,    81,    82,   187,   206,    83,   188,
     207,   208,    84,    85,   145,   173,   195,   203,    86,    87,
      88,    89,    90,   127,    91,   130,    92,   134,    93,    94,
     114,    95,    96,   154,   181,   182,   191,   201,   214,    97
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      78,   108,    98,   119,    99,    14,    67,    68,   115,    69,
      70,    71,    72,   174,   116,   111,   119,    14,   100,    13,
     119,    36,    17,    40,   119,    41,    99,    42,    19,    43,
      51,    13,    21,   176,    32,    33,    22,    23,    67,    68,
      44,    69,    70,    71,    72,   198,   177,    67,    68,   152,
      69,    70,    71,    72,   199,   160,    75,   149,    52,    99,
     151,   186,    99,    29,   101,    50,   135,   136,   137,   138,
     139,   140,    99,    99,   164,   165,   166,   167,   168,   169,
      99,    73,    58,    99,   107,    47,    48,    99,    75,   104,
      73,    56,    33,   180,   183,   141,   142,    75,     1,     2,
       3,     4,     5,     6,     7,     8,    25,   128,   129,    36,
      26,    27,   106,     9,   121,   122,   123,   124,   125,   126,
     131,   132,   133,   109,   110,   112,   113,   117,   119,   189,
     190,    99,    99,   118,   120,   143,   144,   196,   197,   209,
     146,   150,   153,   170,   155,   156,   212,   174,   175,   178,
     179,   185,   192,   193,   194,   211,    61,     1,     2,     3,
       4,     5,     6,     7,     8,   200,   202,   204,   205,    30,
      62,   213,     9,    63,    64,    65,    66,   215,    57,    55,
     148,   172,   184,    67,    68,   210,    69,    70,    71,    72,
      61,     1,     2,     3,     4,     5,     6,     7,     8,   159,
     216,   163,   161,     0,    62,     0,     9,    63,    64,    65,
      66,   162,     0,     0,     0,     0,     0,    67,    68,     0,
      69,    70,    71,    72,     0,     0,    73,     0,     0,    74,
       0,     0,     0,    75,     0,     0,   -69,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,     0,     0,    74,     0,     0,     0,    75
};

static const yytype_int16 yycheck[] =
{
      50,    62,    51,    51,    51,     0,    30,    31,    73,    33,
      34,    35,    36,    34,    75,    65,    51,    12,    33,     0,
      51,    16,     4,    22,    51,    23,    73,    26,     4,    27,
      50,    12,     4,    81,    30,    31,     8,     9,    30,    31,
      80,    33,    34,    35,    36,    76,    81,    30,    31,   110,
      33,    34,    35,    36,    81,   120,    80,   106,    78,   106,
     109,    82,   109,     0,    79,    81,    45,    46,    47,    48,
      49,    50,   119,   120,   135,   136,   137,   138,   139,   140,
     127,    73,    30,   130,    76,    76,    77,   134,    80,    77,
      73,    30,    31,   154,   155,    74,    75,    80,     4,     5,
       6,     7,     8,     9,    10,    11,     4,    67,    68,   104,
       8,     9,    80,    19,    59,    60,    61,    62,    63,    64,
      69,    70,    71,    80,    80,    76,    80,    82,    51,   178,
     179,   178,   179,    76,    52,    79,    50,   187,   188,   200,
      78,    76,    20,    50,    78,    81,   207,    34,    79,    76,
      80,    83,    81,    79,    33,   205,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    77,    77,    83,    39,    12,
      17,    76,    19,    20,    21,    22,    23,    81,    48,    46,
     104,   143,   157,    30,    31,   202,    33,    34,    35,    36,
       3,     4,     5,     6,     7,     8,     9,    10,    11,   119,
     214,   134,   127,    -1,    17,    -1,    19,    20,    21,    22,
      23,   130,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,
      33,    34,    35,    36,    -1,    -1,    73,    -1,    -1,    76,
      -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    -1,    -1,    76,    -1,    -1,    -1,    80
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    19,
      85,    86,    88,    89,    98,   103,   104,     4,   101,     4,
     102,     4,     8,     9,   100,     4,     8,     9,    99,     0,
      86,    87,    30,    31,    90,    91,    98,   105,   106,   107,
     101,   102,   101,   102,    80,    92,    93,    76,    77,   108,
      81,    50,    78,    94,    95,    94,    30,    91,    30,   109,
     111,     3,    17,    20,    21,    22,    23,    30,    31,    33,
      34,    35,    36,    73,    76,    80,    89,    98,   114,   115,
     116,   118,   119,   122,   126,   127,   132,   133,   134,   135,
     136,   138,   140,   142,   143,   145,   146,   153,   133,   143,
      33,    79,    96,   112,    77,   110,    80,    76,   132,    80,
      80,   114,    76,    80,   144,   135,   132,    82,    76,    51,
      52,    59,    60,    61,    62,    63,    64,   137,    67,    68,
     139,    69,    70,    71,   141,    45,    46,    47,    48,    49,
      50,    74,    75,    79,    50,   128,    78,   113,   107,   133,
      76,   133,   132,    20,   147,    78,    81,   114,   117,   134,
     135,   138,   140,   142,   132,   132,   132,   132,   132,   132,
      50,    97,   128,   129,    34,    79,    81,    81,    76,    80,
     132,   148,   149,   132,   117,    83,    82,   120,   123,   133,
     133,   150,    81,    79,    33,   130,   114,   114,    76,    81,
      77,   151,    77,   131,    83,    39,   121,   124,   125,   132,
     130,   114,   132,    76,   152,    81,   151
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    84,    85,    86,    87,    87,    88,    88,    89,    90,
      90,    92,    91,    93,    91,    94,    94,    95,    95,    96,
      96,    97,    97,    97,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    99,    99,    99,    99,   100,   100,   100,
     100,   101,   101,   102,   102,   103,   104,   105,   106,   106,
     108,   107,   109,   110,   110,   112,   111,   113,   113,   114,
     114,   114,   114,   114,   114,   114,   116,   115,   117,   117,
     118,   118,   120,   119,   121,   121,   123,   122,   124,   122,
     125,   122,   126,   126,   127,   128,   129,   130,   131,   131,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   133,
     133,   134,   134,   135,   135,   136,   136,   137,   137,   137,
     137,   137,   137,   138,   138,   139,   139,   140,   140,   141,
     141,   141,   142,   142,   143,   144,   143,   145,   145,   145,
     147,   146,   148,   148,   150,   149,   152,   151,   151,   153,
     153,   153,   153
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     0,     1,     1,     3,     3,
       1,     0,     3,     0,     3,     1,     2,     2,     0,     3,
       2,     1,     1,     0,     1,     1,     1,     1,     2,     2,
       2,     2,     1,     1,     2,     2,     0,     1,     2,     2,
       0,     1,     0,     1,     0,     2,     3,     3,     1,     0,
       0,     3,     2,     2,     0,     0,     3,     2,     0,     1,
       1,     1,     1,     1,     1,     1,     0,     4,     2,     0,
       2,     1,     0,     7,     2,     0,     0,     6,     0,     9,
       0,     8,     2,     3,     2,     2,     4,     2,     2,     0,
       3,     3,     3,     3,     3,     3,     2,     2,     1,     3,
       1,     3,     1,     2,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     0,     5,     3,     1,     1,
       0,     5,     1,     0,     0,     3,     0,     4,     0,     1,
       1,     1,     1
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
  case 11: /* $@1: %empty  */
#line 102 "parse.y"
                                     {if(duplicate(curid)){printf("Duplicate\n");exit(0);}insertSTnest(curid,currnest); ins();  }
#line 1615 "y.tab.c"
    break;

  case 13: /* $@2: %empty  */
#line 103 "parse.y"
                                             {if(duplicate(curid)){printf("Duplicate\n");exit(0);}insertSTnest(curid,currnest); ins();  }
#line 1621 "y.tab.c"
    break;

  case 19: /* initilization_params: integer_constant ']' initilization  */
#line 114 "parse.y"
                                                             {if(yyval < 1) {printf("Wrong array size\n"); exit(0);} }
#line 1627 "y.tab.c"
    break;

  case 46: /* function_declaration_type: type_specifier identifier '('  */
#line 146 "parse.y"
                                                         { strcpy(currfunctype, curtype); strcpy(currfunc, curid); check_duplicate(curid); insertSTF(curid); ins(); }
#line 1633 "y.tab.c"
    break;

  case 50: /* $@3: %empty  */
#line 155 "parse.y"
                                         { check_params(curtype); }
#line 1639 "y.tab.c"
    break;

  case 51: /* parameters_list: type_specifier $@3 parameters_identifier_list  */
#line 155 "parse.y"
                                                                                               { insertSTparamscount(currfunc, params_count); }
#line 1645 "y.tab.c"
    break;

  case 55: /* $@4: %empty  */
#line 165 "parse.y"
                                     { ins();insertSTnest(curid,1); params_count++; }
#line 1651 "y.tab.c"
    break;

  case 66: /* $@5: %empty  */
#line 178 "parse.y"
                          {currnest++;}
#line 1657 "y.tab.c"
    break;

  case 67: /* compound_statement: $@5 '{' statment_list '}'  */
#line 178 "parse.y"
                                                                {deletedata(currnest);currnest--;}
#line 1663 "y.tab.c"
    break;

  case 72: /* $@6: %empty  */
#line 189 "parse.y"
                                                       {if(yyvsp[-1]!=1){printf("Condition checking is not of type int\n");exit(0);}}
#line 1669 "y.tab.c"
    break;

  case 76: /* $@7: %empty  */
#line 196 "parse.y"
                                                          {if(yyvsp[-1]!=1){printf("Condition checking is not of type int\n");exit(0);}}
#line 1675 "y.tab.c"
    break;

  case 78: /* $@8: %empty  */
#line 197 "parse.y"
                                                                       {if(yyvsp[-1]!=1){printf("Condition checking is not of type int\n");exit(0);}}
#line 1681 "y.tab.c"
    break;

  case 80: /* $@9: %empty  */
#line 198 "parse.y"
                                                                      {if(yyvsp[-1]!=1){printf("Condition checking is not of type int\n");exit(0);}}
#line 1687 "y.tab.c"
    break;

  case 82: /* return_statement: RETURN ';'  */
#line 200 "parse.y"
                                     {if(strcmp(currfunctype,"void")) {printf("Returning void of a non-void function\n"); exit(0);}}
#line 1693 "y.tab.c"
    break;

  case 83: /* return_statement: RETURN expression ';'  */
#line 201 "parse.y"
                                                { 	if(!strcmp(currfunctype, "void"))
										{ 
											yyerror("Function is void");
										}

										if((currfunctype[0]=='i' || currfunctype[0]=='c') && yyvsp[-1]!=1)
										{
											printf("Expression doesn't match return type of function\n"); exit(0);
										}
			              
			                     	}
#line 1709 "y.tab.c"
    break;

  case 85: /* string_initilization: assignment_operator string_constant  */
#line 217 "parse.y"
                                                              {insV();}
#line 1715 "y.tab.c"
    break;

  case 90: /* expression: mutable assignment_operator expression  */
#line 230 "parse.y"
                                                                              {
																	  if(yyvsp[-2]==1 && yyvsp[0]==1) 
																	  {
			                                                          yyval=1;
			                                                          } 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
#line 1728 "y.tab.c"
    break;

  case 91: /* expression: mutable PLUS_ASSIGN expression  */
#line 238 "parse.y"
                                                             {
																	  if(yyvsp[-2]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
#line 1739 "y.tab.c"
    break;

  case 92: /* expression: mutable MINUS_ASSIGN expression  */
#line 244 "parse.y"
                                                           {
																	  if(yyvsp[-2]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
#line 1750 "y.tab.c"
    break;

  case 93: /* expression: mutable MUL_ASSIGN expression  */
#line 250 "parse.y"
                                                        {
																	  if(yyvsp[-2]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
#line 1761 "y.tab.c"
    break;

  case 94: /* expression: mutable DIV_ASSIGN expression  */
#line 256 "parse.y"
                                                                        {
																	  if(yyvsp[-2]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
#line 1772 "y.tab.c"
    break;

  case 95: /* expression: mutable MOD_ASSIGN expression  */
#line 262 "parse.y"
                                                                        {
																	  if(yyvsp[-2]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
#line 1783 "y.tab.c"
    break;

  case 96: /* expression: mutable INCREMENT  */
#line 268 "parse.y"
                                                                                                {if(yyvsp[-1] == 1) yyval=1; else yyval=-1;}
#line 1789 "y.tab.c"
    break;

  case 97: /* expression: mutable DECREMENT  */
#line 269 "parse.y"
                                                                                                {if(yyvsp[-1] == 1) yyval=1; else yyval=-1;}
#line 1795 "y.tab.c"
    break;

  case 98: /* expression: simple_expression  */
#line 270 "parse.y"
                                            {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1801 "y.tab.c"
    break;

  case 99: /* simple_expression: simple_expression OR and_expression  */
#line 274 "parse.y"
                                                              {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1807 "y.tab.c"
    break;

  case 100: /* simple_expression: and_expression  */
#line 275 "parse.y"
                                         {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1813 "y.tab.c"
    break;

  case 101: /* and_expression: and_expression AND unary_relation_expression  */
#line 278 "parse.y"
                                                                       {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1819 "y.tab.c"
    break;

  case 102: /* and_expression: unary_relation_expression  */
#line 279 "parse.y"
                                                     {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1825 "y.tab.c"
    break;

  case 103: /* unary_relation_expression: '!' unary_relation_expression  */
#line 283 "parse.y"
                                                        {if(yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1831 "y.tab.c"
    break;

  case 104: /* unary_relation_expression: regular_expression  */
#line 284 "parse.y"
                                             {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1837 "y.tab.c"
    break;

  case 105: /* regular_expression: regular_expression relational_operators sum_expression  */
#line 287 "parse.y"
                                                                                 {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1843 "y.tab.c"
    break;

  case 106: /* regular_expression: sum_expression  */
#line 288 "parse.y"
                                           {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1849 "y.tab.c"
    break;

  case 113: /* sum_expression: sum_expression sum_operators term  */
#line 295 "parse.y"
                                                             {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1855 "y.tab.c"
    break;

  case 114: /* sum_expression: term  */
#line 296 "parse.y"
                               {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1861 "y.tab.c"
    break;

  case 117: /* term: term MULOP factor  */
#line 303 "parse.y"
                                            {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1867 "y.tab.c"
    break;

  case 118: /* term: factor  */
#line 304 "parse.y"
                                 {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1873 "y.tab.c"
    break;

  case 122: /* factor: immutable  */
#line 310 "parse.y"
                                    {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1879 "y.tab.c"
    break;

  case 123: /* factor: mutable  */
#line 311 "parse.y"
                                  {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1885 "y.tab.c"
    break;

  case 124: /* mutable: identifier  */
#line 314 "parse.y"
                                     {
						  if(check_id_is_func(curid))
						  {printf("Function name used as Identifier\n"); exit(8);}
			              if(!checkscope(curid))
			              {printf("%s\n",curid);printf("Undeclared\n");exit(0);} 
			              if(!checkarray(curid))
			              {printf("%s\n",curid);printf("Array ID has no subscript\n");exit(0);}
			              if(gettype(curid,0)=='i' || gettype(curid,1)== 'c')
			              yyval = 1;
			              else
			              yyval = -1;
			              }
#line 1902 "y.tab.c"
    break;

  case 125: /* $@10: %empty  */
#line 326 "parse.y"
                                           {if(!checkscope(curid)){printf("%s\n",curid);printf("Undeclared\n");exit(0);}}
#line 1908 "y.tab.c"
    break;

  case 126: /* mutable: array_identifier $@10 '[' expression ']'  */
#line 327 "parse.y"
                                           {if(gettype(curid,0)=='i' || gettype(curid,1)== 'c')
			              		yyval = 1;
			              		else
			              		yyval = -1;
			              		}
#line 1918 "y.tab.c"
    break;

  case 127: /* immutable: '(' expression ')'  */
#line 334 "parse.y"
                                             {if(yyvsp[-1]==1) yyval=1; else yyval=-1;}
#line 1924 "y.tab.c"
    break;

  case 129: /* immutable: constant  */
#line 336 "parse.y"
                                   {if(yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1930 "y.tab.c"
    break;

  case 130: /* $@11: %empty  */
#line 339 "parse.y"
                                        {
			             if(!check_declaration(curid, "Function"))
			             { printf("Function not declared"); exit(0);} 
			             insertSTF(curid); 
						 strcpy(currfunccall,curid);
			             }
#line 1941 "y.tab.c"
    break;

  case 131: /* call: identifier '(' $@11 arguments ')'  */
#line 345 "parse.y"
                                                 { if(strcmp(currfunccall,"printf"))
							{ 
								if(getSTparamscount(currfunccall)!=call_params_count)
								{	
									yyerror("Number of arguments in function call doesn't match number of parameters");
									//printf("Number of arguments in function call %s doesn't match number of parameters\n", currfunccall);
									exit(8);
								}
							} 
						 }
#line 1956 "y.tab.c"
    break;

  case 134: /* $@12: %empty  */
#line 360 "parse.y"
                                     { call_params_count++; }
#line 1962 "y.tab.c"
    break;

  case 136: /* $@13: %empty  */
#line 363 "parse.y"
                                         { call_params_count++; }
#line 1968 "y.tab.c"
    break;

  case 139: /* constant: integer_constant  */
#line 367 "parse.y"
                                                {  insV(); yyval=1; }
#line 1974 "y.tab.c"
    break;

  case 140: /* constant: string_constant  */
#line 368 "parse.y"
                                                {  insV(); yyval=-1;}
#line 1980 "y.tab.c"
    break;

  case 141: /* constant: float_constant  */
#line 369 "parse.y"
                                                {  insV(); }
#line 1986 "y.tab.c"
    break;

  case 142: /* constant: character_constant  */
#line 370 "parse.y"
                                            {  insV();yyval=1; }
#line 1992 "y.tab.c"
    break;


#line 1996 "y.tab.c"

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

#line 372 "parse.y"


extern FILE *yyin;
extern int yylineno;
extern char *yytext;
void insertSTtype(char *,char *);
void insertSTvalue(char *, char *);
void incertCT(char *, char *);
void printST();
void printCT();

int main(int argc , char **argv)
{
	yyin = fopen(argv[1], "r");
	yyparse();

	if(flag == 0)
	{
		printf(ANSI_COLOR_GREEN "Status: Parsing Complete - Valid" ANSI_COLOR_RESET "\n");
		printf("%30s" ANSI_COLOR_CYAN "SYMBOL TABLE" ANSI_COLOR_RESET "\n", " ");
		printf("%30s %s\n", " ", "------------");
		printST();

		printf("\n\n%30s" ANSI_COLOR_CYAN "CONSTANT TABLE" ANSI_COLOR_RESET "\n", " ");
		printf("%30s %s\n", " ", "--------------");
		printCT();
	}
}

void yyerror(char *s)
{
	printf(ANSI_COLOR_RED "%d %s %s\n", yylineno, s, yytext);
	flag=1;
	printf(ANSI_COLOR_RED "Status: Parsing Failed - Invalid\n" ANSI_COLOR_RESET);
	exit(7);
}

void ins()
{
	insertSTtype(curid,curtype);
}

void insV()
{
	insertSTvalue(curid,curval);
}

int yywrap()
{
	return 1;
}
