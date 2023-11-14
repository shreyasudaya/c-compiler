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
    XOR = 310,                     /* XOR  */
    AMP = 311,                     /* AMP  */
    EQ = 312,                      /* EQ  */
    NOT_EQ = 313,                  /* NOT_EQ  */
    LESS_THAN_EQ = 314,            /* LESS_THAN_EQ  */
    LESS_THAN = 315,               /* LESS_THAN  */
    GR_THAN_EQ = 316,              /* GR_THAN_EQ  */
    GR_THAN = 317,                 /* GR_THAN  */
    LEFT_OP = 318,                 /* LEFT_OP  */
    RIGHT_OP = 319,                /* RIGHT_OP  */
    LEFT_ASSIGN = 320,             /* LEFT_ASSIGN  */
    RIGHT_ASSIGN = 321,            /* RIGHT_ASSIGN  */
    LSHIFT = 322,                  /* LSHIFT  */
    RSHIFT = 323,                  /* RSHIFT  */
    PLUS = 324,                    /* PLUS  */
    MINUS = 325,                   /* MINUS  */
    MUL = 326,                     /* MUL  */
    DIV = 327,                     /* DIV  */
    MOD = 328,                     /* MOD  */
    SIZEOF = 329,                  /* SIZEOF  */
    TAB = 330,                     /* TAB  */
    EXC = 331,                     /* EXC  */
    INCREMENT = 332,               /* INCREMENT  */
    DECREMENT = 333                /* DECREMENT  */
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
#define XOR 310
#define AMP 311
#define EQ 312
#define NOT_EQ 313
#define LESS_THAN_EQ 314
#define LESS_THAN 315
#define GR_THAN_EQ 316
#define GR_THAN 317
#define LEFT_OP 318
#define RIGHT_OP 319
#define LEFT_ASSIGN 320
#define RIGHT_ASSIGN 321
#define LSHIFT 322
#define RSHIFT 323
#define PLUS 324
#define MINUS 325
#define MUL 326
#define DIV 327
#define MOD 328
#define SIZEOF 329
#define TAB 330
#define EXC 331
#define INCREMENT 332
#define DECREMENT 333

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
  YYSYMBOL_XOR = 55,                       /* XOR  */
  YYSYMBOL_AMP = 56,                       /* AMP  */
  YYSYMBOL_EQ = 57,                        /* EQ  */
  YYSYMBOL_NOT_EQ = 58,                    /* NOT_EQ  */
  YYSYMBOL_LESS_THAN_EQ = 59,              /* LESS_THAN_EQ  */
  YYSYMBOL_LESS_THAN = 60,                 /* LESS_THAN  */
  YYSYMBOL_GR_THAN_EQ = 61,                /* GR_THAN_EQ  */
  YYSYMBOL_GR_THAN = 62,                   /* GR_THAN  */
  YYSYMBOL_LEFT_OP = 63,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 64,                  /* RIGHT_OP  */
  YYSYMBOL_LEFT_ASSIGN = 65,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 66,              /* RIGHT_ASSIGN  */
  YYSYMBOL_LSHIFT = 67,                    /* LSHIFT  */
  YYSYMBOL_RSHIFT = 68,                    /* RSHIFT  */
  YYSYMBOL_PLUS = 69,                      /* PLUS  */
  YYSYMBOL_MINUS = 70,                     /* MINUS  */
  YYSYMBOL_MUL = 71,                       /* MUL  */
  YYSYMBOL_DIV = 72,                       /* DIV  */
  YYSYMBOL_MOD = 73,                       /* MOD  */
  YYSYMBOL_SIZEOF = 74,                    /* SIZEOF  */
  YYSYMBOL_TAB = 75,                       /* TAB  */
  YYSYMBOL_EXC = 76,                       /* EXC  */
  YYSYMBOL_INCREMENT = 77,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 78,                 /* DECREMENT  */
  YYSYMBOL_79_ = 79,                       /* ';'  */
  YYSYMBOL_80_ = 80,                       /* '{'  */
  YYSYMBOL_81_ = 81,                       /* '}'  */
  YYSYMBOL_82_ = 82,                       /* ','  */
  YYSYMBOL_83_ = 83,                       /* '['  */
  YYSYMBOL_84_ = 84,                       /* ']'  */
  YYSYMBOL_85_ = 85,                       /* '('  */
  YYSYMBOL_86_ = 86,                       /* ')'  */
  YYSYMBOL_87_ = 87,                       /* '!'  */
  YYSYMBOL_88_ = 88,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 89,                  /* $accept  */
  YYSYMBOL_program = 90,                   /* program  */
  YYSYMBOL_declaration_list = 91,          /* declaration_list  */
  YYSYMBOL_D = 92,                         /* D  */
  YYSYMBOL_declaration = 93,               /* declaration  */
  YYSYMBOL_variable_declaration = 94,      /* variable_declaration  */
  YYSYMBOL_structure_definition = 95,      /* structure_definition  */
  YYSYMBOL_96_1 = 96,                      /* $@1  */
  YYSYMBOL_97_2 = 97,                      /* $@2  */
  YYSYMBOL_V1 = 98,                        /* V1  */
  YYSYMBOL_structure_declaration = 99,     /* structure_declaration  */
  YYSYMBOL_variable_declaration_list = 100, /* variable_declaration_list  */
  YYSYMBOL_variable_declaration_identifier = 101, /* variable_declaration_identifier  */
  YYSYMBOL_102_3 = 102,                    /* $@3  */
  YYSYMBOL_103_4 = 103,                    /* $@4  */
  YYSYMBOL_vdi = 104,                      /* vdi  */
  YYSYMBOL_identifier_array_type = 105,    /* identifier_array_type  */
  YYSYMBOL_initilization_params = 106,     /* initilization_params  */
  YYSYMBOL_initilization = 107,            /* initilization  */
  YYSYMBOL_type_specifier = 108,           /* type_specifier  */
  YYSYMBOL_unsigned_grammar = 109,         /* unsigned_grammar  */
  YYSYMBOL_signed_grammar = 110,           /* signed_grammar  */
  YYSYMBOL_long_grammar = 111,             /* long_grammar  */
  YYSYMBOL_short_grammar = 112,            /* short_grammar  */
  YYSYMBOL_function_declaration = 113,     /* function_declaration  */
  YYSYMBOL_function_declaration_type = 114, /* function_declaration_type  */
  YYSYMBOL_function_declaration_param_statement = 115, /* function_declaration_param_statement  */
  YYSYMBOL_params = 116,                   /* params  */
  YYSYMBOL_parameters_list = 117,          /* parameters_list  */
  YYSYMBOL_118_5 = 118,                    /* $@5  */
  YYSYMBOL_parameters_identifier_list = 119, /* parameters_identifier_list  */
  YYSYMBOL_parameters_identifier_list_breakup = 120, /* parameters_identifier_list_breakup  */
  YYSYMBOL_param_identifier = 121,         /* param_identifier  */
  YYSYMBOL_122_6 = 122,                    /* $@6  */
  YYSYMBOL_param_identifier_breakup = 123, /* param_identifier_breakup  */
  YYSYMBOL_statement = 124,                /* statement  */
  YYSYMBOL_compound_statement = 125,       /* compound_statement  */
  YYSYMBOL_126_7 = 126,                    /* $@7  */
  YYSYMBOL_statment_list = 127,            /* statment_list  */
  YYSYMBOL_expression_statment = 128,      /* expression_statment  */
  YYSYMBOL_conditional_statements = 129,   /* conditional_statements  */
  YYSYMBOL_130_8 = 130,                    /* $@8  */
  YYSYMBOL_conditional_statements_breakup = 131, /* conditional_statements_breakup  */
  YYSYMBOL_iterative_statements = 132,     /* iterative_statements  */
  YYSYMBOL_133_9 = 133,                    /* $@9  */
  YYSYMBOL_134_10 = 134,                   /* $@10  */
  YYSYMBOL_135_11 = 135,                   /* $@11  */
  YYSYMBOL_return_statement = 136,         /* return_statement  */
  YYSYMBOL_break_statement = 137,          /* break_statement  */
  YYSYMBOL_string_initilization = 138,     /* string_initilization  */
  YYSYMBOL_array_initialization = 139,     /* array_initialization  */
  YYSYMBOL_array_int_declarations = 140,   /* array_int_declarations  */
  YYSYMBOL_array_int_declarations_breakup = 141, /* array_int_declarations_breakup  */
  YYSYMBOL_expression = 142,               /* expression  */
  YYSYMBOL_simple_expression = 143,        /* simple_expression  */
  YYSYMBOL_and_expression = 144,           /* and_expression  */
  YYSYMBOL_unary_relation_expression = 145, /* unary_relation_expression  */
  YYSYMBOL_regular_expression = 146,       /* regular_expression  */
  YYSYMBOL_relational_operators = 147,     /* relational_operators  */
  YYSYMBOL_ST = 148,                       /* ST  */
  YYSYMBOL_B = 149,                        /* B  */
  YYSYMBOL_C = 150,                        /* C  */
  YYSYMBOL_sum_expression = 151,           /* sum_expression  */
  YYSYMBOL_sum_operators = 152,            /* sum_operators  */
  YYSYMBOL_term = 153,                     /* term  */
  YYSYMBOL_MULOP = 154,                    /* MULOP  */
  YYSYMBOL_factor = 155,                   /* factor  */
  YYSYMBOL_mutable = 156,                  /* mutable  */
  YYSYMBOL_157_12 = 157,                   /* $@12  */
  YYSYMBOL_immutable = 158,                /* immutable  */
  YYSYMBOL_call = 159,                     /* call  */
  YYSYMBOL_160_13 = 160,                   /* $@13  */
  YYSYMBOL_arguments = 161,                /* arguments  */
  YYSYMBOL_arguments_list = 162,           /* arguments_list  */
  YYSYMBOL_163_14 = 163,                   /* $@14  */
  YYSYMBOL_A = 164,                        /* A  */
  YYSYMBOL_165_15 = 165,                   /* $@15  */
  YYSYMBOL_constant = 166                  /* constant  */
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
#define YYFINAL  35
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   307

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  78
/* YYNRULES -- Number of rules.  */
#define YYNRULES  159
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  267

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   333


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
       2,     2,     2,    87,     2,     2,     2,     2,     2,     2,
      85,    86,     2,     2,    82,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    88,    79,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    83,     2,    84,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    80,     2,    81,     2,     2,     2,     2,
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
      75,    76,    77,    78
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    89,    89,    92,    95,    96,    99,   100,   101,   104,
     105,   107,   107,   108,   108,   110,   110,   113,   114,   117,
     117,   120,   120,   121,   121,   125,   125,   128,   129,   132,
     133,   134,   139,   140,   141,   144,   144,   144,   144,   145,
     146,   147,   148,   149,   152,   152,   152,   152,   155,   155,
     155,   155,   158,   158,   161,   161,   164,   167,   170,   173,
     173,   176,   176,   179,   182,   183,   186,   186,   189,   190,
     193,   193,   194,   194,   195,   195,   196,   199,   199,   202,
     203,   206,   207,   210,   210,   213,   214,   217,   217,   218,
     218,   219,   219,   220,   222,   223,   236,   239,   242,   245,
     248,   249,   252,   260,   266,   272,   278,   284,   290,   291,
     292,   296,   297,   300,   301,   306,   307,   310,   311,   314,
     314,   314,   315,   315,   315,   316,   318,   320,   321,   323,
     326,   327,   330,   331,   334,   335,   338,   338,   338,   341,
     342,   345,   357,   357,   365,   366,   367,   370,   370,   388,
     388,   391,   391,   394,   394,   395,   398,   399,   400,   401
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
  "STATIC", "AUTO", "XOR", "AMP", "EQ", "NOT_EQ", "LESS_THAN_EQ",
  "LESS_THAN", "GR_THAN_EQ", "GR_THAN", "LEFT_OP", "RIGHT_OP",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "LSHIFT", "RSHIFT", "PLUS", "MINUS",
  "MUL", "DIV", "MOD", "SIZEOF", "TAB", "EXC", "INCREMENT", "DECREMENT",
  "';'", "'{'", "'}'", "','", "'['", "']'", "'('", "')'", "'!'", "':'",
  "$accept", "program", "declaration_list", "D", "declaration",
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

#define YYPACT_NINF (-82)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-81)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     242,   -82,   -82,   -82,   -82,     8,    81,    78,   125,    27,
      86,   -82,   114,   -82,   225,   -82,   -82,   -82,    47,   -82,
     259,   -82,   -82,   -82,   -82,   -82,     8,    81,   -82,   -82,
       8,    81,   -82,    84,    84,   -82,    34,   -82,   -82,    31,
     -82,   -69,   -82,   -82,   -82,    41,   -82,   -82,   -82,   -82,
     -82,   -82,    48,    53,    50,    53,    94,   -82,    14,    14,
     -82,    84,   124,    28,   277,   277,    67,   -82,   -82,   -82,
     -82,   -82,    94,    94,    74,   106,   109,   -82,    87,   -42,
      23,   -82,    96,   -82,   -82,   -82,    94,   -18,   -82,   -82,
     -82,   -82,   -82,   -82,    73,    77,   137,   138,    72,    80,
      85,    28,    90,    91,   -82,   -82,    84,   -82,   -82,    92,
     -82,   -82,   -82,   -82,   -82,    98,   -82,   277,    99,   101,
     -82,    83,    89,   -82,   -82,   147,    94,    94,   -82,   -82,
     -82,   -82,   -82,   -82,    -7,   -82,   -82,    -7,   -82,   -82,
     -82,    -7,    94,    94,    94,    94,    94,    94,   -82,   -82,
     106,   100,   136,   -82,   102,   259,   -82,    94,    84,    84,
     -82,   107,    94,    94,   167,   -82,   163,   193,   -82,   -82,
     111,   112,    94,    94,   -82,   113,   109,   -82,   -42,    23,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,    25,   164,   -82,
     122,   -82,   -82,   -39,   -82,    -3,   130,   108,   126,   193,
     129,   -82,   -82,   -82,   132,   -82,   142,   -82,   -13,   -18,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,    94,    94,   141,
     -82,   -82,   145,   -82,   -82,   208,   -82,    28,    28,    -8,
      20,   205,    94,   -82,   159,   173,   206,   -82,   -82,   -82,
     226,   177,   225,   -82,   208,   -82,   -82,    28,   -82,    94,
     181,   183,   -82,   -82,   145,   -82,   -82,   175,   -82,    94,
     -82,   -82,   194,   251,   197,   205,   -82
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    35,    36,    37,    38,    53,    55,    51,    47,     0,
       0,    43,     0,     2,     5,     6,     8,    10,     0,     7,
      60,    52,    39,    54,    40,    48,    53,    55,    42,    44,
      53,    55,    41,    11,    13,     1,     0,     4,     3,    21,
      23,     0,    20,    61,    56,     0,    59,    49,    50,    45,
      46,    21,     0,    17,     0,    18,     0,    57,    28,    28,
       9,     0,     0,    77,    16,    16,   141,   142,   156,   157,
     158,   159,     0,     0,     0,   110,   112,   114,   116,   118,
     131,   135,   140,   139,   145,   146,     0,     0,    22,    25,
      24,    19,    66,    62,    65,     0,     0,     0,     0,     0,
       0,    77,     0,     0,    82,    76,     0,    58,    71,     0,
      70,    72,    73,    74,    75,     0,    93,    16,     0,     0,
     147,     0,     0,   115,   140,     0,     0,     0,   123,   124,
     120,   122,   119,   121,     0,   132,   133,     0,   136,   137,
     138,     0,     0,     0,     0,     0,     0,     0,   108,   109,
      26,     0,     0,    27,    69,     0,    63,     0,     0,     0,
      94,     0,     0,     0,     0,    96,     0,    77,    81,    15,
       0,     0,   150,     0,   144,     0,   111,   113,   117,   130,
     134,   107,   105,   106,   103,   104,   102,    34,     0,    31,
       0,    67,    64,     0,    95,     0,     0,     0,     0,    77,
       0,    12,    14,   151,     0,   149,     0,   129,     0,     0,
      29,    32,    33,    97,    68,    83,    87,     0,     0,     0,
      79,    78,   155,   148,   143,     0,    30,    77,    77,     0,
       0,   128,     0,   152,   101,     0,    86,    88,    89,    91,
       0,     0,     5,   153,     0,    99,    98,    77,    84,     0,
       0,     0,   125,   126,   155,   100,    85,     0,    92,     0,
     154,    90,     0,     0,     0,   128,   127
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -82,   -82,   289,    35,   -82,     0,   -82,   -82,   -82,   -61,
     -82,   -27,   229,   -82,   -82,   234,   -82,    93,   -82,     1,
     -82,   -82,    49,    -1,   -82,   -82,   -82,   -82,   139,   -82,
     -82,   -82,   -82,   -82,   -82,   -60,   -82,   -82,    97,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   116,
     -82,    51,   -82,   -54,   -81,   172,   -65,   -82,   -82,   -82,
     -82,    36,   165,   -82,   168,   -82,   166,   -57,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,    46,   -82,   -82
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    12,    37,    38,    14,   105,    16,    52,    54,   118,
      17,    41,    42,    58,    59,    88,    89,   153,   210,   106,
      32,    28,    22,    24,    19,    20,    44,    45,    46,    62,
      93,   156,    94,   154,   191,   199,   108,   109,   200,   110,
     111,   227,   248,   112,   228,   249,   250,   113,   114,   189,
     212,   235,   245,   115,    75,    76,    77,    78,   134,   116,
     241,   242,    79,   137,    80,   141,    81,    82,   121,    83,
      84,   172,   204,   205,   222,   233,   254,    85
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      15,    18,    74,   107,   119,   150,    53,    55,   123,   126,
      60,   151,    21,    61,    15,    18,   124,   213,   122,    66,
      67,    43,    68,    69,    70,    71,    48,   135,   136,   124,
      50,    95,     1,     2,     3,     4,     5,     6,     7,     8,
     126,   164,    96,    97,   161,   126,    98,   215,    11,    99,
     100,   101,   102,    33,    66,    67,   169,    68,    69,    70,
      71,    86,   177,   103,   117,   117,   152,   225,   126,   124,
     124,   238,   208,    39,    40,    47,   193,   124,    72,    49,
     124,   195,    25,   216,   124,    23,    26,    27,   181,   182,
     183,   184,   185,   186,   138,   139,   140,    87,    66,    67,
     124,    68,    69,    70,    71,   124,   239,   104,   209,   196,
      51,    40,    34,    72,    35,    73,    57,   117,   203,   206,
      66,    67,    56,    68,    69,    70,    71,    63,    64,    29,
      65,    53,    55,    30,    31,    61,   229,   230,   142,   143,
     144,   145,   146,   147,   128,   129,   130,   131,   132,   133,
      92,   160,   120,   125,   126,   155,    43,    72,   127,    73,
     124,   124,   157,   158,   159,   162,   173,   236,   237,   165,
     163,   175,   167,   148,   149,   174,   166,   168,   243,    72,
     170,    73,   171,   188,   187,   190,   194,   256,   197,   198,
     201,   202,   207,   218,   213,   257,    95,     1,     2,     3,
       4,     5,     6,     7,     8,   262,   214,    96,    97,   217,
     221,    98,   219,    11,    99,   100,   101,   102,   223,    66,
      67,   231,    68,    69,    70,    71,   224,   232,   103,     1,
       2,     3,     4,     5,     6,     7,     8,   234,   240,     9,
      10,   244,    15,    18,   247,    11,     1,     2,     3,     4,
       5,     6,     7,     8,   246,   251,     9,    10,   252,    36,
     258,   261,    11,     1,     2,     3,     4,     5,     6,     7,
       8,   259,   104,   263,   -80,   264,   265,   253,    72,    11,
      73,     1,     2,     3,     4,     5,     6,     7,     8,    13,
      91,    96,    97,    90,   192,   255,   220,    11,   176,   178,
     260,   266,   226,   211,     0,   179,     0,   180
};

static const yytype_int16 yycheck[] =
{
       0,     0,    56,    63,    65,    86,    33,    34,    73,    48,
      79,    29,     4,    82,    14,    14,    73,    30,    72,    26,
      27,    20,    29,    30,    31,    32,    27,    69,    70,    86,
      31,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      48,   101,    14,    15,    98,    48,    18,    86,    20,    21,
      22,    23,    24,    26,    26,    27,   117,    29,    30,    31,
      32,    47,   127,    35,    64,    65,    84,    80,    48,   126,
     127,    79,    47,    26,    27,    26,   157,   134,    85,    30,
     137,   162,     4,    86,   141,     4,     8,     9,   142,   143,
     144,   145,   146,   147,    71,    72,    73,    83,    26,    27,
     157,    29,    30,    31,    32,   162,    86,    79,    83,   163,
      26,    27,    26,    85,     0,    87,    85,   117,   172,   173,
      26,    27,    88,    29,    30,    31,    32,    86,    80,     4,
      80,   158,   159,     8,     9,    82,   217,   218,    42,    43,
      44,    45,    46,    47,    57,    58,    59,    60,    61,    62,
      26,    79,    85,    79,    48,    82,   155,    85,    49,    87,
     217,   218,    85,    26,    26,    85,    83,   227,   228,    79,
      85,    24,    80,    77,    78,    86,    85,    79,   232,    85,
      81,    87,    81,    47,    84,    83,    79,   247,    21,    26,
      79,    79,    79,    85,    30,   249,     3,     4,     5,     6,
       7,     8,     9,    10,    11,   259,    84,    14,    15,    79,
      81,    18,    86,    20,    21,    22,    23,    24,    86,    26,
      27,    80,    29,    30,    31,    32,    84,    82,    35,     4,
       5,     6,     7,     8,     9,    10,    11,    29,    33,    14,
      15,    82,   242,   242,    38,    20,     4,     5,     6,     7,
       8,     9,    10,    11,    81,    29,    14,    15,    81,    34,
      79,    86,    20,     4,     5,     6,     7,     8,     9,    10,
      11,    88,    79,    79,    81,    24,    79,   242,    85,    20,
      87,     4,     5,     6,     7,     8,     9,    10,    11,     0,
      61,    14,    15,    59,   155,   244,   199,    20,   126,   134,
     254,   265,   209,   187,    -1,   137,    -1,   141
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    14,
      15,    20,    90,    91,    93,    94,    95,    99,   108,   113,
     114,     4,   111,     4,   112,     4,     8,     9,   110,     4,
       8,     9,   109,    26,    26,     0,    34,    91,    92,    26,
      27,   100,   101,   108,   115,   116,   117,   111,   112,   111,
     112,    26,    96,   100,    97,   100,    88,    85,   102,   103,
      79,    82,   118,    86,    80,    80,    26,    27,    29,    30,
      31,    32,    85,    87,   142,   143,   144,   145,   146,   151,
     153,   155,   156,   158,   159,   166,    47,    83,   104,   105,
     104,   101,    26,   119,   121,     3,    14,    15,    18,    21,
      22,    23,    24,    35,    79,    94,   108,   124,   125,   126,
     128,   129,   132,   136,   137,   142,   148,    94,    98,    98,
      85,   157,   142,   145,   156,    79,    48,    49,    57,    58,
      59,    60,    61,    62,   147,    69,    70,   152,    71,    72,
      73,   154,    42,    43,    44,    45,    46,    47,    77,    78,
     143,    29,    84,   106,   122,    82,   120,    85,    26,    26,
      79,   142,    85,    85,   124,    79,    85,    80,    79,    98,
      81,    81,   160,    83,    86,    24,   144,   145,   151,   153,
     155,   142,   142,   142,   142,   142,   142,    84,    47,   138,
      83,   123,   117,   143,    79,   143,   142,    21,    26,   124,
     127,    79,    79,   142,   161,   162,   142,    79,    47,    83,
     107,   138,   139,    30,    84,    86,    86,    79,    85,    86,
     127,    81,   163,    86,    84,    80,   106,   130,   133,   143,
     143,    80,    82,   164,    29,   140,   124,   124,    79,    86,
      33,   149,   150,   142,    82,   141,    81,    38,   131,   134,
     135,    29,    81,    92,   165,   140,   124,   142,    79,    88,
     164,    86,   142,    79,    24,    79,   150
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    89,    90,    91,    92,    92,    93,    93,    93,    94,
      94,    96,    95,    97,    95,    98,    98,    99,    99,   100,
     100,   102,   101,   103,   101,   104,   104,   105,   105,   106,
     106,   106,   107,   107,   107,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   109,   109,   109,   109,   110,   110,
     110,   110,   111,   111,   112,   112,   113,   114,   115,   116,
     116,   118,   117,   119,   120,   120,   122,   121,   123,   123,
     124,   124,   124,   124,   124,   124,   124,   126,   125,   127,
     127,   128,   128,   130,   129,   131,   131,   133,   132,   134,
     132,   135,   132,   132,   136,   136,   137,   138,   139,   140,
     141,   141,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   143,   143,   144,   144,   145,   145,   146,   146,   147,
     147,   147,   147,   147,   147,   148,   149,   150,   150,    92,
     151,   151,   152,   152,   153,   153,   154,   154,   154,   155,
     155,   156,   157,   156,   158,   158,   158,   160,   159,   161,
     161,   163,   162,   165,   164,   164,   166,   166,   166,   166
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     0,     1,     1,     1,     3,
       1,     0,     7,     0,     7,     2,     0,     3,     3,     3,
       1,     0,     3,     0,     3,     1,     2,     2,     0,     3,
       4,     2,     1,     1,     0,     1,     1,     1,     1,     2,
       2,     2,     2,     1,     1,     2,     2,     0,     1,     2,
       2,     0,     1,     0,     1,     0,     2,     3,     3,     1,
       0,     0,     3,     2,     2,     0,     0,     3,     2,     0,
       1,     1,     1,     1,     1,     1,     1,     0,     4,     2,
       0,     2,     1,     0,     7,     2,     0,     0,     6,     0,
       9,     0,     8,     1,     2,     3,     2,     2,     4,     2,
       2,     0,     3,     3,     3,     3,     3,     3,     2,     2,
       1,     3,     1,     3,     1,     2,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     7,     2,     8,     0,     6,
       3,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     0,     5,     3,     1,     1,     0,     5,     1,
       0,     0,     3,     0,     4,     0,     1,     1,     1,     1
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
#line 107 "parse.y"
                                            { ins(); }
#line 1687 "y.tab.c"
    break;

  case 13: /* $@2: %empty  */
#line 108 "parse.y"
                                           { ins(); }
#line 1693 "y.tab.c"
    break;

  case 21: /* $@3: %empty  */
#line 120 "parse.y"
                                     {if(duplicate(curid)){printf("Duplicate\n");exit(0);}insertSTnest(curid,currnest); ins();  }
#line 1699 "y.tab.c"
    break;

  case 23: /* $@4: %empty  */
#line 121 "parse.y"
                                             {if(duplicate(curid)){printf("Duplicate\n");exit(0);}insertSTnest(curid,currnest); ins();  }
#line 1705 "y.tab.c"
    break;

  case 57: /* function_declaration_type: type_specifier IDENTIFIER '('  */
#line 167 "parse.y"
                                                         { strcpy(currfunctype, curtype); strcpy(currfunc, curid); check_duplicate(curid); insertSTF(curid); ins(); }
#line 1711 "y.tab.c"
    break;

  case 61: /* $@5: %empty  */
#line 176 "parse.y"
                                         { check_params(curtype); }
#line 1717 "y.tab.c"
    break;

  case 62: /* parameters_list: type_specifier $@5 parameters_identifier_list  */
#line 176 "parse.y"
                                                                                               { insertSTparamscount(currfunc, params_count); }
#line 1723 "y.tab.c"
    break;

  case 66: /* $@6: %empty  */
#line 186 "parse.y"
                                     { ins();insertSTnest(curid,1); params_count++; }
#line 1729 "y.tab.c"
    break;

  case 77: /* $@7: %empty  */
#line 199 "parse.y"
                          {currnest++;}
#line 1735 "y.tab.c"
    break;

  case 78: /* compound_statement: $@7 '{' statment_list '}'  */
#line 199 "parse.y"
                                                                {deletedata(currnest);currnest--;}
#line 1741 "y.tab.c"
    break;

  case 83: /* $@8: %empty  */
#line 210 "parse.y"
                                                       {if(yyvsp[-1]!=1){printf("Not of type\n");exit(0);}}
#line 1747 "y.tab.c"
    break;

  case 87: /* $@9: %empty  */
#line 217 "parse.y"
                                                          {if(yyvsp[-1]!=1){printf("Not of type\n");exit(0);}}
#line 1753 "y.tab.c"
    break;

  case 89: /* $@10: %empty  */
#line 218 "parse.y"
                                                                       {if(yyvsp[-1]!=1){printf("Not of type\n");exit(0);}}
#line 1759 "y.tab.c"
    break;

  case 91: /* $@11: %empty  */
#line 219 "parse.y"
                                                                      {if(yyvsp[-1]!=1){printf("Not of type\n");exit(0);}}
#line 1765 "y.tab.c"
    break;

  case 94: /* return_statement: RETURN ';'  */
#line 222 "parse.y"
                                     {if(strcmp(currfunctype,"void")) {printf("Returning void of a non-void function\n"); exit(0);}}
#line 1771 "y.tab.c"
    break;

  case 95: /* return_statement: RETURN expression ';'  */
#line 223 "parse.y"
                                                { 	if(!strcmp(currfunctype, "void"))
										{ 
											yyerror("Function is void");
										}

										if((currfunctype[0]=='i' || currfunctype[0]=='c') && yyvsp[-1]!=1)
										{
											printf("Expression doesn't match return type of function\n"); exit(0);
										}
			              
			                     	}
#line 1787 "y.tab.c"
    break;

  case 97: /* string_initilization: assignment_operator string_constant  */
#line 239 "parse.y"
                                                              {insV();}
#line 1793 "y.tab.c"
    break;

  case 102: /* expression: mutable assignment_operator expression  */
#line 252 "parse.y"
                                                                              {
																	  if(yyvsp[-2]==1 && yyvsp[0]==1) 
																	  {
			                                                          yyval=1;
			                                                          } 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
#line 1806 "y.tab.c"
    break;

  case 103: /* expression: mutable PLUS_ASSIGN expression  */
#line 260 "parse.y"
                                                             {
																	  if(yyvsp[-2]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
#line 1817 "y.tab.c"
    break;

  case 104: /* expression: mutable MINUS_ASSIGN expression  */
#line 266 "parse.y"
                                                           {
																	  if(yyvsp[-2]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
#line 1828 "y.tab.c"
    break;

  case 105: /* expression: mutable MUL_ASSIGN expression  */
#line 272 "parse.y"
                                                        {
																	  if(yyvsp[-2]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
#line 1839 "y.tab.c"
    break;

  case 106: /* expression: mutable DIV_ASSIGN expression  */
#line 278 "parse.y"
                                                                        {
																	  if(yyvsp[-2]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
#line 1850 "y.tab.c"
    break;

  case 107: /* expression: mutable MOD_ASSIGN expression  */
#line 284 "parse.y"
                                                                        {
																	  if(yyvsp[-2]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
#line 1861 "y.tab.c"
    break;

  case 108: /* expression: mutable INCREMENT  */
#line 290 "parse.y"
                                                                                                {if(yyvsp[-1] == 1) yyval=1; else yyval=-1;}
#line 1867 "y.tab.c"
    break;

  case 109: /* expression: mutable DECREMENT  */
#line 291 "parse.y"
                                                                                                {if(yyvsp[-1] == 1) yyval=1; else yyval=-1;}
#line 1873 "y.tab.c"
    break;

  case 110: /* expression: simple_expression  */
#line 292 "parse.y"
                                            {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1879 "y.tab.c"
    break;

  case 111: /* simple_expression: simple_expression OR and_expression  */
#line 296 "parse.y"
                                                              {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1885 "y.tab.c"
    break;

  case 112: /* simple_expression: and_expression  */
#line 297 "parse.y"
                                         {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1891 "y.tab.c"
    break;

  case 113: /* and_expression: and_expression AND unary_relation_expression  */
#line 300 "parse.y"
                                                                       {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1897 "y.tab.c"
    break;

  case 114: /* and_expression: unary_relation_expression  */
#line 301 "parse.y"
                                                     {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1903 "y.tab.c"
    break;

  case 115: /* unary_relation_expression: '!' unary_relation_expression  */
#line 306 "parse.y"
                                                        {if(yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1909 "y.tab.c"
    break;

  case 116: /* unary_relation_expression: regular_expression  */
#line 307 "parse.y"
                                             {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1915 "y.tab.c"
    break;

  case 117: /* regular_expression: regular_expression relational_operators sum_expression  */
#line 310 "parse.y"
                                                                                 {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1921 "y.tab.c"
    break;

  case 118: /* regular_expression: sum_expression  */
#line 311 "parse.y"
                                           {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1927 "y.tab.c"
    break;

  case 130: /* sum_expression: sum_expression sum_operators term  */
#line 326 "parse.y"
                                                             {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1933 "y.tab.c"
    break;

  case 131: /* sum_expression: term  */
#line 327 "parse.y"
                               {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1939 "y.tab.c"
    break;

  case 134: /* term: term MULOP factor  */
#line 334 "parse.y"
                                            {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1945 "y.tab.c"
    break;

  case 135: /* term: factor  */
#line 335 "parse.y"
                                 {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1951 "y.tab.c"
    break;

  case 139: /* factor: immutable  */
#line 341 "parse.y"
                                    {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1957 "y.tab.c"
    break;

  case 140: /* factor: mutable  */
#line 342 "parse.y"
                                  {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1963 "y.tab.c"
    break;

  case 141: /* mutable: IDENTIFIER  */
#line 345 "parse.y"
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
#line 1980 "y.tab.c"
    break;

  case 142: /* $@12: %empty  */
#line 357 "parse.y"
                                           {if(!checkscope(curid)){printf("%s\n",curid);printf("Undeclared\n");exit(0);}}
#line 1986 "y.tab.c"
    break;

  case 143: /* mutable: array_identifier $@12 '[' expression ']'  */
#line 358 "parse.y"
                                           {if(gettype(curid,0)=='i' || gettype(curid,1)== 'c')
			              		yyval = 1;
			              		else
			              		yyval = -1;
			              		}
#line 1996 "y.tab.c"
    break;

  case 144: /* immutable: '(' expression ')'  */
#line 365 "parse.y"
                                             {if(yyvsp[-1]==1) yyval=1; else yyval=-1;}
#line 2002 "y.tab.c"
    break;

  case 146: /* immutable: constant  */
#line 367 "parse.y"
                                   {if(yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 2008 "y.tab.c"
    break;

  case 147: /* $@13: %empty  */
#line 370 "parse.y"
                                        {
			             if(!check_declaration(curid, "Function"))
			             { printf("Function not declared"); exit(0);} 
			             insertSTF(curid); 
						 strcpy(currfunccall,curid);
			             }
#line 2019 "y.tab.c"
    break;

  case 148: /* call: IDENTIFIER '(' $@13 arguments ')'  */
#line 376 "parse.y"
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
#line 2034 "y.tab.c"
    break;

  case 151: /* $@14: %empty  */
#line 391 "parse.y"
                                     { call_params_count++; }
#line 2040 "y.tab.c"
    break;

  case 153: /* $@15: %empty  */
#line 394 "parse.y"
                                         { call_params_count++; }
#line 2046 "y.tab.c"
    break;

  case 156: /* constant: integer_constant  */
#line 398 "parse.y"
                                                {  insV(); yyval=1; }
#line 2052 "y.tab.c"
    break;

  case 157: /* constant: string_constant  */
#line 399 "parse.y"
                                                {  insV(); yyval=-1;}
#line 2058 "y.tab.c"
    break;

  case 158: /* constant: float_constant  */
#line 400 "parse.y"
                                                {  insV(); }
#line 2064 "y.tab.c"
    break;

  case 159: /* constant: character_constant  */
#line 401 "parse.y"
                                            {  insV();yyval=1; }
#line 2070 "y.tab.c"
    break;


#line 2074 "y.tab.c"

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

#line 404 "parse.y"


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
