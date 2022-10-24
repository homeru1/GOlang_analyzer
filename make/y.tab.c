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
	#define YYDEBUG 1

/* Line 371 of yacc.c  */
#line 78 "y.tab.c"

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
     t_eof = 319,
     t_pointer = 320,
     t_ampersand = 321,
     t_hex = 322,
     t_ten_pow = 323
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
#define t_pointer 320
#define t_ampersand 321
#define t_hex 322
#define t_ten_pow 323



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
#line 280 "y.tab.c"

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
#define YYFINAL  43
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1239

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  114
/* YYNRULES -- Number of rules.  */
#define YYNRULES  292
/* YYNRULES -- Number of states.  */
#define YYNSTATES  499

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   323

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,    71,    69,     2,    70,     2,    72,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    10,    13,    15,    17,    19,    21,
      23,    25,    27,    30,    33,    38,    44,    48,    55,    57,
      61,    63,    66,    70,    73,    76,    79,    81,    84,    87,
      90,    92,    95,    99,   103,   104,   108,   111,   113,   116,
     118,   120,   122,   125,   130,   134,   136,   139,   141,   148,
     152,   157,   162,   168,   171,   173,   176,   178,   182,   185,
     187,   189,   191,   193,   195,   197,   199,   201,   203,   205,
     207,   209,   211,   213,   215,   219,   223,   228,   232,   234,
     237,   239,   242,   244,   246,   250,   252,   254,   259,   261,
     264,   266,   269,   271,   273,   276,   280,   284,   287,   290,
     292,   295,   297,   300,   302,   305,   308,   310,   312,   315,
     317,   320,   323,   325,   327,   330,   333,   336,   338,   341,
     344,   346,   349,   351,   354,   356,   360,   362,   364,   368,
     372,   374,   376,   378,   380,   383,   387,   391,   396,   398,
     400,   402,   405,   407,   409,   411,   414,   416,   418,   420,
     422,   426,   430,   432,   434,   436,   438,   440,   443,   446,
     452,   456,   459,   462,   465,   467,   470,   473,   476,   479,
     483,   486,   489,   492,   496,   498,   500,   502,   504,   508,
     510,   514,   517,   520,   522,   526,   532,   535,   537,   540,
     544,   546,   548,   550,   552,   554,   557,   562,   564,   567,
     570,   573,   575,   576,   578,   582,   586,   588,   590,   591,
     593,   595,   597,   598,   600,   603,   611,   615,   622,   631,
     638,   642,   646,   648,   650,   654,   658,   662,   665,   667,
     670,   674,   676,   680,   685,   689,   694,   699,   706,   713,
     715,   719,   724,   732,   742,   749,   755,   761,   767,   774,
     780,   782,   785,   788,   790,   793,   798,   803,   808,   812,
     818,   825,   833,   838,   840,   843,   846,   849,   852,   854,
     857,   862,   867,   869,   872,   876,   878,   880,   882,   884,
     886,   888,   895,   903,   912,   916,   918,   921,   926,   933,
     938,   942,   944
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      74,     0,    -1,    74,    75,   182,    -1,    75,   182,    -1,
      74,   182,    -1,    76,    -1,    77,    -1,    78,    -1,   171,
      -1,   183,    -1,    97,    -1,    90,    -1,    16,    41,    -1,
       7,    42,    -1,     7,    49,   126,    50,    -1,     7,    49,
      63,   126,    50,    -1,     7,    41,    42,    -1,     6,    41,
      49,    79,    50,    80,    -1,    84,    -1,    79,    47,    84,
      -1,    93,    -1,    89,    93,    -1,    87,    89,    93,    -1,
      81,    93,    -1,    82,    83,    -1,    49,    50,    -1,    49,
      -1,    82,    85,    -1,    86,    50,    -1,    41,    89,    -1,
      41,    -1,    41,   183,    -1,    41,    31,   183,    -1,    41,
     164,     3,    -1,    -1,    41,    89,    47,    -1,    89,    47,
      -1,    63,    -1,    41,    89,    -1,    89,    -1,    63,    -1,
      88,    -1,    87,    88,    -1,     6,    49,    89,    50,    -1,
       6,    49,    50,    -1,     3,    -1,    31,     3,    -1,    41,
      -1,     6,    49,    41,    89,    50,    91,    -1,    41,    81,
      93,    -1,    41,    81,    89,    93,    -1,    41,    81,    81,
      93,    -1,     6,    49,    79,    50,    80,    -1,    95,    94,
      -1,    45,    -1,    96,    45,    -1,    44,    -1,    95,    96,
     182,    -1,    95,   182,    -1,   159,    -1,   130,    -1,   128,
      -1,   129,    -1,   142,    -1,   114,    -1,   155,    -1,    97,
      -1,   152,    -1,   171,    -1,   169,    -1,   103,    -1,   122,
      -1,   183,    -1,   165,    -1,    98,   105,    99,    -1,    13,
      98,    89,    -1,    13,    98,   104,    99,    -1,    13,    41,
     170,    -1,   101,    -1,   101,   106,    -1,   100,    -1,   100,
     110,    -1,   154,    -1,   102,    -1,   164,     3,   165,    -1,
     168,    -1,   169,    -1,    62,    49,   170,    50,    -1,   181,
      -1,    41,   165,    -1,    41,    -1,    41,   164,    -1,   122,
      -1,    65,    -1,    41,   124,    -1,   127,    53,   127,    -1,
     102,    53,   127,    -1,     9,   114,    -1,    89,    48,    -1,
      48,    -1,   104,    63,    -1,    43,    -1,   107,   109,    -1,
      47,    -1,   107,   108,    -1,   101,    47,    -1,    63,    -1,
     101,    -1,   111,   113,    -1,    47,    -1,   111,   112,    -1,
     100,    47,    -1,    63,    -1,   100,    -1,    41,   115,    -1,
     116,   117,    -1,    49,    50,    -1,    49,    -1,   116,   119,
      -1,   118,    50,    -1,   101,    -1,   154,    31,    -1,    63,
      -1,   101,    47,    -1,    63,    -1,   121,    34,   121,    -1,
      41,    -1,    38,    -1,   123,    57,   123,    -1,   122,    57,
     123,    -1,    41,    -1,   114,    -1,    65,    -1,    66,    -1,
      42,   182,    -1,    41,    42,   182,    -1,   126,    42,   182,
      -1,   126,    41,    42,   182,    -1,    38,    -1,    39,    -1,
      41,    -1,    46,    41,    -1,    42,    -1,    54,    -1,    56,
      -1,    92,   115,    -1,   114,    -1,   120,    -1,    65,    -1,
     122,    -1,   161,   154,   162,    -1,   161,   102,   162,    -1,
     125,    -1,    67,    -1,    68,    -1,    59,    -1,    60,    -1,
      24,    41,    -1,    41,    58,    -1,    19,   156,    55,   154,
     131,    -1,    19,   154,   131,    -1,    19,   131,    -1,   132,
     141,    -1,   133,   141,    -1,    44,    -1,   132,   182,    -1,
     132,   134,    -1,   132,   135,    -1,   133,   134,    -1,     5,
     139,   140,    -1,    12,   140,    -1,   137,   138,    -1,   154,
      47,    -1,   137,   154,    47,    -1,   154,    -1,   136,    -1,
     154,    -1,    58,    -1,   140,   147,   182,    -1,    45,    -1,
     143,   148,   150,    -1,   143,   148,    -1,   143,   150,    -1,
     143,    -1,    17,   157,   144,    -1,    17,   156,    55,   157,
     144,    -1,   145,   146,    -1,    44,    -1,    44,   182,    -1,
     145,   147,   182,    -1,    45,    -1,    96,    -1,    26,    -1,
      25,    -1,   149,    -1,   148,   149,    -1,    21,    17,   157,
     144,    -1,   151,    -1,   150,   151,    -1,    21,   144,    -1,
      27,   153,    -1,    99,    -1,    -1,   127,    -1,   154,    46,
     127,    -1,    41,    61,    41,    -1,    97,    -1,   114,    -1,
      -1,   102,    -1,    59,    -1,    60,    -1,    -1,   154,    -1,
      41,    35,    -1,    23,   156,    55,   157,    55,   158,   144,
      -1,    23,   157,   144,    -1,    23,   160,   105,    14,   127,
     144,    -1,    23,    41,    47,    41,   105,    14,   127,   144,
      -1,    23,    41,   105,    14,   127,   144,    -1,    56,    47,
      41,    -1,    41,    47,    56,    -1,    49,    -1,    50,    -1,
      51,    38,    52,    -1,    51,    41,    52,    -1,    51,    42,
      52,    -1,    51,    52,    -1,   163,    -1,   163,   164,    -1,
      51,    31,    52,    -1,   166,    -1,   166,    47,   165,    -1,
     166,    47,   182,   165,    -1,    44,   167,    45,    -1,    44,
     182,   167,    45,    -1,    44,   182,   165,    45,    -1,    44,
     182,   167,    47,   182,    45,    -1,    44,   182,   165,    47,
     182,    45,    -1,   127,    -1,   167,    47,   127,    -1,   167,
      47,   182,   127,    -1,    62,    49,   164,     3,    47,   127,
      50,    -1,    62,    49,   164,     3,    47,   127,    47,   127,
      50,    -1,    41,    51,   127,    58,   127,    52,    -1,    41,
      51,    58,   127,    52,    -1,    41,    51,   127,    58,    52,
      -1,    15,    51,     3,    52,     3,    -1,    15,    51,     3,
      52,     3,   176,    -1,    15,    51,     3,    52,    41,    -1,
     173,    -1,   167,     3,    -1,    41,    41,    -1,    41,    -1,
      41,   122,    -1,   172,   182,    41,   122,    -1,   172,   182,
      41,     3,    -1,   172,   182,    41,    41,    -1,   172,   182,
      41,    -1,    22,    41,    28,    44,   174,    -1,    22,    41,
      28,    44,   172,   174,    -1,    22,    41,    28,    44,   182,
     172,   174,    -1,    22,    41,    28,    63,    -1,    45,    -1,
      63,    45,    -1,    41,   176,    -1,   177,   179,    -1,    44,
      45,    -1,    44,    -1,   177,   178,    -1,   127,    58,   127,
      47,    -1,   127,    58,   175,    47,    -1,    63,    -1,   180,
      45,    -1,   127,    58,   127,    -1,    63,    -1,   175,    -1,
      55,    -1,    63,    -1,    64,    -1,   184,    -1,    22,    41,
      11,    44,   185,   186,    -1,    22,    41,    11,    44,   182,
     185,   186,    -1,    22,    41,    11,    63,    44,   182,   185,
     186,    -1,    11,    44,   186,    -1,   114,    -1,   114,     3,
      -1,    41,    49,     3,    50,    -1,   185,   182,    41,    49,
       3,    50,    -1,   185,   182,   114,     3,    -1,   185,   182,
     114,    -1,    45,    -1,    63,    45,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    17,    17,    18,    19,    22,    23,    24,    25,    26,
      27,    28,    31,    34,    35,    36,    37,    40,    43,    44,
      48,    49,    50,    51,    54,    55,    58,    59,    63,    67,
      68,    69,    70,    71,    72,    76,    77,    78,    82,    83,
      84,    87,    88,    91,    92,    95,    96,    97,   102,   105,
     106,   107,   111,   115,   118,   119,   122,   123,   124,   127,
     128,   129,   130,   131,   133,   134,   135,   137,   138,   139,
     140,   141,   142,   143,   146,   147,   148,   149,   186,   187,
     190,   191,   195,   196,   197,   198,   199,   200,   201,   202,
     206,   207,   208,   209,   210,   216,   217,   221,   224,   225,
     226,   230,   233,   237,   238,   242,   243,   246,   251,   255,
     256,   259,   260,   264,   267,   270,   271,   274,   275,   278,
     283,   284,   285,   289,   290,   293,   296,   297,   300,   301,
     305,   306,   309,   312,   315,   316,   317,   318,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   342,   345,   348,
     349,   350,   353,   354,   358,   359,   360,   364,   365,   368,
     371,   375,   378,   379,   382,   386,   387,   390,   391,   396,
     400,   401,   402,   403,   406,   407,   410,   414,   415,   416,
     420,   425,   426,   427,   431,   432,   436,   440,   441,   444,
     447,   451,   452,   454,   455,   458,   461,   462,   463,   466,
     467,   468,   469,   472,   473,   476,   477,   478,   479,   480,
     483,   484,   487,   490,   493,   494,   495,   496,   499,   500,
     501,   504,   505,   506,   508,   510,   511,   512,   513,   516,
     517,   518,   521,   522,   525,   526,   527,   530,   531,   532,
     535,   538,   539,   540,   541,   542,   543,   544,   545,   548,
     549,   550,   551,   554,   555,   559,   562,   563,   566,   567,
     571,   572,   573,   576,   581,   582,   585,   588,   589,   590,
     593,   596,   597,   598,   599,   602,   603,   604,   605,   606,
     607,   609,   610
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
  "t_eof", "t_pointer", "t_ampersand", "t_hex", "t_ten_pow", "'+'", "'-'",
  "'*'", "'/'", "$accept", "START", "GLOBAL", "PACKAGE", "IMPORT", "FUNC",
  "FUNC_PARAM", "FUNC_SECOND_PART", "FUNC_PARAM_SECOND",
  "FUNC_PARAM_SECOND_START", "FUNC_PARAM_SECOND_END", "FUNC_PARAM_FULFILL",
  "FUNC_PARAM_FULFILL_SECOND", "FUNC_PARAM_FULFILL_SECOND_END",
  "FUNC_RETURN_VALUE", "FUNC_RETURN_VALUE_FULFILL", "TYPE_AND_STRUCT",
  "STRUCT_METHOD", "STRUCT_METHOD_SECOND_PART", "SHORT_FUNC", "BODY",
  "BODY_END", "BODY_START", "BODY_FILLING", "VAR", "IDS", "VALUES",
  "FULFILL_FOR_VAL", "FULFILL_FOR_IDS", "BOOLEAN", "DEFER", "ASSIGNMENT",
  "SHORT_ASSIGN", "MANY_IDS", "MANY_IDS_START", "MANY_IDS_FULFILL",
  "MANY_IDS_END", "MANY_VALUES", "MANY_VALUES_START", "FULFILL_FOR_VALS",
  "MANY_VALUES_END", "FUNC_CALL", "PARAM", "PARAM_START", "PARAM_END",
  "PARAM_END_FULFILL", "PARAM_FULFILL", "SHIFT", "SHIFT_AC", "METHOD",
  "METHOD_FULFILL", "POINTER", "AMPERSAND", "PARAM_IMPORT", "VALUE",
  "GOTO", "LABEL", "SWITCH", "SWITCH_BODY", "SWITCH_BODY_START",
  "SWITCH_BODY_START_WITH_DEFAULT", "CASE", "DEFAULT", "MULTIPLE_ARG",
  "FIRST_PART", "SECOND_PART", "CASE_STATEMENT", "CASE_BODY",
  "SWITCH_BODY_END", "IF", "IF_FIRST", "BODY_FOR_LOOP",
  "BODY_FOR_LOOP_START", "BODY_FOR_LOOP_END", "LOOP_FILLING",
  "MULTY_ELSEIF_SECOND", "ELSEIF_SECOND", "MULTY_ELSE_THIRD", "ELSE_THIRD",
  "RETURN", "RETURN_FULFILL", "EXPR", "SHORT_EXPR", "INIT_STATE",
  "CONDITION", "POST_STATE", "FOR", "RANGE_BLANK", "EXPR_START",
  "EXPR_END", "ARRAY_INDEX", "MULTI_AR", "PLENTY", "PLENTY_BODY", "ENUM",
  "MAKE", "SLICE", "MAPS", "STRUCT", "STRUCT_BODY", "STRUCT_START",
  "STRUCT_END", "FIELD", "FIELD_BODY", "FIELD_START", "FIELD_FULFILL",
  "FIELD_END", "FIELD_END_FULFILL", "ST_EMBEDDED", "END_SYMBOLS",
  "INTERFACE", "INT_START", "INT_BODY", "INT_END", YY_NULL
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,    43,
      45,    42,    47
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    73,    74,    74,    74,    75,    75,    75,    75,    75,
      75,    75,    76,    77,    77,    77,    77,    78,    79,    79,
      80,    80,    80,    80,    81,    81,    82,    82,    83,    84,
      84,    84,    84,    84,    84,    85,    85,    85,    86,    86,
      86,    87,    87,    88,    88,    89,    89,    89,    90,    91,
      91,    91,    92,    93,    94,    94,    95,    95,    95,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    97,    97,    97,    97,    98,    98,
      99,    99,   100,   100,   100,   100,   100,   100,   100,   100,
     101,   101,   101,   101,   101,   102,   102,   103,   104,   104,
     104,   105,   106,   107,   107,   108,   108,   109,   110,   111,
     111,   112,   112,   113,   114,   115,   115,   116,   116,   117,
     118,   118,   118,   119,   119,   120,   121,   121,   122,   122,
     123,   123,   124,   125,   126,   126,   126,   126,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   128,   129,   130,
     130,   130,   131,   131,   132,   132,   132,   133,   133,   134,
     135,   136,   137,   137,   138,   139,   139,   140,   140,   141,
     142,   142,   142,   142,   143,   143,   144,   145,   145,   145,
     146,   147,   147,   147,   148,   148,   149,   150,   150,   151,
     152,   153,   153,   154,   154,   155,   156,   156,   156,   157,
     157,   157,   157,   158,   158,   159,   159,   159,   159,   159,
     160,   160,   161,   162,   163,   163,   163,   163,   164,   164,
     164,   165,   165,   165,   166,   166,   166,   166,   166,   167,
     167,   167,   168,   168,   169,   169,   169,   170,   170,   170,
     171,   172,   172,   172,   172,   172,   172,   172,   172,   173,
     173,   173,   173,   174,   174,   175,   176,   176,   177,   177,
     178,   178,   178,   179,   180,   180,   181,   182,   182,   182,
     183,   184,   184,   184,   184,   185,   185,   185,   185,   185,
     185,   186,   186
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     4,     5,     3,     6,     1,     3,
       1,     2,     3,     2,     2,     2,     1,     2,     2,     2,
       1,     2,     3,     3,     0,     3,     2,     1,     2,     1,
       1,     1,     2,     4,     3,     1,     2,     1,     6,     3,
       4,     4,     5,     2,     1,     2,     1,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     4,     3,     1,     2,
       1,     2,     1,     1,     3,     1,     1,     4,     1,     2,
       1,     2,     1,     1,     2,     3,     3,     2,     2,     1,
       2,     1,     2,     1,     2,     2,     1,     1,     2,     1,
       2,     2,     1,     1,     2,     2,     2,     1,     2,     2,
       1,     2,     1,     2,     1,     3,     1,     1,     3,     3,
       1,     1,     1,     1,     2,     3,     3,     4,     1,     1,
       1,     2,     1,     1,     1,     2,     1,     1,     1,     1,
       3,     3,     1,     1,     1,     1,     1,     2,     2,     5,
       3,     2,     2,     2,     1,     2,     2,     2,     2,     3,
       2,     2,     2,     3,     1,     1,     1,     1,     3,     1,
       3,     2,     2,     1,     3,     5,     2,     1,     2,     3,
       1,     1,     1,     1,     1,     2,     4,     1,     2,     2,
       2,     1,     0,     1,     3,     3,     1,     1,     0,     1,
       1,     1,     0,     1,     2,     7,     3,     6,     8,     6,
       3,     3,     1,     1,     3,     3,     3,     2,     1,     2,
       3,     1,     3,     4,     3,     4,     4,     6,     6,     1,
       3,     4,     7,     9,     6,     5,     5,     5,     6,     5,
       1,     2,     2,     1,     2,     4,     4,     4,     3,     5,
       6,     7,     4,     1,     2,     2,     2,     2,     1,     2,
       4,     4,     1,     2,     3,     1,     1,     1,     1,     1,
       1,     6,     7,     8,     3,     1,     2,     4,     6,     4,
       3,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,    90,    93,     0,
       0,     5,     6,     7,    11,    10,     0,    78,   131,    92,
       0,     8,   250,     9,   280,     0,     0,     0,    13,     0,
       0,    90,     0,    12,     0,   117,     0,   132,   114,     0,
      94,   228,    91,     1,   277,   278,   279,     0,     4,     3,
     101,     0,   103,    79,     0,     0,     0,    34,     0,    16,
       0,     0,     0,     0,   291,     0,   284,     0,    77,    45,
       0,    47,    99,    75,     0,     0,     0,   116,     0,     0,
       0,     0,   227,     0,   138,   139,   140,   142,     0,   222,
     143,   144,   155,   156,   124,   148,   133,   153,   154,     0,
     120,   146,   115,     0,   118,   147,     0,   149,   152,   203,
       0,     0,   229,     2,   140,     0,   148,    74,    80,    83,
     149,   203,    82,     0,    85,    86,   276,    88,   106,   107,
     104,   102,   130,   129,   128,    30,     0,    18,     0,     0,
     134,     0,     0,     0,    14,   292,     0,    46,    98,   100,
      76,     0,     0,     0,   262,   230,   224,   225,   226,    34,
     141,   145,   123,   119,     0,   121,     0,   140,     0,     0,
       0,     0,    89,   231,   265,     0,     0,   109,    81,     0,
       0,     0,     0,   105,     0,     0,    29,     0,    31,    34,
       0,     0,   135,    15,     0,   136,     0,     0,   285,     0,
       0,     0,   253,   263,   278,   239,     0,     0,   259,     0,
       0,   127,   126,   125,   204,   223,   151,   150,   267,     0,
       0,     0,     0,     0,   272,     0,   269,   266,     0,     0,
       0,   112,   113,   110,   108,    96,    95,     0,    84,     0,
      32,    33,    19,     0,    56,    26,    17,     0,     0,     0,
      41,     0,    20,     0,     0,    48,   137,     0,   117,   286,
       0,   278,     0,   281,     0,   252,   254,   264,   251,     0,
     260,     0,     0,     0,   234,     0,     0,     0,     0,   232,
       0,     0,   273,     0,    87,   111,     0,    25,    23,    47,
      37,    24,    27,     0,    39,    42,     0,    21,     0,   208,
     208,   208,     0,   202,    90,    54,    53,     0,    66,    70,
      64,    71,    61,    62,    60,    63,   183,    67,    65,    59,
      73,    69,    68,    58,    72,     0,   247,   249,     0,   282,
       0,   290,     0,   240,     0,   258,   261,    52,   236,     0,
     235,     0,   245,   246,     0,   233,   140,   274,     0,     0,
      44,     0,    38,    28,    36,    22,     0,    97,   210,   211,
     206,   209,   146,     0,     0,     0,   164,   161,     0,     0,
       0,     0,   126,   144,     0,     0,     0,   157,   201,   200,
       0,   158,     0,    55,    57,     0,   181,   194,   182,   197,
       0,     0,    49,   268,   248,   287,   117,   289,   283,   241,
     256,   257,   255,     0,     0,   244,   270,   271,     0,    43,
      35,   212,   187,   184,     0,     0,     0,   179,   166,   167,
     162,   165,   168,   163,   160,     0,     0,     0,     0,   212,
     216,     0,   127,   126,   142,   205,   212,   199,   195,   180,
       0,   198,    51,    50,     0,   238,   237,     0,   242,     0,
     188,   193,   192,   190,   191,   186,     0,   175,     0,     0,
     176,   177,   170,     0,     0,   221,     0,   220,     0,     0,
       0,   288,     0,   185,   189,   171,   174,   169,   172,     0,
     159,     0,     0,     0,     0,   196,   243,   173,   178,     0,
     219,   140,   213,     0,   217,     0,   214,   215,   218
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,    12,    13,   136,   246,   247,   248,
     291,   137,   292,   293,   249,   250,   251,    14,   255,    99,
     252,   306,   253,   454,   308,    16,   117,   118,    17,   361,
     309,    74,    51,    53,    54,   130,   131,   178,   179,   233,
     234,   101,    38,    39,   102,   103,   104,   105,   106,   120,
      20,    40,   108,    63,   109,   312,   313,   314,   367,   368,
     369,   418,   419,   457,   458,   475,   459,   462,   420,   315,
     316,   437,   414,   455,   479,   386,   387,   388,   389,   317,
     379,   122,   318,   364,   365,   493,   319,   376,   111,   216,
      41,    42,   320,   173,   206,   124,   125,    68,   322,   207,
      22,   208,   126,   174,   175,   226,   227,   228,   127,   262,
     324,    24,   200,    66
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -354
static const yytype_int16 yypact[] =
{
     364,   295,   429,    14,    66,    65,    69,   227,  -354,   178,
     409,  -354,  -354,  -354,  -354,  -354,    74,    90,  -354,    93,
     104,  -354,  -354,  -354,  -354,   128,   157,   175,  -354,     7,
      49,    36,   156,  -354,   164,   160,   322,  -354,  -354,   711,
    -354,   201,  -354,  -354,  -354,  -354,  -354,   409,  -354,  -354,
    -354,   578,  -354,  -354,    -2,   187,   187,   233,    37,  -354,
     226,   409,   205,   174,  -354,   234,  -354,   245,  -354,  -354,
     327,  -354,  -354,   292,   283,   116,   132,  -354,   304,   309,
     321,   326,  -354,   346,   366,  -354,   342,  -354,   368,  -354,
    -354,  -354,  -354,  -354,   374,   267,  -354,  -354,  -354,   381,
     387,   389,  -354,   410,  -354,  -354,   423,   240,  -354,  -354,
      21,   906,  -354,  -354,   237,   430,  -354,  -354,   421,   438,
      93,   452,   460,   515,  -354,  -354,  -354,  -354,  -354,   474,
    -354,  -354,   381,  -354,  -354,    97,   230,  -354,   472,   409,
    -354,   425,   481,   409,  -354,  -354,   522,  -354,  -354,  -354,
    -354,   168,   482,   377,  -354,  -354,  -354,  -354,  -354,   233,
    -354,  -354,  -354,  -354,   317,  -354,   906,   191,   360,   266,
     444,   745,  -354,   483,  -354,   776,    30,  -354,  -354,   478,
     906,   906,   484,  -354,   490,   131,  -354,   530,  -354,   233,
     162,   494,  -354,  -354,   409,  -354,   487,   493,   533,   508,
     264,   409,    86,  -354,   507,  -354,    35,   302,  -354,   940,
     388,  -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,   141,
     810,   906,   496,   194,   511,   499,  -354,  -354,   514,   557,
     512,  -354,   519,  -354,  -354,  -354,  -354,   509,  -354,   550,
    -354,  -354,  -354,   518,  -354,   520,  -354,   527,    28,   224,
    -354,   527,  -354,  1096,   531,  -354,  -354,    61,    33,  -354,
     264,   234,   538,  -354,   508,   333,    93,  -354,  -354,   509,
    -354,   540,   302,   162,  -354,   268,   449,   535,   841,  -354,
     484,   971,  -354,   536,  -354,  -354,    68,  -354,  -354,    37,
     532,  -354,  -354,   541,   543,  -354,   527,  -354,   551,   612,
     646,   680,   553,   578,   398,  -354,  -354,   324,  -354,  -354,
     389,   354,  -354,  -354,  -354,  -354,   574,  -354,  -354,  -354,
    -354,  -354,  -354,  -354,  -354,   177,   554,  -354,   552,  -354,
     548,   597,   264,  -354,   906,    73,  -354,  -354,  -354,   409,
    -354,   509,  -354,  -354,   556,  -354,   274,   562,   563,   906,
    -354,   561,   575,  -354,  -354,  -354,   381,  -354,   568,   570,
    -354,   438,   419,   452,   549,   582,  -354,  -354,    60,    45,
     451,   573,   355,   583,   576,   582,    74,  -354,  -354,  -354,
     547,  -354,   592,  -354,  -354,    29,   574,  -354,   614,  -354,
     527,   527,  -354,   591,  -354,  -354,    38,  -354,  -354,  -354,
    -354,   333,    93,   594,   875,  -354,  -354,  -354,   401,  -354,
    -354,  1005,   409,  -354,  1145,   906,   584,  -354,  -354,  -354,
    -354,  -354,  -354,  -354,  -354,   906,    85,   627,   606,  1005,
    -354,   634,    -5,   310,   326,  -354,  1005,  -354,  -354,   614,
     582,  -354,  -354,  -354,   599,  -354,  -354,   906,  -354,   582,
    -354,  -354,  -354,  -354,  -354,  -354,   409,  -354,   906,   584,
     407,  -354,  1174,   451,    74,  -354,   906,  -354,   600,   906,
     582,  -354,   607,  -354,  -354,  -354,   441,  1174,  -354,   409,
    -354,   648,   582,  1036,   582,  -354,  -354,  -354,  -354,   906,
    -354,   210,   460,   582,  -354,   582,  -354,  -354,  -354
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -354,  -354,   651,  -354,  -354,  -354,   504,   391,  -233,  -354,
    -354,   476,  -354,  -354,  -354,   418,   -14,  -354,  -354,  -354,
    -221,  -354,  -354,   416,     6,   666,   -64,   495,   142,   -49,
    -354,  -354,  -348,  -354,  -354,  -354,  -354,  -354,  -354,  -354,
    -354,     0,   577,  -354,  -354,  -354,  -354,  -354,   517,     3,
     446,  -354,  -354,   611,    -8,  -354,  -354,  -354,  -350,  -354,
    -354,   306,  -354,  -354,  -354,  -354,  -354,   223,   314,  -354,
    -354,  -338,  -354,  -354,   275,  -354,   305,   308,  -353,  -354,
    -354,   -31,  -354,   213,  -282,  -354,  -354,  -354,  -354,   528,
    -354,   -40,   -98,  -354,  -141,  -354,  -240,   523,   251,   489,
    -354,  -175,   415,   375,  -354,  -354,  -354,  -354,  -354,    13,
       5,  -354,  -166,  -183
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -276
static const yytype_int16 yytable[] =
{
      18,   112,   119,    19,    18,    23,    15,    19,   110,    18,
     150,   123,    19,   321,    23,    15,   172,   263,    73,   375,
     424,   325,    48,    49,   427,   119,   288,   413,   431,   219,
     297,    69,   270,   260,   123,   441,   328,   430,   268,     7,
      69,   444,   107,   121,   138,    67,   436,   156,    60,    61,
     415,    67,   165,  -138,    18,    18,    18,    19,    30,    70,
     113,   128,   168,     8,   326,   415,   121,   166,    70,   289,
      62,    69,   416,   412,   140,   355,   400,   329,    71,   276,
     169,    36,   269,    77,   238,    35,   441,    36,    77,  -140,
     417,   290,   390,  -130,    64,   187,   219,   336,   332,    70,
      69,    37,   327,   121,   392,   417,    33,    31,     3,    71,
      34,   473,    65,   480,   401,    44,   481,    50,   350,   184,
    -126,   186,   275,    45,    46,   279,   464,   265,   185,   449,
     119,     8,   485,  -140,   147,    35,   229,    52,    71,   123,
     188,   465,     3,  -130,   490,   205,   494,   468,    36,   398,
      55,   198,   192,   184,   470,   497,   195,   498,   214,    69,
     151,    56,   205,   222,   199,    69,   209,   225,   243,   442,
     443,   121,   235,   236,   321,    75,   153,    57,    43,   152,
      69,   100,   345,   220,     1,     2,   274,    70,   269,     3,
     240,     4,    76,    70,     5,   154,   129,    71,    58,   198,
       6,   205,    18,    71,    72,   266,   244,   256,    70,   197,
      77,   245,   205,   277,   264,   142,   143,    59,    71,     7,
     271,   244,   321,    44,   144,  -126,   245,    69,   132,   205,
     243,    45,    46,    44,   294,   296,   280,   321,   237,   378,
      35,    45,    46,     8,  -126,   496,    60,    61,  -130,    44,
     220,    21,    36,   310,   119,    70,   311,    45,    46,    35,
      21,   333,   331,   123,   198,    71,   323,  -130,   139,   370,
     344,  -126,   351,   347,   135,   352,    35,   189,    36,   145,
     190,   170,   334,   -92,  -130,   271,    35,   -92,   171,    83,
     -92,   363,    37,   363,  -130,   121,   146,    55,   357,   362,
     362,   362,   107,   107,   107,   360,   360,   360,  -126,    64,
     -93,   391,   166,   338,   -93,   339,   215,   -93,   393,    44,
     384,    84,    85,    35,   114,    87,   399,   261,    46,    88,
     147,  -130,    89,   333,    36,    18,    25,    90,   402,    91,
     148,   408,    92,    93,    26,   115,   149,   203,   116,    96,
      97,    98,   403,    78,   404,   211,   155,    44,   212,    35,
      79,   156,   157,    80,    81,   204,    46,  -130,  -140,   383,
       1,     2,   222,   157,    82,     3,  -126,     4,   158,    44,
       5,   421,    35,    83,   460,   -90,     6,    45,    46,   -90,
    -130,    35,   -90,    36,   463,   159,   399,   -92,    50,  -130,
    -127,   -92,   426,   363,    35,     7,    36,    37,  -140,   160,
     215,    55,  -130,   180,   310,    84,    85,   311,   202,    87,
      37,   363,   203,    88,  -122,   450,    89,   476,   363,     8,
      35,    90,    44,    91,   162,   189,    92,    93,   273,   472,
     204,    46,   116,    96,    97,    98,  -131,    35,   447,   380,
      83,   448,   492,   166,   478,  -130,   381,   164,   482,   382,
     163,   484,   310,    37,    44,   311,   142,   143,   177,   474,
      27,    28,    45,    46,  -207,   193,  -131,   310,    29,   176,
     311,   495,    84,    85,    83,   167,    87,   166,   487,   218,
      88,   180,   488,    89,   340,   366,   341,   166,    90,    44,
      91,   133,   134,    92,    93,   181,   166,    45,    46,   116,
      96,    97,    98,   371,   374,    83,    84,    85,   182,   114,
      87,   183,   191,   194,    88,   196,   201,    89,   237,    36,
     223,   239,    90,   241,    91,   254,   259,    92,    93,   257,
     115,   231,   258,   116,    96,    97,    98,    84,    85,   197,
     167,    87,   267,    83,   278,    88,  -275,   281,    89,   282,
     283,    75,   284,    90,    44,    91,   285,   286,    92,    93,
     287,   244,    45,    46,   116,    96,    97,    98,    78,   330,
     245,   335,   -40,   349,    83,   432,    85,   342,   433,   434,
     354,   353,   356,    88,   377,   385,    89,   396,   393,    82,
     397,    90,   395,    91,   411,   221,    92,    93,   405,   406,
     407,   409,   116,    96,    97,    98,    84,    85,    83,   114,
      87,  -155,   410,  -156,    88,     4,   412,    89,   425,    36,
     428,   429,    90,   435,    91,   440,   218,    92,    93,   445,
     115,   466,   461,   116,    96,    97,    98,   467,   469,   471,
      84,    85,    83,    86,    87,   483,  -212,   486,    88,     4,
      47,    89,   489,   210,   337,   242,    90,   295,    91,   307,
      32,   358,   359,   141,   232,   422,   161,    95,    96,    97,
      98,   213,   477,   423,    84,    85,    83,    86,    87,   456,
     366,   438,    88,     4,   439,    89,   348,   217,   272,   230,
      90,   394,    91,     0,     0,    92,    93,     0,     0,     0,
       0,    95,    96,    97,    98,     0,     0,    83,    84,    85,
       0,   372,    87,     0,  -212,     0,    88,     0,     0,    89,
       0,     0,     0,     0,    90,     0,   373,     0,     0,   358,
     359,     0,     0,     0,     0,    95,    96,    97,    98,    84,
      85,    83,    86,    87,     0,     0,     0,    88,     0,     0,
      89,     0,     0,     0,     0,    90,     0,    91,     0,     0,
      92,    93,     0,     0,    94,     0,    95,    96,    97,    98,
       0,     0,    83,    84,    85,     0,   167,    87,     0,     0,
       0,    88,     0,     0,    89,     0,     0,     0,     0,    90,
       0,    91,     0,   221,    92,    93,     0,     0,     0,     0,
     116,    96,    97,    98,    84,    85,    83,   167,    87,     0,
       0,     0,    88,     0,     0,    89,     0,     0,     0,     0,
      90,     0,    91,     0,     0,    92,    93,     0,     0,   224,
       0,   116,    96,    97,    98,     0,     0,    83,    84,    85,
       0,   167,    87,     0,   237,     0,    88,     0,     0,    89,
       0,     0,     0,     0,    90,     0,    91,     0,     0,    92,
      93,     0,     0,     0,     0,   116,    96,    97,    98,    84,
      85,    83,   167,    87,     0,     0,     0,    88,     0,     0,
      89,     0,     0,   343,     0,    90,     0,    91,     0,     0,
      92,    93,     0,     0,     0,     0,   116,    96,    97,    98,
       0,     0,    83,    84,    85,     0,   167,    87,     0,     0,
     446,    88,     0,     0,    89,     0,     0,     0,     0,    90,
       0,    91,     0,     0,    92,    93,     0,     0,     0,     0,
     116,    96,    97,    98,    84,    85,    83,   167,    87,     0,
       0,     0,    88,     0,     0,    89,     0,     0,     0,     0,
      90,     0,    91,     0,     0,    92,    93,     0,     0,     0,
       0,   116,    96,    97,    98,     0,     0,    83,    84,    85,
       0,   202,    87,     0,     0,     0,    88,     0,     0,    89,
       0,     0,     0,     0,    90,     0,    91,     0,     0,    92,
      93,     0,     0,     0,     0,   116,    96,    97,    98,    84,
      85,    83,   346,    87,     0,     0,     0,    88,     0,     0,
      89,     0,     0,     0,     0,    90,     0,    91,     0,     0,
      92,    93,     0,     0,     0,     0,   116,    96,    97,    98,
       0,     0,    83,    84,    85,     0,   167,    87,     0,     0,
       0,    88,     0,     0,    89,     0,     0,     0,     0,    90,
       0,    91,     0,     0,   358,   359,     0,     0,     0,     0,
     116,    96,    97,    98,    84,    85,     0,   491,    87,     0,
       0,     0,    88,     0,     0,    89,     0,     0,     0,     0,
      90,     0,    91,     0,     0,    92,    93,     0,     0,     0,
       0,   116,    96,    97,    98,   298,     0,     3,     0,     4,
       0,     0,     0,   299,     0,   300,     0,     0,     6,   301,
     302,     0,     0,   303,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   304,     0,     0,
     237,   305,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    44,     0,     0,   298,     0,     3,     0,     4,    45,
      46,     8,   299,     0,   300,     0,     0,     6,   301,   302,
     451,   452,   303,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   298,     0,     3,   304,     4,     0,   237,
     453,   299,     0,   300,     0,     0,     6,   301,   302,   451,
     452,   303,     0,     0,     0,     0,     0,     0,     0,     0,
       8,     0,     0,     0,     0,   304,     0,     0,   237,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     8
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-354)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       0,    41,    51,     0,     4,     0,     0,     4,    39,     9,
      74,    51,     9,   253,     9,     9,   114,   200,    32,   301,
     370,   254,     9,    10,   372,    74,   247,   365,   376,   170,
     251,     3,   207,   199,    74,   388,     3,   375,     3,    41,
       3,     3,    39,    51,    58,    15,    17,    52,    41,    42,
       5,    15,    31,    58,    54,    55,    56,    54,    44,    31,
      47,    63,   111,    65,     3,     5,    74,    46,    31,    41,
      63,     3,    12,    44,    61,   296,     3,   260,    41,   220,
     111,    51,    47,    50,   182,    49,   439,    51,    50,     3,
      45,    63,   325,    57,    45,   135,   237,   272,   264,    31,
       3,    65,    41,   111,   325,    45,    41,    41,    11,    41,
      41,   449,    63,   463,    41,    55,   464,    43,    50,    22,
      34,   135,   220,    63,    64,   223,    41,    41,    31,   411,
     179,    65,   470,    47,     3,    49,   176,    47,    41,   179,
     135,    56,    11,    57,   482,   153,   484,   429,    51,   332,
      57,   151,   139,    22,   436,   493,   143,   495,   166,     3,
      44,    57,   170,   171,   151,     3,   153,   175,     6,   390,
     391,   179,   180,   181,   414,    11,    44,    49,     0,    63,
       3,    39,   280,   170,     6,     7,    45,    31,    47,    11,
     185,    13,    28,    31,    16,    63,    54,    41,    41,   199,
      22,   209,   202,    41,    48,   202,    44,   194,    31,    41,
      50,    49,   220,   221,   201,    41,    42,    42,    41,    41,
     207,    44,   462,    55,    50,    34,    49,     3,    41,   237,
       6,    63,    64,    55,   248,   249,   223,   477,    44,   303,
      49,    63,    64,    65,    34,    35,    41,    42,    57,    55,
     237,     0,    51,   253,   303,    31,   253,    63,    64,    49,
       9,   269,   262,   303,   264,    41,   253,    57,    42,   300,
     278,    34,   286,   281,    41,   289,    49,    47,    51,    45,
      50,    44,   269,    43,    57,   272,    49,    47,    51,     6,
      50,   299,    65,   301,    57,   303,    51,    57,   298,   299,
     300,   301,   299,   300,   301,   299,   300,   301,    34,    45,
      43,   325,    46,    45,    47,    47,    50,    50,    44,    55,
     307,    38,    39,    49,    41,    42,   334,    63,    64,    46,
       3,    57,    49,   341,    51,   335,    41,    54,   335,    56,
      48,   349,    59,    60,    49,    62,    63,    45,    65,    66,
      67,    68,   339,    31,   341,    38,    52,    55,    41,    49,
      38,    52,    52,    41,    42,    63,    64,    57,    58,    45,
       6,     7,   380,    52,    52,    11,    34,    13,    52,    55,
      16,   368,    49,     6,   415,    43,    22,    63,    64,    47,
      57,    49,    50,    51,   425,    49,   404,    43,    43,    57,
      34,    47,    47,   411,    49,    41,    51,    65,    53,    41,
      50,    57,    57,    53,   414,    38,    39,   414,    41,    42,
      65,   429,    45,    46,    50,   412,    49,   458,   436,    65,
      49,    54,    55,    56,    47,    47,    59,    60,    50,   447,
      63,    64,    65,    66,    67,    68,    57,    49,    47,    51,
       6,    50,   483,    46,    47,    57,    58,    34,   466,    61,
      50,   469,   462,    65,    55,   462,    41,    42,    47,   456,
      41,    42,    63,    64,    55,    50,    57,   477,    49,    49,
     477,   489,    38,    39,     6,    41,    42,    46,    47,    45,
      46,    53,   479,    49,    45,    44,    47,    46,    54,    55,
      56,    55,    56,    59,    60,    53,    46,    63,    64,    65,
      66,    67,    68,   300,   301,     6,    38,    39,     3,    41,
      42,    47,    50,    42,    46,     3,    44,    49,    44,    51,
      47,    41,    54,     3,    56,    41,     3,    59,    60,    52,
      62,    63,    49,    65,    66,    67,    68,    38,    39,    41,
      41,    42,    45,     6,    58,    46,    45,    58,    49,    45,
       3,    11,    50,    54,    55,    56,    47,    49,    59,    60,
      50,    44,    63,    64,    65,    66,    67,    68,    31,    41,
      49,    41,    50,    47,     6,    38,    39,    52,    41,    42,
      47,    50,    41,    46,    41,    21,    49,    49,    44,    52,
       3,    54,    50,    56,    55,    58,    59,    60,    52,    47,
      47,    50,    65,    66,    67,    68,    38,    39,     6,    41,
      42,    53,    47,    53,    46,    13,    44,    49,    55,    51,
      47,    55,    54,    41,    56,    21,    45,    59,    60,    45,
      62,    14,    58,    65,    66,    67,    68,    41,    14,    50,
      38,    39,     6,    41,    42,    55,    44,    50,    46,    13,
       9,    49,    14,   159,   273,   189,    54,   249,    56,   253,
       4,    59,    60,    62,   179,   369,    99,    65,    66,    67,
      68,   164,   459,   369,    38,    39,     6,    41,    42,   414,
      44,   386,    46,    13,   386,    49,   281,   169,   209,   176,
      54,   326,    56,    -1,    -1,    59,    60,    -1,    -1,    -1,
      -1,    65,    66,    67,    68,    -1,    -1,     6,    38,    39,
      -1,    41,    42,    -1,    44,    -1,    46,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    54,    -1,    56,    -1,    -1,    59,
      60,    -1,    -1,    -1,    -1,    65,    66,    67,    68,    38,
      39,     6,    41,    42,    -1,    -1,    -1,    46,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    54,    -1,    56,    -1,    -1,
      59,    60,    -1,    -1,    63,    -1,    65,    66,    67,    68,
      -1,    -1,     6,    38,    39,    -1,    41,    42,    -1,    -1,
      -1,    46,    -1,    -1,    49,    -1,    -1,    -1,    -1,    54,
      -1,    56,    -1,    58,    59,    60,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    38,    39,     6,    41,    42,    -1,
      -1,    -1,    46,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      54,    -1,    56,    -1,    -1,    59,    60,    -1,    -1,    63,
      -1,    65,    66,    67,    68,    -1,    -1,     6,    38,    39,
      -1,    41,    42,    -1,    44,    -1,    46,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    54,    -1,    56,    -1,    -1,    59,
      60,    -1,    -1,    -1,    -1,    65,    66,    67,    68,    38,
      39,     6,    41,    42,    -1,    -1,    -1,    46,    -1,    -1,
      49,    -1,    -1,    52,    -1,    54,    -1,    56,    -1,    -1,
      59,    60,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      -1,    -1,     6,    38,    39,    -1,    41,    42,    -1,    -1,
      45,    46,    -1,    -1,    49,    -1,    -1,    -1,    -1,    54,
      -1,    56,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    38,    39,     6,    41,    42,    -1,
      -1,    -1,    46,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      54,    -1,    56,    -1,    -1,    59,    60,    -1,    -1,    -1,
      -1,    65,    66,    67,    68,    -1,    -1,     6,    38,    39,
      -1,    41,    42,    -1,    -1,    -1,    46,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    54,    -1,    56,    -1,    -1,    59,
      60,    -1,    -1,    -1,    -1,    65,    66,    67,    68,    38,
      39,     6,    41,    42,    -1,    -1,    -1,    46,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    54,    -1,    56,    -1,    -1,
      59,    60,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      -1,    -1,     6,    38,    39,    -1,    41,    42,    -1,    -1,
      -1,    46,    -1,    -1,    49,    -1,    -1,    -1,    -1,    54,
      -1,    56,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    38,    39,    -1,    41,    42,    -1,
      -1,    -1,    46,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      54,    -1,    56,    -1,    -1,    59,    60,    -1,    -1,    -1,
      -1,    65,    66,    67,    68,     9,    -1,    11,    -1,    13,
      -1,    -1,    -1,    17,    -1,    19,    -1,    -1,    22,    23,
      24,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    -1,     9,    -1,    11,    -1,    13,    63,
      64,    65,    17,    -1,    19,    -1,    -1,    22,    23,    24,
      25,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    -1,    11,    41,    13,    -1,    44,
      45,    17,    -1,    19,    -1,    -1,    22,    23,    24,    25,
      26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    41,    -1,    -1,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,    11,    13,    16,    22,    41,    65,    74,
      75,    76,    77,    78,    90,    97,    98,   101,   114,   122,
     123,   171,   173,   183,   184,    41,    49,    41,    42,    49,
      44,    41,    98,    41,    41,    49,    51,    65,   115,   116,
     124,   163,   164,     0,    55,    63,    64,    75,   182,   182,
      43,   105,    47,   106,   107,    57,    57,    49,    41,    42,
      41,    42,    63,   126,    45,    63,   186,    15,   170,     3,
      31,    41,    48,    89,   104,    11,    28,    50,    31,    38,
      41,    42,    52,     6,    38,    39,    41,    42,    46,    49,
      54,    56,    59,    60,    63,    65,    66,    67,    68,    92,
     101,   114,   117,   118,   119,   120,   121,   122,   125,   127,
     154,   161,   164,   182,    41,    62,    65,    99,   100,   102,
     122,   127,   154,   164,   168,   169,   175,   181,    63,   101,
     108,   109,    41,   123,   123,    41,    79,    84,    89,    42,
     182,   126,    41,    42,    50,    45,    51,     3,    48,    63,
      99,    44,    63,    44,    63,    52,    52,    52,    52,    49,
      41,   115,    47,    50,    34,    31,    46,    41,   102,   154,
      44,    51,   165,   166,   176,   177,    49,    47,   110,   111,
      53,    53,     3,    47,    22,    31,    89,   164,   183,    47,
      50,    50,   182,    50,    42,   182,     3,    41,   114,   182,
     185,    44,    41,    45,    63,   127,   167,   172,   174,   182,
      79,    38,    41,   121,   127,    50,   162,   162,    45,   167,
     182,    58,   127,    47,    63,   127,   178,   179,   180,   164,
     170,    63,   100,   112,   113,   127,   127,    44,   165,    41,
     183,     3,    84,     6,    44,    49,    80,    81,    82,    87,
      88,    89,    93,    95,    41,    91,   182,    52,    49,     3,
     185,    63,   182,   186,   182,    41,   122,    45,     3,    47,
     174,   182,   172,    50,    45,   165,   167,   127,    58,   165,
     182,    58,    45,     3,    50,    47,    49,    50,    93,    41,
      63,    83,    85,    86,    89,    88,    89,    93,     9,    17,
      19,    23,    24,    27,    41,    45,    94,    96,    97,   103,
     114,   122,   128,   129,   130,   142,   143,   152,   155,   159,
     165,   169,   171,   182,   183,    81,     3,    41,     3,   186,
      41,   114,   185,   127,   182,    41,   174,    80,    45,    47,
      45,    47,    52,    52,   127,   165,    41,   127,   175,    47,
      50,    89,    89,    50,    47,    93,    41,   114,    59,    60,
      97,   102,   114,   127,   156,   157,    44,   131,   132,   133,
     154,   156,    41,    56,   156,   157,   160,    41,    99,   153,
      51,    58,    61,    45,   182,    21,   148,   149,   150,   151,
      81,    89,    93,    44,   176,    50,    49,     3,   186,   127,
       3,    41,   122,   182,   182,    52,    47,    47,   127,    50,
      47,    55,    44,   144,   145,     5,    12,    45,   134,   135,
     141,   182,   134,   141,   131,    55,    47,   105,    47,    55,
     144,   105,    38,    41,    42,    41,    17,   144,   149,   150,
      21,   151,    93,    93,     3,    45,    45,    47,    50,   157,
     182,    25,    26,    45,    96,   146,   147,   136,   137,   139,
     154,    58,   140,   154,    41,    56,    14,    41,   157,    14,
     157,    50,   127,   144,   182,   138,   154,   140,    47,   147,
     131,   105,   127,    55,   127,   144,    50,    47,   182,    14,
     144,    41,   154,   158,   144,   127,    35,   144,   144
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
#line 2131 "y.tab.c"
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
#line 613 "..\\main\\golang.y"


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
	yydebug = 0;
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