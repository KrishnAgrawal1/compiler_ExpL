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
	FILE* fp;
	int binding = 4095;
	int flabel = 0;
	struct Gsymbol *gst;
	struct Lsymbol *lst;
	struct Paramstruct *para; 
	struct Typetable *TypeT;

#line 89 "y.tab.c"

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
    MAIN = 258,                    /* MAIN  */
    RET = 259,                     /* RET  */
    FREE = 260,                    /* FREE  */
    ALLOC = 261,                   /* ALLOC  */
    NIL = 262,                     /* NIL  */
    INITIALIZE = 263,              /* INITIALIZE  */
    TYPE = 264,                    /* TYPE  */
    ENDTYPE = 265,                 /* ENDTYPE  */
    DECL = 266,                    /* DECL  */
    ENDDECL = 267,                 /* ENDDECL  */
    INTTYPE = 268,                 /* INTTYPE  */
    STRTYPE = 269,                 /* STRTYPE  */
    READ = 270,                    /* READ  */
    WRITE = 271,                   /* WRITE  */
    NUM = 272,                     /* NUM  */
    ID = 273,                      /* ID  */
    WORD = 274,                    /* WORD  */
    EQUAL = 275,                   /* EQUAL  */
    BRKP = 276,                    /* BRKP  */
    PLUS = 277,                    /* PLUS  */
    MINUS = 278,                   /* MINUS  */
    MUL = 279,                     /* MUL  */
    DIV = 280,                     /* DIV  */
    MOD = 281,                     /* MOD  */
    END = 282,                     /* END  */
    BEG = 283,                     /* BEG  */
    LT = 284,                      /* LT  */
    LTEQ = 285,                    /* LTEQ  */
    GT = 286,                      /* GT  */
    GTEQ = 287,                    /* GTEQ  */
    EQEQ = 288,                    /* EQEQ  */
    NOEQ = 289,                    /* NOEQ  */
    AND = 290,                     /* AND  */
    OR = 291,                      /* OR  */
    IF = 292,                      /* IF  */
    THEN = 293,                    /* THEN  */
    ELSE = 294,                    /* ELSE  */
    ENDIF = 295,                   /* ENDIF  */
    WHILE = 296,                   /* WHILE  */
    DO = 297,                      /* DO  */
    ENDWHILE = 298,                /* ENDWHILE  */
    CONTINUE = 299,                /* CONTINUE  */
    BREAK = 300,                   /* BREAK  */
    REPEAT = 301,                  /* REPEAT  */
    UNTIL = 302                    /* UNTIL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define MAIN 258
#define RET 259
#define FREE 260
#define ALLOC 261
#define NIL 262
#define INITIALIZE 263
#define TYPE 264
#define ENDTYPE 265
#define DECL 266
#define ENDDECL 267
#define INTTYPE 268
#define STRTYPE 269
#define READ 270
#define WRITE 271
#define NUM 272
#define ID 273
#define WORD 274
#define EQUAL 275
#define BRKP 276
#define PLUS 277
#define MINUS 278
#define MUL 279
#define DIV 280
#define MOD 281
#define END 282
#define BEG 283
#define LT 284
#define LTEQ 285
#define GT 286
#define GTEQ 287
#define EQEQ 288
#define NOEQ 289
#define AND 290
#define OR 291
#define IF 292
#define THEN 293
#define ELSE 294
#define ENDIF 295
#define WHILE 296
#define DO 297
#define ENDWHILE 298
#define CONTINUE 299
#define BREAK 300
#define REPEAT 301
#define UNTIL 302

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 19 "exprtree.y"

	struct tnode *no;
	struct Gsymbol *Symbols;
	struct Lsymbol *Lsymbols;
	struct Paramstruct *parameter; 
	struct Fieldlist *fieldL;
	struct Typetable *TT;
	int number;
	char* name;

#line 247 "y.tab.c"

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
  YYSYMBOL_MAIN = 3,                       /* MAIN  */
  YYSYMBOL_RET = 4,                        /* RET  */
  YYSYMBOL_FREE = 5,                       /* FREE  */
  YYSYMBOL_ALLOC = 6,                      /* ALLOC  */
  YYSYMBOL_NIL = 7,                        /* NIL  */
  YYSYMBOL_INITIALIZE = 8,                 /* INITIALIZE  */
  YYSYMBOL_TYPE = 9,                       /* TYPE  */
  YYSYMBOL_ENDTYPE = 10,                   /* ENDTYPE  */
  YYSYMBOL_DECL = 11,                      /* DECL  */
  YYSYMBOL_ENDDECL = 12,                   /* ENDDECL  */
  YYSYMBOL_INTTYPE = 13,                   /* INTTYPE  */
  YYSYMBOL_STRTYPE = 14,                   /* STRTYPE  */
  YYSYMBOL_READ = 15,                      /* READ  */
  YYSYMBOL_WRITE = 16,                     /* WRITE  */
  YYSYMBOL_NUM = 17,                       /* NUM  */
  YYSYMBOL_ID = 18,                        /* ID  */
  YYSYMBOL_WORD = 19,                      /* WORD  */
  YYSYMBOL_EQUAL = 20,                     /* EQUAL  */
  YYSYMBOL_BRKP = 21,                      /* BRKP  */
  YYSYMBOL_PLUS = 22,                      /* PLUS  */
  YYSYMBOL_MINUS = 23,                     /* MINUS  */
  YYSYMBOL_MUL = 24,                       /* MUL  */
  YYSYMBOL_DIV = 25,                       /* DIV  */
  YYSYMBOL_MOD = 26,                       /* MOD  */
  YYSYMBOL_END = 27,                       /* END  */
  YYSYMBOL_BEG = 28,                       /* BEG  */
  YYSYMBOL_LT = 29,                        /* LT  */
  YYSYMBOL_LTEQ = 30,                      /* LTEQ  */
  YYSYMBOL_GT = 31,                        /* GT  */
  YYSYMBOL_GTEQ = 32,                      /* GTEQ  */
  YYSYMBOL_EQEQ = 33,                      /* EQEQ  */
  YYSYMBOL_NOEQ = 34,                      /* NOEQ  */
  YYSYMBOL_AND = 35,                       /* AND  */
  YYSYMBOL_OR = 36,                        /* OR  */
  YYSYMBOL_IF = 37,                        /* IF  */
  YYSYMBOL_THEN = 38,                      /* THEN  */
  YYSYMBOL_ELSE = 39,                      /* ELSE  */
  YYSYMBOL_ENDIF = 40,                     /* ENDIF  */
  YYSYMBOL_WHILE = 41,                     /* WHILE  */
  YYSYMBOL_DO = 42,                        /* DO  */
  YYSYMBOL_ENDWHILE = 43,                  /* ENDWHILE  */
  YYSYMBOL_CONTINUE = 44,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 45,                     /* BREAK  */
  YYSYMBOL_REPEAT = 46,                    /* REPEAT  */
  YYSYMBOL_UNTIL = 47,                     /* UNTIL  */
  YYSYMBOL_48_ = 48,                       /* '{'  */
  YYSYMBOL_49_ = 49,                       /* '}'  */
  YYSYMBOL_50_ = 50,                       /* ';'  */
  YYSYMBOL_51_ = 51,                       /* '('  */
  YYSYMBOL_52_ = 52,                       /* ')'  */
  YYSYMBOL_53_ = 53,                       /* ','  */
  YYSYMBOL_54_ = 54,                       /* '['  */
  YYSYMBOL_55_ = 55,                       /* ']'  */
  YYSYMBOL_56_ = 56,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 57,                  /* $accept  */
  YYSYMBOL_program = 58,                   /* program  */
  YYSYMBOL_TypeDefBlock = 59,              /* TypeDefBlock  */
  YYSYMBOL_TypeDefList = 60,               /* TypeDefList  */
  YYSYMBOL_TypeDef = 61,                   /* TypeDef  */
  YYSYMBOL_FieldDeclList = 62,             /* FieldDeclList  */
  YYSYMBOL_FieldDecl = 63,                 /* FieldDecl  */
  YYSYMBOL_TypeName = 64,                  /* TypeName  */
  YYSYMBOL_MainBlock = 65,                 /* MainBlock  */
  YYSYMBOL_FDefBlock = 66,                 /* FDefBlock  */
  YYSYMBOL_Fdef = 67,                      /* Fdef  */
  YYSYMBOL_Body = 68,                      /* Body  */
  YYSYMBOL_Retstmtc = 69,                  /* Retstmtc  */
  YYSYMBOL_Slist = 70,                     /* Slist  */
  YYSYMBOL_Stmt = 71,                      /* Stmt  */
  YYSYMBOL_Free = 72,                      /* Free  */
  YYSYMBOL_Ifstmt = 73,                    /* Ifstmt  */
  YYSYMBOL_Whilestmt = 74,                 /* Whilestmt  */
  YYSYMBOL_InputStmt = 75,                 /* InputStmt  */
  YYSYMBOL_OuptputStmt = 76,               /* OuptputStmt  */
  YYSYMBOL_AsgStmt = 77,                   /* AsgStmt  */
  YYSYMBOL_Word = 78,                      /* Word  */
  YYSYMBOL_Continue = 79,                  /* Continue  */
  YYSYMBOL_Break = 80,                     /* Break  */
  YYSYMBOL_GDeclarations = 81,             /* GDeclarations  */
  YYSYMBOL_LDeclarations = 82,             /* LDeclarations  */
  YYSYMBOL_GDeclList = 83,                 /* GDeclList  */
  YYSYMBOL_LDeclList = 84,                 /* LDeclList  */
  YYSYMBOL_GDecl = 85,                     /* GDecl  */
  YYSYMBOL_LDecl = 86,                     /* LDecl  */
  YYSYMBOL_GidList = 87,                   /* GidList  */
  YYSYMBOL_LidList = 88,                   /* LidList  */
  YYSYMBOL_Gid = 89,                       /* Gid  */
  YYSYMBOL_ParamList = 90,                 /* ParamList  */
  YYSYMBOL_Param = 91,                     /* Param  */
  YYSYMBOL_Type = 92,                      /* Type  */
  YYSYMBOL_expr = 93,                      /* expr  */
  YYSYMBOL_Field = 94,                     /* Field  */
  YYSYMBOL_IDENTIFIER = 95,                /* IDENTIFIER  */
  YYSYMBOL_E = 96,                         /* E  */
  YYSYMBOL_ArgList = 97                    /* ArgList  */
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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   499

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  102
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  220

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   302


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
      51,    52,     2,     2,    53,     2,    56,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    50,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    54,     2,    55,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,     2,    49,     2,     2,     2,     2,
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
      45,    46,    47
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    96,    96,    97,    98,    99,   102,   105,   109,   112,
     115,   119,   122,   124,   125,   126,   129,   136,   137,   140,
     143,   146,   147,   150,   151,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   165,   168,   169,   172,   173,   174,
     177,   180,   181,   184,   185,   186,   187,   190,   193,   196,
     199,   206,   209,   218,   225,   234,   235,   238,   239,   242,
     253,   264,   265,   268,   269,   272,   273,   274,   275,   278,
     279,   282,   285,   286,   287,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   316,   317,   320,   321,   322,   337,   338,
     341,   347,   348
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
  "\"end of file\"", "error", "\"invalid token\"", "MAIN", "RET", "FREE",
  "ALLOC", "NIL", "INITIALIZE", "TYPE", "ENDTYPE", "DECL", "ENDDECL",
  "INTTYPE", "STRTYPE", "READ", "WRITE", "NUM", "ID", "WORD", "EQUAL",
  "BRKP", "PLUS", "MINUS", "MUL", "DIV", "MOD", "END", "BEG", "LT", "LTEQ",
  "GT", "GTEQ", "EQEQ", "NOEQ", "AND", "OR", "IF", "THEN", "ELSE", "ENDIF",
  "WHILE", "DO", "ENDWHILE", "CONTINUE", "BREAK", "REPEAT", "UNTIL", "'{'",
  "'}'", "';'", "'('", "')'", "','", "'['", "']'", "'.'", "$accept",
  "program", "TypeDefBlock", "TypeDefList", "TypeDef", "FieldDeclList",
  "FieldDecl", "TypeName", "MainBlock", "FDefBlock", "Fdef", "Body",
  "Retstmtc", "Slist", "Stmt", "Free", "Ifstmt", "Whilestmt", "InputStmt",
  "OuptputStmt", "AsgStmt", "Word", "Continue", "Break", "GDeclarations",
  "LDeclarations", "GDeclList", "LDeclList", "GDecl", "LDecl", "GidList",
  "LidList", "Gid", "ParamList", "Param", "Type", "expr", "Field",
  "IDENTIFIER", "E", "ArgList", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-99)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     101,   -14,    23,    27,    37,   -99,     8,    -3,   -99,    22,
     -99,    17,   125,   131,   -99,   -99,    35,   -99,   -99,   -99,
     -99,    81,   -99,    60,    23,   -99,   125,   -99,    61,   -99,
     -99,   -99,    83,   -99,    71,    50,   -99,   -99,    -4,    63,
     -99,   -99,   -99,    49,   -99,   -99,    62,   114,    24,   136,
     -99,    60,   153,   -99,    90,   128,   -99,   -43,   -99,   142,
     106,   -99,    74,   -99,    93,   -99,   151,   237,   121,   -99,
     153,   -99,   -99,   124,   -99,   -99,   -99,    87,   134,   135,
     139,   -20,   -99,   144,   155,   237,   129,   137,   237,   113,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   146,
     191,   -99,   -99,   114,   -99,   194,   196,   196,    73,    26,
     197,    26,    26,   249,   -99,   -99,   147,    73,   189,   -99,
     199,    64,   128,   -99,   166,   169,   -99,   -99,   122,   -99,
      26,   171,   289,   -99,   -99,   274,   -99,   313,   328,   173,
     175,   177,   406,   -99,   -99,   178,   180,   181,   428,   183,
     -99,   190,    34,   352,   193,    26,    26,    26,    26,    26,
      26,    26,    26,    26,    26,    26,    26,    26,   201,   -99,
     209,   214,    26,    26,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   450,    95,   -99,   -99,   157,   157,
     -99,   -99,   -99,   308,   308,   308,   308,   308,   308,   465,
     465,   -99,   237,   237,   367,   391,   -99,    26,   159,   192,
     -26,   207,   450,   237,   -99,   -99,   -99,   -99,   204,   -99
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     5,     4,     0,     0,     8,     0,
       1,     0,     0,     0,     6,     7,     0,    51,    72,    73,
      74,     0,    56,     0,    72,     3,     0,    18,     0,    13,
      14,    15,     0,    11,     0,     0,    50,    55,    68,     0,
      62,     2,    17,     0,     9,    10,     0,    54,     0,     0,
      59,     0,     0,    12,     0,     0,    67,     0,    70,     0,
       0,    61,     0,    53,     0,    58,     0,     0,     0,    66,
       0,    71,    65,     0,    52,    57,    64,     0,     0,     0,
       0,    95,    33,     0,     0,     0,     0,     0,     0,     0,
      24,    32,    28,    29,    25,    26,    27,    30,    31,    96,
       0,    16,    69,    54,    60,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,    49,     0,     0,     0,    23,
       0,     0,     0,    63,     0,     0,    91,    89,    95,    47,
       0,     0,     0,    90,    92,     0,    94,     0,     0,     0,
       0,     0,     0,    20,    93,     0,     0,     0,     0,     0,
      34,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    97,
       0,     0,     0,     0,    22,    21,    46,    45,    44,    43,
      19,    40,    98,   102,   101,     0,    88,    42,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    41,     0,     0,     0,     0,    99,     0,     0,     0,
       0,     0,   100,     0,    35,    37,    38,    39,     0,    36
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -99,   -99,   -99,   -99,   232,   -99,   227,   -99,    -6,   -99,
     234,   140,   -99,   -80,   -88,   -99,   -99,   -99,   -99,   -99,
     -99,   -33,   -99,   -99,   -99,   158,   -99,   -99,   242,   202,
     -99,   -99,   217,   219,   203,    -9,   -98,   -99,   -67,   -99,
     -99
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,     7,     8,    32,    33,    34,     5,    26,
      27,    68,   118,    89,    90,    91,    92,    93,    94,    95,
      96,   131,    97,    98,    12,    55,    21,    64,    22,    65,
      39,    77,    40,    57,    58,    59,   132,    99,   133,   134,
     185
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
     100,   119,    23,    28,     6,   113,    25,    14,   116,    69,
      70,   135,    23,   137,   138,     6,   203,    28,   100,   142,
      41,   100,   100,   148,   216,   119,     9,    10,   119,    17,
      18,    19,   153,   126,   109,    20,   110,    18,    19,   124,
     125,   126,    20,   127,   128,    66,   100,    48,    11,   100,
      49,   127,   128,   129,   184,    66,    13,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     145,   126,   146,    16,   204,   205,    56,   130,    38,    43,
     126,   127,   128,   129,   141,   130,   182,    35,   147,    46,
     127,   128,   129,    36,    18,    19,    29,    30,    47,    20,
      52,    31,    63,    18,    19,    74,    18,    19,    20,   212,
       1,    20,    53,    50,     2,   130,    51,   117,    78,   183,
     119,   119,   208,   209,   130,    54,    73,    70,    79,    80,
     119,    81,    44,   218,    82,   100,   100,   104,    24,    19,
     105,   100,   100,    20,    29,    30,   100,   206,   207,    31,
      83,   100,    78,    60,    84,    85,    67,    86,    87,    88,
      71,    72,    79,    80,    78,    81,    18,    19,    82,    76,
     101,    20,   103,   152,    79,    80,   109,    81,   110,   114,
      82,   157,   158,   159,    83,   106,   107,   115,    84,    85,
     108,    86,    87,    88,   140,   111,    83,    78,   213,   214,
      84,    85,   120,    86,    87,    88,   112,    79,    80,    78,
      81,   121,   123,    82,    81,   136,   143,   144,   150,    79,
      80,   151,    81,   154,   172,    82,   173,   174,   176,    83,
     177,   178,   180,    84,    85,   215,    86,    87,    88,    15,
     181,    83,    78,   187,   219,    84,    85,   202,    86,    87,
      88,   201,    79,    80,    78,    81,   203,   217,    82,    45,
      42,   122,   149,    37,    79,    80,    75,    81,    61,     0,
      82,    62,     0,   102,    83,     0,     0,     0,    84,    85,
       0,    86,    87,    88,     0,     0,    83,     0,     0,     0,
     139,    85,     0,    86,    87,    88,   155,   156,   157,   158,
     159,     0,     0,   160,   161,   162,   163,   164,   165,   166,
     167,   155,   156,   157,   158,   159,     0,     0,   160,   161,
     162,   163,   164,   165,   166,   167,     0,     0,     0,   169,
     155,   156,   157,   158,   159,   155,   156,   157,   158,   159,
       0,   168,   160,   161,   162,   163,   164,   165,   166,   167,
     155,   156,   157,   158,   159,     0,     0,   160,   161,   162,
     163,   164,   165,   166,   167,   170,     0,     0,     0,     0,
       0,     0,     0,     0,   155,   156,   157,   158,   159,     0,
     171,   160,   161,   162,   163,   164,   165,   166,   167,   155,
     156,   157,   158,   159,     0,     0,   160,   161,   162,   163,
     164,   165,   166,   167,   186,     0,     0,     0,     0,     0,
       0,     0,     0,   155,   156,   157,   158,   159,     0,   210,
     160,   161,   162,   163,   164,   165,   166,   167,   155,   156,
     157,   158,   159,     0,     0,   160,   161,   162,   163,   164,
     165,   166,   167,   211,     0,     0,     0,     0,     0,     0,
     155,   156,   157,   158,   159,     0,   175,   160,   161,   162,
     163,   164,   165,   166,   167,     0,     0,     0,     0,     0,
       0,     0,   155,   156,   157,   158,   159,     0,   179,   160,
     161,   162,   163,   164,   165,   166,   167,   155,   156,   157,
     158,   159,     0,     0,   160,   161,   162,   163,   164,   165
};

static const yytype_int16 yycheck[] =
{
      67,    89,    11,    12,    18,    85,    12,    10,    88,    52,
      53,   109,    21,   111,   112,    18,    42,    26,    85,   117,
      26,    88,    89,   121,    50,   113,     3,     0,   116,    12,
      13,    14,   130,     7,    54,    18,    56,    13,    14,   106,
     107,     7,    18,    17,    18,    54,   113,    51,    11,   116,
      54,    17,    18,    19,   152,    64,    48,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
       6,     7,     8,    51,   172,   173,    52,    51,    18,    18,
       7,    17,    18,    19,   117,    51,    52,    52,   121,    18,
      17,    18,    19,    12,    13,    14,    13,    14,    48,    18,
      51,    18,    12,    13,    14,    12,    13,    14,    18,   207,
       9,    18,    50,    50,    13,    51,    53,     4,     5,   152,
     208,   209,   202,   203,    51,    11,    52,    53,    15,    16,
     218,    18,    49,   213,    21,   202,   203,    50,    13,    14,
      53,   208,   209,    18,    13,    14,   213,    52,    53,    18,
      37,   218,     5,    17,    41,    42,    28,    44,    45,    46,
      18,    55,    15,    16,     5,    18,    13,    14,    21,    18,
      49,    18,    48,    51,    15,    16,    54,    18,    56,    50,
      21,    24,    25,    26,    37,    51,    51,    50,    41,    42,
      51,    44,    45,    46,    47,    51,    37,     5,    39,    40,
      41,    42,    56,    44,    45,    46,    51,    15,    16,     5,
      18,    20,    18,    21,    18,    18,    27,    18,    52,    15,
      16,    52,    18,    52,    51,    21,    51,    50,    50,    37,
      50,    50,    49,    41,    42,    43,    44,    45,    46,     7,
      50,    37,     5,    50,    40,    41,    42,    38,    44,    45,
      46,    50,    15,    16,     5,    18,    42,    50,    21,    32,
      26,   103,   122,    21,    15,    16,    64,    18,    51,    -1,
      21,    52,    -1,    70,    37,    -1,    -1,    -1,    41,    42,
      -1,    44,    45,    46,    -1,    -1,    37,    -1,    -1,    -1,
      41,    42,    -1,    44,    45,    46,    22,    23,    24,    25,
      26,    -1,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    22,    23,    24,    25,    26,    -1,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    55,
      22,    23,    24,    25,    26,    22,    23,    24,    25,    26,
      -1,    52,    29,    30,    31,    32,    33,    34,    35,    36,
      22,    23,    24,    25,    26,    -1,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,    -1,
      52,    29,    30,    31,    32,    33,    34,    35,    36,    22,
      23,    24,    25,    26,    -1,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    -1,    52,
      29,    30,    31,    32,    33,    34,    35,    36,    22,    23,
      24,    25,    26,    -1,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    -1,    50,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    26,    -1,    50,    29,
      30,    31,    32,    33,    34,    35,    36,    22,    23,    24,
      25,    26,    -1,    -1,    29,    30,    31,    32,    33,    34
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     9,    13,    58,    59,    65,    18,    60,    61,     3,
       0,    11,    81,    48,    10,    61,    51,    12,    13,    14,
      18,    83,    85,    92,    13,    65,    66,    67,    92,    13,
      14,    18,    62,    63,    64,    52,    12,    85,    18,    87,
      89,    65,    67,    18,    49,    63,    18,    48,    51,    54,
      50,    53,    51,    50,    11,    82,    52,    90,    91,    92,
      17,    89,    90,    12,    84,    86,    92,    28,    68,    52,
      53,    18,    55,    52,    12,    86,    18,    88,     5,    15,
      16,    18,    21,    37,    41,    42,    44,    45,    46,    70,
      71,    72,    73,    74,    75,    76,    77,    79,    80,    94,
      95,    49,    91,    48,    50,    53,    51,    51,    51,    54,
      56,    51,    51,    70,    50,    50,    70,     4,    69,    71,
      56,    20,    82,    18,    95,    95,     7,    17,    18,    19,
      51,    78,    93,    95,    96,    93,    18,    93,    93,    41,
      47,    78,    93,    27,    18,     6,     8,    78,    93,    68,
      52,    52,    51,    93,    52,    22,    23,    24,    25,    26,
      29,    30,    31,    32,    33,    34,    35,    36,    52,    55,
      52,    52,    51,    51,    50,    50,    50,    50,    50,    50,
      49,    50,    52,    78,    93,    97,    52,    50,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    50,    38,    42,    93,    93,    52,    53,    70,    70,
      52,    52,    93,    39,    40,    43,    50,    50,    70,    40
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    57,    58,    58,    58,    58,    59,    60,    60,    61,
      62,    62,    63,    64,    64,    64,    65,    66,    66,    67,
      68,    69,    69,    70,    70,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    72,    73,    73,    74,    74,    74,
      75,    76,    76,    77,    77,    77,    77,    78,    79,    80,
      81,    81,    82,    82,    82,    83,    83,    84,    84,    85,
      86,    87,    87,    88,    88,    89,    89,    89,    89,    90,
      90,    91,    92,    92,    92,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    94,    94,    95,    95,    95,    96,    96,
      97,    97,    97
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     3,     1,     1,     3,     2,     1,     4,
       2,     1,     3,     1,     1,     1,     8,     2,     1,     9,
       4,     3,     3,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     7,     9,     7,     7,     7,
       5,     5,     5,     4,     4,     4,     4,     1,     2,     2,
       3,     2,     3,     2,     0,     2,     1,     2,     1,     3,
       3,     3,     1,     3,     1,     4,     4,     3,     1,     3,
       1,     2,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     3,     3,     1,     1,     4,     3,     4,
       3,     1,     1
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
  case 2: /* program: TypeDefBlock GDeclarations FDefBlock MainBlock  */
#line 96 "exprtree.y"
                                                         {exit(1);}
#line 1525 "y.tab.c"
    break;

  case 3: /* program: TypeDefBlock GDeclarations MainBlock  */
#line 97 "exprtree.y"
                                                         {exit(1);}
#line 1531 "y.tab.c"
    break;

  case 4: /* program: MainBlock  */
#line 98 "exprtree.y"
                                                                 {exit(1);}
#line 1537 "y.tab.c"
    break;

  case 5: /* program: TypeDefBlock  */
#line 99 "exprtree.y"
                                                                         {exit(1);}
#line 1543 "y.tab.c"
    break;

  case 6: /* TypeDefBlock: TYPE TypeDefList ENDTYPE  */
#line 102 "exprtree.y"
                                           { createTypeTable((yyvsp[-1].no)); (yyval.TT) = TypeT;}
#line 1549 "y.tab.c"
    break;

  case 7: /* TypeDefList: TypeDefList TypeDef  */
#line 105 "exprtree.y"
                                           { struct tnode *t1 = (yyvsp[-1].no), *t2 = (yyvsp[0].no);
										   	 t2->right = t1;
											 (yyval.no) = t2;
										   }
#line 1558 "y.tab.c"
    break;

  case 8: /* TypeDefList: TypeDef  */
#line 109 "exprtree.y"
                                           { (yyval.no) = (yyvsp[0].no);}
#line 1564 "y.tab.c"
    break;

  case 9: /* TypeDef: ID '{' FieldDeclList '}'  */
#line 112 "exprtree.y"
                                           { (yyval.no) = createTree(-1,TYPE_TREE_NODE,(yyvsp[-3].name),(yyvsp[-1].no),NULL,NULL);}
#line 1570 "y.tab.c"
    break;

  case 10: /* FieldDeclList: FieldDeclList FieldDecl  */
#line 115 "exprtree.y"
                                           { struct tnode *t1 = (yyvsp[-1].no), *t2 = (yyvsp[0].no);
										   	 t2->left = t1;
											 (yyval.no) = t2;
										   }
#line 1579 "y.tab.c"
    break;

  case 11: /* FieldDeclList: FieldDecl  */
#line 119 "exprtree.y"
                                                           { (yyval.no) = (yyvsp[0].no);}
#line 1585 "y.tab.c"
    break;

  case 12: /* FieldDecl: TypeName ID ';'  */
#line 122 "exprtree.y"
                                   { (yyval.no) = createTree(-1,TYPE_TREE_NODE,(yyvsp[-1].name),NULL,(yyvsp[-2].no),NULL);}
#line 1591 "y.tab.c"
    break;

  case 13: /* TypeName: INTTYPE  */
#line 124 "exprtree.y"
                            { (yyval.no) = createTree(-1,TYPE_TREE_NODE,"int",NULL,NULL,NULL);}
#line 1597 "y.tab.c"
    break;

  case 14: /* TypeName: STRTYPE  */
#line 125 "exprtree.y"
                                { (yyval.no) = createTree(-1,TYPE_TREE_NODE,"str",NULL,NULL,NULL);}
#line 1603 "y.tab.c"
    break;

  case 15: /* TypeName: ID  */
#line 126 "exprtree.y"
                            { (yyval.no) = createTree(-1,TYPE_TREE_NODE,(yyvsp[0].name),NULL,NULL,NULL);}
#line 1609 "y.tab.c"
    break;

  case 16: /* MainBlock: INTTYPE MAIN '(' ')' '{' LDeclarations Body '}'  */
#line 129 "exprtree.y"
                                                              { fprintf(fp, "F0:\n");
																fprintf(fp, "MOV BP,%d\n", binding);
																FunASTgen("main",findType("int"),NULL,(yyvsp[-2].Lsymbols),(yyvsp[-1].no),fp); (yyval.no) = (yyvsp[-1].no);
																fclose(fp);												  	
															  }
#line 1619 "y.tab.c"
    break;

  case 17: /* FDefBlock: FDefBlock Fdef  */
#line 136 "exprtree.y"
                                                           { (yyval.no) = (yyvsp[0].no);}
#line 1625 "y.tab.c"
    break;

  case 18: /* FDefBlock: Fdef  */
#line 137 "exprtree.y"
                                                           { (yyval.no) = (yyvsp[0].no);}
#line 1631 "y.tab.c"
    break;

  case 19: /* Fdef: Type ID '(' ParamList ')' '{' LDeclarations Body '}'  */
#line 140 "exprtree.y"
                                                             { FunASTgen((yyvsp[-7].name),(yyvsp[-8].TT),(yyvsp[-5].parameter),(yyvsp[-2].Lsymbols),(yyvsp[-1].no),fp); (yyval.no) = (yyvsp[-1].no);}
#line 1637 "y.tab.c"
    break;

  case 20: /* Body: BEG Slist Retstmtc END  */
#line 143 "exprtree.y"
                                      { (yyval.no) = createTree(-1,EMPTY_NODE,NULL,(yyvsp[-2].no),(yyvsp[-1].no),NULL);}
#line 1643 "y.tab.c"
    break;

  case 21: /* Retstmtc: RET expr ';'  */
#line 146 "exprtree.y"
                                      { (yyval.no) = createTree(-1,RETURN_NODE,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 1649 "y.tab.c"
    break;

  case 22: /* Retstmtc: RET Word ';'  */
#line 147 "exprtree.y"
                                      { (yyval.no) = createTree(-1,RETURN_NODE,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 1655 "y.tab.c"
    break;

  case 23: /* Slist: Slist Stmt  */
#line 150 "exprtree.y"
                   {(yyval.no) = createTree(-1,EMPTY_NODE,NULL,(yyvsp[-1].no),(yyvsp[0].no),NULL);}
#line 1661 "y.tab.c"
    break;

  case 24: /* Slist: Stmt  */
#line 151 "exprtree.y"
                   {(yyval.no) = (yyvsp[0].no);}
#line 1667 "y.tab.c"
    break;

  case 25: /* Stmt: InputStmt  */
#line 154 "exprtree.y"
                   {(yyval.no) = (yyvsp[0].no);}
#line 1673 "y.tab.c"
    break;

  case 26: /* Stmt: OuptputStmt  */
#line 155 "exprtree.y"
                   {(yyval.no) = (yyvsp[0].no);}
#line 1679 "y.tab.c"
    break;

  case 27: /* Stmt: AsgStmt  */
#line 156 "exprtree.y"
                       {(yyval.no) = (yyvsp[0].no);}
#line 1685 "y.tab.c"
    break;

  case 28: /* Stmt: Ifstmt  */
#line 157 "exprtree.y"
                           {(yyval.no) = (yyvsp[0].no);}
#line 1691 "y.tab.c"
    break;

  case 29: /* Stmt: Whilestmt  */
#line 158 "exprtree.y"
                       {(yyval.no) = (yyvsp[0].no);}
#line 1697 "y.tab.c"
    break;

  case 30: /* Stmt: Continue  */
#line 159 "exprtree.y"
                       {(yyval.no) = (yyvsp[0].no);}
#line 1703 "y.tab.c"
    break;

  case 31: /* Stmt: Break  */
#line 160 "exprtree.y"
                       {(yyval.no) = (yyvsp[0].no);}
#line 1709 "y.tab.c"
    break;

  case 32: /* Stmt: Free  */
#line 161 "exprtree.y"
                       {(yyval.no) = (yyvsp[0].no);}
#line 1715 "y.tab.c"
    break;

  case 33: /* Stmt: BRKP  */
#line 162 "exprtree.y"
                       {(yyval.no) = createTree(-1,BRKP_NODE,NULL,NULL,NULL,NULL);}
#line 1721 "y.tab.c"
    break;

  case 34: /* Free: FREE '(' IDENTIFIER ')'  */
#line 165 "exprtree.y"
                                                     { (yyval.no) = createTree(-1,FREE_NODE,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 1727 "y.tab.c"
    break;

  case 35: /* Ifstmt: IF '(' expr ')' THEN Slist ENDIF  */
#line 168 "exprtree.y"
                                                                 { (yyval.no) = createTree(-1,IFELSE_NODE,NULL,(yyvsp[-4].no),(yyvsp[-1].no),NULL);}
#line 1733 "y.tab.c"
    break;

  case 36: /* Ifstmt: IF '(' expr ')' THEN Slist ELSE Slist ENDIF  */
#line 169 "exprtree.y"
                                                     { (yyval.no) = createTree(-1,IFELSE_NODE,NULL,(yyvsp[-6].no),(yyvsp[-3].no),(yyvsp[-1].no)); }
#line 1739 "y.tab.c"
    break;

  case 37: /* Whilestmt: WHILE '(' expr ')' DO Slist ENDWHILE  */
#line 172 "exprtree.y"
                                                             { (yyval.no) = createTree(-1,WHILE_NODE,NULL,(yyvsp[-4].no),(yyvsp[-1].no),NULL);}
#line 1745 "y.tab.c"
    break;

  case 38: /* Whilestmt: DO Slist WHILE '(' expr ')' ';'  */
#line 173 "exprtree.y"
                                                                 { (yyval.no) = createTree(-1,DOWHILE_NODE,NULL,(yyvsp[-2].no),(yyvsp[-5].no),NULL);}
#line 1751 "y.tab.c"
    break;

  case 39: /* Whilestmt: REPEAT Slist UNTIL '(' expr ')' ';'  */
#line 174 "exprtree.y"
                                                                         { (yyval.no) = createTree(-1,DOWHILE_NODE,NULL,(yyvsp[-2].no),(yyvsp[-5].no),NULL);}
#line 1757 "y.tab.c"
    break;

  case 40: /* InputStmt: READ '(' IDENTIFIER ')' ';'  */
#line 177 "exprtree.y"
                                               { (yyval.no) = createTree(-1,READ_NODE,NULL,(yyvsp[-2].no),NULL,NULL);}
#line 1763 "y.tab.c"
    break;

  case 41: /* OuptputStmt: WRITE '(' expr ')' ';'  */
#line 180 "exprtree.y"
                                                 { (yyval.no) = createTree(-1,WRITE_NODE,NULL,(yyvsp[-2].no),NULL,NULL);}
#line 1769 "y.tab.c"
    break;

  case 42: /* OuptputStmt: WRITE '(' Word ')' ';'  */
#line 181 "exprtree.y"
                                                                 { (yyval.no) = createTree(-1,WRITE_NODE,NULL,(yyvsp[-2].no),NULL,NULL);}
#line 1775 "y.tab.c"
    break;

  case 43: /* AsgStmt: IDENTIFIER EQUAL expr ';'  */
#line 184 "exprtree.y"
                                                { (yyval.no) = createTree(-1,ASSIGN_NODE,NULL,(yyvsp[-3].no),(yyvsp[-1].no),NULL);}
#line 1781 "y.tab.c"
    break;

  case 44: /* AsgStmt: IDENTIFIER EQUAL Word ';'  */
#line 185 "exprtree.y"
                                                        { (yyval.no) = createTree(-1,ASSIGN_NODE,NULL,(yyvsp[-3].no),(yyvsp[-1].no),NULL);}
#line 1787 "y.tab.c"
    break;

  case 45: /* AsgStmt: IDENTIFIER EQUAL INITIALIZE ';'  */
#line 186 "exprtree.y"
                                                        { (yyval.no) = createTree(-1,INITIALIZE_NODE,NULL,(yyvsp[-3].no),NULL,NULL);}
#line 1793 "y.tab.c"
    break;

  case 46: /* AsgStmt: IDENTIFIER EQUAL ALLOC ';'  */
#line 187 "exprtree.y"
                                                        { (yyval.no) = createTree(-1,ALLOC_NODE,NULL,(yyvsp[-3].no),NULL,NULL);}
#line 1799 "y.tab.c"
    break;

  case 47: /* Word: WORD  */
#line 190 "exprtree.y"
                                               { (yyval.no) = createTree(-1,STRING_NODE,(yyvsp[0].name),NULL,NULL,NULL);}
#line 1805 "y.tab.c"
    break;

  case 48: /* Continue: CONTINUE ';'  */
#line 193 "exprtree.y"
                                                           { (yyval.no) = createTree(-1,CONTINUE_NODE,NULL,NULL,NULL,NULL);}
#line 1811 "y.tab.c"
    break;

  case 49: /* Break: BREAK ';'  */
#line 196 "exprtree.y"
                                               { (yyval.no) = createTree(-1,BREAK_NODE,NULL,NULL,NULL,NULL);}
#line 1817 "y.tab.c"
    break;

  case 50: /* GDeclarations: DECL GDeclList ENDDECL  */
#line 199 "exprtree.y"
                                                      { findID((yyvsp[-1].Symbols));
														printsymboltable((yyvsp[-1].Symbols)); 
                                                    	gst=(struct Gsymbol*)malloc(sizeof(struct Gsymbol));
														gst->next = (yyvsp[-1].Symbols);
														gst = gst->next;
														(yyval.Symbols) = (yyvsp[-1].Symbols);
													  }
#line 1829 "y.tab.c"
    break;

  case 51: /* GDeclarations: DECL ENDDECL  */
#line 206 "exprtree.y"
                                                                 { gst = NULL; (yyval.Symbols) = NULL;}
#line 1835 "y.tab.c"
    break;

  case 52: /* LDeclarations: DECL LDeclList ENDDECL  */
#line 209 "exprtree.y"
                                                      { lst = (struct Lsymbol*)malloc(sizeof(struct Lsymbol));
														lst->next = (yyvsp[-1].Lsymbols);
														lst = lst->next;
														lst = localdecal(lst,para);
														(yyvsp[-1].Lsymbols) = lst;
														para = NULL;
														findLID(lst);
														(yyval.Lsymbols) = (yyvsp[-1].Lsymbols);
													  }
#line 1849 "y.tab.c"
    break;

  case 53: /* LDeclarations: DECL ENDDECL  */
#line 218 "exprtree.y"
                                                                  { lst = NULL;
			 											int c = -3;
			 										    lst = localdecal(lst,para);
														para = NULL;
														findLID(lst);
														(yyval.Lsymbols) = lst;
													  }
#line 1861 "y.tab.c"
    break;

  case 54: /* LDeclarations: %empty  */
#line 225 "exprtree.y"
                                                                  { lst = NULL;
			 											int c = -3;
			 										    lst = localdecal(lst,para);
														para = NULL;
														findLID(lst);
														(yyval.Lsymbols) = lst;
													  }
#line 1873 "y.tab.c"
    break;

  case 55: /* GDeclList: GDeclList GDecl  */
#line 234 "exprtree.y"
                                                      { (yyval.Symbols) = joinnode((yyvsp[-1].Symbols),(yyvsp[0].Symbols));}
#line 1879 "y.tab.c"
    break;

  case 56: /* GDeclList: GDecl  */
#line 235 "exprtree.y"
                                                              { (yyval.Symbols) = (yyvsp[0].Symbols);}
#line 1885 "y.tab.c"
    break;

  case 57: /* LDeclList: LDeclList LDecl  */
#line 238 "exprtree.y"
                                                     { (yyval.Lsymbols) = joinLVnode((yyvsp[-1].Lsymbols),(yyvsp[0].Lsymbols));}
#line 1891 "y.tab.c"
    break;

  case 58: /* LDeclList: LDecl  */
#line 239 "exprtree.y"
                                                     { (yyval.Lsymbols) = (yyvsp[0].Lsymbols);}
#line 1897 "y.tab.c"
    break;

  case 59: /* GDecl: Type GidList ';'  */
#line 242 "exprtree.y"
                                                                        {
														struct Gsymbol* t = (yyvsp[-1].Symbols);
														while(t != NULL)
														{
															t->type = (yyvsp[-2].TT);
											               	t = t->next;
														}
														(yyval.Symbols) = (yyvsp[-1].Symbols);
													}
#line 1911 "y.tab.c"
    break;

  case 60: /* LDecl: Type LidList ';'  */
#line 253 "exprtree.y"
                                                   {
													struct Lsymbol* t = (yyvsp[-1].Lsymbols);
													while(t != NULL)
														{
															t->type = (yyvsp[-2].TT);
											               	t = t->next;
														}
													(yyval.Lsymbols) = (yyvsp[-1].Lsymbols);
												   }
#line 1925 "y.tab.c"
    break;

  case 61: /* GidList: GidList ',' Gid  */
#line 264 "exprtree.y"
                                                                        { (yyval.Symbols) = joinnode((yyvsp[-2].Symbols),(yyvsp[0].Symbols));}
#line 1931 "y.tab.c"
    break;

  case 62: /* GidList: Gid  */
#line 265 "exprtree.y"
                                                                    { (yyval.Symbols) = (yyvsp[0].Symbols);}
#line 1937 "y.tab.c"
    break;

  case 63: /* LidList: LidList ',' ID  */
#line 268 "exprtree.y"
                                                { (yyval.Lsymbols) = joinLVnode((yyvsp[-2].Lsymbols), LInstall((yyvsp[0].name), findType("int"))); }
#line 1943 "y.tab.c"
    break;

  case 64: /* LidList: ID  */
#line 269 "exprtree.y"
                                                { (yyval.Lsymbols) = LInstall((yyvsp[0].name), findType("int"));}
#line 1949 "y.tab.c"
    break;

  case 65: /* Gid: ID '[' NUM ']'  */
#line 272 "exprtree.y"
                                                                                { (yyval.Symbols) = createVarList((yyvsp[-3].name),inttype,(yyvsp[-1].number),++binding,NULL,-1); binding += (yyvsp[-1].number) - 1;}
#line 1955 "y.tab.c"
    break;

  case 66: /* Gid: ID '(' ParamList ')'  */
#line 273 "exprtree.y"
                                                                        { findparam((yyvsp[-1].parameter)); (yyval.Symbols) = createVarList((yyvsp[-3].name),inttype,0,0,(yyvsp[-1].parameter),flabel++);}
#line 1961 "y.tab.c"
    break;

  case 67: /* Gid: ID '(' ')'  */
#line 274 "exprtree.y"
                                                                        { (yyval.Symbols) = createVarList((yyvsp[-2].name),inttype,0,0,NULL,flabel++);}
#line 1967 "y.tab.c"
    break;

  case 68: /* Gid: ID  */
#line 275 "exprtree.y"
                                                    { (yyval.Symbols) = createVarList((yyvsp[0].name),inttype,1,++binding,NULL,-1);}
#line 1973 "y.tab.c"
    break;

  case 69: /* ParamList: ParamList ',' Param  */
#line 278 "exprtree.y"
                                                { (yyval.parameter) = para = AppendParamlist((yyvsp[-2].parameter),(yyvsp[0].parameter));}
#line 1979 "y.tab.c"
    break;

  case 70: /* ParamList: Param  */
#line 279 "exprtree.y"
                                                { (yyval.parameter) = para = (yyvsp[0].parameter);}
#line 1985 "y.tab.c"
    break;

  case 71: /* Param: Type ID  */
#line 282 "exprtree.y"
                                                { (yyval.parameter) = CreateParamlist((yyvsp[-1].TT),(yyvsp[0].name));}
#line 1991 "y.tab.c"
    break;

  case 72: /* Type: INTTYPE  */
#line 285 "exprtree.y"
                                                { (yyval.TT) = findType("int");}
#line 1997 "y.tab.c"
    break;

  case 73: /* Type: STRTYPE  */
#line 286 "exprtree.y"
                                                { (yyval.TT) = findType("str");}
#line 2003 "y.tab.c"
    break;

  case 74: /* Type: ID  */
#line 287 "exprtree.y"
                                                    { if((yyvsp[0].name) == "bool" || (yyvsp[0].name) == "void")
	 											  {
												  	printf("%s type is not avilable",(yyvsp[0].name));
												  	exit(0);
	 											  }
												  (yyval.TT) = findType((yyvsp[0].name));
												}
#line 2015 "y.tab.c"
    break;

  case 75: /* expr: expr PLUS expr  */
#line 296 "exprtree.y"
                                {(yyval.no) = createTree(-1,MATH_NODE,"+",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2021 "y.tab.c"
    break;

  case 76: /* expr: expr MINUS expr  */
#line 297 "exprtree.y"
                                {(yyval.no) = createTree(-1,MATH_NODE,"-",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2027 "y.tab.c"
    break;

  case 77: /* expr: expr MUL expr  */
#line 298 "exprtree.y"
                                    {(yyval.no) = createTree(-1,MATH_NODE,"*",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2033 "y.tab.c"
    break;

  case 78: /* expr: expr DIV expr  */
#line 299 "exprtree.y"
                                    {(yyval.no) = createTree(-1,MATH_NODE,"/",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2039 "y.tab.c"
    break;

  case 79: /* expr: expr MOD expr  */
#line 300 "exprtree.y"
                                    {(yyval.no) = createTree(-1,MATH_NODE,"%",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2045 "y.tab.c"
    break;

  case 80: /* expr: expr LT expr  */
#line 301 "exprtree.y"
                                {(yyval.no) = createTree(-1,BOOL_NODE,"<",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2051 "y.tab.c"
    break;

  case 81: /* expr: expr LTEQ expr  */
#line 302 "exprtree.y"
                                {(yyval.no) = createTree(-1,BOOL_NODE,"<=",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2057 "y.tab.c"
    break;

  case 82: /* expr: expr GT expr  */
#line 303 "exprtree.y"
                                {(yyval.no) = createTree(-1,BOOL_NODE,">",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2063 "y.tab.c"
    break;

  case 83: /* expr: expr GTEQ expr  */
#line 304 "exprtree.y"
                                {(yyval.no) = createTree(-1,BOOL_NODE,">=",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2069 "y.tab.c"
    break;

  case 84: /* expr: expr EQEQ expr  */
#line 305 "exprtree.y"
                                {(yyval.no) = createTree(-1,BOOL_NODE,"==",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2075 "y.tab.c"
    break;

  case 85: /* expr: expr NOEQ expr  */
#line 306 "exprtree.y"
                                {(yyval.no) = createTree(-1,BOOL_NODE,"!=",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2081 "y.tab.c"
    break;

  case 86: /* expr: expr AND expr  */
#line 307 "exprtree.y"
                                {(yyval.no) = createTree(-1,LOGICAL_NODE,"&&",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2087 "y.tab.c"
    break;

  case 87: /* expr: expr OR expr  */
#line 308 "exprtree.y"
                                {(yyval.no) = createTree(-1,LOGICAL_NODE,"||",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2093 "y.tab.c"
    break;

  case 88: /* expr: '(' expr ')'  */
#line 309 "exprtree.y"
                                    {(yyval.no) = (yyvsp[-1].no);}
#line 2099 "y.tab.c"
    break;

  case 89: /* expr: NUM  */
#line 310 "exprtree.y"
                                        {(yyval.no) = createTree((yyvsp[0].number),NUM_NODE,NULL,NULL,NULL,NULL);}
#line 2105 "y.tab.c"
    break;

  case 90: /* expr: IDENTIFIER  */
#line 311 "exprtree.y"
                                {(yyval.no) = (yyvsp[0].no);}
#line 2111 "y.tab.c"
    break;

  case 91: /* expr: NIL  */
#line 312 "exprtree.y"
                                {(yyval.no) = createTree(-1,NULL_NODE,"NULL",NULL,NULL,NULL);}
#line 2117 "y.tab.c"
    break;

  case 92: /* expr: E  */
#line 313 "exprtree.y"
                                {(yyval.no) = (yyvsp[0].no);}
#line 2123 "y.tab.c"
    break;

  case 93: /* Field: Field '.' ID  */
#line 316 "exprtree.y"
                               { (yyval.no) = createTree(-1,FIELD_NODE,(yyvsp[0].name),(yyvsp[-2].no),NULL,NULL); }
#line 2129 "y.tab.c"
    break;

  case 94: /* Field: ID '.' ID  */
#line 317 "exprtree.y"
                                   { (yyval.no) = createTree(-1,FIELD_NODE,(yyvsp[0].name),createTree(-1,VAR_NODE,(yyvsp[-2].name),NULL,NULL,NULL),NULL,NULL); }
#line 2135 "y.tab.c"
    break;

  case 95: /* IDENTIFIER: ID  */
#line 320 "exprtree.y"
                                                                        {(yyval.no) = createTree(-1,VAR_NODE,(yyvsp[0].name),NULL,NULL,NULL);}
#line 2141 "y.tab.c"
    break;

  case 96: /* IDENTIFIER: Field  */
#line 321 "exprtree.y"
                                                            { (yyval.no) = (yyvsp[0].no);}
#line 2147 "y.tab.c"
    break;

  case 97: /* IDENTIFIER: ID '[' expr ']'  */
#line 322 "exprtree.y"
                                                        {
													struct tnode* temp = createTree(-1,VAR_NODE,(yyvsp[-3].name),(yyvsp[-1].no),NULL,NULL);
													if(temp->left->type->name != "int")
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
#line 2166 "y.tab.c"
    break;

  case 98: /* E: ID '(' ')'  */
#line 337 "exprtree.y"
                                    { (yyval.no) = createTree(-1,FUNCTION_NODE,(yyvsp[-2].name),NULL,NULL,NULL);}
#line 2172 "y.tab.c"
    break;

  case 99: /* E: ID '(' ArgList ')'  */
#line 338 "exprtree.y"
                                    { (yyval.no) = createTree(-1,FUNCTION_NODE,(yyvsp[-3].name),(yyvsp[-1].no),NULL,NULL);}
#line 2178 "y.tab.c"
    break;

  case 100: /* ArgList: ArgList ',' expr  */
#line 341 "exprtree.y"
                               {
								tnode* t = (yyvsp[-2].no);
								while(t->extra != NULL) t = t->extra;
								t->extra = (yyvsp[0].no);
								(yyval.no) = (yyvsp[-2].no);
                               }
#line 2189 "y.tab.c"
    break;

  case 101: /* ArgList: expr  */
#line 347 "exprtree.y"
                               {(yyval.no) = (yyvsp[0].no);}
#line 2195 "y.tab.c"
    break;

  case 102: /* ArgList: Word  */
#line 348 "exprtree.y"
                                       {(yyval.no) = (yyvsp[0].no);}
#line 2201 "y.tab.c"
    break;


#line 2205 "y.tab.c"

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

#line 351 "exprtree.y"


yyerror(char const *s)
{
    printf("yyerror %s\n",s);
}


int main(void) {
	fp = fopen("a.xsm","wb");
	fprintf(fp, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",0,2056,0,0,0,0,0,0);
	fprintf(fp, "JMP F0\n");
	FILE* tmp = fopen("test.txt","r");
	yyin = tmp;
	yyparse();
	fclose(tmp);
	return 0;
}