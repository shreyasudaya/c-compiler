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
#line 2 "parse.y"

	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <stdint.h>
	#include "symbol.h"
	#include <limits.h>
	#include <ctype.h>
	int yylex(void);
	
	entry_make** symbol_table;
    entry_make** constant_table;
	double Evaluate (double lhs_value,int assign_type,double rhs_value);
	int current_dtype;
	extern char *yytext;
	int yyerror(char *msg);
	int yylineno;
	

#line 91 "y.tab.c"

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
    IDENTIFIER = 258,              /* IDENTIFIER  */
    DEC_CONSTANT = 259,            /* DEC_CONSTANT  */
    HEX_CONSTANT = 260,            /* HEX_CONSTANT  */
    STRING = 261,                  /* STRING  */
    SHORT = 262,                   /* SHORT  */
    INT = 263,                     /* INT  */
    LONG = 264,                    /* LONG  */
    LONG_LONG = 265,               /* LONG_LONG  */
    FLOAT = 266,                   /* FLOAT  */
    DOUBLE = 267,                  /* DOUBLE  */
    CHAR = 268,                    /* CHAR  */
    SIGNED = 269,                  /* SIGNED  */
    UNSIGNED = 270,                /* UNSIGNED  */
    CONST = 271,                   /* CONST  */
    IF = 272,                      /* IF  */
    FOR = 273,                     /* FOR  */
    WHILE = 274,                   /* WHILE  */
    CONTINUE = 275,                /* CONTINUE  */
    BREAK = 276,                   /* BREAK  */
    RETURN = 277,                  /* RETURN  */
    LOGICAL_AND = 278,             /* LOGICAL_AND  */
    LOGICAL_OR = 279,              /* LOGICAL_OR  */
    LESS_THAN_EQ = 280,            /* LESS_THAN_EQ  */
    GR_THAN_EQ = 281,              /* GR_THAN_EQ  */
    EQ = 282,                      /* EQ  */
    NOT_EQ = 283,                  /* NOT_EQ  */
    INCREMENT = 284,               /* INCREMENT  */
    DECREMENT = 285,               /* DECREMENT  */
    MUL_ASSIGN = 286,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 287,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 288,              /* MOD_ASSIGN  */
    PLUS_ASSIGN = 289,             /* PLUS_ASSIGN  */
    MINUS_ASSIGN = 290,            /* MINUS_ASSIGN  */
    UMINUS = 291,                  /* UMINUS  */
    LOWER_THAN_ELSE = 292,         /* LOWER_THAN_ELSE  */
    ELSE = 293                     /* ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IDENTIFIER 258
#define DEC_CONSTANT 259
#define HEX_CONSTANT 260
#define STRING 261
#define SHORT 262
#define INT 263
#define LONG 264
#define LONG_LONG 265
#define FLOAT 266
#define DOUBLE 267
#define CHAR 268
#define SIGNED 269
#define UNSIGNED 270
#define CONST 271
#define IF 272
#define FOR 273
#define WHILE 274
#define CONTINUE 275
#define BREAK 276
#define RETURN 277
#define LOGICAL_AND 278
#define LOGICAL_OR 279
#define LESS_THAN_EQ 280
#define GR_THAN_EQ 281
#define EQ 282
#define NOT_EQ 283
#define INCREMENT 284
#define DECREMENT 285
#define MUL_ASSIGN 286
#define DIV_ASSIGN 287
#define MOD_ASSIGN 288
#define PLUS_ASSIGN 289
#define MINUS_ASSIGN 290
#define UMINUS 291
#define LOWER_THAN_ELSE 292
#define ELSE 293

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 23 "parse.y"

	double dval;
	entry_make* entry;
	int ival;

#line 223 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_DEC_CONSTANT = 4,               /* DEC_CONSTANT  */
  YYSYMBOL_HEX_CONSTANT = 5,               /* HEX_CONSTANT  */
  YYSYMBOL_STRING = 6,                     /* STRING  */
  YYSYMBOL_SHORT = 7,                      /* SHORT  */
  YYSYMBOL_INT = 8,                        /* INT  */
  YYSYMBOL_LONG = 9,                       /* LONG  */
  YYSYMBOL_LONG_LONG = 10,                 /* LONG_LONG  */
  YYSYMBOL_FLOAT = 11,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 12,                    /* DOUBLE  */
  YYSYMBOL_CHAR = 13,                      /* CHAR  */
  YYSYMBOL_SIGNED = 14,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 15,                  /* UNSIGNED  */
  YYSYMBOL_CONST = 16,                     /* CONST  */
  YYSYMBOL_IF = 17,                        /* IF  */
  YYSYMBOL_FOR = 18,                       /* FOR  */
  YYSYMBOL_WHILE = 19,                     /* WHILE  */
  YYSYMBOL_CONTINUE = 20,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 21,                     /* BREAK  */
  YYSYMBOL_RETURN = 22,                    /* RETURN  */
  YYSYMBOL_LOGICAL_AND = 23,               /* LOGICAL_AND  */
  YYSYMBOL_LOGICAL_OR = 24,                /* LOGICAL_OR  */
  YYSYMBOL_LESS_THAN_EQ = 25,              /* LESS_THAN_EQ  */
  YYSYMBOL_GR_THAN_EQ = 26,                /* GR_THAN_EQ  */
  YYSYMBOL_EQ = 27,                        /* EQ  */
  YYSYMBOL_NOT_EQ = 28,                    /* NOT_EQ  */
  YYSYMBOL_INCREMENT = 29,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 30,                 /* DECREMENT  */
  YYSYMBOL_MUL_ASSIGN = 31,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 32,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 33,                /* MOD_ASSIGN  */
  YYSYMBOL_PLUS_ASSIGN = 34,               /* PLUS_ASSIGN  */
  YYSYMBOL_MINUS_ASSIGN = 35,              /* MINUS_ASSIGN  */
  YYSYMBOL_36_ = 36,                       /* ','  */
  YYSYMBOL_37_ = 37,                       /* '='  */
  YYSYMBOL_38_ = 38,                       /* '<'  */
  YYSYMBOL_39_ = 39,                       /* '>'  */
  YYSYMBOL_40_ = 40,                       /* '+'  */
  YYSYMBOL_41_ = 41,                       /* '-'  */
  YYSYMBOL_42_ = 42,                       /* '*'  */
  YYSYMBOL_43_ = 43,                       /* '/'  */
  YYSYMBOL_44_ = 44,                       /* '%'  */
  YYSYMBOL_45_ = 45,                       /* '!'  */
  YYSYMBOL_UMINUS = 46,                    /* UMINUS  */
  YYSYMBOL_LOWER_THAN_ELSE = 47,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_ELSE = 48,                      /* ELSE  */
  YYSYMBOL_49_ = 49,                       /* '('  */
  YYSYMBOL_50_ = 50,                       /* ')'  */
  YYSYMBOL_51_ = 51,                       /* '{'  */
  YYSYMBOL_52_ = 52,                       /* '}'  */
  YYSYMBOL_53_ = 53,                       /* ';'  */
  YYSYMBOL_54_ = 54,                       /* '['  */
  YYSYMBOL_55_ = 55,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 56,                  /* $accept  */
  YYSYMBOL_start = 57,                     /* start  */
  YYSYMBOL_build = 58,                     /* build  */
  YYSYMBOL_function = 59,                  /* function  */
  YYSYMBOL_type = 60,                      /* type  */
  YYSYMBOL_pointer = 61,                   /* pointer  */
  YYSYMBOL_data_type = 62,                 /* data_type  */
  YYSYMBOL_sign_spec = 63,                 /* sign_spec  */
  YYSYMBOL_type_spec = 64,                 /* type_spec  */
  YYSYMBOL_arg_list = 65,                  /* arg_list  */
  YYSYMBOL_arguments = 66,                 /* arguments  */
  YYSYMBOL_arg = 67,                       /* arg  */
  YYSYMBOL_stmt = 68,                      /* stmt  */
  YYSYMBOL_compound_stmt = 69,             /* compound_stmt  */
  YYSYMBOL_statements = 70,                /* statements  */
  YYSYMBOL_single_stmt = 71,               /* single_stmt  */
  YYSYMBOL_for_loop = 72,                  /* for_loop  */
  YYSYMBOL_if_block = 73,                  /* if_block  */
  YYSYMBOL_while_loop = 74,                /* while_loop  */
  YYSYMBOL_declaration = 75,               /* declaration  */
  YYSYMBOL_declaration_list = 76,          /* declaration_list  */
  YYSYMBOL_sub_decl = 77,                  /* sub_decl  */
  YYSYMBOL_expression_stmt = 78,           /* expression_stmt  */
  YYSYMBOL_expression = 79,                /* expression  */
  YYSYMBOL_sub_expr = 80,                  /* sub_expr  */
  YYSYMBOL_assignment_expr = 81,           /* assignment_expr  */
  YYSYMBOL_unary_expr = 82,                /* unary_expr  */
  YYSYMBOL_lhs = 83,                       /* lhs  */
  YYSYMBOL_assign_op = 84,                 /* assign_op  */
  YYSYMBOL_arithmetic_expr = 85,           /* arithmetic_expr  */
  YYSYMBOL_constant = 86,                  /* constant  */
  YYSYMBOL_array_index = 87,               /* array_index  */
  YYSYMBOL_function_call = 88,             /* function_call  */
  YYSYMBOL_parameter_list = 89,            /* parameter_list  */
  YYSYMBOL_parameter = 90                  /* parameter  */
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
#define YYFINAL  36
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   398

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  108
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  178

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   293


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
       2,     2,     2,    45,     2,     2,     2,    44,     2,     2,
      49,    50,    42,    40,    36,    41,     2,    43,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    53,
      38,    37,    39,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    54,     2,    55,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    51,     2,    52,     2,     2,     2,     2,
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
      35,    46,    47,    48
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    71,    71,    72,    76,    77,    80,    82,    83,    85,
      86,    89,    90,    93,    94,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   111,   111,   113,
     114,   116,   118,   119,   122,   124,   124,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   137,   138,   141,   142,
     145,   148,   149,   150,   152,   153,   155,   156,   157,   160,
     161,   165,   166,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   185,   186,   187,   188,   189,
     193,   194,   195,   196,   198,   201,   202,   203,   204,   205,
     206,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     220,   221,   224,   226,   227,   231,   232,   235,   236
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
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER",
  "DEC_CONSTANT", "HEX_CONSTANT", "STRING", "SHORT", "INT", "LONG",
  "LONG_LONG", "FLOAT", "DOUBLE", "CHAR", "SIGNED", "UNSIGNED", "CONST",
  "IF", "FOR", "WHILE", "CONTINUE", "BREAK", "RETURN", "LOGICAL_AND",
  "LOGICAL_OR", "LESS_THAN_EQ", "GR_THAN_EQ", "EQ", "NOT_EQ", "INCREMENT",
  "DECREMENT", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "PLUS_ASSIGN",
  "MINUS_ASSIGN", "','", "'='", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'",
  "'%'", "'!'", "UMINUS", "LOWER_THAN_ELSE", "ELSE", "'('", "')'", "'{'",
  "'}'", "';'", "'['", "']'", "$accept", "start", "build", "function",
  "type", "pointer", "data_type", "sign_spec", "type_spec", "arg_list",
  "arguments", "arg", "stmt", "compound_stmt", "statements", "single_stmt",
  "for_loop", "if_block", "while_loop", "declaration", "declaration_list",
  "sub_decl", "expression_stmt", "expression", "sub_expr",
  "assignment_expr", "unary_expr", "lhs", "assign_op", "arithmetic_expr",
  "constant", "array_index", "function_call", "parameter_list",
  "parameter", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-139)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-85)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     301,   -28,     7,  -139,   151,   240,  -139,  -139,  -139,  -139,
    -139,     6,     6,   277,  -139,  -139,     8,   -38,   378,  -139,
    -139,     4,  -139,  -139,   286,   338,  -139,   211,  -139,  -139,
    -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,    92,    39,
     361,   -38,  -139,  -139,   114,  -139,  -139,  -139,  -139,  -139,
    -139,  -139,  -139,   124,  -139,  -139,   217,   347,  -139,  -139,
      28,   211,    28,   244,  -139,   361,   187,  -139,   351,  -139,
    -139,  -139,  -139,    17,   103,  -139,   187,  -139,  -139,  -139,
    -139,  -139,   253,   211,   211,   211,   211,   211,   211,   211,
     211,  -139,    28,    28,    28,    28,    28,    36,     2,    14,
    -139,   194,  -139,   315,   236,  -139,  -139,    46,    46,  -139,
    -139,   169,   169,  -139,  -139,  -139,  -139,    29,   351,  -139,
    -139,   309,    98,  -139,  -139,  -139,  -139,   204,  -139,   174,
    -139,   183,    32,    41,    64,    71,    72,    25,  -139,   114,
    -139,  -139,  -139,  -139,  -139,  -139,  -139,    89,   211,    38,
     211,  -139,  -139,  -139,    -4,  -139,   113,   309,  -139,    38,
      78,   122,  -139,   211,    86,   106,  -139,    86,   309,   102,
      86,   130,  -139,    86,  -139,    86,  -139,  -139
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    84,    17,    15,    18,    19,    22,    24,    23,    13,
      14,     0,     0,     0,     3,     4,     0,     8,     0,    12,
       5,     0,    55,    56,     0,     0,    58,     0,    16,    20,
      25,    21,    26,    84,    83,    82,     1,     2,    84,     0,
       0,    10,     7,    11,     0,    52,    88,    89,    90,    86,
      87,    85,    53,     0,    80,    81,     0,    98,   100,   101,
       0,     0,     0,     0,    73,    74,    72,    99,    28,    51,
       9,    54,    79,     0,    98,    78,    75,    76,    77,    98,
      97,    71,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,     0,     0,     0,     0,     0,     0,    27,
      30,     0,    96,    69,    70,    67,    68,    65,    66,    64,
      63,    91,    92,    93,    94,    95,    31,     0,     0,   108,
     104,   107,     0,   106,    36,     6,    29,     0,   103,     0,
     105,    84,     0,     0,     0,     0,     0,     0,    34,     0,
      35,    32,    33,    38,    37,    39,    40,     0,     0,     0,
       0,    43,    44,    42,     0,    41,     0,    62,    60,     0,
       0,     0,    45,     0,     0,     0,    59,     0,    61,    48,
       0,     0,    50,     0,    46,     0,    49,    47
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -139,  -139,   147,  -139,     5,   120,  -139,  -139,   160,  -139,
    -139,    51,   182,    62,  -139,  -139,  -139,  -139,  -139,   205,
     -13,   146,    42,  -138,   -25,     1,     0,    -5,   177,    26,
    -139,   150,   161,  -139,   111
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    13,    14,    15,   139,    42,    17,    18,    19,    98,
      99,   100,   140,   141,   129,   142,   143,   144,   145,   146,
      21,    22,   159,   160,   157,    64,    65,    25,    53,    66,
      67,    26,   147,   122,   123
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      24,    23,    63,    39,    41,    16,    34,    35,   -57,    33,
     156,    38,   161,    24,    23,    28,    40,    23,    16,    83,
      84,    85,    86,    87,    88,   -57,    27,   171,    57,    58,
      59,    79,    58,    59,    89,    90,    81,    11,    12,   116,
      44,    57,    58,    59,    40,    23,    54,    55,    73,   162,
     118,    73,   117,    72,    11,    12,    75,    45,   103,   104,
     105,   106,   107,   108,   109,   110,    60,    11,    12,    60,
      61,    85,    86,    97,    62,    44,   121,    62,   153,    60,
     124,   148,    76,    61,    89,    90,    80,    62,    82,   131,
     149,   158,    69,     2,     3,     4,     5,     6,     7,     8,
       9,    10,   121,   132,   133,   134,   135,   136,   137,    57,
      58,    59,   154,   150,   163,    11,    12,     1,   111,   112,
     113,   114,   115,    97,   151,   152,    39,    33,   -57,    24,
      23,   166,   -84,   -84,   127,    11,    12,   124,   168,    40,
      23,    68,   155,    11,    12,   -57,    27,    60,   128,   163,
     173,    61,   101,    11,    12,    62,   170,    27,   163,    29,
      37,    70,    30,   164,    24,    23,   163,    24,    23,   126,
      24,    23,   167,    24,    23,    24,    23,   131,    43,   125,
     175,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      71,   132,   133,   134,   135,   136,   137,    57,    58,    59,
     119,   165,    56,    11,    12,    20,    77,    57,    58,    59,
     119,    94,    95,    96,    57,    58,    59,    78,    20,   -57,
      74,    58,    59,    11,    12,   124,   138,    92,    93,    94,
      95,    96,   101,    11,    12,    60,   -57,    27,   130,    61,
      11,    12,     0,    62,   120,    60,    11,    12,    31,    61,
       0,    32,    60,    62,     0,     0,    61,     0,    60,    83,
      62,    85,    86,    87,    88,     0,    62,    83,    84,    85,
      86,    87,    88,     0,    89,    90,     0,    36,     0,     0,
       1,     0,    89,    90,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    92,    93,    94,    95,    96,     0,    91,
       0,     0,     0,   102,     1,     0,    11,    12,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    46,    47,    48,
      49,    50,     0,    51,     0,     0,     0,     0,     0,     0,
      11,    12,    83,    84,    85,    86,    87,    88,     0,    52,
      85,    86,    87,    88,     0,     0,   169,    89,    90,   172,
       0,     0,   174,    89,    90,   176,     0,   177,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    54,    55,    46,
      47,    48,    49,    50,     0,    51,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,     0,   -84,     2,     3,     4,     5,     6,
       7,     8,    46,    47,    48,    49,    50,     0,    51
};

static const yytype_int16 yycheck[] =
{
       0,     0,    27,    16,    42,     0,    11,    12,    36,     3,
     148,     3,   150,    13,    13,     8,    16,    16,    13,    23,
      24,    25,    26,    27,    28,    53,    54,   165,     3,     4,
       5,     3,     4,     5,    38,    39,    61,    29,    30,     3,
      36,     3,     4,     5,    44,    44,    29,    30,    53,    53,
      36,    56,    50,    53,    29,    30,    56,    53,    83,    84,
      85,    86,    87,    88,    89,    90,    41,    29,    30,    41,
      45,    25,    26,    68,    49,    36,   101,    49,    53,    41,
      51,    49,    56,    45,    38,    39,    60,    49,    62,     3,
      49,    53,    53,     7,     8,     9,    10,    11,    12,    13,
      14,    15,   127,    17,    18,    19,    20,    21,    22,     3,
       4,     5,   137,    49,    36,    29,    30,     3,    92,    93,
      94,    95,    96,   118,    53,    53,   139,     3,    36,   129,
     129,    53,    29,    30,    36,    29,    30,    51,   163,   139,
     139,    49,    53,    29,    30,    53,    54,    41,    50,    36,
      48,    45,    49,    29,    30,    49,    50,    54,    36,     8,
      13,    41,    11,    50,   164,   164,    36,   167,   167,   118,
     170,   170,    50,   173,   173,   175,   175,     3,    18,   117,
      50,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      44,    17,    18,    19,    20,    21,    22,     3,     4,     5,
       6,   159,    25,    29,    30,     0,    56,     3,     4,     5,
       6,    42,    43,    44,     3,     4,     5,    56,    13,    36,
       3,     4,     5,    29,    30,    51,    52,    40,    41,    42,
      43,    44,    49,    29,    30,    41,    53,    54,   127,    45,
      29,    30,    -1,    49,    50,    41,    29,    30,     8,    45,
      -1,    11,    41,    49,    -1,    -1,    45,    -1,    41,    23,
      49,    25,    26,    27,    28,    -1,    49,    23,    24,    25,
      26,    27,    28,    -1,    38,    39,    -1,     0,    -1,    -1,
       3,    -1,    38,    39,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    40,    41,    42,    43,    44,    -1,    55,
      -1,    -1,    -1,    50,     3,    -1,    29,    30,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    31,    32,    33,
      34,    35,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    30,    23,    24,    25,    26,    27,    28,    -1,    53,
      25,    26,    27,    28,    -1,    -1,   164,    38,    39,   167,
      -1,    -1,   170,    38,    39,   173,    -1,   175,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    29,    30,    31,    32,
      33,    34,    35,    -1,    37,     7,     8,     9,    10,    11,
      12,    13,    31,    32,    33,    34,    35,    -1,    37
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    29,    30,    57,    58,    59,    60,    62,    63,    64,
      75,    76,    77,    81,    82,    83,    87,    54,     8,     8,
      11,     8,    11,     3,    83,    83,     0,    58,     3,    76,
      82,    42,    61,    64,    36,    53,    31,    32,    33,    34,
      35,    37,    53,    84,    29,    30,    84,     3,     4,     5,
      41,    45,    49,    80,    81,    82,    85,    86,    49,    53,
      61,    77,    82,    83,     3,    82,    85,    87,    88,     3,
      85,    80,    85,    23,    24,    25,    26,    27,    28,    38,
      39,    55,    40,    41,    42,    43,    44,    60,    65,    66,
      67,    49,    50,    80,    80,    80,    80,    80,    80,    80,
      80,    85,    85,    85,    85,    85,     3,    50,    36,     6,
      50,    80,    89,    90,    51,    69,    67,    36,    50,    70,
      90,     3,    17,    18,    19,    20,    21,    22,    52,    60,
      68,    69,    71,    72,    73,    74,    75,    88,    49,    49,
      49,    53,    53,    53,    80,    53,    79,    80,    53,    78,
      79,    79,    53,    36,    50,    78,    53,    50,    80,    68,
      50,    79,    68,    48,    68,    50,    68,    68
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    56,    57,    57,    58,    58,    59,    60,    60,    61,
      61,    62,    62,    63,    63,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    65,    65,    66,
      66,    67,    68,    68,    69,    70,    70,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    72,    72,    73,    73,
      74,    75,    75,    75,    76,    76,    77,    77,    77,    78,
      78,    79,    79,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    81,    81,    81,    81,    81,
      82,    82,    82,    82,    83,    84,    84,    84,    84,    84,
      84,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      86,    86,    87,    88,    88,    89,    89,    90,    90
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     1,     1,     6,     2,     1,     2,
       1,     2,     1,     1,     1,     1,     2,     1,     1,     1,
       2,     2,     1,     1,     1,     2,     2,     1,     0,     3,
       1,     2,     1,     1,     3,     2,     0,     1,     1,     1,
       1,     2,     2,     2,     2,     3,     6,     7,     5,     7,
       5,     3,     2,     2,     3,     1,     1,     1,     1,     2,
       1,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     1,     1,     1,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     2,     1,     1,
       1,     1,     4,     4,     3,     3,     1,     1,     1
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
  case 15: /* type_spec: INT  */
#line 97 "parse.y"
              {current_dtype=INT;}
#line 1461 "y.tab.c"
    break;

  case 16: /* type_spec: SHORT INT  */
#line 98 "parse.y"
                   {current_dtype=SHORT;}
#line 1467 "y.tab.c"
    break;

  case 17: /* type_spec: SHORT  */
#line 99 "parse.y"
                   {current_dtype=SHORT;}
#line 1473 "y.tab.c"
    break;

  case 18: /* type_spec: LONG  */
#line 100 "parse.y"
                {current_dtype=LONG;}
#line 1479 "y.tab.c"
    break;

  case 19: /* type_spec: LONG_LONG  */
#line 101 "parse.y"
                   {current_dtype=LONG_LONG;}
#line 1485 "y.tab.c"
    break;

  case 20: /* type_spec: LONG INT  */
#line 102 "parse.y"
                  {current_dtype=LONG;}
#line 1491 "y.tab.c"
    break;

  case 21: /* type_spec: LONG_LONG INT  */
#line 103 "parse.y"
                       {current_dtype=LONG_LONG;}
#line 1497 "y.tab.c"
    break;

  case 22: /* type_spec: FLOAT  */
#line 104 "parse.y"
                {current_dtype=FLOAT;}
#line 1503 "y.tab.c"
    break;

  case 23: /* type_spec: CHAR  */
#line 105 "parse.y"
                {current_dtype=CHAR;}
#line 1509 "y.tab.c"
    break;

  case 24: /* type_spec: DOUBLE  */
#line 106 "parse.y"
                {current_dtype=DOUBLE;}
#line 1515 "y.tab.c"
    break;

  case 25: /* type_spec: LONG FLOAT  */
#line 107 "parse.y"
                       {current_dtype=LONG;}
#line 1521 "y.tab.c"
    break;

  case 26: /* type_spec: LONG_LONG FLOAT  */
#line 108 "parse.y"
                         {current_dtype=LONG_LONG;}
#line 1527 "y.tab.c"
    break;

  case 57: /* sub_decl: IDENTIFIER  */
#line 156 "parse.y"
                                    {(yyvsp[0].entry) -> data_type = current_dtype;}
#line 1533 "y.tab.c"
    break;

  case 61: /* expression: expression ',' sub_expr  */
#line 165 "parse.y"
                                                                                                {(yyval.dval) = (yyvsp[-2].dval),(yyvsp[0].dval);}
#line 1539 "y.tab.c"
    break;

  case 62: /* expression: sub_expr  */
#line 166 "parse.y"
                                                            {(yyval.dval) = (yyvsp[0].dval);}
#line 1545 "y.tab.c"
    break;

  case 63: /* sub_expr: sub_expr '>' sub_expr  */
#line 169 "parse.y"
                                                                        {(yyval.dval) = ((yyvsp[-2].dval) > (yyvsp[0].dval));}
#line 1551 "y.tab.c"
    break;

  case 64: /* sub_expr: sub_expr '<' sub_expr  */
#line 170 "parse.y"
                                                                        {(yyval.dval) = ((yyvsp[-2].dval) < (yyvsp[0].dval));}
#line 1557 "y.tab.c"
    break;

  case 65: /* sub_expr: sub_expr EQ sub_expr  */
#line 171 "parse.y"
                                                                        {(yyval.dval) = ((yyvsp[-2].dval) == (yyvsp[0].dval));}
#line 1563 "y.tab.c"
    break;

  case 66: /* sub_expr: sub_expr NOT_EQ sub_expr  */
#line 172 "parse.y"
                                                {(yyval.dval) = ((yyvsp[-2].dval) != (yyvsp[0].dval));}
#line 1569 "y.tab.c"
    break;

  case 67: /* sub_expr: sub_expr LESS_THAN_EQ sub_expr  */
#line 173 "parse.y"
                                                       {(yyval.dval) = ((yyvsp[-2].dval) <= (yyvsp[0].dval));}
#line 1575 "y.tab.c"
    break;

  case 68: /* sub_expr: sub_expr GR_THAN_EQ sub_expr  */
#line 174 "parse.y"
                                                     {(yyval.dval) = ((yyvsp[-2].dval) >= (yyvsp[0].dval));}
#line 1581 "y.tab.c"
    break;

  case 69: /* sub_expr: sub_expr LOGICAL_AND sub_expr  */
#line 175 "parse.y"
                                                    {(yyval.dval) = ((yyvsp[-2].dval) && (yyvsp[0].dval));}
#line 1587 "y.tab.c"
    break;

  case 70: /* sub_expr: sub_expr LOGICAL_OR sub_expr  */
#line 176 "parse.y"
                                                    {(yyval.dval) = ((yyvsp[-2].dval) || (yyvsp[0].dval));}
#line 1593 "y.tab.c"
    break;

  case 71: /* sub_expr: '!' sub_expr  */
#line 177 "parse.y"
                                                    {(yyval.dval) = (!(yyvsp[0].dval));}
#line 1599 "y.tab.c"
    break;

  case 72: /* sub_expr: arithmetic_expr  */
#line 178 "parse.y"
                                                                                {(yyval.dval) = (yyvsp[0].dval);}
#line 1605 "y.tab.c"
    break;

  case 73: /* sub_expr: assignment_expr  */
#line 179 "parse.y"
                                                {(yyval.dval) = (yyvsp[0].dval);}
#line 1611 "y.tab.c"
    break;

  case 74: /* sub_expr: unary_expr  */
#line 180 "parse.y"
                                                    {(yyval.dval) = (yyvsp[0].dval);}
#line 1617 "y.tab.c"
    break;

  case 75: /* assignment_expr: lhs assign_op arithmetic_expr  */
#line 185 "parse.y"
                                                   {(yyval.dval) = (yyvsp[-2].entry)->token_val = Evaluate((yyvsp[-2].entry)->token_val,(yyvsp[-1].ival),(yyvsp[0].dval));}
#line 1623 "y.tab.c"
    break;

  case 76: /* assignment_expr: lhs assign_op array_index  */
#line 186 "parse.y"
                                                   {(yyval.dval) = 0;}
#line 1629 "y.tab.c"
    break;

  case 77: /* assignment_expr: lhs assign_op function_call  */
#line 187 "parse.y"
                                                   {(yyval.dval) = 0;}
#line 1635 "y.tab.c"
    break;

  case 78: /* assignment_expr: lhs assign_op unary_expr  */
#line 188 "parse.y"
                                                       {(yyval.dval) = (yyvsp[-2].entry)->token_val = Evaluate((yyvsp[-2].entry)->token_val,(yyvsp[-1].ival),(yyvsp[0].dval));}
#line 1641 "y.tab.c"
    break;

  case 79: /* assignment_expr: unary_expr assign_op unary_expr  */
#line 189 "parse.y"
                                                       {(yyval.dval) = 0;}
#line 1647 "y.tab.c"
    break;

  case 80: /* unary_expr: lhs INCREMENT  */
#line 193 "parse.y"
                                                       {(yyval.dval) = (yyvsp[-1].entry)->token_val = ((yyvsp[-1].entry)->token_val)++;}
#line 1653 "y.tab.c"
    break;

  case 81: /* unary_expr: lhs DECREMENT  */
#line 194 "parse.y"
                                                       {(yyval.dval) = (yyvsp[-1].entry)->token_val = ((yyvsp[-1].entry)->token_val)--;}
#line 1659 "y.tab.c"
    break;

  case 82: /* unary_expr: DECREMENT lhs  */
#line 195 "parse.y"
                                                       {(yyval.dval) = (yyvsp[0].entry)->token_val = --((yyvsp[0].entry)->token_val);}
#line 1665 "y.tab.c"
    break;

  case 83: /* unary_expr: INCREMENT lhs  */
#line 196 "parse.y"
                                                       {(yyval.dval) = (yyvsp[0].entry)->token_val = ++((yyvsp[0].entry)->token_val);}
#line 1671 "y.tab.c"
    break;

  case 85: /* assign_op: '='  */
#line 201 "parse.y"
                                                   {(yyval.ival) = '=';}
#line 1677 "y.tab.c"
    break;

  case 86: /* assign_op: PLUS_ASSIGN  */
#line 202 "parse.y"
                                                {(yyval.ival) = PLUS_ASSIGN;}
#line 1683 "y.tab.c"
    break;

  case 87: /* assign_op: MINUS_ASSIGN  */
#line 203 "parse.y"
                                                   {(yyval.ival) = MINUS_ASSIGN;}
#line 1689 "y.tab.c"
    break;

  case 88: /* assign_op: MUL_ASSIGN  */
#line 204 "parse.y"
                                                   {(yyval.ival) = MUL_ASSIGN;}
#line 1695 "y.tab.c"
    break;

  case 89: /* assign_op: DIV_ASSIGN  */
#line 205 "parse.y"
                                                   {(yyval.ival) = DIV_ASSIGN;}
#line 1701 "y.tab.c"
    break;

  case 90: /* assign_op: MOD_ASSIGN  */
#line 206 "parse.y"
                                                   {(yyval.ival) = MOD_ASSIGN;}
#line 1707 "y.tab.c"
    break;

  case 91: /* arithmetic_expr: arithmetic_expr '+' arithmetic_expr  */
#line 209 "parse.y"
                                                        {(yyval.dval) = (yyvsp[-2].dval) + (yyvsp[0].dval);}
#line 1713 "y.tab.c"
    break;

  case 92: /* arithmetic_expr: arithmetic_expr '-' arithmetic_expr  */
#line 210 "parse.y"
                                                        {(yyval.dval) = (yyvsp[-2].dval) - (yyvsp[0].dval);}
#line 1719 "y.tab.c"
    break;

  case 93: /* arithmetic_expr: arithmetic_expr '*' arithmetic_expr  */
#line 211 "parse.y"
                                                        {(yyval.dval) = (yyvsp[-2].dval) * (yyvsp[0].dval);}
#line 1725 "y.tab.c"
    break;

  case 94: /* arithmetic_expr: arithmetic_expr '/' arithmetic_expr  */
#line 212 "parse.y"
                                                        {(yyval.dval) = ((yyvsp[0].dval) == 0) ? yyerror("Divide by 0!") : ((yyvsp[-2].dval) / (yyvsp[0].dval));}
#line 1731 "y.tab.c"
    break;

  case 95: /* arithmetic_expr: arithmetic_expr '%' arithmetic_expr  */
#line 213 "parse.y"
                                                            {(yyval.dval) = (int)(yyvsp[-2].dval) % (int)(yyvsp[0].dval);}
#line 1737 "y.tab.c"
    break;

  case 96: /* arithmetic_expr: '(' arithmetic_expr ')'  */
#line 214 "parse.y"
                                                            {(yyval.dval) = (yyvsp[-1].dval);}
#line 1743 "y.tab.c"
    break;

  case 97: /* arithmetic_expr: '-' arithmetic_expr  */
#line 215 "parse.y"
                                                        {(yyval.dval) = -(yyvsp[0].dval);}
#line 1749 "y.tab.c"
    break;

  case 98: /* arithmetic_expr: IDENTIFIER  */
#line 216 "parse.y"
                                                        {(yyval.dval) = (yyvsp[0].entry) -> token_val;}
#line 1755 "y.tab.c"
    break;

  case 99: /* arithmetic_expr: constant  */
#line 217 "parse.y"
                                                        {(yyval.dval) = (yyvsp[0].dval);}
#line 1761 "y.tab.c"
    break;

  case 100: /* constant: DEC_CONSTANT  */
#line 220 "parse.y"
                                                        {(yyval.dval) = (yyvsp[0].dval);}
#line 1767 "y.tab.c"
    break;

  case 101: /* constant: HEX_CONSTANT  */
#line 221 "parse.y"
                                                        {(yyval.dval) = (yyvsp[0].dval);}
#line 1773 "y.tab.c"
    break;


#line 1777 "y.tab.c"

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

#line 239 "parse.y"




double Evaluate (double lhs_value,int assign_type,double rhs_value)
{
	switch(assign_type)
	{
		case '=': return rhs_value;
		case PLUS_ASSIGN: return (lhs_value + rhs_value);
		case MINUS_ASSIGN: return (lhs_value - rhs_value);
		case MUL_ASSIGN: return (lhs_value * rhs_value);
		case DIV_ASSIGN: return (lhs_value / rhs_value);
		case MOD_ASSIGN: return ((int)lhs_value % (int)rhs_value);
	}
}

int main(){
	symbol_table=create_table();
	constant_table=create_table();
	extern FILE *yyin;
	yyin=fopen("test input/input1.c","r");
	yylex();
	yyparse();
	printf("\n\tSymbol table");
	display(symbol_table);


	return 0;
}

int yyerror(char *msg)
{
	printf("Line no: %d Error message: %s Token: %s\n", yylineno, msg, yytext);
}
