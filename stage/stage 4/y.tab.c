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
#line 1 "exprtree.y"

	#include <stdlib.h>
	#include <string.h>
	#include <stdio.h>
	#include "exprtree.h"
	#include "exprtree.c"
	extern FILE *yyin;
	int yylex(void);
	int yyerror();
	int binding = 4095;
	struct Gsymbol *gst;

#line 84 "y.tab.c"

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
    DECL = 258,                    /* DECL  */
    ENDDECL = 259,                 /* ENDDECL  */
    INTTYPE = 260,                 /* INTTYPE  */
    STRTYPE = 261,                 /* STRTYPE  */
    READ = 262,                    /* READ  */
    WRITE = 263,                   /* WRITE  */
    NUM = 264,                     /* NUM  */
    ID = 265,                      /* ID  */
    WORD = 266,                    /* WORD  */
    EQUAL = 267,                   /* EQUAL  */
    PLUS = 268,                    /* PLUS  */
    MINUS = 269,                   /* MINUS  */
    MUL = 270,                     /* MUL  */
    DIV = 271,                     /* DIV  */
    MOD = 272,                     /* MOD  */
    END = 273,                     /* END  */
    BEG = 274,                     /* BEG  */
    LT = 275,                      /* LT  */
    LTEQ = 276,                    /* LTEQ  */
    GT = 277,                      /* GT  */
    GTEQ = 278,                    /* GTEQ  */
    EQEQ = 279,                    /* EQEQ  */
    NOEQ = 280,                    /* NOEQ  */
    IF = 281,                      /* IF  */
    THEN = 282,                    /* THEN  */
    ELSE = 283,                    /* ELSE  */
    ENDIF = 284,                   /* ENDIF  */
    WHILE = 285,                   /* WHILE  */
    DO = 286,                      /* DO  */
    ENDWHILE = 287,                /* ENDWHILE  */
    CONTINUE = 288,                /* CONTINUE  */
    BREAK = 289,                   /* BREAK  */
    REPEAT = 290,                  /* REPEAT  */
    UNTIL = 291                    /* UNTIL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define DECL 258
#define ENDDECL 259
#define INTTYPE 260
#define STRTYPE 261
#define READ 262
#define WRITE 263
#define NUM 264
#define ID 265
#define WORD 266
#define EQUAL 267
#define PLUS 268
#define MINUS 269
#define MUL 270
#define DIV 271
#define MOD 272
#define END 273
#define BEG 274
#define LT 275
#define LTEQ 276
#define GT 277
#define GTEQ 278
#define EQEQ 279
#define NOEQ 280
#define IF 281
#define THEN 282
#define ELSE 283
#define ENDIF 284
#define WHILE 285
#define DO 286
#define ENDWHILE 287
#define CONTINUE 288
#define BREAK 289
#define REPEAT 290
#define UNTIL 291

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "exprtree.y"

	struct tnode *no;
	struct Gsymbol *Symbols;
	struct Paramstruct *parameter; 
	int number;
	char* name;

#line 217 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
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
  YYSYMBOL_DECL = 3,                       /* DECL  */
  YYSYMBOL_ENDDECL = 4,                    /* ENDDECL  */
  YYSYMBOL_INTTYPE = 5,                    /* INTTYPE  */
  YYSYMBOL_STRTYPE = 6,                    /* STRTYPE  */
  YYSYMBOL_READ = 7,                       /* READ  */
  YYSYMBOL_WRITE = 8,                      /* WRITE  */
  YYSYMBOL_NUM = 9,                        /* NUM  */
  YYSYMBOL_ID = 10,                        /* ID  */
  YYSYMBOL_WORD = 11,                      /* WORD  */
  YYSYMBOL_EQUAL = 12,                     /* EQUAL  */
  YYSYMBOL_PLUS = 13,                      /* PLUS  */
  YYSYMBOL_MINUS = 14,                     /* MINUS  */
  YYSYMBOL_MUL = 15,                       /* MUL  */
  YYSYMBOL_DIV = 16,                       /* DIV  */
  YYSYMBOL_MOD = 17,                       /* MOD  */
  YYSYMBOL_END = 18,                       /* END  */
  YYSYMBOL_BEG = 19,                       /* BEG  */
  YYSYMBOL_LT = 20,                        /* LT  */
  YYSYMBOL_LTEQ = 21,                      /* LTEQ  */
  YYSYMBOL_GT = 22,                        /* GT  */
  YYSYMBOL_GTEQ = 23,                      /* GTEQ  */
  YYSYMBOL_EQEQ = 24,                      /* EQEQ  */
  YYSYMBOL_NOEQ = 25,                      /* NOEQ  */
  YYSYMBOL_IF = 26,                        /* IF  */
  YYSYMBOL_THEN = 27,                      /* THEN  */
  YYSYMBOL_ELSE = 28,                      /* ELSE  */
  YYSYMBOL_ENDIF = 29,                     /* ENDIF  */
  YYSYMBOL_WHILE = 30,                     /* WHILE  */
  YYSYMBOL_DO = 31,                        /* DO  */
  YYSYMBOL_ENDWHILE = 32,                  /* ENDWHILE  */
  YYSYMBOL_CONTINUE = 33,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 34,                     /* BREAK  */
  YYSYMBOL_REPEAT = 35,                    /* REPEAT  */
  YYSYMBOL_UNTIL = 36,                     /* UNTIL  */
  YYSYMBOL_37_ = 37,                       /* '('  */
  YYSYMBOL_38_ = 38,                       /* ')'  */
  YYSYMBOL_39_ = 39,                       /* ';'  */
  YYSYMBOL_40_ = 40,                       /* ','  */
  YYSYMBOL_41_ = 41,                       /* '['  */
  YYSYMBOL_42_ = 42,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 43,                  /* $accept  */
  YYSYMBOL_program = 44,                   /* program  */
  YYSYMBOL_Slist = 45,                     /* Slist  */
  YYSYMBOL_Stmt = 46,                      /* Stmt  */
  YYSYMBOL_Ifstmt = 47,                    /* Ifstmt  */
  YYSYMBOL_Whilestmt = 48,                 /* Whilestmt  */
  YYSYMBOL_InputStmt = 49,                 /* InputStmt  */
  YYSYMBOL_OuptputStmt = 50,               /* OuptputStmt  */
  YYSYMBOL_AsgStmt = 51,                   /* AsgStmt  */
  YYSYMBOL_Word = 52,                      /* Word  */
  YYSYMBOL_Continue = 53,                  /* Continue  */
  YYSYMBOL_Break = 54,                     /* Break  */
  YYSYMBOL_Declarations = 55,              /* Declarations  */
  YYSYMBOL_DeclList = 56,                  /* DeclList  */
  YYSYMBOL_Decl = 57,                      /* Decl  */
  YYSYMBOL_GidList = 58,                   /* GidList  */
  YYSYMBOL_Gid = 59,                       /* Gid  */
  YYSYMBOL_ParamList = 60,                 /* ParamList  */
  YYSYMBOL_Param = 61,                     /* Param  */
  YYSYMBOL_Type = 62,                      /* Type  */
  YYSYMBOL_expr = 63,                      /* expr  */
  YYSYMBOL_IDENTIFIER = 64                 /* IDENTIFIER  */
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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   367

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  58
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  132

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   291


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
      37,    38,     2,     2,    40,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    39,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    41,     2,    42,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    61,    61,    72,    73,    76,    77,    80,    81,    82,
      83,    84,    85,    86,    89,    90,    93,    94,    95,    98,
     101,   102,   105,   106,   109,   112,   115,   118,   125,   128,
     129,   132,   143,   144,   147,   148,   149,   150,   153,   154,
     157,   160,   161,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   179,   180
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
  "\"end of file\"", "error", "\"invalid token\"", "DECL", "ENDDECL",
  "INTTYPE", "STRTYPE", "READ", "WRITE", "NUM", "ID", "WORD", "EQUAL",
  "PLUS", "MINUS", "MUL", "DIV", "MOD", "END", "BEG", "LT", "LTEQ", "GT",
  "GTEQ", "EQEQ", "NOEQ", "IF", "THEN", "ELSE", "ENDIF", "WHILE", "DO",
  "ENDWHILE", "CONTINUE", "BREAK", "REPEAT", "UNTIL", "'('", "')'", "';'",
  "','", "'['", "']'", "$accept", "program", "Slist", "Stmt", "Ifstmt",
  "Whilestmt", "InputStmt", "OuptputStmt", "AsgStmt", "Word", "Continue",
  "Break", "Declarations", "DeclList", "Decl", "GidList", "Gid",
  "ParamList", "Param", "Type", "expr", "IDENTIFIER", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-38)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -1,    38,    -4,    26,     3,   -38,   -38,   -38,    76,   -38,
      24,   -38,   -38,   117,   -38,   -38,   -30,   -11,   -38,    21,
      52,    15,   -38,    55,    60,   192,    29,    47,   192,   146,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,    86,    19,
      90,   -38,    24,    91,    22,    30,    30,    30,   198,   -38,
     -38,    80,   -38,   -38,    22,   -38,   -19,   -38,    97,    58,
     -38,    82,   -38,   -38,    30,    84,   234,   -38,    49,   253,
     272,    89,    92,    93,   221,   -38,    31,   -38,   -38,    94,
     291,    95,    30,    30,    30,    30,    30,    30,    30,    30,
      30,    30,    30,    99,   -38,    96,   100,    30,    30,   -38,
     -38,   -38,   -38,   -38,   -38,    68,    68,   -38,   -38,   -38,
      62,    62,    62,    62,    62,    62,   -38,   192,   192,   310,
     329,   111,   152,   -26,   110,   192,   -38,   -38,   -38,   -38,
     163,   -38
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,    28,    41,    42,     0,    30,
       0,     4,     1,     0,    27,    29,    37,     0,    33,     0,
       0,    57,     3,     0,     0,     0,     0,     0,     0,     0,
       6,    10,    11,     7,     8,     9,    12,    13,     0,     0,
       0,    31,     0,     0,     0,     0,     0,     0,     0,    25,
      26,     0,     2,     5,     0,    36,     0,    39,     0,     0,
      32,     0,    55,    24,     0,     0,     0,    56,     0,     0,
       0,     0,     0,     0,     0,    35,     0,    40,    34,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    58,     0,     0,     0,     0,    23,
      22,    38,    19,    54,    21,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    14,    16,    17,    18,
       0,    15
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -38,   -38,   -22,   -28,   -38,   -38,   -38,   -38,   -38,    74,
     -38,   -38,   -38,   -38,   122,   -38,   113,   -38,    81,   -35,
     -37,   -13
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,    29,    30,    31,    32,    33,    34,    35,    65,
      36,    37,     4,     8,     9,    17,    18,    56,    57,    10,
      66,    67
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      38,    53,     1,    48,    58,   118,    51,    39,    68,    69,
      70,    40,    38,   128,    11,    38,    38,    74,     2,    75,
      53,    76,    13,    53,     6,     7,    12,    80,    41,    42,
      61,    62,    21,    63,    16,    38,     6,     7,    38,    62,
      21,    58,     5,     6,     7,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,    45,    55,    43,    64,
     119,   120,    82,    83,    84,    85,    86,    64,    49,    87,
      88,    89,    90,    91,    92,    82,    83,    84,    85,    86,
      14,     6,     7,    84,    85,    86,    50,    19,    20,    44,
      21,    94,    46,    53,    53,   121,   122,    47,    54,    59,
      78,    21,    53,   130,    38,    38,    23,    77,    38,    38,
      24,    25,    38,    26,    27,    28,    72,    38,    19,    20,
      79,    21,    81,   117,    19,    20,    97,    21,    73,    98,
      15,   118,    99,   102,   104,    22,     0,    23,   116,   125,
     126,    24,    25,    23,    26,    27,    28,    24,    25,   129,
      26,    27,    28,    19,    20,    60,    21,   101,     0,    19,
      20,     0,    21,     0,    52,     0,     0,     0,     0,     0,
      19,    20,    23,    21,     0,     0,    24,    25,    23,    26,
      27,    28,    24,    25,   127,    26,    27,    28,     0,    23,
       0,     0,   131,    24,    25,     0,    26,    27,    28,    19,
      20,     0,    21,     0,     0,    19,    20,     0,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    23,     0,
       0,     0,    24,    25,    23,    26,    27,    28,    71,    25,
       0,    26,    27,    28,    82,    83,    84,    85,    86,     0,
       0,    87,    88,    89,    90,    91,    92,    82,    83,    84,
      85,    86,     0,     0,    87,    88,    89,    90,    91,    92,
     100,     0,     0,     0,     0,     0,    82,    83,    84,    85,
      86,     0,    93,    87,    88,    89,    90,    91,    92,     0,
       0,     0,     0,     0,     0,    82,    83,    84,    85,    86,
       0,    95,    87,    88,    89,    90,    91,    92,     0,     0,
       0,     0,     0,     0,    82,    83,    84,    85,    86,     0,
      96,    87,    88,    89,    90,    91,    92,     0,     0,     0,
       0,     0,     0,    82,    83,    84,    85,    86,     0,   103,
      87,    88,    89,    90,    91,    92,     0,     0,     0,     0,
       0,     0,    82,    83,    84,    85,    86,     0,   123,    87,
      88,    89,    90,    91,    92,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   124
};

static const yytype_int16 yycheck[] =
{
      13,    29,     3,    25,    39,    31,    28,    37,    45,    46,
      47,    41,    25,    39,    18,    28,    29,    54,    19,    38,
      48,    40,    19,    51,     5,     6,     0,    64,    39,    40,
      43,     9,    10,    11,    10,    48,     5,     6,    51,     9,
      10,    76,     4,     5,     6,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    41,    38,    37,    37,
      97,    98,    13,    14,    15,    16,    17,    37,    39,    20,
      21,    22,    23,    24,    25,    13,    14,    15,    16,    17,
       4,     5,     6,    15,    16,    17,    39,     7,     8,    37,
      10,    42,    37,   121,   122,   117,   118,    37,    12,     9,
      42,    10,   130,   125,   117,   118,    26,    10,   121,   122,
      30,    31,   125,    33,    34,    35,    36,   130,     7,     8,
      38,    10,    38,    27,     7,     8,    37,    10,    54,    37,
       8,    31,    39,    39,    39,    18,    -1,    26,    39,    28,
      29,    30,    31,    26,    33,    34,    35,    30,    31,    39,
      33,    34,    35,     7,     8,    42,    10,    76,    -1,     7,
       8,    -1,    10,    -1,    18,    -1,    -1,    -1,    -1,    -1,
       7,     8,    26,    10,    -1,    -1,    30,    31,    26,    33,
      34,    35,    30,    31,    32,    33,    34,    35,    -1,    26,
      -1,    -1,    29,    30,    31,    -1,    33,    34,    35,     7,
       8,    -1,    10,    -1,    -1,     7,     8,    -1,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    30,    31,    26,    33,    34,    35,    30,    31,
      -1,    33,    34,    35,    13,    14,    15,    16,    17,    -1,
      -1,    20,    21,    22,    23,    24,    25,    13,    14,    15,
      16,    17,    -1,    -1,    20,    21,    22,    23,    24,    25,
      39,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,    16,
      17,    -1,    38,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      -1,    38,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    -1,
      38,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    -1,    38,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    -1,    38,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    19,    44,    55,     4,     5,     6,    56,    57,
      62,    18,     0,    19,     4,    57,    10,    58,    59,     7,
       8,    10,    18,    26,    30,    31,    33,    34,    35,    45,
      46,    47,    48,    49,    50,    51,    53,    54,    64,    37,
      41,    39,    40,    37,    37,    41,    37,    37,    45,    39,
      39,    45,    18,    46,    12,    38,    60,    61,    62,     9,
      59,    64,     9,    11,    37,    52,    63,    64,    63,    63,
      63,    30,    36,    52,    63,    38,    40,    10,    42,    38,
      63,    38,    13,    14,    15,    16,    17,    20,    21,    22,
      23,    24,    25,    38,    42,    38,    38,    37,    37,    39,
      39,    61,    39,    38,    39,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    39,    27,    31,    63,
      63,    45,    45,    38,    38,    28,    29,    32,    39,    39,
      45,    29
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    44,    44,    45,    45,    46,    46,    46,
      46,    46,    46,    46,    47,    47,    48,    48,    48,    49,
      50,    50,    51,    51,    52,    53,    54,    55,    55,    56,
      56,    57,    58,    58,    59,    59,    59,    59,    60,    60,
      61,    62,    62,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    64,    64
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     3,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     7,     9,     7,     7,     7,     5,
       5,     5,     4,     4,     1,     2,     2,     3,     2,     2,
       1,     3,     3,     1,     4,     4,     3,     1,     3,     1,
       2,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     4
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
  case 2: /* program: Declarations BEG Slist END  */
#line 61 "exprtree.y"
                                     {
			printtree((yyvsp[-1].no));
			FILE* fp = fopen("a.xsm","wb");
			(yyval.no) = (yyvsp[-1].no);
			fprintf(fp, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",0,2056,0,0,0,0,0,0);
			fprintf(fp, "MOV SP,%d\n", binding);
			codeGen((yyvsp[-1].no),fp);
			fprintf(fp, "INT 10");
			fclose(fp);
			exit(0);
        }
#line 1397 "y.tab.c"
    break;

  case 3: /* program: Declarations BEG END  */
#line 72 "exprtree.y"
                                       {exit(0);}
#line 1403 "y.tab.c"
    break;

  case 4: /* program: BEG END  */
#line 73 "exprtree.y"
                          {exit(0);}
#line 1409 "y.tab.c"
    break;

  case 5: /* Slist: Slist Stmt  */
#line 76 "exprtree.y"
                   {(yyval.no) = createTree(-1,EMPTY_NODE,NULL,(yyvsp[-1].no),(yyvsp[0].no),NULL);}
#line 1415 "y.tab.c"
    break;

  case 6: /* Slist: Stmt  */
#line 77 "exprtree.y"
                   {(yyval.no) = (yyvsp[0].no);}
#line 1421 "y.tab.c"
    break;

  case 7: /* Stmt: InputStmt  */
#line 80 "exprtree.y"
                   {(yyval.no) = (yyvsp[0].no);}
#line 1427 "y.tab.c"
    break;

  case 8: /* Stmt: OuptputStmt  */
#line 81 "exprtree.y"
                   {(yyval.no) = (yyvsp[0].no);}
#line 1433 "y.tab.c"
    break;

  case 9: /* Stmt: AsgStmt  */
#line 82 "exprtree.y"
                       {(yyval.no) = (yyvsp[0].no);}
#line 1439 "y.tab.c"
    break;

  case 10: /* Stmt: Ifstmt  */
#line 83 "exprtree.y"
                           {(yyval.no) = (yyvsp[0].no);}
#line 1445 "y.tab.c"
    break;

  case 11: /* Stmt: Whilestmt  */
#line 84 "exprtree.y"
                       {(yyval.no) = (yyvsp[0].no);}
#line 1451 "y.tab.c"
    break;

  case 12: /* Stmt: Continue  */
#line 85 "exprtree.y"
                       {(yyval.no) = (yyvsp[0].no);}
#line 1457 "y.tab.c"
    break;

  case 13: /* Stmt: Break  */
#line 86 "exprtree.y"
                       {(yyval.no) = (yyvsp[0].no);}
#line 1463 "y.tab.c"
    break;

  case 14: /* Ifstmt: IF '(' expr ')' THEN Slist ENDIF  */
#line 89 "exprtree.y"
                                                                 { (yyval.no) = createTree(-1,IFELSE_NODE,NULL,(yyvsp[-4].no),(yyvsp[-1].no),NULL);}
#line 1469 "y.tab.c"
    break;

  case 15: /* Ifstmt: IF '(' expr ')' THEN Slist ELSE Slist ENDIF  */
#line 90 "exprtree.y"
                                                     { (yyval.no) = createTree(-1,IFELSE_NODE,NULL,(yyvsp[-6].no),(yyvsp[-3].no),(yyvsp[-1].no)); }
#line 1475 "y.tab.c"
    break;

  case 16: /* Whilestmt: WHILE '(' expr ')' DO Slist ENDWHILE  */
#line 93 "exprtree.y"
                                                             { (yyval.no) = createTree(-1,WHILE_NODE,NULL,(yyvsp[-4].no),(yyvsp[-1].no),NULL);}
#line 1481 "y.tab.c"
    break;

  case 17: /* Whilestmt: DO Slist WHILE '(' expr ')' ';'  */
#line 94 "exprtree.y"
                                                                 { (yyval.no) = createTree(-1,DOWHILE_NODE,NULL,(yyvsp[-2].no),(yyvsp[-5].no),NULL);}
#line 1487 "y.tab.c"
    break;

  case 18: /* Whilestmt: REPEAT Slist UNTIL '(' expr ')' ';'  */
#line 95 "exprtree.y"
                                                                         { (yyval.no) = createTree(-1,DOWHILE_NODE,NULL,(yyvsp[-2].no),(yyvsp[-5].no),NULL);}
#line 1493 "y.tab.c"
    break;

  case 19: /* InputStmt: READ '(' IDENTIFIER ')' ';'  */
#line 98 "exprtree.y"
                                               { (yyval.no) = createTree(-1,READ_NODE,NULL,(yyvsp[-2].no),NULL,NULL);}
#line 1499 "y.tab.c"
    break;

  case 20: /* OuptputStmt: WRITE '(' expr ')' ';'  */
#line 101 "exprtree.y"
                                                 { (yyval.no) = createTree(-1,WRITE_NODE,NULL,(yyvsp[-2].no),NULL,NULL);}
#line 1505 "y.tab.c"
    break;

  case 21: /* OuptputStmt: WRITE '(' Word ')' ';'  */
#line 102 "exprtree.y"
                                                                 { (yyval.no) = createTree(-1,WRITE_NODE,NULL,(yyvsp[-2].no),NULL,NULL);}
#line 1511 "y.tab.c"
    break;

  case 22: /* AsgStmt: IDENTIFIER EQUAL expr ';'  */
#line 105 "exprtree.y"
                                               { (yyval.no) = createTree(-1,ASSIGN_NODE,NULL,(yyvsp[-3].no),(yyvsp[-1].no),NULL);}
#line 1517 "y.tab.c"
    break;

  case 23: /* AsgStmt: IDENTIFIER EQUAL Word ';'  */
#line 106 "exprtree.y"
                                                       { (yyval.no) = createTree(-1,ASSIGN_NODE,NULL,(yyvsp[-3].no),(yyvsp[-1].no),NULL);}
#line 1523 "y.tab.c"
    break;

  case 24: /* Word: WORD  */
#line 109 "exprtree.y"
                                               { (yyval.no) = createTree(-1,STRING_NODE,(yyvsp[0].name),NULL,NULL,NULL);}
#line 1529 "y.tab.c"
    break;

  case 25: /* Continue: CONTINUE ';'  */
#line 112 "exprtree.y"
                                                         { (yyval.no) = createTree(-1,CONTINUE_NODE,NULL,NULL,NULL,NULL);}
#line 1535 "y.tab.c"
    break;

  case 26: /* Break: BREAK ';'  */
#line 115 "exprtree.y"
                                               { (yyval.no) = createTree(-1,BREAK_NODE,NULL,NULL,NULL,NULL);}
#line 1541 "y.tab.c"
    break;

  case 27: /* Declarations: DECL DeclList ENDDECL  */
#line 118 "exprtree.y"
                                                    {  findID((yyvsp[-1].Symbols));
														printsymboltable((yyvsp[-1].Symbols)); 
                                                    	gst=(struct Gsymbol*)malloc(sizeof(struct Gsymbol));
														gst->next = (yyvsp[-1].Symbols);
														gst = gst->next;
														(yyval.Symbols) = (yyvsp[-1].Symbols);
													}
#line 1553 "y.tab.c"
    break;

  case 28: /* Declarations: DECL ENDDECL  */
#line 125 "exprtree.y"
                                                                { gst = NULL; (yyval.Symbols) = NULL;}
#line 1559 "y.tab.c"
    break;

  case 29: /* DeclList: DeclList Decl  */
#line 128 "exprtree.y"
                                                    { (yyval.Symbols) = joinnode((yyvsp[-1].Symbols),(yyvsp[0].Symbols));}
#line 1565 "y.tab.c"
    break;

  case 30: /* DeclList: Decl  */
#line 129 "exprtree.y"
                                                            { (yyval.Symbols) = (yyvsp[0].Symbols);}
#line 1571 "y.tab.c"
    break;

  case 31: /* Decl: Type GidList ';'  */
#line 132 "exprtree.y"
                                                                        {
														struct Gsymbol* t = (yyvsp[-1].Symbols);
														while(t != NULL)
														{
															t->type = (yyvsp[-2].Symbols);
											               	t = t->next;
														}
														(yyval.Symbols) = (yyvsp[-1].Symbols);
													}
#line 1585 "y.tab.c"
    break;

  case 32: /* GidList: GidList ',' Gid  */
#line 143 "exprtree.y"
                                                                        { (yyval.Symbols) = joinnode((yyvsp[-2].Symbols),(yyvsp[0].Symbols));}
#line 1591 "y.tab.c"
    break;

  case 33: /* GidList: Gid  */
#line 144 "exprtree.y"
                                                                    { (yyval.Symbols) = (yyvsp[0].Symbols);}
#line 1597 "y.tab.c"
    break;

  case 34: /* Gid: ID '[' NUM ']'  */
#line 147 "exprtree.y"
                                                                                { (yyval.Symbols) = createVarList((yyvsp[-3].name),inttype,(yyvsp[-1].number),++binding,NULL); binding += (yyvsp[-1].number) - 1;}
#line 1603 "y.tab.c"
    break;

  case 35: /* Gid: ID '(' ParamList ')'  */
#line 148 "exprtree.y"
                                                                        { findparam((yyvsp[-1].parameter)); (yyval.Symbols) = createVarList((yyvsp[-3].name),inttype,0,0,(yyvsp[-1].parameter));}
#line 1609 "y.tab.c"
    break;

  case 36: /* Gid: ID '(' ')'  */
#line 149 "exprtree.y"
                                                                        { (yyval.Symbols) = createVarList((yyvsp[-2].name),inttype,0,0,NULL);}
#line 1615 "y.tab.c"
    break;

  case 37: /* Gid: ID  */
#line 150 "exprtree.y"
                                                    { (yyval.Symbols) = createVarList((yyvsp[0].name),inttype,1,++binding,NULL);}
#line 1621 "y.tab.c"
    break;

  case 38: /* ParamList: ParamList ',' Param  */
#line 153 "exprtree.y"
                                                { (yyval.parameter) = AppendParamlist((yyvsp[-2].parameter),(yyvsp[0].parameter));}
#line 1627 "y.tab.c"
    break;

  case 39: /* ParamList: Param  */
#line 154 "exprtree.y"
                                                { (yyval.parameter) = (yyvsp[0].parameter);}
#line 1633 "y.tab.c"
    break;

  case 40: /* Param: Type ID  */
#line 157 "exprtree.y"
                                                { (yyval.parameter) = CreateParamlist((yyvsp[-1].Symbols),(yyvsp[0].name));}
#line 1639 "y.tab.c"
    break;

  case 41: /* Type: INTTYPE  */
#line 160 "exprtree.y"
                                                { (yyval.Symbols) = inttype;}
#line 1645 "y.tab.c"
    break;

  case 42: /* Type: STRTYPE  */
#line 161 "exprtree.y"
                                                { (yyval.Symbols) = strtype;}
#line 1651 "y.tab.c"
    break;

  case 43: /* expr: expr PLUS expr  */
#line 164 "exprtree.y"
                                {(yyval.no) = createTree(-1,MATH_NODE,"+",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 1657 "y.tab.c"
    break;

  case 44: /* expr: expr MINUS expr  */
#line 165 "exprtree.y"
                                {(yyval.no) = createTree(-1,MATH_NODE,"-",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 1663 "y.tab.c"
    break;

  case 45: /* expr: expr MUL expr  */
#line 166 "exprtree.y"
                                    {(yyval.no) = createTree(-1,MATH_NODE,"*",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 1669 "y.tab.c"
    break;

  case 46: /* expr: expr DIV expr  */
#line 167 "exprtree.y"
                                    {(yyval.no) = createTree(-1,MATH_NODE,"/",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 1675 "y.tab.c"
    break;

  case 47: /* expr: expr MOD expr  */
#line 168 "exprtree.y"
                                    {(yyval.no) = createTree(-1,MATH_NODE,"%",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 1681 "y.tab.c"
    break;

  case 48: /* expr: expr LT expr  */
#line 169 "exprtree.y"
                                {(yyval.no) = createTree(-1,BOOL_NODE,"<",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 1687 "y.tab.c"
    break;

  case 49: /* expr: expr LTEQ expr  */
#line 170 "exprtree.y"
                                {(yyval.no) = createTree(-1,BOOL_NODE,"<=",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 1693 "y.tab.c"
    break;

  case 50: /* expr: expr GT expr  */
#line 171 "exprtree.y"
                                {(yyval.no) = createTree(-1,BOOL_NODE,">",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 1699 "y.tab.c"
    break;

  case 51: /* expr: expr GTEQ expr  */
#line 172 "exprtree.y"
                                {(yyval.no) = createTree(-1,BOOL_NODE,">=",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 1705 "y.tab.c"
    break;

  case 52: /* expr: expr EQEQ expr  */
#line 173 "exprtree.y"
                                {(yyval.no) = createTree(-1,BOOL_NODE,"==",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 1711 "y.tab.c"
    break;

  case 53: /* expr: expr NOEQ expr  */
#line 174 "exprtree.y"
                                {(yyval.no) = createTree(-1,BOOL_NODE,"!=",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 1717 "y.tab.c"
    break;

  case 54: /* expr: '(' expr ')'  */
#line 175 "exprtree.y"
                                    {(yyval.no) = (yyvsp[-1].no);}
#line 1723 "y.tab.c"
    break;

  case 55: /* expr: NUM  */
#line 176 "exprtree.y"
                                        {(yyval.no) = createTree((yyvsp[0].number),NUM_NODE,NULL,NULL,NULL,NULL);}
#line 1729 "y.tab.c"
    break;

  case 56: /* expr: IDENTIFIER  */
#line 177 "exprtree.y"
                                {(yyval.no) = (yyvsp[0].no);}
#line 1735 "y.tab.c"
    break;

  case 57: /* IDENTIFIER: ID  */
#line 179 "exprtree.y"
                                                                        {(yyval.no) = createTree(-1,VAR_NODE,(yyvsp[0].name),NULL,NULL,NULL);}
#line 1741 "y.tab.c"
    break;

  case 58: /* IDENTIFIER: ID '[' expr ']'  */
#line 180 "exprtree.y"
                                                        {
													struct tnode* temp = createTree(-1,VAR_NODE,(yyvsp[-3].name),(yyvsp[-1].no),NULL,NULL);
													if(temp->left->type != inttype)
													{
														printf("type missmatch in array\n");
														exit(0);
													}
			 										if(temp->Gentry->size <= (yyvsp[-1].no)->val)
													{
														printf("Array index out of bounds\n");
														exit(0);
													}
													(yyval.no) = temp;
												}
#line 1760 "y.tab.c"
    break;


#line 1764 "y.tab.c"

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

#line 196 "exprtree.y"


yyerror(char const *s)
{
    printf("yyerror %s\n",s);
}


int main(void) {
	FILE* tmp = fopen("test.txt","r");
	yyin = tmp;
	yyparse();
	fclose(tmp);
	return 0;
}
