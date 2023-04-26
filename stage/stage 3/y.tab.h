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
    READ = 258,                    /* READ  */
    WRITE = 259,                   /* WRITE  */
    NUM = 260,                     /* NUM  */
    ID = 261,                      /* ID  */
    EQUAL = 262,                   /* EQUAL  */
    ENDOFLINE = 263,               /* ENDOFLINE  */
    PLUS = 264,                    /* PLUS  */
    MINUS = 265,                   /* MINUS  */
    MUL = 266,                     /* MUL  */
    DIV = 267,                     /* DIV  */
    END = 268,                     /* END  */
    BEG = 269,                     /* BEG  */
    LT = 270,                      /* LT  */
    LTEQ = 271,                    /* LTEQ  */
    GT = 272,                      /* GT  */
    GTEQ = 273,                    /* GTEQ  */
    EQEQ = 274,                    /* EQEQ  */
    NOEQ = 275,                    /* NOEQ  */
    IF = 276,                      /* IF  */
    THEN = 277,                    /* THEN  */
    ELSE = 278,                    /* ELSE  */
    ENDIF = 279,                   /* ENDIF  */
    WHILE = 280,                   /* WHILE  */
    DO = 281,                      /* DO  */
    ENDWHILE = 282,                /* ENDWHILE  */
    CONTINUE = 283,                /* CONTINUE  */
    BREAK = 284,                   /* BREAK  */
    REPEAT = 285,                  /* REPEAT  */
    UNTIL = 286                    /* UNTIL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define READ 258
#define WRITE 259
#define NUM 260
#define ID 261
#define EQUAL 262
#define ENDOFLINE 263
#define PLUS 264
#define MINUS 265
#define MUL 266
#define DIV 267
#define END 268
#define BEG 269
#define LT 270
#define LTEQ 271
#define GT 272
#define GTEQ 273
#define EQEQ 274
#define NOEQ 275
#define IF 276
#define THEN 277
#define ELSE 278
#define ENDIF 279
#define WHILE 280
#define DO 281
#define ENDWHILE 282
#define CONTINUE 283
#define BREAK 284
#define REPEAT 285
#define UNTIL 286

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 12 "exprtree.y"

	struct tnode *no;

#line 133 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
