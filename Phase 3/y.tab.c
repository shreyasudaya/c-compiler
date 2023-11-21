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
    VOLATILE = 267,                /* VOLATILE  */
    CONST = 268,                   /* CONST  */
    STRUCT = 269,                  /* STRUCT  */
    UNION = 270,                   /* UNION  */
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
    GLOBAL = 310,                  /* GLOBAL  */
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
#define VOLATILE 267
#define CONST 268
#define STRUCT 269
#define UNION 270
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
#define GLOBAL 310
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
  YYSYMBOL_VOLATILE = 12,                  /* VOLATILE  */
  YYSYMBOL_CONST = 13,                     /* CONST  */
  YYSYMBOL_STRUCT = 14,                    /* STRUCT  */
  YYSYMBOL_UNION = 15,                     /* UNION  */
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
  YYSYMBOL_GLOBAL = 55,                    /* GLOBAL  */
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
  YYSYMBOL_81_ = 81,                       /* '{'  */
  YYSYMBOL_82_ = 82,                       /* '}'  */
  YYSYMBOL_83_ = 83,                       /* ','  */
  YYSYMBOL_84_ = 84,                       /* '['  */
  YYSYMBOL_85_ = 85,                       /* ']'  */
  YYSYMBOL_86_ = 86,                       /* '('  */
  YYSYMBOL_87_ = 87,                       /* ')'  */
  YYSYMBOL_88_ = 88,                       /* '*'  */
  YYSYMBOL_89_ = 89,                       /* '!'  */
  YYSYMBOL_90_ = 90,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 91,                  /* $accept  */
  YYSYMBOL_program = 92,                   /* program  */
  YYSYMBOL_declaration_list = 93,          /* declaration_list  */
  YYSYMBOL_D = 94,                         /* D  */
  YYSYMBOL_declaration = 95,               /* declaration  */
  YYSYMBOL_variable_declaration = 96,      /* variable_declaration  */
  YYSYMBOL_structure_definition = 97,      /* structure_definition  */
  YYSYMBOL_98_1 = 98,                      /* $@1  */
  YYSYMBOL_99_2 = 99,                      /* $@2  */
  YYSYMBOL_V1 = 100,                       /* V1  */
  YYSYMBOL_structure_declaration = 101,    /* structure_declaration  */
  YYSYMBOL_variable_declaration_list = 102, /* variable_declaration_list  */
  YYSYMBOL_variable_declaration_identifier = 103, /* variable_declaration_identifier  */
  YYSYMBOL_104_3 = 104,                    /* $@3  */
  YYSYMBOL_105_4 = 105,                    /* $@4  */
  YYSYMBOL_vdi = 106,                      /* vdi  */
  YYSYMBOL_identifier_array_type = 107,    /* identifier_array_type  */
  YYSYMBOL_initilization_params = 108,     /* initilization_params  */
  YYSYMBOL_initilization = 109,            /* initilization  */
  YYSYMBOL_type_specifier = 110,           /* type_specifier  */
  YYSYMBOL_unsigned_grammar = 111,         /* unsigned_grammar  */
  YYSYMBOL_signed_grammar = 112,           /* signed_grammar  */
  YYSYMBOL_long_grammar = 113,             /* long_grammar  */
  YYSYMBOL_short_grammar = 114,            /* short_grammar  */
  YYSYMBOL_function_declaration = 115,     /* function_declaration  */
  YYSYMBOL_function_declaration_type = 116, /* function_declaration_type  */
  YYSYMBOL_function_declaration_param_statement = 117, /* function_declaration_param_statement  */
  YYSYMBOL_params = 118,                   /* params  */
  YYSYMBOL_parameters_list = 119,          /* parameters_list  */
  YYSYMBOL_120_5 = 120,                    /* $@5  */
  YYSYMBOL_parameters_identifier_list = 121, /* parameters_identifier_list  */
  YYSYMBOL_parameters_identifier_list_breakup = 122, /* parameters_identifier_list_breakup  */
  YYSYMBOL_param_identifier = 123,         /* param_identifier  */
  YYSYMBOL_124_6 = 124,                    /* $@6  */
  YYSYMBOL_param_identifier_breakup = 125, /* param_identifier_breakup  */
  YYSYMBOL_statement = 126,                /* statement  */
  YYSYMBOL_compound_statement = 127,       /* compound_statement  */
  YYSYMBOL_128_7 = 128,                    /* $@7  */
  YYSYMBOL_statment_list = 129,            /* statment_list  */
  YYSYMBOL_expression_statment = 130,      /* expression_statment  */
  YYSYMBOL_conditional_statements = 131,   /* conditional_statements  */
  YYSYMBOL_132_8 = 132,                    /* $@8  */
  YYSYMBOL_conditional_statements_breakup = 133, /* conditional_statements_breakup  */
  YYSYMBOL_iterative_statements = 134,     /* iterative_statements  */
  YYSYMBOL_135_9 = 135,                    /* $@9  */
  YYSYMBOL_136_10 = 136,                   /* $@10  */
  YYSYMBOL_137_11 = 137,                   /* $@11  */
  YYSYMBOL_return_statement = 138,         /* return_statement  */
  YYSYMBOL_break_statement = 139,          /* break_statement  */
  YYSYMBOL_string_initilization = 140,     /* string_initilization  */
  YYSYMBOL_array_initialization = 141,     /* array_initialization  */
  YYSYMBOL_array_int_declarations = 142,   /* array_int_declarations  */
  YYSYMBOL_array_int_declarations_breakup = 143, /* array_int_declarations_breakup  */
  YYSYMBOL_expression = 144,               /* expression  */
  YYSYMBOL_simple_expression = 145,        /* simple_expression  */
  YYSYMBOL_and_expression = 146,           /* and_expression  */
  YYSYMBOL_unary_relation_expression = 147, /* unary_relation_expression  */
  YYSYMBOL_regular_expression = 148,       /* regular_expression  */
  YYSYMBOL_relational_operators = 149,     /* relational_operators  */
  YYSYMBOL_ST = 150,                       /* ST  */
  YYSYMBOL_B = 151,                        /* B  */
  YYSYMBOL_C = 152,                        /* C  */
  YYSYMBOL_sum_expression = 153,           /* sum_expression  */
  YYSYMBOL_sum_operators = 154,            /* sum_operators  */
  YYSYMBOL_term = 155,                     /* term  */
  YYSYMBOL_MULOP = 156,                    /* MULOP  */
  YYSYMBOL_factor = 157,                   /* factor  */
  YYSYMBOL_mutable = 158,                  /* mutable  */
  YYSYMBOL_159_12 = 159,                   /* $@12  */
  YYSYMBOL_immutable = 160,                /* immutable  */
  YYSYMBOL_call = 161,                     /* call  */
  YYSYMBOL_162_13 = 162,                   /* $@13  */
  YYSYMBOL_arguments = 163,                /* arguments  */
  YYSYMBOL_arguments_list = 164,           /* arguments_list  */
  YYSYMBOL_165_14 = 165,                   /* $@14  */
  YYSYMBOL_A = 166,                        /* A  */
  YYSYMBOL_167_15 = 167,                   /* $@15  */
  YYSYMBOL_constant = 168                  /* constant  */
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
#define YYFINAL  43
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   434

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  78
/* YYNRULES -- Number of rules.  */
#define YYNRULES  166
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  276

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
       2,     2,     2,    89,     2,     2,     2,     2,     2,     2,
      86,    87,    88,     2,    83,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    90,    80,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    84,     2,    85,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    81,     2,    82,     2,     2,     2,     2,
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
       0,    89,    89,    92,    95,    96,    99,   100,   101,   102,
     106,   107,   108,   110,   110,   111,   111,   113,   113,   116,
     117,   120,   120,   123,   123,   124,   124,   128,   128,   131,
     132,   135,   136,   137,   142,   143,   144,   147,   147,   147,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   161,   161,   161,   161,   164,   164,   164,   164,   167,
     167,   170,   170,   173,   176,   179,   182,   182,   185,   185,
     188,   191,   192,   195,   195,   198,   199,   202,   202,   203,
     203,   204,   204,   205,   208,   208,   211,   212,   215,   216,
     219,   219,   222,   223,   232,   232,   233,   233,   234,   234,
     235,   237,   238,   251,   254,   257,   260,   263,   264,   267,
     275,   281,   287,   293,   299,   305,   306,   307,   311,   312,
     315,   316,   321,   322,   325,   326,   329,   329,   329,   330,
     330,   330,   331,   333,   335,   336,   338,   341,   342,   345,
     346,   349,   350,   353,   353,   353,   356,   357,   360,   372,
     372,   380,   381,   382,   385,   385,   403,   403,   406,   406,
     409,   409,   410,   413,   414,   415,   416
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
  "FLOAT", "DOUBLE", "LONG", "SHORT", "SIGNED", "UNSIGNED", "VOLATILE",
  "CONST", "STRUCT", "UNION", "ENUM", "ELLIPSIS", "RETURN", "MAIN", "VOID",
  "WHILE", "FOR", "DO", "BREAK", "ENDIF", "IDENTIFIER", "array_identifier",
  "func_identifier", "integer_constant", "string_constant",
  "float_constant", "character_constant", "CASE", "DEFAULT", "SWITCH",
  "GOTO", "CONTINUE", "ELSE", "XOR_ASSIGN", "OR_ASSIGN", "AND_ASSIGN",
  "MOD_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "PLUS_ASSIGN", "MINUS_ASSIGN",
  "assignment_operator", "OR", "AND", "PIPE", "TYPEDEF", "EXTERN",
  "STATIC", "AUTO", "GLOBAL", "XOR", "AMP", "EQ", "NOT_EQ", "LESS_THAN_EQ",
  "LESS_THAN", "GR_THAN_EQ", "GR_THAN", "LEFT_OP", "RIGHT_OP",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "LSHIFT", "RSHIFT", "PLUS", "MINUS",
  "MUL", "DIV", "MOD", "SIZEOF", "TAB", "EXC", "INCREMENT", "DECREMENT",
  "';'", "'{'", "'}'", "','", "'['", "']'", "'('", "')'", "'*'", "'!'",
  "':'", "$accept", "program", "declaration_list", "D", "declaration",
  "variable_declaration", "structure_definition", "$@1", "$@2", "V1",
  "structure_declaration", "variable_declaration_list",
  "variable_declaration_identifier", "$@3", "$@4", "vdi",
  "identifier_array_type", "initilization_params", "initilization",
  "type_specifier", "unsigned_grammar", "signed_grammar", "long_grammar",
  "short_grammar", "function_declaration", "function_declaration_type",
  "function_declaration_param_statement", "params", "parameters_list",
  "$@5", "parameters_identifier_list",
  "parameters_identifier_list_breakup", "param_identifier", "$@6",
  "param_identifier_breakup", "statement", "compound_statement", "$@7",
  "statment_list", "expression_statment", "conditional_statements", "$@8",
  "conditional_statements_breakup", "iterative_statements", "$@9", "$@10",
  "$@11", "return_statement", "break_statement", "string_initilization",
  "array_initialization", "array_int_declarations",
  "array_int_declarations_breakup", "expression", "simple_expression",
  "and_expression", "unary_relation_expression", "regular_expression",
  "relational_operators", "ST", "B", "C", "sum_expression",
  "sum_operators", "term", "MULOP", "factor", "mutable", "$@12",
  "immutable", "call", "$@13", "arguments", "arguments_list", "$@14", "A",
  "$@15", "constant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-88)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-88)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     325,   -88,   -88,   -88,   -88,    32,    48,    33,    77,   -88,
      61,    71,   -88,    91,   121,   123,    59,   -88,   137,   -88,
     -88,   -88,    82,   -88,   379,   -88,   -88,   -88,   -88,   -88,
      32,    48,   -88,   -88,    32,    48,   -88,    84,    84,   -88,
     -88,   -88,   -88,   -88,    38,   -88,   -88,    43,   -88,   -45,
     -88,   -88,   -88,    44,   -88,   -88,   -88,   -88,   -88,   -88,
      51,    47,    52,    47,    18,   -88,    -8,    -8,   -88,    84,
     108,   293,   345,   345,    63,   -88,   -88,   -88,   -88,   -88,
      18,    18,    57,    90,   104,   -88,    55,    49,    27,   -88,
      11,   -88,   -88,   -88,    18,   -21,   -88,   -88,   -88,   -88,
     -88,   -88,    72,    68,   130,   134,   -15,    75,    76,   293,
      83,    78,   109,   -88,   -88,    84,   -88,   -88,    85,   -88,
     -88,   -88,   -88,   -88,    89,   -88,   345,    88,    92,   -88,
      93,    86,   -88,   -88,   148,    18,    18,   -88,   -88,   -88,
     -88,   -88,   -88,     2,   -88,   -88,     2,   -88,   -88,   -88,
       2,    18,    18,    18,    18,    18,    18,   -88,   -88,    90,
      94,   128,   -88,    96,   379,   -88,    18,    84,    84,   -88,
      98,    18,    18,   155,   -88,   156,   206,   -88,   -88,   103,
     105,    18,    18,   -88,   106,   104,   -88,    49,    27,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,    -4,   154,   -88,   110,
     -88,   -88,   -27,   -88,   -24,   111,   107,   102,   206,   112,
     -88,   -88,   -88,   113,   -88,   114,   -88,   -20,   -21,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,    18,    18,   115,   -88,
     -88,   118,   -88,   -88,   168,   -88,   293,   293,     3,   -18,
     169,    18,   -88,   120,   122,   167,   -88,   -88,   -88,   177,
     125,   137,   -88,   168,   -88,   -88,   293,   -88,    18,   138,
     132,   -88,   -88,   118,   -88,   -88,   136,   -88,    18,   -88,
     -88,   145,   207,   159,   169,   -88
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    37,    38,    39,    40,    60,    62,    58,    54,    42,
       0,     0,    48,     0,    44,    43,     0,     2,     5,     6,
       8,    11,     0,     7,    67,    59,    41,    61,    45,    55,
      60,    62,    47,    51,    60,    62,    46,    13,    15,     9,
      12,    49,    50,     1,     0,     4,     3,    23,    25,     0,
      22,    68,    63,     0,    66,    56,    57,    52,    53,    23,
       0,    19,     0,    20,     0,    64,    30,    30,    10,     0,
       0,    84,    18,    18,   148,   149,   163,   164,   165,   166,
       0,     0,     0,   117,   119,   121,   123,   125,   138,   142,
     147,   146,   152,   153,     0,     0,    24,    27,    26,    21,
      73,    69,    72,     0,     0,     0,     0,     0,     0,    84,
       0,     0,     0,    89,    83,     0,    65,    78,     0,    77,
      79,    80,    81,    82,     0,   100,    18,     0,     0,   154,
       0,     0,   122,   147,     0,     0,     0,   130,   131,   127,
     129,   126,   128,     0,   139,   140,     0,   143,   144,   145,
       0,     0,     0,     0,     0,     0,     0,   115,   116,    28,
       0,     0,    29,    76,     0,    70,     0,     0,     0,   101,
       0,     0,     0,     0,   103,     0,    84,    88,    17,     0,
       0,   157,     0,   151,     0,   118,   120,   124,   137,   141,
     114,   112,   113,   110,   111,   109,    36,     0,    33,     0,
      74,    71,     0,   102,     0,     0,     0,     0,    84,     0,
      14,    16,   158,     0,   156,     0,   136,     0,     0,    31,
      34,    35,   104,    75,    90,    94,     0,     0,     0,    86,
      85,   162,   155,   150,     0,    32,    84,    84,     0,     0,
     135,     0,   159,   108,     0,    93,    95,    96,    98,     0,
       0,     5,   160,     0,   106,   105,    84,    91,     0,     0,
       0,   132,   133,   162,   107,    92,     0,    99,     0,   161,
      97,     0,     0,     0,   135,   134
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -88,   -88,   234,   -11,   -88,     0,   229,   -88,   -88,   -64,
     -10,   -32,   174,   -88,   -88,   178,   -88,    26,   -88,     1,
     -88,   -88,    -7,    35,   -88,   -88,   -88,   -88,    99,   -88,
     -88,   -88,   -88,   -88,   -88,   -69,   -88,   -88,    39,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,    50,
     -88,    -5,   -88,   -60,   -87,   119,   -59,   -88,   -88,   -88,
     -88,   -25,   117,   -88,   116,   -88,   100,   -68,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,     4,   -88,   -88
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    16,    45,    46,    18,   114,    20,    60,    62,   127,
      21,    49,    50,    66,    67,    96,    97,   162,   219,   115,
      36,    32,    26,    28,    23,    24,    52,    53,    54,    70,
     101,   165,   102,   163,   200,   208,   117,   118,   209,   119,
     120,   236,   257,   121,   237,   258,   259,   122,   123,   198,
     221,   244,   254,   124,    83,    84,    85,    86,   143,   125,
     250,   251,    87,   146,    88,   150,    89,    90,   130,    91,
      92,   181,   213,   214,   231,   242,   263,    93
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      19,    22,   116,    40,    82,    61,    63,   159,   160,   128,
     222,    74,    75,   133,    76,    77,    78,    79,    19,    22,
     131,   135,   132,    55,   135,    51,   133,    57,    74,    75,
     135,    76,    77,    78,    79,    68,    25,    29,    69,    94,
     173,    30,    31,   217,    74,    75,   170,    76,    77,    78,
      79,   135,    27,   151,   152,   153,   154,   155,   156,    43,
     224,   234,   178,   225,   161,   169,    56,   133,   133,   248,
      58,    80,   126,   126,    81,   133,    95,   186,   133,   202,
     218,    33,   133,   247,   204,    34,    35,    37,    80,   157,
     158,   190,   191,   192,   193,   194,   195,    38,   133,   147,
     148,   149,    40,   133,    80,    10,    11,    81,    47,    48,
      59,    48,   205,   137,   138,   139,   140,   141,   142,   144,
     145,   212,   215,   104,   105,    41,   126,    42,    64,    65,
      69,    71,    72,    73,   100,    61,    63,   134,   135,   238,
     239,     1,     2,     3,     4,     5,     6,     7,     8,   129,
       9,    10,    11,   136,   166,   164,   167,    12,   133,   133,
     168,   171,   172,   174,   175,    51,   176,   245,   246,   177,
     179,    44,   184,   183,   180,   197,   206,   182,   203,   196,
     199,   252,   207,   210,   222,   211,   216,   265,    13,   228,
      14,   226,    15,   227,   230,   223,   240,   243,   266,   233,
     232,   241,   249,   253,   255,   256,   260,   261,   271,   103,
       1,     2,     3,     4,     5,     6,     7,     8,   267,     9,
     104,   105,   268,   270,   106,   272,    12,   107,   108,   109,
     110,   273,    74,    75,    17,    76,    77,    78,    79,   274,
     262,   111,    39,    99,   235,    98,   220,   229,   264,   275,
     189,    19,    22,     0,   185,     0,     0,   112,     0,    14,
     187,    15,   188,   201,     0,     0,     0,   269,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   113,     0,   -87,     0,
       0,     0,    80,     0,     0,    81,   103,     1,     2,     3,
       4,     5,     6,     7,     8,     0,     9,   104,   105,     0,
       0,   106,     0,    12,   107,   108,   109,   110,     0,    74,
      75,     0,    76,    77,    78,    79,     0,     0,   111,     1,
       2,     3,     4,     5,     6,     7,     8,     0,     9,    10,
      11,     0,     0,     0,   112,    12,    14,     0,    15,     1,
       2,     3,     4,     5,     6,     7,     8,     0,     9,   104,
     105,     0,     0,     0,     0,    12,     0,     0,     0,     0,
       0,     0,     0,   113,     0,     0,    13,     0,    14,    80,
      15,     0,    81,     1,     2,     3,     4,     5,     6,     7,
       8,     0,     9,     0,     0,     0,   112,     0,    14,    12,
      15,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    14,     0,    15
};

static const yytype_int16 yycheck[] =
{
       0,     0,    71,    13,    64,    37,    38,    94,    29,    73,
      30,    26,    27,    81,    29,    30,    31,    32,    18,    18,
      80,    48,    81,    30,    48,    24,    94,    34,    26,    27,
      48,    29,    30,    31,    32,    80,     4,     4,    83,    47,
     109,     8,     9,    47,    26,    27,   106,    29,    30,    31,
      32,    48,     4,    42,    43,    44,    45,    46,    47,     0,
      87,    81,   126,    87,    85,    80,    31,   135,   136,    87,
      35,    86,    72,    73,    89,   143,    84,   136,   146,   166,
      84,     4,   150,    80,   171,     8,     9,    26,    86,    78,
      79,   151,   152,   153,   154,   155,   156,    26,   166,    72,
      73,    74,   112,   171,    86,    14,    15,    89,    26,    27,
      26,    27,   172,    58,    59,    60,    61,    62,    63,    70,
      71,   181,   182,    14,    15,     4,   126,     4,    90,    86,
      83,    87,    81,    81,    26,   167,   168,    80,    48,   226,
     227,     4,     5,     6,     7,     8,     9,    10,    11,    86,
      13,    14,    15,    49,    86,    83,    26,    20,   226,   227,
      26,    86,    86,    80,    86,   164,    81,   236,   237,    80,
      82,    34,    24,    87,    82,    47,    21,    84,    80,    85,
      84,   241,    26,    80,    30,    80,    80,   256,    51,    87,
      53,    80,    55,    86,    82,    85,    81,    29,   258,    85,
      87,    83,    33,    83,    82,    38,    29,    82,   268,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    80,    13,
      14,    15,    90,    87,    18,    80,    20,    21,    22,    23,
      24,    24,    26,    27,     0,    29,    30,    31,    32,    80,
     251,    35,    13,    69,   218,    67,   196,   208,   253,   274,
     150,   251,   251,    -1,   135,    -1,    -1,    51,    -1,    53,
     143,    55,   146,   164,    -1,    -1,    -1,   263,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    82,    -1,
      -1,    -1,    86,    -1,    -1,    89,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    -1,
      -1,    18,    -1,    20,    21,    22,    23,    24,    -1,    26,
      27,    -1,    29,    30,    31,    32,    -1,    -1,    35,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    13,    14,
      15,    -1,    -1,    -1,    51,    20,    53,    -1,    55,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    13,    14,
      15,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    51,    -1,    53,    86,
      55,    -1,    89,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    13,    -1,    -1,    -1,    51,    -1,    53,    20,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    55
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    13,
      14,    15,    20,    51,    53,    55,    92,    93,    95,    96,
      97,   101,   110,   115,   116,     4,   113,     4,   114,     4,
       8,     9,   112,     4,     8,     9,   111,    26,    26,    97,
     101,     4,     4,     0,    34,    93,    94,    26,    27,   102,
     103,   110,   117,   118,   119,   113,   114,   113,   114,    26,
      98,   102,    99,   102,    90,    86,   104,   105,    80,    83,
     120,    87,    81,    81,    26,    27,    29,    30,    31,    32,
      86,    89,   144,   145,   146,   147,   148,   153,   155,   157,
     158,   160,   161,   168,    47,    84,   106,   107,   106,   103,
      26,   121,   123,     3,    14,    15,    18,    21,    22,    23,
      24,    35,    51,    80,    96,   110,   126,   127,   128,   130,
     131,   134,   138,   139,   144,   150,    96,   100,   100,    86,
     159,   144,   147,   158,    80,    48,    49,    58,    59,    60,
      61,    62,    63,   149,    70,    71,   154,    72,    73,    74,
     156,    42,    43,    44,    45,    46,    47,    78,    79,   145,
      29,    85,   108,   124,    83,   122,    86,    26,    26,    80,
     144,    86,    86,   126,    80,    86,    81,    80,   100,    82,
      82,   162,    84,    87,    24,   146,   147,   153,   155,   157,
     144,   144,   144,   144,   144,   144,    85,    47,   140,    84,
     125,   119,   145,    80,   145,   144,    21,    26,   126,   129,
      80,    80,   144,   163,   164,   144,    80,    47,    84,   109,
     140,   141,    30,    85,    87,    87,    80,    86,    87,   129,
      82,   165,    87,    85,    81,   108,   132,   135,   145,   145,
      81,    83,   166,    29,   142,   126,   126,    80,    87,    33,
     151,   152,   144,    83,   143,    82,    38,   133,   136,   137,
      29,    82,    94,   167,   142,   126,   144,    80,    90,   166,
      87,   144,    80,    24,    80,   152
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    91,    92,    93,    94,    94,    95,    95,    95,    95,
      96,    96,    96,    98,    97,    99,    97,   100,   100,   101,
     101,   102,   102,   104,   103,   105,   103,   106,   106,   107,
     107,   108,   108,   108,   109,   109,   109,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   111,   111,   111,   111,   112,   112,   112,   112,   113,
     113,   114,   114,   115,   116,   117,   118,   118,   120,   119,
     121,   122,   122,   124,   123,   125,   125,   126,   126,   126,
     126,   126,   126,   126,   128,   127,   129,   129,   130,   130,
     132,   131,   133,   133,   135,   134,   136,   134,   137,   134,
     134,   138,   138,   139,   140,   141,   142,   143,   143,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   145,   145,
     146,   146,   147,   147,   148,   148,   149,   149,   149,   149,
     149,   149,   150,   151,   152,   152,    94,   153,   153,   154,
     154,   155,   155,   156,   156,   156,   157,   157,   158,   159,
     158,   160,   160,   160,   162,   161,   163,   163,   165,   164,
     167,   166,   166,   168,   168,   168,   168
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     0,     1,     1,     1,     2,
       3,     1,     2,     0,     7,     0,     7,     2,     0,     3,
       3,     3,     1,     0,     3,     0,     3,     1,     2,     2,
       0,     3,     4,     2,     1,     1,     0,     1,     1,     1,
       1,     2,     1,     1,     1,     2,     2,     2,     1,     2,
       2,     1,     2,     2,     0,     1,     2,     2,     0,     1,
       0,     1,     0,     2,     3,     3,     1,     0,     0,     3,
       2,     2,     0,     0,     3,     2,     0,     1,     1,     1,
       1,     1,     1,     1,     0,     4,     2,     0,     2,     1,
       0,     7,     2,     0,     0,     6,     0,     9,     0,     8,
       1,     2,     3,     2,     2,     4,     2,     2,     0,     3,
       3,     3,     3,     3,     3,     2,     2,     1,     3,     1,
       3,     1,     2,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     7,     2,     8,     0,     6,     3,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     0,
       5,     3,     1,     1,     0,     5,     1,     0,     0,     3,
       0,     4,     0,     1,     1,     1,     1
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
  case 13: /* $@1: %empty  */
#line 110 "parse.y"
                                            { ins(); }
#line 1723 "y.tab.c"
    break;

  case 15: /* $@2: %empty  */
#line 111 "parse.y"
                                           { ins(); }
#line 1729 "y.tab.c"
    break;

  case 23: /* $@3: %empty  */
#line 123 "parse.y"
                                     {if(duplicate(curid)){printf("Duplicate\n");exit(0);}insertSTnest(curid,currnest); ins();  }
#line 1735 "y.tab.c"
    break;

  case 25: /* $@4: %empty  */
#line 124 "parse.y"
                                             {if(duplicate(curid)){printf("Duplicate\n");exit(0);}insertSTnest(curid,currnest); ins();  }
#line 1741 "y.tab.c"
    break;

  case 64: /* function_declaration_type: type_specifier IDENTIFIER '('  */
#line 176 "parse.y"
                                                         { strcpy(currfunctype, curtype); strcpy(currfunc, curid); check_duplicate(curid); insertSTF(curid); ins(); }
#line 1747 "y.tab.c"
    break;

  case 68: /* $@5: %empty  */
#line 185 "parse.y"
                                         { check_params(curtype); }
#line 1753 "y.tab.c"
    break;

  case 69: /* parameters_list: type_specifier $@5 parameters_identifier_list  */
#line 185 "parse.y"
                                                                                               { insertSTparamscount(currfunc, params_count); }
#line 1759 "y.tab.c"
    break;

  case 73: /* $@6: %empty  */
#line 195 "parse.y"
                                     { ins();insertSTnest(curid,1); params_count++; }
#line 1765 "y.tab.c"
    break;

  case 84: /* $@7: %empty  */
#line 208 "parse.y"
                          {currnest++;}
#line 1771 "y.tab.c"
    break;

  case 85: /* compound_statement: $@7 '{' statment_list '}'  */
#line 208 "parse.y"
                                                                {deletedata(currnest);currnest--;}
#line 1777 "y.tab.c"
    break;

  case 90: /* $@8: %empty  */
#line 219 "parse.y"
                                                       {if(yyvsp[-1]!=1){printf("Not of type\n");exit(0);}}
#line 1783 "y.tab.c"
    break;

  case 94: /* $@9: %empty  */
#line 232 "parse.y"
                                                          {if(yyvsp[-1]!=1){printf("Not of type\n");exit(0);}}
#line 1789 "y.tab.c"
    break;

  case 96: /* $@10: %empty  */
#line 233 "parse.y"
                                                                       {if(yyvsp[-1]!=1){printf("Not of type\n");exit(0);}}
#line 1795 "y.tab.c"
    break;

  case 98: /* $@11: %empty  */
#line 234 "parse.y"
                                                                      {if(yyvsp[-1]!=1){printf("Not of type\n");exit(0);}}
#line 1801 "y.tab.c"
    break;

  case 101: /* return_statement: RETURN ';'  */
#line 237 "parse.y"
                                     {if(strcmp(currfunctype,"void")) {printf("Returning void of a non-void function\n"); exit(0);}}
#line 1807 "y.tab.c"
    break;

  case 102: /* return_statement: RETURN expression ';'  */
#line 238 "parse.y"
                                                { 	if(!strcmp(currfunctype, "void"))
										{ 
											yyerror("Function is void");
										}

										if((currfunctype[0]=='i' || currfunctype[0]=='c') && yyvsp[-1]!=1)
										{
											printf("Expression doesn't match return type of function\n"); exit(0);
										}
			              
			                     	}
#line 1823 "y.tab.c"
    break;

  case 104: /* string_initilization: assignment_operator string_constant  */
#line 254 "parse.y"
                                                              {insV();}
#line 1829 "y.tab.c"
    break;

  case 109: /* expression: mutable assignment_operator expression  */
#line 267 "parse.y"
                                                                              {
																	  if(yyvsp[-2]==1 && yyvsp[0]==1) 
																	  {
			                                                          yyval=1;
			                                                          } 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
#line 1842 "y.tab.c"
    break;

  case 110: /* expression: mutable PLUS_ASSIGN expression  */
#line 275 "parse.y"
                                                             {
																	  if(yyvsp[-2]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
#line 1853 "y.tab.c"
    break;

  case 111: /* expression: mutable MINUS_ASSIGN expression  */
#line 281 "parse.y"
                                                           {
																	  if(yyvsp[-2]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
#line 1864 "y.tab.c"
    break;

  case 112: /* expression: mutable MUL_ASSIGN expression  */
#line 287 "parse.y"
                                                        {
																	  if(yyvsp[-2]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
#line 1875 "y.tab.c"
    break;

  case 113: /* expression: mutable DIV_ASSIGN expression  */
#line 293 "parse.y"
                                                                        {
																	  if(yyvsp[-2]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
#line 1886 "y.tab.c"
    break;

  case 114: /* expression: mutable MOD_ASSIGN expression  */
#line 299 "parse.y"
                                                                        {
																	  if(yyvsp[-2]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
#line 1897 "y.tab.c"
    break;

  case 115: /* expression: mutable INCREMENT  */
#line 305 "parse.y"
                                                                                                {if(yyvsp[-1] == 1) yyval=1; else yyval=-1;}
#line 1903 "y.tab.c"
    break;

  case 116: /* expression: mutable DECREMENT  */
#line 306 "parse.y"
                                                                                                {if(yyvsp[-1] == 1) yyval=1; else yyval=-1;}
#line 1909 "y.tab.c"
    break;

  case 117: /* expression: simple_expression  */
#line 307 "parse.y"
                                            {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1915 "y.tab.c"
    break;

  case 118: /* simple_expression: simple_expression OR and_expression  */
#line 311 "parse.y"
                                                              {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1921 "y.tab.c"
    break;

  case 119: /* simple_expression: and_expression  */
#line 312 "parse.y"
                                         {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1927 "y.tab.c"
    break;

  case 120: /* and_expression: and_expression AND unary_relation_expression  */
#line 315 "parse.y"
                                                                       {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1933 "y.tab.c"
    break;

  case 121: /* and_expression: unary_relation_expression  */
#line 316 "parse.y"
                                                     {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1939 "y.tab.c"
    break;

  case 122: /* unary_relation_expression: '!' unary_relation_expression  */
#line 321 "parse.y"
                                                        {if(yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1945 "y.tab.c"
    break;

  case 123: /* unary_relation_expression: regular_expression  */
#line 322 "parse.y"
                                             {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1951 "y.tab.c"
    break;

  case 124: /* regular_expression: regular_expression relational_operators sum_expression  */
#line 325 "parse.y"
                                                                                 {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1957 "y.tab.c"
    break;

  case 125: /* regular_expression: sum_expression  */
#line 326 "parse.y"
                                           {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1963 "y.tab.c"
    break;

  case 137: /* sum_expression: sum_expression sum_operators term  */
#line 341 "parse.y"
                                                             {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1969 "y.tab.c"
    break;

  case 138: /* sum_expression: term  */
#line 342 "parse.y"
                               {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1975 "y.tab.c"
    break;

  case 141: /* term: term MULOP factor  */
#line 349 "parse.y"
                                            {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1981 "y.tab.c"
    break;

  case 142: /* term: factor  */
#line 350 "parse.y"
                                 {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1987 "y.tab.c"
    break;

  case 146: /* factor: immutable  */
#line 356 "parse.y"
                                    {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1993 "y.tab.c"
    break;

  case 147: /* factor: mutable  */
#line 357 "parse.y"
                                  {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1999 "y.tab.c"
    break;

  case 148: /* mutable: IDENTIFIER  */
#line 360 "parse.y"
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
#line 2016 "y.tab.c"
    break;

  case 149: /* $@12: %empty  */
#line 372 "parse.y"
                                           {if(!checkscope(curid)){printf("%s\n",curid);printf("Undeclared\n");exit(0);}}
#line 2022 "y.tab.c"
    break;

  case 150: /* mutable: array_identifier $@12 '[' expression ']'  */
#line 373 "parse.y"
                                           {if(gettype(curid,0)=='i' || gettype(curid,1)== 'c')
			              		yyval = 1;
			              		else
			              		yyval = -1;
			              		}
#line 2032 "y.tab.c"
    break;

  case 151: /* immutable: '(' expression ')'  */
#line 380 "parse.y"
                                             {if(yyvsp[-1]==1) yyval=1; else yyval=-1;}
#line 2038 "y.tab.c"
    break;

  case 153: /* immutable: constant  */
#line 382 "parse.y"
                                   {if(yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 2044 "y.tab.c"
    break;

  case 154: /* $@13: %empty  */
#line 385 "parse.y"
                                        {
			             if(!check_declaration(curid, "Function"))
			             { printf("Function not declared"); exit(0);} 
			             insertSTF(curid); 
						 strcpy(currfunccall,curid);
			             }
#line 2055 "y.tab.c"
    break;

  case 155: /* call: IDENTIFIER '(' $@13 arguments ')'  */
#line 391 "parse.y"
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
#line 2070 "y.tab.c"
    break;

  case 158: /* $@14: %empty  */
#line 406 "parse.y"
                                     { call_params_count++; }
#line 2076 "y.tab.c"
    break;

  case 160: /* $@15: %empty  */
#line 409 "parse.y"
                                         { call_params_count++; }
#line 2082 "y.tab.c"
    break;

  case 163: /* constant: integer_constant  */
#line 413 "parse.y"
                                                {  insV(); yyval=1; }
#line 2088 "y.tab.c"
    break;

  case 164: /* constant: string_constant  */
#line 414 "parse.y"
                                                {  insV(); yyval=-1;}
#line 2094 "y.tab.c"
    break;

  case 165: /* constant: float_constant  */
#line 415 "parse.y"
                                                {  insV(); }
#line 2100 "y.tab.c"
    break;

  case 166: /* constant: character_constant  */
#line 416 "parse.y"
                                            {  insV();yyval=1; }
#line 2106 "y.tab.c"
    break;


#line 2110 "y.tab.c"

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

#line 419 "parse.y"


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
