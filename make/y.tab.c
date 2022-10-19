/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "..\\main\\golang.y"

	#include<stdio.h>
	int yylex(void);
	int yyerror(const char *s);
	int yyparse();
	int success = 1;
	extern FILE *yyin;

/* Line 371 of yacc.c  */
#line 77 "y.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
     t_vtype = 258,
     t_constant = 259,
     t_case = 260,
     t_func = 261,
     t_import = 262,
     t_chan = 263,
     t_defer = 264,
     t_go = 265,
     t_interface = 266,
     t_default = 267,
     t_var = 268,
     t_range = 269,
     t_map = 270,
     t_package = 271,
     t_if = 272,
     t_select = 273,
     t_switch = 274,
     t_fallthrough = 275,
     t_else = 276,
     t_type = 277,
     t_for = 278,
     t_goto = 279,
     t_continue = 280,
     t_break = 281,
     t_return = 282,
     t_struct_const = 283,
     t_or_const = 284,
     t_and_const = 285,
     t_param_const = 286,
     t_eq_const = 287,
     t_rel_const = 288,
     t_shift_const = 289,
     t_inc_const = 290,
     t_point_const = 291,
     t_punc = 292,
     t_int_const = 293,
     t_float_const = 294,
     t_char_const = 295,
     t_id = 296,
     t_string = 297,
     t_short_dec = 298,
     t_open_br = 299,
     t_close_br = 300,
     t_sign = 301,
     t_comma = 302,
     t_equality = 303,
     t_open_paren = 304,
     t_close_paren = 305,
     t_open_sq = 306,
     t_close_sq = 307,
     t_bool = 308,
     t_rune = 309,
     t_semicolon = 310,
     t_blank_identifier = 311,
     t_dot = 312,
     t_colon = 313,
     t_true = 314,
     t_false = 315,
     t_short_expr = 316,
     t_make = 317,
     t_enter = 318,
     t_eof = 319
   };
#endif
/* Tokens.  */
#define t_vtype 258
#define t_constant 259
#define t_case 260
#define t_func 261
#define t_import 262
#define t_chan 263
#define t_defer 264
#define t_go 265
#define t_interface 266
#define t_default 267
#define t_var 268
#define t_range 269
#define t_map 270
#define t_package 271
#define t_if 272
#define t_select 273
#define t_switch 274
#define t_fallthrough 275
#define t_else 276
#define t_type 277
#define t_for 278
#define t_goto 279
#define t_continue 280
#define t_break 281
#define t_return 282
#define t_struct_const 283
#define t_or_const 284
#define t_and_const 285
#define t_param_const 286
#define t_eq_const 287
#define t_rel_const 288
#define t_shift_const 289
#define t_inc_const 290
#define t_point_const 291
#define t_punc 292
#define t_int_const 293
#define t_float_const 294
#define t_char_const 295
#define t_id 296
#define t_string 297
#define t_short_dec 298
#define t_open_br 299
#define t_close_br 300
#define t_sign 301
#define t_comma 302
#define t_equality 303
#define t_open_paren 304
#define t_close_paren 305
#define t_open_sq 306
#define t_close_sq 307
#define t_bool 308
#define t_rune 309
#define t_semicolon 310
#define t_blank_identifier 311
#define t_dot 312
#define t_colon 313
#define t_true 314
#define t_false 315
#define t_short_expr 316
#define t_make 317
#define t_enter 318
#define t_eof 319



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

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 271 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   461

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  170
/* YYNRULES -- Number of states.  */
#define YYNSTATES  307

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   319

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,    67,    65,     2,    66,     2,    68,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    10,    13,    15,    17,    19,    21,
      24,    27,    31,    34,    36,    38,    41,    45,    47,    49,
      51,    53,    55,    57,    59,    61,    63,    65,    67,    69,
      71,    76,    82,    87,    91,    97,   104,   108,   113,   118,
     122,   127,   131,   135,   140,   144,   151,   158,   164,   169,
     174,   178,   181,   183,   189,   195,   197,   203,   209,   214,
     217,   221,   223,   225,   228,   230,   232,   234,   236,   238,
     240,   242,   244,   247,   250,   256,   260,   263,   266,   269,
     271,   274,   277,   280,   283,   287,   290,   293,   296,   300,
     302,   304,   306,   308,   311,   315,   317,   321,   324,   327,
     329,   333,   336,   338,   343,   345,   348,   351,   354,   358,
     360,   361,   365,   369,   371,   375,   377,   379,   380,   382,
     384,   386,   387,   389,   392,   400,   404,   406,   408,   413,
     422,   429,   433,   437,   441,   444,   446,   449,   451,   455,
     459,   462,   466,   468,   472,   480,   490,   497,   503,   509,
     515,   520,   524,   526,   531,   536,   540,   542,   546,   553,
     558,   566,   571,   580,   582,   584,   588,   591,   595,   597,
     599
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      70,     0,    -1,    70,    71,   135,    -1,    71,   135,    -1,
      70,   135,    -1,    72,    -1,    73,    -1,    74,    -1,   127,
      -1,    16,    41,    -1,     7,    42,    -1,     6,    41,    75,
      -1,    77,    76,    -1,    45,    -1,    44,    -1,    44,    63,
      -1,    77,    78,   135,    -1,    79,    -1,   115,    -1,    90,
      -1,    88,    -1,    89,    -1,   102,    -1,   120,    -1,    83,
      -1,   111,    -1,   118,    -1,   108,    -1,   127,    -1,   134,
      -1,    13,    41,    81,   110,    -1,    13,    41,    81,   110,
       3,    -1,    13,    41,    81,    80,    -1,    41,    82,   110,
      -1,    41,    82,   120,     3,   121,    -1,    13,    41,    81,
     120,     3,   121,    -1,    41,    82,    80,    -1,    41,   120,
      81,   110,    -1,    13,    41,    81,   124,    -1,    41,    82,
     124,    -1,    41,   120,    81,   124,    -1,    41,    82,   125,
      -1,    41,    81,   125,    -1,    13,    41,    81,   125,    -1,
      13,    41,   126,    -1,    41,    82,    62,    49,   126,    50,
      -1,    13,    41,    41,    81,    41,   133,    -1,    13,    41,
      81,    41,   133,    -1,    41,    82,    41,   133,    -1,    41,
     134,    81,    87,    -1,   110,    53,   110,    -1,     3,    48,
      -1,    48,    -1,    47,    41,    81,   110,    47,    -1,    47,
      41,    81,    80,    47,    -1,    43,    -1,    47,    41,    82,
     110,    47,    -1,    47,    41,    82,    80,    47,    -1,    41,
      49,   109,    50,    -1,    86,    83,    -1,    85,    34,    85,
      -1,    41,    -1,    38,    -1,    41,    57,    -1,    38,    -1,
      39,    -1,    41,    -1,    42,    -1,    54,    -1,    56,    -1,
      83,    -1,    84,    -1,    24,    41,    -1,    41,    58,    -1,
      19,   112,    55,   110,    91,    -1,    19,   110,    91,    -1,
      19,    91,    -1,    92,   101,    -1,    93,   101,    -1,    44,
      -1,    44,   135,    -1,    92,    94,    -1,    92,    95,    -1,
      93,    94,    -1,     5,    99,   100,    -1,    12,   100,    -1,
      97,    98,    -1,   110,    47,    -1,    97,   110,    47,    -1,
     110,    -1,    96,    -1,   110,    -1,    58,    -1,    58,    63,
      -1,   100,    78,   135,    -1,    45,    -1,   103,   104,   106,
      -1,   103,   104,    -1,   103,   106,    -1,   103,    -1,    17,
     113,    75,    -1,   104,   105,    -1,   105,    -1,    21,    17,
     113,    75,    -1,   107,    -1,   106,   107,    -1,    21,    75,
      -1,    27,   109,    -1,   109,    47,   110,    -1,   110,    -1,
      -1,   110,    46,    87,    -1,   116,   110,   117,    -1,    87,
      -1,    41,    61,    41,    -1,    79,    -1,    83,    -1,    -1,
      80,    -1,    59,    -1,    60,    -1,    -1,   110,    -1,    41,
      35,    -1,    23,   112,    55,   113,    55,   114,    75,    -1,
      23,   113,    75,    -1,    49,    -1,    50,    -1,    13,    41,
     120,     3,    -1,    13,    41,   120,     3,    81,   120,     3,
     121,    -1,    13,    41,   120,     3,    81,   124,    -1,    51,
      38,    52,    -1,    51,    41,    52,    -1,    51,    42,    52,
      -1,    51,    52,    -1,   119,    -1,   119,   120,    -1,   122,
      -1,   122,    47,   121,    -1,    44,   123,    45,    -1,    44,
      45,    -1,    44,   121,    45,    -1,    87,    -1,   123,    47,
      87,    -1,    62,    49,   120,     3,    47,    87,    50,    -1,
      62,    49,   120,     3,    47,    87,    47,    38,    87,    -1,
      41,    51,    87,    58,    87,    52,    -1,    41,    51,    58,
      87,    52,    -1,    41,    51,    87,    58,    52,    -1,    15,
      51,     3,    52,     3,    -1,   128,   129,   135,   130,    -1,
      22,    41,    28,    -1,    44,    -1,   129,   135,    41,     3,
      -1,   129,   135,    41,    41,    -1,   129,   135,    41,    -1,
      45,    -1,    41,    58,    87,    -1,   131,    47,   135,    41,
      58,    87,    -1,    41,    58,    41,   132,    -1,   131,    47,
     135,    41,    58,    41,   132,    -1,    44,   135,   131,    45,
      -1,    44,   135,   131,    47,   135,    45,    47,   135,    -1,
     122,    -1,   132,    -1,   132,    47,   133,    -1,    57,    41,
      -1,    57,    41,   134,    -1,    55,    -1,    63,    -1,    64,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    16,    16,    17,    18,    21,    22,    23,    24,    27,
      30,    33,    36,    39,    42,    43,    44,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      84,    87,    88,    89,    90,    92,    93,    94,    97,    98,
     101,   104,   105,   108,   111,   112,   113,   114,   115,   116,
     117,   118,   121,   124,   127,   128,   129,   132,   133,   137,
     138,   139,   144,   145,   148,   151,   155,   158,   159,   162,
     166,   167,   170,   171,   172,   177,   181,   182,   183,   184,
     187,   191,   192,   196,   200,   201,   204,   207,   210,   211,
     212,   215,   216,   217,   220,   223,   224,   225,   228,   229,
     230,   231,   234,   235,   238,   239,   242,   245,   248,   249,
     250,   253,   254,   255,   256,   259,   260,   263,   264,   266,
     267,   268,   271,   272,   275,   276,   279,   280,   281,   284,
     287,   290,   293,   294,   295,   296,   299,   302,   303,   304,
     305,   308,   309,   310,   313,   314,   317,   318,   321,   322,
     323
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "t_vtype", "t_constant", "t_case",
  "t_func", "t_import", "t_chan", "t_defer", "t_go", "t_interface",
  "t_default", "t_var", "t_range", "t_map", "t_package", "t_if",
  "t_select", "t_switch", "t_fallthrough", "t_else", "t_type", "t_for",
  "t_goto", "t_continue", "t_break", "t_return", "t_struct_const",
  "t_or_const", "t_and_const", "t_param_const", "t_eq_const",
  "t_rel_const", "t_shift_const", "t_inc_const", "t_point_const", "t_punc",
  "t_int_const", "t_float_const", "t_char_const", "t_id", "t_string",
  "t_short_dec", "t_open_br", "t_close_br", "t_sign", "t_comma",
  "t_equality", "t_open_paren", "t_close_paren", "t_open_sq", "t_close_sq",
  "t_bool", "t_rune", "t_semicolon", "t_blank_identifier", "t_dot",
  "t_colon", "t_true", "t_false", "t_short_expr", "t_make", "t_enter",
  "t_eof", "'+'", "'-'", "'*'", "'/'", "$accept", "START", "GLOBAL",
  "PACKAGE", "IMPORT", "FUNC", "BODY", "BODY_END", "BODY_START",
  "BODY_FILLING", "VAR", "BOOLEAN", "ASSIGNMENT", "SHORT_ASSIGN",
  "FUNC_CALL", "SHIFT", "SHIFT_AC", "METHOD", "VALUE", "GOTO", "LABEL",
  "SWITCH", "SWITCH_BODY", "SWITCH_BODY_START",
  "SWITCH_BODY_START_WITH_DEFAULT", "CASE", "DEFAULT", "MULTIPLE_ARG",
  "FIRST_PART", "SECOND_PART", "CASE_STATEMENT", "CASE_BODY",
  "SWITCH_BODY_END", "IF", "IF_FIRST", "MULTY_ELSEIF_SECOND",
  "ELSEIF_SECOND", "MULTY_ELSE_THIRD", "ELSE_THIRD", "RETURN", "PARAM",
  "EXPR", "SHORT_EXPR", "INIT_STATE", "CONDITION", "POST_STATE", "FOR",
  "EXPR_START", "EXPR_END", "ARRAY_BODY", "ARRAY_INDEX", "MULTI_AR",
  "PLENTY", "PLENTY_OLD", "ENUM", "MAKE", "SLICE", "MAPS", "STRUCT",
  "STRUCT_START", "STRUCT_BODY", "STRUCT_END", "STRUCT_ENUM",
  "STRUCT_FIELD", "ST_EMBEDDED", "ACCESS_FIELDS", "END_SYMBOLS", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,    43,    45,    42,    47
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    70,    70,    71,    71,    71,    71,    72,
      73,    74,    75,    76,    77,    77,    77,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      80,    81,    81,    81,    81,    82,    82,    82,    83,    83,
      84,    85,    85,    86,    87,    87,    87,    87,    87,    87,
      87,    87,    88,    89,    90,    90,    90,    91,    91,    92,
      92,    92,    93,    93,    94,    95,    96,    97,    97,    98,
      99,    99,   100,   100,   100,   101,   102,   102,   102,   102,
     103,   104,   104,   105,   106,   106,   107,   108,   109,   109,
     109,   110,   110,   110,   111,   112,   112,   112,   113,   113,
     113,   113,   114,   114,   115,   115,   116,   117,   118,   118,
     118,   119,   119,   119,   119,   120,   120,   121,   121,   122,
     122,   122,   123,   123,   124,   124,   125,   125,   125,   126,
     127,   128,   129,   129,   129,   129,   130,   131,   131,   131,
     131,   132,   132,   132,   133,   133,   134,   134,   135,   135,
     135
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     2,     1,     1,     1,     1,     2,
       2,     3,     2,     1,     1,     2,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     5,     4,     3,     5,     6,     3,     4,     4,     3,
       4,     3,     3,     4,     3,     6,     6,     5,     4,     4,
       3,     2,     1,     5,     5,     1,     5,     5,     4,     2,
       3,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     5,     3,     2,     2,     2,     1,
       2,     2,     2,     2,     3,     2,     2,     2,     3,     1,
       1,     1,     1,     2,     3,     1,     3,     2,     2,     1,
       3,     2,     1,     4,     1,     2,     2,     2,     3,     1,
       0,     3,     3,     1,     3,     1,     1,     0,     1,     1,
       1,     0,     1,     2,     7,     3,     1,     1,     4,     8,
       6,     3,     3,     3,     2,     1,     2,     1,     3,     3,
       2,     3,     1,     3,     7,     9,     6,     5,     5,     5,
       4,     3,     1,     4,     4,     3,     1,     3,     6,     4,
       7,     4,     8,     1,     1,     3,     2,     3,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     5,     6,     7,
       8,     0,     0,    10,     9,     0,     1,   168,   169,   170,
       0,     4,     3,   152,     0,    14,    11,     0,   151,     2,
       0,    15,     0,   121,   117,   117,     0,   110,     0,    13,
       0,     0,    12,     0,    17,    24,     0,    20,    21,    19,
      22,    99,    27,    25,    18,    26,   135,    23,    28,    29,
     155,   156,   150,     0,    64,    65,    66,    67,   126,    68,
      69,   119,   120,   118,    70,    71,     0,   113,     0,     0,
       0,     0,    66,    79,   115,    70,    76,     0,     0,     0,
       0,     0,     0,    72,   107,   109,     0,    55,     0,    52,
     110,     0,    73,     0,     0,     0,     0,     0,     0,     0,
       0,   134,   166,    16,     0,    59,     0,    97,   102,    98,
     104,   136,   153,   154,     0,     0,     0,     0,     0,    44,
      63,     0,     0,     0,   100,     0,     0,    80,     0,     0,
      95,    81,    82,    77,    83,    78,    75,     0,   121,   125,
       0,    51,     0,     0,   114,     0,    42,    66,     0,    36,
      33,     0,    39,    41,     0,     0,   131,   132,   133,   167,
     121,   106,   101,    96,     0,   105,     0,     0,     0,    66,
       0,    32,    30,     0,    38,    43,   128,    62,    61,    60,
     111,    50,   127,   112,    90,     0,     0,    91,    92,    85,
       0,     0,   108,     0,     0,    58,     0,     0,   163,   164,
      48,     0,     0,    37,    40,    49,     0,     0,     0,    47,
       0,    31,     0,     0,    86,    89,    84,    87,    93,     0,
      74,     0,     0,     0,     0,     0,     0,     0,     0,   140,
     142,     0,   137,     0,     0,     0,     0,     0,    34,   103,
       0,    46,    35,     0,   130,    88,    94,    66,   122,     0,
      54,    53,    57,    56,     0,     0,   141,     0,   139,     0,
       0,     0,   165,     0,    45,   149,     0,   123,   124,   147,
     148,     0,   138,   143,     0,   161,     0,     0,   129,   146,
      66,   157,     0,     0,   159,     0,     0,     0,   144,     0,
       0,     0,    66,   158,   162,   145,   160
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,     9,   171,    42,    27,   229,
      44,    73,   104,   105,    74,    75,    76,    46,    77,    47,
      48,    49,    86,    87,    88,   141,   142,   194,   195,   224,
     196,   199,   143,    50,    51,   117,   118,   119,   120,    52,
      94,    78,    53,    90,    79,   259,    54,    80,   193,    55,
      56,    57,   241,   208,   243,   162,   156,   129,    58,    11,
      24,    62,   271,   209,   210,    59,    21
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -263
static const yytype_int16 yypact[] =
{
     140,    -5,     4,    16,    30,   127,   285,  -263,  -263,  -263,
    -263,    59,    68,  -263,  -263,    55,  -263,  -263,  -263,  -263,
     285,  -263,  -263,  -263,   285,    69,  -263,   232,  -263,  -263,
      24,  -263,    85,   314,   237,   187,    99,   352,   116,  -263,
     192,   112,  -263,   285,  -263,  -263,   125,  -263,  -263,  -263,
    -263,   115,  -263,  -263,  -263,  -263,   106,  -263,  -263,  -263,
      20,  -263,  -263,    94,   142,  -263,    67,  -263,  -263,  -263,
    -263,  -263,  -263,  -263,  -263,  -263,   153,  -263,    -8,    68,
     352,   154,   165,   285,  -263,   143,  -263,   126,    19,    44,
     148,   152,    68,  -263,   163,   169,   176,  -263,   191,  -263,
     352,   112,  -263,   199,   201,   269,    63,    63,   200,   206,
     208,  -263,   196,  -263,   -14,  -263,    10,   115,  -263,   241,
    -263,  -263,  -263,  -263,   213,    63,   224,   288,   266,  -263,
    -263,   110,   395,   352,  -263,    49,    57,  -263,   352,   212,
    -263,  -263,  -263,  -263,  -263,  -263,  -263,   352,   314,  -263,
     352,  -263,    39,   108,  -263,   221,  -263,   294,   225,  -263,
      -8,   279,  -263,  -263,   155,   395,  -263,  -263,  -263,  -263,
     314,  -263,  -263,   241,    68,  -263,   281,   246,    63,   294,
     239,  -263,    17,   287,  -263,  -263,    63,  -263,  -263,  -263,
    -263,   169,  -263,  -263,  -263,   352,   212,   114,   229,   244,
      44,   243,   169,   352,   352,  -263,   323,   258,  -263,   257,
    -263,    11,   261,   169,  -263,  -263,    68,   254,   271,  -263,
     106,  -263,   261,   -18,  -263,   172,   244,  -263,  -263,   285,
    -263,   371,   270,   174,   286,   313,   395,   276,   344,  -263,
    -263,   290,   289,   136,   300,   271,   343,   297,  -263,  -263,
     351,  -263,  -263,   354,  -263,  -263,  -263,    95,   169,    68,
    -263,  -263,  -263,  -263,   264,   376,  -263,   261,  -263,   395,
     309,   190,  -263,   311,  -263,  -263,   261,  -263,  -263,  -263,
    -263,   317,  -263,  -263,   400,  -263,   285,   395,  -263,  -263,
     275,  -263,    73,   138,  -263,   318,   324,   334,  -263,   405,
     285,   395,   275,  -263,  -263,  -263,  -263
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -263,  -263,   370,  -263,  -263,  -263,   -11,  -263,  -263,   353,
     204,   -97,   -58,   226,   -24,  -263,   253,  -263,  -115,  -263,
    -263,  -263,   -83,  -263,  -263,   299,  -263,  -263,  -263,  -263,
    -263,   203,   304,  -263,  -263,  -263,   278,   280,  -100,  -263,
     296,   -25,  -263,   367,   -33,  -263,  -263,  -263,  -263,  -263,
    -263,   -31,  -183,  -191,  -263,  -123,   -71,   193,    53,  -263,
    -263,  -263,  -263,  -262,  -166,   -23,    -6
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -122
static const yytype_int16 yytable[] =
{
      22,    26,    92,    45,   184,   127,   146,   106,   159,    89,
      85,    85,    95,   219,    29,   107,   242,   190,    30,   175,
     221,   242,   115,   122,   138,   121,   124,   170,   294,   248,
     181,   242,   128,    40,   163,   100,    12,   113,   132,   252,
     306,   214,    96,   130,   180,   133,    13,   242,   164,   165,
     215,   106,   251,    10,    25,   135,   185,    14,    10,   107,
      96,   123,    40,   132,   140,    60,    96,   177,   134,    61,
     133,    15,   124,   175,   161,    95,   242,   137,   127,   272,
     160,   149,    97,    28,   282,   242,    98,    99,    83,   169,
     132,   237,   240,   288,   203,   132,   183,    96,   125,   192,
     254,   -61,   182,    23,   126,    99,   232,   234,   191,   124,
     126,    99,    25,   197,   295,   201,   100,   230,   296,    96,
     203,   264,   200,   240,   130,   202,    63,    16,   223,   -61,
     277,   138,    31,     1,     2,   125,   116,   216,   139,   213,
      93,   126,    99,     3,   100,    40,     1,     2,   187,     4,
     281,   188,   130,   112,   283,   150,     3,    40,   205,    97,
     132,   227,     4,    98,    99,   100,   114,    40,    96,   291,
     225,   140,   293,   101,   102,    45,   -62,   103,   233,   235,
     246,   268,    17,   269,   303,   297,   305,   131,   298,   246,
      18,    19,   253,    64,    65,   136,    66,    67,  -116,   -61,
      81,   244,    45,   147,    68,   249,   258,   148,    97,    69,
     150,    70,    98,    99,   100,   132,    40,   180,   132,   255,
     132,   261,   101,   256,   151,    64,    65,   133,    82,    67,
     108,  -121,   152,   109,   110,   285,    68,   286,    84,    84,
     154,    69,   155,    70,   111,    32,    71,    72,   278,    33,
      81,    34,   166,    41,     4,    35,    36,    32,   167,    37,
     168,    33,   174,    34,   176,   178,     4,    35,    36,   186,
     198,    37,   206,    38,   211,    64,    65,    39,    82,    67,
     292,    83,   212,    40,   217,    38,    68,   218,   220,    41,
     222,    69,   228,    70,   304,    40,    64,    65,   231,    66,
      67,    41,   238,   239,   245,   238,   250,    64,    65,   -61,
     157,    67,    69,    17,    70,   207,   279,   260,    68,   207,
      40,    18,    19,    69,   100,    70,    64,    65,   -61,   179,
      67,   158,   130,   262,   265,   266,   267,    68,   207,    40,
      17,   270,    69,   100,    70,   206,   273,   274,    18,    19,
     180,   130,    64,    65,   275,    66,    67,   276,   287,   132,
     263,    64,    65,    68,    66,    67,   133,   284,    69,   289,
      70,   300,   301,    71,    72,    20,   299,    69,   204,    70,
      43,   236,    64,    65,   189,    66,    67,   144,   238,   239,
      64,    65,   145,    66,    67,   172,   153,   173,    69,   226,
      70,    68,    91,     0,   247,     0,    69,     0,    70,    64,
      65,     0,   257,    67,    64,    65,     0,    66,    67,     0,
      68,     0,     0,     0,     0,    69,     0,    70,   280,     0,
      69,     0,    70,    64,    65,     0,    66,    67,    64,    65,
       0,   290,    67,    64,    65,     0,   302,    67,     0,    69,
       0,    70,     0,     0,    69,     0,    70,     0,     0,    69,
       0,    70
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-263)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       6,    12,    35,    27,   127,    63,    89,    38,   105,    34,
      34,    35,    37,   179,    20,    38,   207,   132,    24,   119,
       3,   212,    46,     3,     5,    56,    15,    17,   290,   212,
     127,   222,    63,    51,   105,    49,    41,    43,    46,   222,
     302,   164,     3,    57,    62,    53,    42,   238,   106,   107,
     165,    82,   218,     0,    44,    80,   127,    41,     5,    82,
       3,    41,    51,    46,    45,    41,     3,   125,    79,    45,
      53,    41,    15,   173,   105,   100,   267,    83,   136,   245,
     105,    92,    43,    28,   267,   276,    47,    48,    44,   112,
      46,   206,   207,   276,   152,    46,   127,     3,    41,    50,
     223,    34,   127,    44,    47,    48,   203,   204,   133,    15,
      47,    48,    44,   138,    41,   148,    49,   200,    45,     3,
     178,   236,   147,   238,    57,   150,    41,     0,   186,    34,
      35,     5,    63,     6,     7,    41,    21,   170,    12,   164,
      41,    47,    48,    16,    49,    51,     6,     7,    38,    22,
     265,    41,    57,    41,   269,    47,    16,    51,    50,    43,
      46,    47,    22,    47,    48,    49,    41,    51,     3,   284,
     195,    45,   287,    57,    58,   199,    34,    61,   203,   204,
     211,    45,    55,    47,   299,    47,   301,    34,    50,   220,
      63,    64,   223,    38,    39,    41,    41,    42,    55,    34,
      13,   207,   226,    55,    49,   216,   231,    55,    43,    54,
      47,    56,    47,    48,    49,    46,    51,    62,    46,    47,
      46,    47,    57,   229,    48,    38,    39,    53,    41,    42,
      38,    44,    41,    41,    42,    45,    49,    47,    34,    35,
      41,    54,    41,    56,    52,    13,    59,    60,   259,    17,
      13,    19,    52,    57,    22,    23,    24,    13,    52,    27,
      52,    17,    21,    19,    51,    41,    22,    23,    24,     3,
      58,    27,    51,    41,    49,    38,    39,    45,    41,    42,
     286,    44,     3,    51,     3,    41,    49,    41,    49,    57,
       3,    54,    63,    56,   300,    51,    38,    39,    55,    41,
      42,    57,    44,    45,    47,    44,    52,    38,    39,    34,
      41,    42,    54,    55,    56,    44,    52,    47,    49,    44,
      51,    63,    64,    54,    49,    56,    38,    39,    34,    41,
      42,    62,    57,    47,    58,    45,    47,    49,    44,    51,
      55,    41,    54,    49,    56,    51,     3,    50,    63,    64,
      62,    57,    38,    39,     3,    41,    42,     3,    47,    46,
      47,    38,    39,    49,    41,    42,    53,    58,    54,    52,
      56,    47,    38,    59,    60,     5,    58,    54,   152,    56,
      27,    58,    38,    39,   131,    41,    42,    88,    44,    45,
      38,    39,    88,    41,    42,   117,   100,   117,    54,   196,
      56,    49,    35,    -1,   211,    -1,    54,    -1,    56,    38,
      39,    -1,    41,    42,    38,    39,    -1,    41,    42,    -1,
      49,    -1,    -1,    -1,    -1,    54,    -1,    56,    52,    -1,
      54,    -1,    56,    38,    39,    -1,    41,    42,    38,    39,
      -1,    41,    42,    38,    39,    -1,    41,    42,    -1,    54,
      -1,    56,    -1,    -1,    54,    -1,    56,    -1,    -1,    54,
      -1,    56
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,    16,    22,    70,    71,    72,    73,    74,
     127,   128,    41,    42,    41,    41,     0,    55,    63,    64,
      71,   135,   135,    44,   129,    44,    75,    77,    28,   135,
     135,    63,    13,    17,    19,    23,    24,    27,    41,    45,
      51,    57,    76,    78,    79,    83,    86,    88,    89,    90,
     102,   103,   108,   111,   115,   118,   119,   120,   127,   134,
      41,    45,   130,    41,    38,    39,    41,    42,    49,    54,
      56,    59,    60,    80,    83,    84,    85,    87,   110,   113,
     116,    13,    41,    44,    79,    83,    91,    92,    93,   110,
     112,   112,   113,    41,   109,   110,     3,    43,    47,    48,
      49,    57,    58,    61,    81,    82,   120,   134,    38,    41,
      42,    52,    41,   135,    41,    83,    21,   104,   105,   106,
     107,   120,     3,    41,    15,    41,    47,    81,   120,   126,
      57,    34,    46,    53,    75,   110,    41,   135,     5,    12,
      45,    94,    95,   101,    94,   101,    91,    55,    55,    75,
      47,    48,    41,   109,    41,    41,   125,    41,    62,    80,
     110,   120,   124,   125,    81,    81,    52,    52,    52,   134,
      17,    75,   105,   106,    21,   107,    51,    81,    41,    41,
      62,    80,   110,   120,   124,   125,     3,    38,    41,    85,
      87,   110,    50,   117,    96,    97,    99,   110,    58,   100,
     110,   113,   110,    81,    82,    50,    51,    44,   122,   132,
     133,    49,     3,   110,   124,    87,   113,     3,    41,   133,
      49,     3,     3,    81,    98,   110,   100,    47,    63,    78,
      91,    55,    80,   110,    80,   110,    58,    87,    44,    45,
      87,   121,   122,   123,   135,    47,   120,   126,   121,    75,
      52,   133,   121,   120,   124,    47,   135,    41,   110,   114,
      47,    47,    47,    47,    87,    58,    45,    47,    45,    47,
      41,   131,   133,     3,    50,     3,     3,    35,    75,    52,
      52,    87,   121,    87,    58,    45,    47,    47,   121,    52,
      41,    87,   135,    87,   132,    41,    45,    47,    50,    58,
      47,    38,    41,    87,   135,    87,   132
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      
/* Line 1792 of yacc.c  */
#line 1804 "y.tab.c"
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 327 "..\\main\\golang.y"


int main(int argc, char **argv)
{
	if (argc > 1)
	{
		if(!(yyin = fopen(argv[1], "r")))
		{
		perror(argv[1]);
		return (1);
		}
	}
	
    yyparse();
    if(success)
    	printf("\nParsing Successful\n");
	else 
		printf("\nParsing not successful\n");
    return 0;
}

int yyerror(const char *msg)
{
	extern int yylineno;
	printf("Parsing Failed\nLine Number: %d %s\n",yylineno,msg);
	success = 0;
	return 0;
}