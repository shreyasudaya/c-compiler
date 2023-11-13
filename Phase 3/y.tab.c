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


#line 114 "y.tab.c"

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
    CONST = 270,                   /* CONST  */
    ENUM = 271,                    /* ENUM  */
    ELLIPSIS = 272,                /* ELLIPSIS  */
    RETURN = 273,                  /* RETURN  */
    MAIN = 274,                    /* MAIN  */
    VOID = 275,                    /* VOID  */
    WHILE = 276,                   /* WHILE  */
    FOR = 277,                     /* FOR  */
    DO = 278,                      /* DO  */
    BREAK = 279,                   /* BREAK  */
    ENDIF = 280,                   /* ENDIF  */
    IDENTIFIER = 281,              /* IDENTIFIER  */
    array_identifier = 282,        /* array_identifier  */
    func_identifier = 283,         /* func_identifier  */
    integer_constant = 284,        /* integer_constant  */
    string_constant = 285,         /* string_constant  */
    float_constant = 286,          /* float_constant  */
    character_constant = 287,      /* character_constant  */
    CASE = 288,                    /* CASE  */
    DEFAULT = 289,                 /* DEFAULT  */
    SWITCH = 290,                  /* SWITCH  */
    GOTO = 291,                    /* GOTO  */
    CONTINUE = 292,                /* CONTINUE  */
    ELSE = 293,                    /* ELSE  */
    XOR_ASSIGN = 294,              /* XOR_ASSIGN  */
    OR_ASSIGN = 295,               /* OR_ASSIGN  */
    AND_ASSIGN = 296,              /* AND_ASSIGN  */
    MOD_ASSIGN = 297,              /* MOD_ASSIGN  */
    MUL_ASSIGN = 298,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 299,              /* DIV_ASSIGN  */
    PLUS_ASSIGN = 300,             /* PLUS_ASSIGN  */
    MINUS_ASSIGN = 301,            /* MINUS_ASSIGN  */
    assignment_operator = 302,     /* assignment_operator  */
    OR = 303,                      /* OR  */
    AND = 304,                     /* AND  */
    PIPE = 305,                    /* PIPE  */
    TYPEDEF = 306,                 /* TYPEDEF  */
    EXTERN = 307,                  /* EXTERN  */
    STATIC = 308,                  /* STATIC  */
    AUTO = 309,                    /* AUTO  */
    REGISTER = 310,                /* REGISTER  */
    XOR = 311,                     /* XOR  */
    AMP = 312,                     /* AMP  */
    EQ = 313,                      /* EQ  */
    NOT_EQ = 314,                  /* NOT_EQ  */
    LESS_THAN_EQ = 315,            /* LESS_THAN_EQ  */
    LESS_THAN = 316,               /* LESS_THAN  */
    GR_THAN_EQ = 317,              /* GR_THAN_EQ  */
    GR_THAN = 318,                 /* GR_THAN  */
    LEFT_OP = 319,                 /* LEFT_OP  */
    RIGHT_OP = 320,                /* RIGHT_OP  */
    LEFT_ASSIGN = 321,             /* LEFT_ASSIGN  */
    RIGHT_ASSIGN = 322,            /* RIGHT_ASSIGN  */
    LSHIFT = 323,                  /* LSHIFT  */
    RSHIFT = 324,                  /* RSHIFT  */
    PLUS = 325,                    /* PLUS  */
    MINUS = 326,                   /* MINUS  */
    MUL = 327,                     /* MUL  */
    DIV = 328,                     /* DIV  */
    MOD = 329,                     /* MOD  */
    SIZEOF = 330,                  /* SIZEOF  */
    TAB = 331,                     /* TAB  */
    EXC = 332,                     /* EXC  */
    INCREMENT = 333,               /* INCREMENT  */
    DECREMENT = 334                /* DECREMENT  */
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
#define CONST 270
#define ENUM 271
#define ELLIPSIS 272
#define RETURN 273
#define MAIN 274
#define VOID 275
#define WHILE 276
#define FOR 277
#define DO 278
#define BREAK 279
#define ENDIF 280
#define IDENTIFIER 281
#define array_identifier 282
#define func_identifier 283
#define integer_constant 284
#define string_constant 285
#define float_constant 286
#define character_constant 287
#define CASE 288
#define DEFAULT 289
#define SWITCH 290
#define GOTO 291
#define CONTINUE 292
#define ELSE 293
#define XOR_ASSIGN 294
#define OR_ASSIGN 295
#define AND_ASSIGN 296
#define MOD_ASSIGN 297
#define MUL_ASSIGN 298
#define DIV_ASSIGN 299
#define PLUS_ASSIGN 300
#define MINUS_ASSIGN 301
#define assignment_operator 302
#define OR 303
#define AND 304
#define PIPE 305
#define TYPEDEF 306
#define EXTERN 307
#define STATIC 308
#define AUTO 309
#define REGISTER 310
#define XOR 311
#define AMP 312
#define EQ 313
#define NOT_EQ 314
#define LESS_THAN_EQ 315
#define LESS_THAN 316
#define GR_THAN_EQ 317
#define GR_THAN 318
#define LEFT_OP 319
#define RIGHT_OP 320
#define LEFT_ASSIGN 321
#define RIGHT_ASSIGN 322
#define LSHIFT 323
#define RSHIFT 324
#define PLUS 325
#define MINUS 326
#define MUL 327
#define DIV 328
#define MOD 329
#define SIZEOF 330
#define TAB 331
#define EXC 332
#define INCREMENT 333
#define DECREMENT 334

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
  YYSYMBOL_CONST = 15,                     /* CONST  */
  YYSYMBOL_ENUM = 16,                      /* ENUM  */
  YYSYMBOL_ELLIPSIS = 17,                  /* ELLIPSIS  */
  YYSYMBOL_RETURN = 18,                    /* RETURN  */
  YYSYMBOL_MAIN = 19,                      /* MAIN  */
  YYSYMBOL_VOID = 20,                      /* VOID  */
  YYSYMBOL_WHILE = 21,                     /* WHILE  */
  YYSYMBOL_FOR = 22,                       /* FOR  */
  YYSYMBOL_DO = 23,                        /* DO  */
  YYSYMBOL_BREAK = 24,                     /* BREAK  */
  YYSYMBOL_ENDIF = 25,                     /* ENDIF  */
  YYSYMBOL_IDENTIFIER = 26,                /* IDENTIFIER  */
  YYSYMBOL_array_identifier = 27,          /* array_identifier  */
  YYSYMBOL_func_identifier = 28,           /* func_identifier  */
  YYSYMBOL_integer_constant = 29,          /* integer_constant  */
  YYSYMBOL_string_constant = 30,           /* string_constant  */
  YYSYMBOL_float_constant = 31,            /* float_constant  */
  YYSYMBOL_character_constant = 32,        /* character_constant  */
  YYSYMBOL_CASE = 33,                      /* CASE  */
  YYSYMBOL_DEFAULT = 34,                   /* DEFAULT  */
  YYSYMBOL_SWITCH = 35,                    /* SWITCH  */
  YYSYMBOL_GOTO = 36,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 37,                  /* CONTINUE  */
  YYSYMBOL_ELSE = 38,                      /* ELSE  */
  YYSYMBOL_XOR_ASSIGN = 39,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 40,                 /* OR_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 41,                /* AND_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 42,                /* MOD_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 43,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 44,                /* DIV_ASSIGN  */
  YYSYMBOL_PLUS_ASSIGN = 45,               /* PLUS_ASSIGN  */
  YYSYMBOL_MINUS_ASSIGN = 46,              /* MINUS_ASSIGN  */
  YYSYMBOL_assignment_operator = 47,       /* assignment_operator  */
  YYSYMBOL_OR = 48,                        /* OR  */
  YYSYMBOL_AND = 49,                       /* AND  */
  YYSYMBOL_PIPE = 50,                      /* PIPE  */
  YYSYMBOL_TYPEDEF = 51,                   /* TYPEDEF  */
  YYSYMBOL_EXTERN = 52,                    /* EXTERN  */
  YYSYMBOL_STATIC = 53,                    /* STATIC  */
  YYSYMBOL_AUTO = 54,                      /* AUTO  */
  YYSYMBOL_REGISTER = 55,                  /* REGISTER  */
  YYSYMBOL_XOR = 56,                       /* XOR  */
  YYSYMBOL_AMP = 57,                       /* AMP  */
  YYSYMBOL_EQ = 58,                        /* EQ  */
  YYSYMBOL_NOT_EQ = 59,                    /* NOT_EQ  */
  YYSYMBOL_LESS_THAN_EQ = 60,              /* LESS_THAN_EQ  */
  YYSYMBOL_LESS_THAN = 61,                 /* LESS_THAN  */
  YYSYMBOL_GR_THAN_EQ = 62,                /* GR_THAN_EQ  */
  YYSYMBOL_GR_THAN = 63,                   /* GR_THAN  */
  YYSYMBOL_LEFT_OP = 64,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 65,                  /* RIGHT_OP  */
  YYSYMBOL_LEFT_ASSIGN = 66,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 67,              /* RIGHT_ASSIGN  */
  YYSYMBOL_LSHIFT = 68,                    /* LSHIFT  */
  YYSYMBOL_RSHIFT = 69,                    /* RSHIFT  */
  YYSYMBOL_PLUS = 70,                      /* PLUS  */
  YYSYMBOL_MINUS = 71,                     /* MINUS  */
  YYSYMBOL_MUL = 72,                       /* MUL  */
  YYSYMBOL_DIV = 73,                       /* DIV  */
  YYSYMBOL_MOD = 74,                       /* MOD  */
  YYSYMBOL_SIZEOF = 75,                    /* SIZEOF  */
  YYSYMBOL_TAB = 76,                       /* TAB  */
  YYSYMBOL_EXC = 77,                       /* EXC  */
  YYSYMBOL_INCREMENT = 78,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 79,                 /* DECREMENT  */
  YYSYMBOL_80_ = 80,                       /* ';'  */
  YYSYMBOL_81_ = 81,                       /* ','  */
  YYSYMBOL_82_ = 82,                       /* '['  */
  YYSYMBOL_83_ = 83,                       /* ']'  */
  YYSYMBOL_84_ = 84,                       /* '('  */
  YYSYMBOL_85_ = 85,                       /* ')'  */
  YYSYMBOL_86_ = 86,                       /* '{'  */
  YYSYMBOL_87_ = 87,                       /* '}'  */
  YYSYMBOL_88_ = 88,                       /* '!'  */
  YYSYMBOL_YYACCEPT = 89,                  /* $accept  */
  YYSYMBOL_program = 90,                   /* program  */
  YYSYMBOL_declaration_list = 91,          /* declaration_list  */
  YYSYMBOL_D = 92,                         /* D  */
  YYSYMBOL_declaration = 93,               /* declaration  */
  YYSYMBOL_variable_declaration = 94,      /* variable_declaration  */
  YYSYMBOL_variable_declaration_list = 95, /* variable_declaration_list  */
  YYSYMBOL_variable_declaration_identifier = 96, /* variable_declaration_identifier  */
  YYSYMBOL_97_1 = 97,                      /* $@1  */
  YYSYMBOL_98_2 = 98,                      /* $@2  */
  YYSYMBOL_vdi = 99,                       /* vdi  */
  YYSYMBOL_identifier_array_type = 100,    /* identifier_array_type  */
  YYSYMBOL_initilization_params = 101,     /* initilization_params  */
  YYSYMBOL_initilization = 102,            /* initilization  */
  YYSYMBOL_type_specifier = 103,           /* type_specifier  */
  YYSYMBOL_unsigned_grammar = 104,         /* unsigned_grammar  */
  YYSYMBOL_signed_grammar = 105,           /* signed_grammar  */
  YYSYMBOL_long_grammar = 106,             /* long_grammar  */
  YYSYMBOL_short_grammar = 107,            /* short_grammar  */
  YYSYMBOL_function_declaration = 108,     /* function_declaration  */
  YYSYMBOL_function_declaration_type = 109, /* function_declaration_type  */
  YYSYMBOL_function_declaration_param_statement = 110, /* function_declaration_param_statement  */
  YYSYMBOL_params = 111,                   /* params  */
  YYSYMBOL_parameters_list = 112,          /* parameters_list  */
  YYSYMBOL_113_3 = 113,                    /* $@3  */
  YYSYMBOL_parameters_identifier_list = 114, /* parameters_identifier_list  */
  YYSYMBOL_parameters_identifier_list_breakup = 115, /* parameters_identifier_list_breakup  */
  YYSYMBOL_param_identifier = 116,         /* param_identifier  */
  YYSYMBOL_117_4 = 117,                    /* $@4  */
  YYSYMBOL_param_identifier_breakup = 118, /* param_identifier_breakup  */
  YYSYMBOL_statement = 119,                /* statement  */
  YYSYMBOL_compound_statement = 120,       /* compound_statement  */
  YYSYMBOL_121_5 = 121,                    /* $@5  */
  YYSYMBOL_statment_list = 122,            /* statment_list  */
  YYSYMBOL_expression_statment = 123,      /* expression_statment  */
  YYSYMBOL_conditional_statements = 124,   /* conditional_statements  */
  YYSYMBOL_125_6 = 125,                    /* $@6  */
  YYSYMBOL_conditional_statements_breakup = 126, /* conditional_statements_breakup  */
  YYSYMBOL_iterative_statements = 127,     /* iterative_statements  */
  YYSYMBOL_128_7 = 128,                    /* $@7  */
  YYSYMBOL_129_8 = 129,                    /* $@8  */
  YYSYMBOL_130_9 = 130,                    /* $@9  */
  YYSYMBOL_return_statement = 131,         /* return_statement  */
  YYSYMBOL_break_statement = 132,          /* break_statement  */
  YYSYMBOL_string_initilization = 133,     /* string_initilization  */
  YYSYMBOL_array_initialization = 134,     /* array_initialization  */
  YYSYMBOL_array_int_declarations = 135,   /* array_int_declarations  */
  YYSYMBOL_array_int_declarations_breakup = 136, /* array_int_declarations_breakup  */
  YYSYMBOL_expression = 137,               /* expression  */
  YYSYMBOL_simple_expression = 138,        /* simple_expression  */
  YYSYMBOL_and_expression = 139,           /* and_expression  */
  YYSYMBOL_unary_relation_expression = 140, /* unary_relation_expression  */
  YYSYMBOL_regular_expression = 141,       /* regular_expression  */
  YYSYMBOL_relational_operators = 142,     /* relational_operators  */
  YYSYMBOL_sum_expression = 143,           /* sum_expression  */
  YYSYMBOL_sum_operators = 144,            /* sum_operators  */
  YYSYMBOL_term = 145,                     /* term  */
  YYSYMBOL_MULOP = 146,                    /* MULOP  */
  YYSYMBOL_factor = 147,                   /* factor  */
  YYSYMBOL_mutable = 148,                  /* mutable  */
  YYSYMBOL_149_10 = 149,                   /* $@10  */
  YYSYMBOL_immutable = 150,                /* immutable  */
  YYSYMBOL_call = 151,                     /* call  */
  YYSYMBOL_152_11 = 152,                   /* $@11  */
  YYSYMBOL_arguments = 153,                /* arguments  */
  YYSYMBOL_arguments_list = 154,           /* arguments_list  */
  YYSYMBOL_155_12 = 155,                   /* $@12  */
  YYSYMBOL_A = 156,                        /* A  */
  YYSYMBOL_157_13 = 157,                   /* $@13  */
  YYSYMBOL_constant = 158                  /* constant  */
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
#define YYLAST   266

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  70
/* YYNRULES -- Number of rules.  */
#define YYNRULES  143
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  219

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   334


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
       2,     2,     2,    88,     2,     2,     2,     2,     2,     2,
      84,    85,     2,     2,    81,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    80,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    82,     2,    83,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    86,     2,    87,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    88,    88,    91,    94,    95,    98,    99,   102,   105,
     105,   108,   108,   109,   109,   113,   113,   116,   117,   120,
     121,   122,   127,   128,   129,   132,   132,   132,   132,   133,
     134,   135,   136,   137,   140,   140,   140,   140,   143,   143,
     143,   143,   146,   146,   149,   149,   152,   155,   158,   161,
     161,   164,   164,   167,   170,   171,   174,   174,   177,   178,
     181,   181,   182,   182,   183,   183,   184,   187,   187,   190,
     191,   194,   195,   198,   198,   201,   202,   205,   205,   206,
     206,   207,   207,   209,   210,   223,   226,   229,   232,   235,
     236,   239,   247,   253,   259,   265,   271,   277,   278,   279,
     283,   284,   287,   288,   292,   293,   296,   297,   300,   300,
     300,   301,   301,   301,   304,   305,   308,   309,   312,   313,
     316,   316,   316,   319,   320,   323,   335,   335,   343,   344,
     345,   348,   348,   366,   366,   369,   369,   372,   372,   373,
     376,   377,   378,   379
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
  "UNION", "VOLATILE", "CONST", "ENUM", "ELLIPSIS", "RETURN", "MAIN",
  "VOID", "WHILE", "FOR", "DO", "BREAK", "ENDIF", "IDENTIFIER",
  "array_identifier", "func_identifier", "integer_constant",
  "string_constant", "float_constant", "character_constant", "CASE",
  "DEFAULT", "SWITCH", "GOTO", "CONTINUE", "ELSE", "XOR_ASSIGN",
  "OR_ASSIGN", "AND_ASSIGN", "MOD_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN",
  "PLUS_ASSIGN", "MINUS_ASSIGN", "assignment_operator", "OR", "AND",
  "PIPE", "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER", "XOR", "AMP",
  "EQ", "NOT_EQ", "LESS_THAN_EQ", "LESS_THAN", "GR_THAN_EQ", "GR_THAN",
  "LEFT_OP", "RIGHT_OP", "LEFT_ASSIGN", "RIGHT_ASSIGN", "LSHIFT", "RSHIFT",
  "PLUS", "MINUS", "MUL", "DIV", "MOD", "SIZEOF", "TAB", "EXC",
  "INCREMENT", "DECREMENT", "';'", "','", "'['", "']'", "'('", "')'",
  "'{'", "'}'", "'!'", "$accept", "program", "declaration_list", "D",
  "declaration", "variable_declaration", "variable_declaration_list",
  "variable_declaration_identifier", "$@1", "$@2", "vdi",
  "identifier_array_type", "initilization_params", "initilization",
  "type_specifier", "unsigned_grammar", "signed_grammar", "long_grammar",
  "short_grammar", "function_declaration", "function_declaration_type",
  "function_declaration_param_statement", "params", "parameters_list",
  "$@3", "parameters_identifier_list",
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

#define YYPACT_NINF (-62)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-71)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     145,   -62,   -62,   -62,   -62,    35,    37,    34,    81,   -62,
      24,   -62,   145,   -62,    80,   -62,   145,   -62,   -62,   -62,
     -62,   -62,    35,    37,   -62,   -62,    35,    37,   -62,   -62,
     -62,   -62,   -38,   -62,    45,   -62,   -62,   -62,   -41,   -62,
     -62,   -62,   -62,   -62,   -62,   -28,   -28,   -62,   101,    30,
     178,   -20,    -2,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -18,   -13,     4,     7,    27,   178,     6,    33,   -62,   -62,
     -62,   -62,   -62,   -62,   -20,   -20,   -62,   101,   -62,   -62,
      -4,   -62,   -62,   -62,   -62,   -62,    28,    56,    71,   -62,
      84,    64,    -7,   -62,   116,   -62,   -62,   -62,    56,   -62,
      46,    89,   -62,    55,   145,   -62,   -20,   -62,    58,   -20,
     -20,   143,   -62,   -62,    85,    83,   -62,    92,   -62,   -20,
     -20,   -62,   -62,   -62,   -62,   -62,   -62,    21,   -62,   -62,
      21,   -62,   -62,   -62,    21,   -20,   -20,   -20,   -20,   -20,
     -20,   -62,   -62,   -24,   136,   -62,    86,   -62,   -62,   -45,
     -62,   -40,    90,    87,   -20,   -20,   -62,    92,    88,    71,
     -62,    64,    -7,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -16,    -2,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -20,
     -20,   -62,    93,   -62,    91,   -62,   -62,   144,   -62,   178,
     178,   -11,   -30,    96,   -62,   -62,   109,   104,   154,   -62,
     -62,   -62,   -20,   -62,   144,   -62,   -62,   178,   -62,   -20,
     113,   -62,   -62,   -62,   112,   -62,    96,   -62,   -62
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    25,    26,    27,    28,    43,    45,    41,    37,    33,
       0,     2,     5,     6,     0,     7,    50,    42,    29,    44,
      30,    38,    43,    45,    32,    34,    43,    45,    31,     1,
       4,     3,    11,    13,     0,    10,    51,    46,     0,    49,
      39,    40,    35,    36,    47,    18,    18,     8,     0,     0,
      67,     0,     0,    12,    15,    14,    11,     9,    56,    52,
      55,     0,     0,     0,     0,    67,     0,   125,   126,   140,
     141,   142,   143,    72,     0,     0,    66,     0,    48,    61,
       0,    60,    62,    63,    64,    65,     0,    99,   101,   103,
     105,   107,   115,   119,   124,   123,   129,   130,    16,   124,
       0,     0,    17,    59,     0,    53,     0,    83,     0,     0,
       0,     0,    85,   131,     0,     0,   104,    67,    71,     0,
       0,   112,   113,   109,   111,   108,   110,     0,   116,   117,
       0,   120,   121,   122,     0,     0,     0,     0,     0,     0,
       0,    97,    98,    24,     0,    21,     0,    57,    54,     0,
      84,     0,     0,     0,   134,     0,   128,    67,     0,   100,
     102,   106,   114,   118,    96,    94,    95,    92,    93,    91,
       0,     0,    19,    22,    23,    86,    58,    73,    77,     0,
       0,   135,     0,   133,     0,    69,    68,     0,    20,    67,
      67,     0,     0,   139,   132,   127,    90,     0,    76,    78,
      79,    81,     0,   136,     0,    88,    87,    67,    74,     0,
       0,   137,    89,    75,     0,    82,   139,    80,   138
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -62,   -62,   191,   -62,   -62,    20,   -62,   158,   -62,   -62,
     165,   -62,    41,   -62,     5,   -62,   -62,     0,     2,   -62,
     -62,   -62,   -62,   110,   -62,   -62,   -62,   -62,   -62,   -62,
     -50,   -62,   -62,    59,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,    70,   -62,    11,   -62,   -61,   -49,
      98,   -59,   -62,   -62,    94,   -62,    95,   -62,    97,   -47,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,     3,   -62,   -62
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    10,    11,    31,    12,    76,    34,    35,    45,    46,
      53,    54,   102,   172,    77,    28,    24,    18,    20,    15,
      16,    37,    38,    39,    49,    59,   105,    60,   103,   147,
     157,    79,    80,   158,    81,    82,   189,   208,    83,   190,
     209,   210,    84,    85,   145,   174,   197,   205,    86,    87,
      88,    89,    90,   127,    91,   130,    92,   134,    93,    94,
     114,    95,    96,   154,   182,   183,   193,   203,   216,    97
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      78,   108,    98,   119,    99,    14,    67,    68,   119,    69,
      70,    71,    72,   115,   175,   111,   116,    14,   119,    51,
      13,    36,    40,   170,    29,    41,    42,   100,    99,    43,
      67,    68,    13,    69,    70,    71,    72,   119,    21,    17,
     177,    19,    22,    23,    50,   178,    44,    67,    68,   152,
      69,    70,    71,    72,    52,   201,    58,   149,   171,    99,
     151,   160,    99,   104,    74,   131,   132,   133,    75,   200,
     187,   106,    99,    99,   164,   165,   166,   167,   168,   169,
      99,   101,   117,    99,   107,    25,   112,    99,    74,    26,
      27,   109,    75,   181,   184,    61,     1,     2,     3,     4,
       5,     6,     7,     8,   119,    74,    32,    33,   118,    36,
      62,   110,     9,    63,    64,    65,    66,   113,    67,    68,
     120,    69,    70,    71,    72,    47,    48,    56,    33,   143,
     191,   192,    99,    99,   128,   129,   144,   146,   150,   198,
     199,   211,   121,   122,   123,   124,   125,   126,   214,     1,
       2,     3,     4,     5,     6,     7,     8,   213,   135,   136,
     137,   138,   139,   140,   153,     9,   175,   155,   156,   176,
     179,   180,    73,   196,   195,   186,    74,   202,   194,   -70,
      75,    61,     1,     2,     3,     4,     5,     6,     7,     8,
     204,   206,   207,   215,   141,   142,    62,   217,     9,    63,
      64,    65,    66,    30,    67,    68,    57,    69,    70,    71,
      72,    55,   188,   173,   148,   212,   185,   159,     0,   218,
       0,   161,     0,     0,     0,   162,     0,     0,     0,     0,
       0,   163,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
       0,     0,    74,     0,     0,     0,    75
};

static const yytype_int16 yycheck[] =
{
      50,    62,    51,    48,    51,     0,    26,    27,    48,    29,
      30,    31,    32,    74,    30,    65,    75,    12,    48,    47,
       0,    16,    22,    47,     0,    23,    26,    29,    75,    27,
      26,    27,    12,    29,    30,    31,    32,    48,     4,     4,
      85,     4,     8,     9,    85,    85,    84,    26,    27,   110,
      29,    30,    31,    32,    82,    85,    26,   106,    82,   106,
     109,   120,   109,    81,    84,    72,    73,    74,    88,    80,
      86,    84,   119,   120,   135,   136,   137,   138,   139,   140,
     127,    83,    86,   130,    80,     4,    80,   134,    84,     8,
       9,    84,    88,   154,   155,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    48,    84,    26,    27,    80,   104,
      18,    84,    20,    21,    22,    23,    24,    84,    26,    27,
      49,    29,    30,    31,    32,    80,    81,    26,    27,    83,
     179,   180,   179,   180,    70,    71,    47,    82,    80,   189,
     190,   202,    58,    59,    60,    61,    62,    63,   209,     4,
       5,     6,     7,     8,     9,    10,    11,   207,    42,    43,
      44,    45,    46,    47,    21,    20,    30,    82,    85,    83,
      80,    84,    80,    29,    83,    87,    84,    81,    85,    87,
      88,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      81,    87,    38,    80,    78,    79,    18,    85,    20,    21,
      22,    23,    24,    12,    26,    27,    48,    29,    30,    31,
      32,    46,   171,   143,   104,   204,   157,   119,    -1,   216,
      -1,   127,    -1,    -1,    -1,   130,    -1,    -1,    -1,    -1,
      -1,   134,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    -1,    84,    -1,    -1,    -1,    88
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    20,
      90,    91,    93,    94,   103,   108,   109,     4,   106,     4,
     107,     4,     8,     9,   105,     4,     8,     9,   104,     0,
      91,    92,    26,    27,    95,    96,   103,   110,   111,   112,
     106,   107,   106,   107,    84,    97,    98,    80,    81,   113,
      85,    47,    82,    99,   100,    99,    26,    96,    26,   114,
     116,     3,    18,    21,    22,    23,    24,    26,    27,    29,
      30,    31,    32,    80,    84,    88,    94,   103,   119,   120,
     121,   123,   124,   127,   131,   132,   137,   138,   139,   140,
     141,   143,   145,   147,   148,   150,   151,   158,   138,   148,
      29,    83,   101,   117,    81,   115,    84,    80,   137,    84,
      84,   119,    80,    84,   149,   137,   140,    86,    80,    48,
      49,    58,    59,    60,    61,    62,    63,   142,    70,    71,
     144,    72,    73,    74,   146,    42,    43,    44,    45,    46,
      47,    78,    79,    83,    47,   133,    82,   118,   112,   138,
      80,   138,   137,    21,   152,    82,    85,   119,   122,   139,
     140,   143,   145,   147,   137,   137,   137,   137,   137,   137,
      47,    82,   102,   133,   134,    30,    83,    85,    85,    80,
      84,   137,   153,   154,   137,   122,    87,    86,   101,   125,
     128,   138,   138,   155,    85,    83,    29,   135,   119,   119,
      80,    85,    81,   156,    81,   136,    87,    38,   126,   129,
     130,   137,   135,   119,   137,    80,   157,    85,   156
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    89,    90,    91,    92,    92,    93,    93,    94,    95,
      95,    97,    96,    98,    96,    99,    99,   100,   100,   101,
     101,   101,   102,   102,   102,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   104,   104,   104,   104,   105,   105,
     105,   105,   106,   106,   107,   107,   108,   109,   110,   111,
     111,   113,   112,   114,   115,   115,   117,   116,   118,   118,
     119,   119,   119,   119,   119,   119,   119,   121,   120,   122,
     122,   123,   123,   125,   124,   126,   126,   128,   127,   129,
     127,   130,   127,   131,   131,   132,   133,   134,   135,   136,
     136,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     138,   138,   139,   139,   140,   140,   141,   141,   142,   142,
     142,   142,   142,   142,   143,   143,   144,   144,   145,   145,
     146,   146,   146,   147,   147,   148,   149,   148,   150,   150,
     150,   152,   151,   153,   153,   155,   154,   157,   156,   156,
     158,   158,   158,   158
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     0,     1,     1,     3,     3,
       1,     0,     3,     0,     3,     1,     2,     2,     0,     3,
       4,     2,     1,     1,     0,     1,     1,     1,     1,     2,
       2,     2,     2,     1,     1,     2,     2,     0,     1,     2,
       2,     0,     1,     0,     1,     0,     2,     3,     3,     1,
       0,     0,     3,     2,     2,     0,     0,     3,     2,     0,
       1,     1,     1,     1,     1,     1,     1,     0,     4,     2,
       0,     2,     1,     0,     7,     2,     0,     0,     6,     0,
       9,     0,     8,     2,     3,     2,     2,     4,     2,     2,
       0,     3,     3,     3,     3,     3,     3,     2,     2,     1,
       3,     1,     3,     1,     2,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     0,     5,     3,     1,
       1,     0,     5,     1,     0,     0,     3,     0,     4,     0,
       1,     1,     1,     1
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
#line 108 "parse.y"
                                     {if(duplicate(curid)){printf("Duplicate\n");exit(0);}insertSTnest(curid,currnest); ins();  }
#line 1651 "y.tab.c"
    break;

  case 13: /* $@2: %empty  */
#line 109 "parse.y"
                                             {if(duplicate(curid)){printf("Duplicate\n");exit(0);}insertSTnest(curid,currnest); ins();  }
#line 1657 "y.tab.c"
    break;

  case 47: /* function_declaration_type: type_specifier IDENTIFIER '('  */
#line 155 "parse.y"
                                                         { strcpy(currfunctype, curtype); strcpy(currfunc, curid); check_duplicate(curid); insertSTF(curid); ins(); }
#line 1663 "y.tab.c"
    break;

  case 51: /* $@3: %empty  */
#line 164 "parse.y"
                                         { check_params(curtype); }
#line 1669 "y.tab.c"
    break;

  case 52: /* parameters_list: type_specifier $@3 parameters_identifier_list  */
#line 164 "parse.y"
                                                                                               { insertSTparamscount(currfunc, params_count); }
#line 1675 "y.tab.c"
    break;

  case 56: /* $@4: %empty  */
#line 174 "parse.y"
                                     { ins();insertSTnest(curid,1); params_count++; }
#line 1681 "y.tab.c"
    break;

  case 67: /* $@5: %empty  */
#line 187 "parse.y"
                          {currnest++;}
#line 1687 "y.tab.c"
    break;

  case 68: /* compound_statement: $@5 '{' statment_list '}'  */
#line 187 "parse.y"
                                                                {deletedata(currnest);currnest--;}
#line 1693 "y.tab.c"
    break;

  case 73: /* $@6: %empty  */
#line 198 "parse.y"
                                                       {if(yyvsp[-1]!=1){printf("Condition checking is not of type int\n");exit(0);}}
#line 1699 "y.tab.c"
    break;

  case 77: /* $@7: %empty  */
#line 205 "parse.y"
                                                          {if(yyvsp[-1]!=1){printf("Condition checking is not of type int\n");exit(0);}}
#line 1705 "y.tab.c"
    break;

  case 79: /* $@8: %empty  */
#line 206 "parse.y"
                                                                       {if(yyvsp[-1]!=1){printf("Condition checking is not of type int\n");exit(0);}}
#line 1711 "y.tab.c"
    break;

  case 81: /* $@9: %empty  */
#line 207 "parse.y"
                                                                      {if(yyvsp[-1]!=1){printf("Condition checking is not of type int\n");exit(0);}}
#line 1717 "y.tab.c"
    break;

  case 83: /* return_statement: RETURN ';'  */
#line 209 "parse.y"
                                     {if(strcmp(currfunctype,"void")) {printf("Returning void of a non-void function\n"); exit(0);}}
#line 1723 "y.tab.c"
    break;

  case 84: /* return_statement: RETURN expression ';'  */
#line 210 "parse.y"
                                                { 	if(!strcmp(currfunctype, "void"))
										{ 
											yyerror("Function is void");
										}

										if((currfunctype[0]=='i' || currfunctype[0]=='c') && yyvsp[-1]!=1)
										{
											printf("Expression doesn't match return type of function\n"); exit(0);
										}
			              
			                     	}
#line 1739 "y.tab.c"
    break;

  case 86: /* string_initilization: assignment_operator string_constant  */
#line 226 "parse.y"
                                                              {insV();}
#line 1745 "y.tab.c"
    break;

  case 91: /* expression: mutable assignment_operator expression  */
#line 239 "parse.y"
                                                                              {
																	  if(yyvsp[-2]==1 && yyvsp[0]==1) 
																	  {
			                                                          yyval=1;
			                                                          } 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
#line 1758 "y.tab.c"
    break;

  case 92: /* expression: mutable PLUS_ASSIGN expression  */
#line 247 "parse.y"
                                                             {
																	  if(yyvsp[-2]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
#line 1769 "y.tab.c"
    break;

  case 93: /* expression: mutable MINUS_ASSIGN expression  */
#line 253 "parse.y"
                                                           {
																	  if(yyvsp[-2]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
#line 1780 "y.tab.c"
    break;

  case 94: /* expression: mutable MUL_ASSIGN expression  */
#line 259 "parse.y"
                                                        {
																	  if(yyvsp[-2]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
#line 1791 "y.tab.c"
    break;

  case 95: /* expression: mutable DIV_ASSIGN expression  */
#line 265 "parse.y"
                                                                        {
																	  if(yyvsp[-2]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
#line 1802 "y.tab.c"
    break;

  case 96: /* expression: mutable MOD_ASSIGN expression  */
#line 271 "parse.y"
                                                                        {
																	  if(yyvsp[-2]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
#line 1813 "y.tab.c"
    break;

  case 97: /* expression: mutable INCREMENT  */
#line 277 "parse.y"
                                                                                                {if(yyvsp[-1] == 1) yyval=1; else yyval=-1;}
#line 1819 "y.tab.c"
    break;

  case 98: /* expression: mutable DECREMENT  */
#line 278 "parse.y"
                                                                                                {if(yyvsp[-1] == 1) yyval=1; else yyval=-1;}
#line 1825 "y.tab.c"
    break;

  case 99: /* expression: simple_expression  */
#line 279 "parse.y"
                                            {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1831 "y.tab.c"
    break;

  case 100: /* simple_expression: simple_expression OR and_expression  */
#line 283 "parse.y"
                                                              {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1837 "y.tab.c"
    break;

  case 101: /* simple_expression: and_expression  */
#line 284 "parse.y"
                                         {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1843 "y.tab.c"
    break;

  case 102: /* and_expression: and_expression AND unary_relation_expression  */
#line 287 "parse.y"
                                                                       {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1849 "y.tab.c"
    break;

  case 103: /* and_expression: unary_relation_expression  */
#line 288 "parse.y"
                                                     {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1855 "y.tab.c"
    break;

  case 104: /* unary_relation_expression: '!' unary_relation_expression  */
#line 292 "parse.y"
                                                        {if(yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1861 "y.tab.c"
    break;

  case 105: /* unary_relation_expression: regular_expression  */
#line 293 "parse.y"
                                             {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1867 "y.tab.c"
    break;

  case 106: /* regular_expression: regular_expression relational_operators sum_expression  */
#line 296 "parse.y"
                                                                                 {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1873 "y.tab.c"
    break;

  case 107: /* regular_expression: sum_expression  */
#line 297 "parse.y"
                                           {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1879 "y.tab.c"
    break;

  case 114: /* sum_expression: sum_expression sum_operators term  */
#line 304 "parse.y"
                                                             {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1885 "y.tab.c"
    break;

  case 115: /* sum_expression: term  */
#line 305 "parse.y"
                               {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1891 "y.tab.c"
    break;

  case 118: /* term: term MULOP factor  */
#line 312 "parse.y"
                                            {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1897 "y.tab.c"
    break;

  case 119: /* term: factor  */
#line 313 "parse.y"
                                 {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1903 "y.tab.c"
    break;

  case 123: /* factor: immutable  */
#line 319 "parse.y"
                                    {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1909 "y.tab.c"
    break;

  case 124: /* factor: mutable  */
#line 320 "parse.y"
                                  {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1915 "y.tab.c"
    break;

  case 125: /* mutable: IDENTIFIER  */
#line 323 "parse.y"
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
#line 1932 "y.tab.c"
    break;

  case 126: /* $@10: %empty  */
#line 335 "parse.y"
                                           {if(!checkscope(curid)){printf("%s\n",curid);printf("Undeclared\n");exit(0);}}
#line 1938 "y.tab.c"
    break;

  case 127: /* mutable: array_identifier $@10 '[' expression ']'  */
#line 336 "parse.y"
                                           {if(gettype(curid,0)=='i' || gettype(curid,1)== 'c')
			              		yyval = 1;
			              		else
			              		yyval = -1;
			              		}
#line 1948 "y.tab.c"
    break;

  case 128: /* immutable: '(' expression ')'  */
#line 343 "parse.y"
                                             {if(yyvsp[-1]==1) yyval=1; else yyval=-1;}
#line 1954 "y.tab.c"
    break;

  case 130: /* immutable: constant  */
#line 345 "parse.y"
                                   {if(yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1960 "y.tab.c"
    break;

  case 131: /* $@11: %empty  */
#line 348 "parse.y"
                                        {
			             if(!check_declaration(curid, "Function"))
			             { printf("Function not declared"); exit(0);} 
			             insertSTF(curid); 
						 strcpy(currfunccall,curid);
			             }
#line 1971 "y.tab.c"
    break;

  case 132: /* call: IDENTIFIER '(' $@11 arguments ')'  */
#line 354 "parse.y"
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
#line 1986 "y.tab.c"
    break;

  case 135: /* $@12: %empty  */
#line 369 "parse.y"
                                     { call_params_count++; }
#line 1992 "y.tab.c"
    break;

  case 137: /* $@13: %empty  */
#line 372 "parse.y"
                                         { call_params_count++; }
#line 1998 "y.tab.c"
    break;

  case 140: /* constant: integer_constant  */
#line 376 "parse.y"
                                                {  insV(); yyval=1; }
#line 2004 "y.tab.c"
    break;

  case 141: /* constant: string_constant  */
#line 377 "parse.y"
                                                {  insV(); yyval=-1;}
#line 2010 "y.tab.c"
    break;

  case 142: /* constant: float_constant  */
#line 378 "parse.y"
                                                {  insV(); }
#line 2016 "y.tab.c"
    break;

  case 143: /* constant: character_constant  */
#line 379 "parse.y"
                                            {  insV();yyval=1; }
#line 2022 "y.tab.c"
    break;


#line 2026 "y.tab.c"

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

#line 382 "parse.y"


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
	printf("%d %s %s\n", yylineno, s, yytext);
	flag=1;
	printf(ANSI_COLOR_RED "Status: Parsing Failed - Invalid\n" ANSI_COLOR_RESET);
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
