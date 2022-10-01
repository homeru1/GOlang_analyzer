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
     type_const = 258,
     CONST = 259,
     CASE = 260,
     DEFAULT = 261,
     IMPORT = 262,
     PACKAGE = 263,
     VAR = 264,
     RANGE = 265,
     MAP = 266,
     DELETE = 267,
     PRINT = 268,
     MAKE = 269,
     APPEND = 270,
     COPY = 271,
     IF = 272,
     SWITCH = 273,
     FALLTHROUGH = 274,
     ELSE = 275,
     TYPE = 276,
     FOR = 277,
     DO = 278,
     WHILE = 279,
     GOTO = 280,
     CONTINUE = 281,
     BREAK = 282,
     struct_const = 283,
     RETURN = 284,
     or_const = 285,
     and_const = 286,
     param_const = 287,
     eq_const = 288,
     rel_const = 289,
     shift_const = 290,
     inc_const = 291,
     point_const = 292,
     PUNC = 293,
     int_const = 294,
     float_const = 295,
     char_const = 296,
     id = 297,
     string = 298,
     enumeration_const = 299,
     storage_const = 300,
     qual_const = 301,
     enum_const = 302,
     DEFINE = 303,
     SIZEOF = 304,
     HEADER = 305
   };
#endif
/* Tokens.  */
#define type_const 258
#define CONST 259
#define CASE 260
#define DEFAULT 261
#define IMPORT 262
#define PACKAGE 263
#define VAR 264
#define RANGE 265
#define MAP 266
#define DELETE 267
#define PRINT 268
#define MAKE 269
#define APPEND 270
#define COPY 271
#define IF 272
#define SWITCH 273
#define FALLTHROUGH 274
#define ELSE 275
#define TYPE 276
#define FOR 277
#define DO 278
#define WHILE 279
#define GOTO 280
#define CONTINUE 281
#define BREAK 282
#define struct_const 283
#define RETURN 284
#define or_const 285
#define and_const 286
#define param_const 287
#define eq_const 288
#define rel_const 289
#define shift_const 290
#define inc_const 291
#define point_const 292
#define PUNC 293
#define int_const 294
#define float_const 295
#define char_const 296
#define id 297
#define string 298
#define enumeration_const 299
#define storage_const 300
#define qual_const 301
#define enum_const 302
#define DEFINE 303
#define SIZEOF 304
#define HEADER 305



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
