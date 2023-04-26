/* A Bison parser, made by GNU Bison 3.8.2.  */

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

#line 147 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
