/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     VTYPE = 258,
     FUNC = 259,
     CONST = 260,
     CASE = 261,
     CHAN = 262,
     DEFER = 263,
     GO = 264,
     INTERFACE = 265,
     DEFAULT = 266,
     IMPORT = 267,
     VAR = 268,
     RANGE = 269,
     MAP = 270,
     PACKAGE = 271,
     IF = 272,
     SELECT = 273,
     SWITCH = 274,
     FALLTHROUGH = 275,
     ELSE = 276,
     TYPE = 277,
     FOR = 278,
     GOTO = 279,
     CONTINUE = 280,
     BREAK = 281,
     RETURN = 282,
     struct_const = 283,
     or_const = 284,
     and_const = 285,
     param_const = 286,
     eq_const = 287,
     rel_const = 288,
     shift_const = 289,
     inc_const = 290,
     point_const = 291,
     punc = 292,
     int_const = 293,
     float_const = 294,
     char_const = 295,
     id = 296,
     string = 297,
     short_dec = 298
   };
#endif
/* Tokens.  */
#define VTYPE 258
#define FUNC 259
#define CONST 260
#define CASE 261
#define CHAN 262
#define DEFER 263
#define GO 264
#define INTERFACE 265
#define DEFAULT 266
#define IMPORT 267
#define VAR 268
#define RANGE 269
#define MAP 270
#define PACKAGE 271
#define IF 272
#define SELECT 273
#define SWITCH 274
#define FALLTHROUGH 275
#define ELSE 276
#define TYPE 277
#define FOR 278
#define GOTO 279
#define CONTINUE 280
#define BREAK 281
#define RETURN 282
#define struct_const 283
#define or_const 284
#define and_const 285
#define param_const 286
#define eq_const 287
#define rel_const 288
#define shift_const 289
#define inc_const 290
#define point_const 291
#define punc 292
#define int_const 293
#define float_const 294
#define char_const 295
#define id 296
#define string 297
#define short_dec 298



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
