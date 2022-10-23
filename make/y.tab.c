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
#line 279 "y.tab.c"

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
#define YYFINAL  45
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1280

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  101
/* YYNRULES -- Number of rules.  */
#define YYNRULES  285
/* YYNRULES -- Number of states.  */
#define YYNSTATES  509

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
      23,    25,    28,    31,    36,    42,    46,    53,    55,    59,
      61,    65,    68,    71,    74,    76,    79,    82,    85,    87,
      90,    94,    98,    99,   103,   106,   108,   111,   113,   115,
     117,   120,   125,   129,   131,   134,   136,   139,   141,   143,
     147,   150,   152,   154,   156,   158,   160,   162,   164,   166,
     168,   170,   172,   174,   176,   178,   180,   182,   187,   193,
     198,   202,   206,   212,   216,   222,   229,   233,   238,   243,
     247,   252,   256,   260,   265,   272,   276,   283,   287,   293,
     298,   302,   306,   310,   314,   320,   324,   328,   334,   338,
     342,   346,   349,   352,   354,   360,   366,   368,   374,   380,
     383,   386,   389,   391,   394,   397,   399,   402,   404,   407,
     409,   413,   415,   417,   421,   425,   427,   429,   431,   433,
     436,   440,   444,   449,   451,   453,   455,   457,   459,   461,
     463,   465,   467,   469,   473,   477,   479,   481,   483,   485,
     487,   490,   493,   499,   503,   506,   509,   512,   514,   517,
     520,   523,   526,   530,   533,   536,   539,   543,   545,   547,
     549,   551,   555,   557,   561,   564,   567,   569,   573,   579,
     582,   584,   587,   591,   593,   595,   597,   599,   601,   604,
     609,   611,   614,   617,   620,   625,   627,   631,   633,   635,
     639,   643,   645,   647,   648,   650,   652,   654,   655,   657,
     660,   668,   672,   679,   688,   695,   699,   703,   705,   707,
     712,   721,   728,   732,   736,   740,   743,   745,   748,   752,
     754,   758,   762,   765,   769,   771,   775,   783,   793,   800,
     806,   812,   818,   825,   831,   833,   836,   839,   841,   844,
     849,   854,   859,   863,   869,   876,   884,   889,   891,   894,
     897,   900,   902,   905,   910,   915,   917,   920,   924,   926,
     928,   930,   932,   934,   936,   943,   951,   960,   964,   966,
     969,   974,   981,   986,   990,   992
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      74,     0,    -1,    74,    75,   169,    -1,    75,   169,    -1,
      74,   169,    -1,    76,    -1,    77,    -1,    78,    -1,   158,
      -1,   170,    -1,    94,    -1,    16,    41,    -1,     7,    42,
      -1,     7,    49,   111,    50,    -1,     7,    49,    63,   111,
      50,    -1,     7,    41,    42,    -1,     6,    41,    49,    79,
      50,    80,    -1,    84,    -1,    79,    47,    84,    -1,    90,
      -1,    87,    89,    90,    -1,    81,    90,    -1,    82,    83,
      -1,    49,    50,    -1,    49,    -1,    82,    85,    -1,    86,
      50,    -1,    41,    89,    -1,    41,    -1,    41,   170,    -1,
      41,    31,   170,    -1,    41,   151,     3,    -1,    -1,    41,
      89,    47,    -1,    89,    47,    -1,    63,    -1,    41,    89,
      -1,    89,    -1,    63,    -1,    88,    -1,    87,    88,    -1,
       6,    49,    89,    50,    -1,     6,    49,    50,    -1,     3,
      -1,    31,     3,    -1,    41,    -1,    92,    91,    -1,    45,
      -1,    44,    -1,    92,    93,   169,    -1,    92,   169,    -1,
      94,    -1,   145,    -1,   115,    -1,   113,    -1,   114,    -1,
     127,    -1,   151,    -1,    99,    -1,   141,    -1,   149,    -1,
     137,    -1,   158,    -1,   156,    -1,    96,    -1,   107,    -1,
     170,    -1,    13,    41,    97,   140,    -1,    13,    41,    97,
     140,     3,    -1,    13,    41,    97,    95,    -1,    41,    98,
     140,    -1,    41,    97,   140,    -1,    13,    41,    41,    97,
     112,    -1,    13,    41,     3,    -1,    41,    98,   151,     3,
     152,    -1,    13,    41,    97,   151,     3,   152,    -1,    41,
      98,    95,    -1,    41,   151,    97,   140,    -1,    13,    41,
      97,   155,    -1,    41,    98,   155,    -1,    41,   151,    97,
     155,    -1,    41,    98,   156,    -1,    41,    97,   156,    -1,
      13,    41,    97,   156,    -1,    13,    41,   151,     3,    97,
     156,    -1,    13,    41,   157,    -1,    41,    98,    62,    49,
     157,    50,    -1,    41,    98,   157,    -1,    13,    41,    41,
      97,   168,    -1,    13,    41,    97,   168,    -1,    41,    98,
     168,    -1,   107,    97,   112,    -1,   109,    97,   140,    -1,
      13,    41,   109,    -1,    13,    41,   109,    97,   140,    -1,
     110,    97,   140,    -1,    13,    41,   110,    -1,    13,    41,
     110,    97,   140,    -1,   110,    98,   140,    -1,   112,    53,
     112,    -1,    95,    53,   112,    -1,     9,    99,    -1,     3,
      48,    -1,    48,    -1,    47,    41,    97,   140,    47,    -1,
      47,    41,    97,    95,    47,    -1,    43,    -1,    47,    41,
      98,   140,    47,    -1,    47,    41,    98,    95,    47,    -1,
      41,   100,    -1,   101,   102,    -1,    49,    50,    -1,    49,
      -1,   101,   104,    -1,   103,    50,    -1,   140,    -1,   140,
      31,    -1,    63,    -1,   140,    47,    -1,    63,    -1,   106,
      34,   106,    -1,    41,    -1,    38,    -1,   108,    57,   108,
      -1,   107,    57,   108,    -1,    41,    -1,    99,    -1,    65,
      -1,    66,    -1,    42,   169,    -1,    41,    42,   169,    -1,
     111,    42,   169,    -1,   111,    41,    42,   169,    -1,    38,
      -1,    39,    -1,    41,    -1,    42,    -1,    54,    -1,    56,
      -1,    99,    -1,   105,    -1,   109,    -1,   107,    -1,   147,
     140,   148,    -1,   147,    95,   148,    -1,   110,    -1,    67,
      -1,    68,    -1,    59,    -1,    60,    -1,    24,    41,    -1,
      41,    58,    -1,    19,   142,    55,   140,   116,    -1,    19,
     140,   116,    -1,    19,   116,    -1,   117,   126,    -1,   118,
     126,    -1,    44,    -1,   117,   169,    -1,   117,   119,    -1,
     117,   120,    -1,   118,   119,    -1,     5,   124,   125,    -1,
      12,   125,    -1,   122,   123,    -1,   140,    47,    -1,   122,
     140,    47,    -1,   140,    -1,   121,    -1,   140,    -1,    58,
      -1,   125,   132,   169,    -1,    45,    -1,   128,   133,   135,
      -1,   128,   133,    -1,   128,   135,    -1,   128,    -1,    17,
     143,   129,    -1,    17,   142,    55,   143,   129,    -1,   130,
     131,    -1,    44,    -1,    44,   169,    -1,   130,   132,   169,
      -1,    45,    -1,    93,    -1,    26,    -1,    25,    -1,   134,
      -1,   133,   134,    -1,    21,    17,   143,   129,    -1,   136,
      -1,   135,   136,    -1,    21,   129,    -1,    27,   140,    -1,
      27,   140,   138,   139,    -1,    47,    -1,   138,   140,    47,
      -1,   140,    -1,   112,    -1,   140,    46,   112,    -1,    41,
      61,    41,    -1,    94,    -1,    99,    -1,    -1,    95,    -1,
      59,    -1,    60,    -1,    -1,   140,    -1,    41,    35,    -1,
      23,   142,    55,   143,    55,   144,   129,    -1,    23,   143,
     129,    -1,    23,   146,    98,    14,   112,   129,    -1,    23,
      41,    47,    41,    98,    14,   112,   129,    -1,    23,    41,
      98,    14,   112,   129,    -1,    56,    47,    41,    -1,    41,
      47,    56,    -1,    49,    -1,    50,    -1,    13,    41,   151,
       3,    -1,    13,    41,   151,     3,    97,   151,     3,   152,
      -1,    13,    41,   151,     3,    97,   155,    -1,    51,    38,
      52,    -1,    51,    41,    52,    -1,    51,    42,    52,    -1,
      51,    52,    -1,   150,    -1,   150,   151,    -1,    51,    31,
      52,    -1,   153,    -1,   153,    47,   152,    -1,    44,   154,
      45,    -1,    44,    45,    -1,    44,   152,    45,    -1,   112,
      -1,   154,    47,   112,    -1,    62,    49,   151,     3,    47,
     112,    50,    -1,    62,    49,   151,     3,    47,   112,    47,
     112,    50,    -1,    41,    51,   112,    58,   112,    52,    -1,
      41,    51,    58,   112,    52,    -1,    41,    51,   112,    58,
      52,    -1,    15,    51,     3,    52,     3,    -1,    15,    51,
       3,    52,     3,   163,    -1,    15,    51,     3,    52,    41,
      -1,   160,    -1,   154,     3,    -1,    41,    41,    -1,    41,
      -1,    41,   107,    -1,   159,   169,    41,   107,    -1,   159,
     169,    41,     3,    -1,   159,   169,    41,    41,    -1,   159,
     169,    41,    -1,    22,    41,    28,    44,   161,    -1,    22,
      41,    28,    44,   159,   161,    -1,    22,    41,    28,    44,
     169,   159,   161,    -1,    22,    41,    28,    63,    -1,    45,
      -1,    63,    45,    -1,    41,   163,    -1,   164,   166,    -1,
      44,    -1,   164,   165,    -1,   112,    58,   112,    47,    -1,
     112,    58,   162,    47,    -1,    63,    -1,   167,    45,    -1,
     112,    58,   112,    -1,    63,    -1,   162,    -1,    55,    -1,
      63,    -1,    64,    -1,   171,    -1,    22,    41,    11,    44,
     172,   173,    -1,    22,    41,    11,    44,   169,   172,   173,
      -1,    22,    41,    11,    63,    44,   169,   172,   173,    -1,
      11,    44,   173,    -1,    99,    -1,    99,     3,    -1,    41,
      49,     3,    50,    -1,   172,   169,    41,    49,     3,    50,
      -1,   172,   169,    99,     3,    -1,   172,   169,    99,    -1,
      45,    -1,    63,    45,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    16,    16,    17,    18,    21,    22,    23,    24,    25,
      26,    29,    32,    33,    34,    35,    38,    41,    42,    46,
      47,    48,    51,    52,    55,    56,    60,    64,    65,    66,
      67,    68,    69,    73,    74,    75,    79,    80,    81,    84,
      85,    88,    89,    92,    93,    94,    98,   101,   104,   105,
     106,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   161,
     162,   166,   169,   170,   171,   172,   174,   175,   176,   179,
     182,   183,   186,   187,   190,   195,   196,   197,   201,   202,
     205,   208,   209,   212,   213,   217,   218,   221,   224,   227,
     228,   229,   230,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     252,   255,   258,   259,   260,   263,   264,   268,   269,   270,
     274,   275,   278,   281,   285,   288,   289,   292,   296,   297,
     300,   301,   306,   310,   311,   312,   313,   316,   317,   320,
     324,   325,   326,   330,   335,   336,   337,   341,   342,   346,
     350,   351,   354,   357,   358,   363,   364,   368,   370,   371,
     374,   377,   378,   379,   382,   383,   384,   385,   388,   389,
     392,   393,   394,   395,   396,   399,   400,   403,   406,   409,
     410,   411,   414,   415,   416,   417,   420,   421,   422,   425,
     426,   428,   429,   430,   433,   434,   437,   438,   441,   442,
     443,   446,   447,   448,   451,   454,   455,   456,   457,   458,
     459,   460,   461,   464,   465,   466,   467,   470,   471,   475,
     478,   481,   482,   486,   487,   488,   491,   496,   497,   500,
     503,   504,   505,   508,   511,   512,   513,   514,   517,   518,
     519,   520,   521,   522,   524,   525
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
  "BODY", "BODY_END", "BODY_START", "BODY_FILLING", "VAR", "BOOLEAN",
  "DEFER", "ASSIGNMENT", "SHORT_ASSIGN", "FUNC_CALL", "PARAM",
  "PARAM_START", "PARAM_END", "PARAM_END_FULFILL", "PARAM_FULFILL",
  "SHIFT", "SHIFT_AC", "METHOD", "METHOD_FULFILL", "POINTER", "AMPERSAND",
  "PARAM_IMPORT", "VALUE", "GOTO", "LABEL", "SWITCH", "SWITCH_BODY",
  "SWITCH_BODY_START", "SWITCH_BODY_START_WITH_DEFAULT", "CASE", "DEFAULT",
  "MULTIPLE_ARG", "FIRST_PART", "SECOND_PART", "CASE_STATEMENT",
  "CASE_BODY", "SWITCH_BODY_END", "IF", "IF_FIRST", "BODY_FOR_LOOP",
  "BODY_FOR_LOOP_START", "BODY_FOR_LOOP_END", "LOOP_FILLING",
  "MULTY_ELSEIF_SECOND", "ELSEIF_SECOND", "MULTY_ELSE_THIRD", "ELSE_THIRD",
  "RETURN", "MANY_RETURN_START", "MANY_RETURN_START_END", "EXPR",
  "SHORT_EXPR", "INIT_STATE", "CONDITION", "POST_STATE", "FOR",
  "RANGE_BLANK", "EXPR_START", "EXPR_END", "ARRAY_BODY", "ARRAY_INDEX",
  "MULTI_AR", "PLENTY", "PLENTY_OLD", "ENUM", "MAKE", "SLICE", "MAPS",
  "STRUCT", "STRUCT_BODY", "STRUCT_START", "STRUCT_END", "FIELD",
  "FIELD_BODY", "FIELD_START", "FIELD_FULFILL", "FIELD_END",
  "FIELD_END_FULFILL", "ST_EMBEDDED", "END_SYMBOLS", "INTERFACE",
  "INT_START", "INT_BODY", "INT_END", YY_NULL
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
      75,    76,    77,    77,    77,    77,    78,    79,    79,    80,
      80,    80,    81,    81,    82,    82,    83,    84,    84,    84,
      84,    84,    84,    85,    85,    85,    86,    86,    86,    87,
      87,    88,    88,    89,    89,    89,    90,    91,    92,    92,
      92,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    95,
      95,    96,    97,    97,    97,    97,    98,    98,    98,    99,
     100,   100,   101,   101,   102,   103,   103,   103,   104,   104,
     105,   106,   106,   107,   107,   108,   108,   109,   110,   111,
     111,   111,   111,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     113,   114,   115,   115,   115,   116,   116,   117,   117,   117,
     118,   118,   119,   120,   121,   122,   122,   123,   124,   124,
     125,   125,   126,   127,   127,   127,   127,   128,   128,   129,
     130,   130,   130,   131,   132,   132,   132,   133,   133,   134,
     135,   135,   136,   137,   137,   138,   138,   139,   140,   140,
     141,   142,   142,   142,   143,   143,   143,   143,   144,   144,
     145,   145,   145,   145,   145,   146,   146,   147,   148,   149,
     149,   149,   150,   150,   150,   150,   151,   151,   151,   152,
     152,   153,   153,   153,   154,   154,   155,   155,   156,   156,
     156,   157,   157,   157,   158,   159,   159,   159,   159,   159,
     159,   159,   159,   160,   160,   160,   160,   161,   161,   162,
     163,   164,   164,   165,   165,   165,   166,   167,   167,   168,
     169,   169,   169,   170,   171,   171,   171,   171,   172,   172,
     172,   172,   172,   172,   173,   173
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     2,     1,     1,     1,     1,     1,
       1,     2,     2,     4,     5,     3,     6,     1,     3,     1,
       3,     2,     2,     2,     1,     2,     2,     2,     1,     2,
       3,     3,     0,     3,     2,     1,     2,     1,     1,     1,
       2,     4,     3,     1,     2,     1,     2,     1,     1,     3,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     5,     4,
       3,     3,     5,     3,     5,     6,     3,     4,     4,     3,
       4,     3,     3,     4,     6,     3,     6,     3,     5,     4,
       3,     3,     3,     3,     5,     3,     3,     5,     3,     3,
       3,     2,     2,     1,     5,     5,     1,     5,     5,     2,
       2,     2,     1,     2,     2,     1,     2,     1,     2,     1,
       3,     1,     1,     3,     3,     1,     1,     1,     1,     2,
       3,     3,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     1,     1,     1,     1,     1,
       2,     2,     5,     3,     2,     2,     2,     1,     2,     2,
       2,     2,     3,     2,     2,     2,     3,     1,     1,     1,
       1,     3,     1,     3,     2,     2,     1,     3,     5,     2,
       1,     2,     3,     1,     1,     1,     1,     1,     2,     4,
       1,     2,     2,     2,     4,     1,     3,     1,     1,     3,
       3,     1,     1,     0,     1,     1,     1,     0,     1,     2,
       7,     3,     6,     8,     6,     3,     3,     1,     1,     4,
       8,     6,     3,     3,     3,     2,     1,     2,     3,     1,
       3,     3,     2,     3,     1,     3,     7,     9,     6,     5,
       5,     5,     6,     5,     1,     2,     2,     1,     2,     4,
       4,     4,     3,     5,     6,     7,     4,     1,     2,     2,
       2,     1,     2,     4,     4,     1,     2,     3,     1,     1,
       1,     1,     1,     1,     6,     7,     8,     3,     1,     2,
       4,     6,     4,     3,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,   125,   127,   128,
       0,     0,     5,     6,     7,    10,   126,     0,     0,     0,
       0,     8,   244,     9,   273,     0,     0,    12,     0,     0,
       0,    11,     0,     0,   106,     0,   103,   112,     0,     0,
       0,   109,     0,   226,     0,     1,   270,   271,   272,     0,
       4,     3,     0,     0,     0,     0,     0,     0,     0,    32,
      15,     0,     0,     0,     0,   284,     0,   277,    73,     0,
       0,     0,    93,    96,     0,    85,     0,     0,   102,     0,
     111,     0,     0,     0,     0,   225,   133,   134,   135,   136,
     217,   137,   138,   148,   149,   146,   147,   139,   140,     0,
     142,   141,   145,   198,    71,     0,    82,   135,     0,    76,
     198,    70,     0,    79,    81,    87,   269,    90,   135,   119,
     110,     0,   113,   115,   227,     0,     2,     0,   125,   124,
      91,   123,    92,    95,    98,    28,     0,    17,     0,   129,
       0,     0,     0,    13,   285,     0,     0,     0,    69,    67,
       0,    78,    83,    89,     0,     0,     0,     0,     0,     0,
     256,     0,     0,   228,   222,   223,   224,     0,     0,     0,
       0,     0,   261,   259,     0,     0,     0,     0,     0,   114,
     116,   118,    77,    80,    43,     0,     0,    45,    27,     0,
      29,    32,     0,   130,    14,     0,   131,     0,   135,    72,
      88,     0,    68,     0,    94,    97,     0,     0,   278,     0,
       0,     0,   247,   257,   271,   234,     0,     0,   253,     0,
       0,     0,     0,     0,     0,     0,   122,   121,   120,   199,
     218,   144,   143,   265,     0,   262,   260,     0,     0,     0,
     100,    99,     0,    74,   229,     0,    44,    30,    31,    18,
       0,    48,    24,    16,     0,     0,     0,    39,    19,     0,
     132,     0,    75,     0,    84,   112,   279,     0,   271,     0,
     274,     0,   246,   248,   258,   245,     0,   254,     0,     0,
     105,   104,   108,   107,     0,     0,     0,   266,     0,    86,
     232,     0,     0,     0,     0,    23,    21,     0,    45,    35,
      22,    25,     0,    37,    40,     0,     0,     0,   203,   203,
     203,     0,     0,   125,    47,    46,     0,    51,    64,    58,
      65,    54,    55,    53,    56,   176,    61,    59,    52,    60,
      57,    63,    62,    50,    66,   241,   243,     0,   275,     0,
     283,     0,   235,   252,   255,   239,   240,     0,   267,     0,
       0,   233,   231,   230,    42,     0,    36,    26,    34,    20,
       0,   101,     0,   135,   205,   206,   201,   204,   139,   142,
     141,   145,     0,     0,     0,   157,   154,     0,     0,     0,
       0,   121,   138,     0,     0,     0,   150,   193,     0,   151,
       0,    49,     0,   174,   187,   175,   190,   242,   280,   112,
     282,   276,   250,   251,   249,   238,   263,   264,     0,    41,
      33,     0,   207,   180,   177,     0,     0,     0,   172,   159,
     160,   155,   158,   161,   156,   153,     0,     0,     0,     0,
     207,   211,     0,     0,   195,     0,   122,   121,   136,   200,
     207,   192,   188,   173,     0,   191,     0,     0,   236,   219,
       0,   181,   186,   185,   183,   184,   179,     0,   168,     0,
       0,   169,   170,   163,     0,     0,   216,     0,   215,     0,
       0,     0,   194,   197,     0,   281,     0,     0,   178,   182,
     164,   167,   162,   165,     0,   152,     0,     0,     0,     0,
     196,   189,   237,     0,   221,   166,   171,     0,   214,   135,
     208,     0,   212,     0,     0,   209,   210,   220,   213
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,    12,    13,    14,   136,   253,   254,   255,
     300,   137,   301,   302,   256,   257,   188,   258,   315,   259,
     455,   317,   367,   318,    39,    40,    97,    41,    42,   120,
     121,   122,    98,    99,   100,    18,   101,   102,    64,   103,
     321,   322,   323,   376,   377,   378,   419,   420,   458,   459,
     480,   460,   463,   421,   324,   325,   441,   415,   456,   484,
     393,   394,   395,   396,   326,   435,   472,   111,   327,   373,
     374,   501,   328,   385,   105,   231,   329,    43,    44,   243,
     244,   216,   113,   331,    75,   332,   217,    22,   218,   116,
     173,   174,   235,   236,   237,   117,   269,   334,    24,   210,
      67
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -362
static const yytype_int16 yypact[] =
{
     329,     4,   394,    19,    29,   103,   216,   252,  -362,  -362,
     222,   336,  -362,  -362,  -362,  -362,  -362,   106,   232,    46,
     231,  -362,  -362,  -362,  -362,   212,   262,  -362,   163,    86,
      35,  -362,   230,   289,  -362,   312,  -362,   346,   381,  1057,
     746,  -362,   902,   351,    46,  -362,  -362,  -362,  -362,   336,
    -362,  -362,   345,   365,  1088,   365,  1088,  1088,  1088,   369,
    -362,   378,   336,   334,   151,  -362,   372,  -362,   289,   383,
      46,   840,    46,    46,   435,  -362,   147,   204,  -362,   231,
    -362,   380,   389,   393,   405,  -362,   428,  -362,   128,  -362,
    -362,  -362,  -362,  -362,  -362,  -362,  -362,   408,  -362,   437,
     410,  -362,  -362,  -362,   431,  1088,  -362,   310,   432,   436,
     439,   431,   481,  -362,  -362,  -362,  -362,  -362,   168,   443,
    -362,   445,  -362,   134,  -362,   933,  -362,    46,   447,  -362,
    -362,  -362,   431,   431,   431,   172,   246,  -362,   336,  -362,
     282,   456,   336,  -362,  -362,   496,  1119,   451,   436,    84,
     499,  -362,  -362,  -362,  1088,  1088,    46,   156,   460,   809,
    -362,  1088,  1088,  -362,  -362,  -362,  -362,   964,   322,  1088,
     319,     8,  -362,  -362,   995,    20,  1088,  1088,   462,  -362,
    -362,  -362,   431,  -362,  -362,   466,   242,  -362,  -362,   505,
    -362,   369,    98,  -362,  -362,   336,  -362,   458,   340,  -362,
    -362,   351,  -362,   462,   431,   431,   471,   464,   514,   477,
     286,   336,    64,  -362,   475,  -362,    44,   293,  -362,  1150,
     281,   403,   311,   406,  1088,   463,  -362,  -362,  -362,  -362,
    -362,  -362,  -362,   478,   467,  -362,  -362,   479,   519,   476,
    -362,  -362,   871,  -362,   480,   517,  -362,  -362,  -362,  -362,
     482,  -362,   484,  -362,   485,    54,   324,  -362,  -362,   492,
    -362,    49,  -362,   487,  -362,    28,  -362,   286,   372,   489,
    -362,   477,   245,   410,  -362,  -362,  1088,  -362,   494,   293,
    -362,  -362,  -362,  -362,   490,  1026,  1119,  -362,   497,  -362,
    -362,   491,   335,   462,   145,  -362,  -362,   542,   157,   498,
    -362,  -362,   500,   502,  -362,   485,   510,   511,   589,   621,
     653,   512,  1088,    71,  -362,  -362,   336,  -362,  -362,   408,
     106,  -362,  -362,  -362,  -362,   525,  -362,  -362,  -362,  -362,
    -362,  -362,  -362,  -362,  -362,   516,  -362,   504,  -362,   513,
     561,   286,  -362,   120,  -362,  -362,  -362,   518,   521,   524,
    1088,  -362,  -362,  -362,  -362,   515,   531,  -362,  -362,  -362,
     447,  -362,    35,   203,   526,   527,  -362,   436,   356,   106,
      46,   231,   439,   528,   522,  -362,  -362,    61,    94,   370,
     529,   330,   534,   530,   522,   184,  -362,   409,   778,  -362,
     541,  -362,   124,   525,  -362,   565,  -362,  -362,  -362,    31,
    -362,  -362,  -362,   245,   410,  -362,  -362,  -362,   354,  -362,
    -362,   584,  1181,   336,  -362,   550,  1088,   535,  -362,  -362,
    -362,  -362,  -362,  -362,  -362,  -362,  1088,   191,   684,   547,
    1181,  -362,   548,   582,  -362,  1088,     7,   390,   405,  -362,
    1181,  -362,  -362,   565,   522,  -362,   549,  1088,  -362,    46,
     522,  -362,  -362,  -362,  -362,  -362,  -362,   336,  -362,  1088,
     535,   427,  -362,   581,   370,   231,  -362,  1088,  -362,   554,
     184,  1088,  -362,   429,   522,  -362,   560,   229,  -362,  -362,
    -362,   433,   581,  -362,   336,  -362,   715,   522,  1212,   522,
    -362,  -362,  -362,   594,  -362,  -362,  -362,  1088,  -362,   241,
     431,   522,  -362,   462,   522,  -362,  -362,  -362,  -362
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -362,  -362,   601,  -362,  -362,  -362,  -362,  -362,  -362,  -362,
    -362,   421,  -362,  -362,  -362,   357,  -148,  -221,  -362,  -362,
     355,    12,   -25,  -362,   170,   -19,     0,  -362,  -362,  -362,
    -362,  -362,  -362,   449,     3,   375,     6,     9,   555,    -3,
    -362,  -362,  -362,  -361,  -362,  -362,   243,  -362,  -362,  -362,
    -362,  -362,   160,   247,  -362,  -362,  -305,  -362,  -362,   208,
    -362,   233,   236,  -351,  -362,  -362,  -362,   -28,  -362,   177,
    -302,  -362,  -362,  -362,  -362,   453,  -362,  -362,   -23,  -178,
    -362,   395,   -69,     1,   -35,   256,   417,  -362,  -191,   353,
     305,  -362,  -362,  -362,  -362,   -50,    13,    32,  -362,  -182,
    -206
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -269
static const yytype_int16 yytable[] =
{
      16,    58,   151,    17,   270,   115,    19,    74,   384,    20,
      16,   104,    15,    17,   123,   109,    19,   112,   425,    20,
     124,   153,    15,    50,    51,   262,   277,   267,   132,   133,
     134,   337,    23,   296,   446,    69,    72,   110,    68,    73,
     106,   114,    23,   149,   445,    25,   148,   275,   150,    33,
      69,   130,   335,    16,   169,    16,   183,   184,   230,   164,
     162,   338,   126,    29,   291,  -133,   416,  -135,   110,   414,
      30,    38,   152,   417,    33,   139,    70,   171,    80,   431,
     170,    80,    52,    36,   359,   297,    38,   202,   344,   341,
     336,   276,   445,    52,    36,   298,   200,   182,  -121,   416,
       8,     9,   110,   485,   250,   272,   418,   303,   305,    33,
     450,  -135,   189,    37,    34,   353,    46,   299,    35,    36,
      37,  -125,   388,   402,    47,    48,   204,   205,   469,   389,
     169,    65,   390,   221,   223,   401,   220,   222,   474,   418,
     239,   440,   251,   199,    31,   478,   355,   252,   184,    66,
     356,   193,   238,    52,    36,   196,   215,   208,   110,   110,
     184,   403,  -121,    53,   225,   180,   229,   190,   413,   491,
     209,   234,   219,   240,   241,   184,   297,    37,   238,   167,
     169,   181,   498,     3,   502,  -125,   187,    54,   297,    56,
      57,   157,   141,   142,   185,   354,   506,   207,   187,   508,
      71,   143,  -121,   186,    61,    62,    33,   264,   260,   208,
     158,    46,    16,   187,   125,   273,   215,    37,   247,    47,
      48,   284,    45,    38,   271,  -125,    63,    34,     1,     2,
     278,   432,   465,     3,    33,     4,   330,  -121,     5,   215,
     146,    76,   154,   155,     6,   246,    34,   466,   159,   161,
      35,    36,    37,     3,    38,    33,    21,    32,    77,   319,
    -125,    59,   320,     7,   185,    19,    21,   160,    20,   340,
     263,   208,   333,   342,    34,  -121,   505,    46,    35,    36,
      38,   379,   347,   348,   387,    47,    48,     8,     9,    55,
      37,   147,   278,   191,    37,    34,   192,   161,  -125,    35,
      36,    37,  -125,    38,    60,   372,   361,   372,   368,   368,
     368,   369,   369,   369,   370,   370,   370,   371,   371,   371,
     366,   366,   366,   141,   142,   507,   206,   184,   280,   391,
     250,    65,   194,    33,   176,     1,     2,    78,   213,   411,
       3,    46,     4,    16,  -121,     5,   404,   408,    46,   268,
      48,     6,    58,    79,   172,   297,   214,    48,   282,    37,
     226,   167,   428,   227,   176,   187,   433,  -125,    72,   230,
       7,    73,   176,    34,  -121,    61,    62,   427,    36,    37,
     352,    38,   276,  -135,   172,   225,   127,  -125,   461,    37,
     422,    46,   330,   115,     8,     9,    80,  -125,   464,    47,
      48,   447,    38,   109,   448,   112,   128,   473,   494,   372,
     135,  -202,    81,  -126,   375,   319,   169,   144,   320,    82,
     138,    19,    83,    84,    20,   110,   451,   372,   129,   114,
     131,   481,   163,    85,   145,    26,    27,   372,   156,    37,
     330,   164,   165,    28,   476,   165,   486,  -125,  -135,   169,
     281,   162,   169,   283,   493,   169,   434,   166,   223,   330,
     500,   222,  -122,   319,   487,  -126,   320,    53,   489,    19,
     479,   168,    20,   169,   483,   169,   490,   169,   264,   169,
     495,   175,   319,   110,   178,   320,   380,   383,    19,   176,
      54,    20,   177,  -117,   504,   179,    37,   496,   195,   197,
     201,   306,   203,     3,   211,   307,   242,   245,   248,   308,
     261,   309,   263,   265,     6,   310,   311,   266,   207,   312,
     274,   285,   288,  -268,   287,   286,   289,   293,    76,   251,
     339,   294,    71,   313,   295,   343,   351,   314,   167,    54,
      56,    57,   345,    38,   350,   246,   392,    46,   -38,   358,
     357,   360,   362,   386,   398,    47,    48,     8,     9,   306,
     172,     3,   399,   307,   400,   409,   413,   308,   406,   309,
     405,   407,     6,   310,   311,   452,   453,   312,   410,  -148,
    -149,   429,   439,   412,   426,   430,   444,   449,   468,   470,
     306,   313,     3,   462,   307,   454,   471,   503,   308,   475,
     309,    38,     4,     6,   310,   311,   452,   453,   312,   488,
     492,    49,   249,   304,   316,     8,     9,   228,   140,   477,
     482,   423,   313,   457,   232,   424,   442,    86,    87,   443,
     363,    89,    38,  -207,     4,   161,   279,   292,    90,   349,
     397,     0,     0,    91,     0,    92,     8,     9,   364,   365,
       0,     0,     0,     0,     8,     9,    95,    96,     0,    86,
      87,     0,   363,    89,     0,   375,     4,     0,     0,     0,
      90,     0,     0,     0,     0,    91,     0,    92,     0,     0,
      93,    94,     0,     0,     0,     0,     8,     9,    95,    96,
       0,    86,    87,     0,   381,    89,     0,  -207,   467,    69,
       0,     0,    90,     0,     0,     0,     0,    91,     0,   382,
       0,     0,   364,   365,     0,     0,     0,     0,     8,     9,
      95,    96,    86,    87,     0,   107,    89,     0,     0,   497,
       0,     0,     0,    90,     0,    38,     0,     0,    91,     0,
      92,     0,     0,    93,    94,     0,   108,     0,     0,     8,
       9,    95,    96,    86,    87,     0,   118,    89,     0,     0,
       0,    69,     0,     0,    90,     0,     0,     0,     0,    91,
       0,    92,     0,     0,    93,    94,     0,     0,     0,     0,
       8,     9,    95,    96,    86,    87,     0,   107,    89,     0,
       0,     0,     0,     0,     0,    90,     0,    38,     0,     0,
      91,     0,    92,     0,     0,    93,    94,     0,   108,    81,
       0,     8,     9,    95,    96,     0,   436,    87,     0,   437,
     438,     0,     0,     0,     0,     0,     0,    90,     0,     0,
      85,     0,    91,     0,    92,     0,   224,    93,    94,     0,
       0,     0,     0,     8,     9,    95,    96,    86,    87,     0,
     212,    89,     0,     0,   213,     0,     0,     0,    90,     0,
       0,     0,     0,    91,    46,    92,     0,     0,    93,    94,
       0,     0,   214,    48,     8,     9,    95,    96,    86,    87,
       0,   107,    89,     0,     0,     0,     0,     0,     0,    90,
       0,    38,     0,     0,    91,     0,    92,     0,     0,    93,
      94,     0,   147,     0,     0,     8,     9,    95,    96,    86,
      87,     0,   118,    89,     0,   242,   290,     0,     0,     0,
      90,     0,     0,     0,     0,    91,     0,    92,     0,     0,
      93,    94,     0,     0,     0,     0,     8,     9,    95,    96,
      86,    87,     0,   118,    89,     0,     0,     0,     0,     0,
       0,    90,     0,     0,     0,     0,    91,     0,    92,     0,
       0,    93,    94,     0,     0,   119,     0,     8,     9,    95,
      96,    86,    87,     0,   118,    89,     0,     0,     0,     0,
       0,     0,    90,     0,     0,     0,     0,    91,     0,    92,
       0,     0,    93,    94,     0,   147,     0,     0,     8,     9,
      95,    96,    86,    87,     0,   118,    89,     0,     0,     0,
       0,     0,     0,    90,     0,     0,     0,     0,    91,     0,
      92,     0,   224,    93,    94,     0,     0,     0,     0,     8,
       9,    95,    96,    86,    87,     0,   118,    89,     0,     0,
       0,     0,     0,     0,    90,     0,     0,     0,     0,    91,
       0,    92,     0,     0,    93,    94,     0,     0,   233,     0,
       8,     9,    95,    96,    86,    87,     0,   118,    89,     0,
       0,     0,     0,     0,     0,    90,     0,     0,   346,     0,
      91,     0,    92,     0,     0,    93,    94,     0,     0,     0,
       0,     8,     9,    95,    96,    86,    87,     0,    88,    89,
       0,     0,     0,     0,     0,     0,    90,     0,     0,     0,
       0,    91,     0,    92,     0,     0,    93,    94,     0,     0,
       0,     0,     8,     9,    95,    96,    86,    87,     0,   118,
      89,     0,     0,     0,     0,     0,     0,    90,     0,     0,
       0,     0,    91,     0,    92,     0,     0,    93,    94,     0,
       0,     0,     0,     8,     9,    95,    96,    86,    87,     0,
     198,    89,     0,     0,     0,     0,     0,     0,    90,     0,
       0,     0,     0,    91,     0,    92,     0,     0,    93,    94,
       0,     0,     0,     0,     8,     9,    95,    96,    86,    87,
       0,   212,    89,     0,     0,     0,     0,     0,     0,    90,
       0,     0,     0,     0,    91,     0,    92,     0,     0,    93,
      94,     0,     0,     0,     0,     8,     9,    95,    96,    86,
      87,     0,   118,    89,     0,     0,     0,     0,     0,     0,
      90,     0,     0,     0,     0,    91,     0,    92,     0,     0,
     364,   365,     0,     0,     0,     0,     8,     9,    95,    96,
      86,    87,     0,   499,    89,     0,     0,     0,     0,     0,
       0,    90,     0,     0,     0,     0,    91,     0,    92,     0,
       0,    93,    94,     0,     0,     0,     0,     8,     9,    95,
      96
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-362)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       0,    20,    71,     0,   210,    40,     0,    30,   310,     0,
      10,    39,     0,    10,    42,    40,    10,    40,   379,    10,
      43,    71,    10,    10,    11,   203,   217,   209,    56,    57,
      58,     3,     0,   254,     3,    15,    30,    40,     3,    30,
      39,    40,    10,    71,   395,    41,    71,     3,    71,     3,
      15,    54,     3,    53,    46,    55,   125,     3,    50,    52,
      79,   267,    49,    44,   242,    58,     5,     3,    71,   374,
      41,    51,    71,    12,     3,    62,    41,   105,    50,   384,
     105,    50,    47,    48,   305,    31,    51,     3,   279,   271,
      41,    47,   443,    47,    48,    41,   146,   125,    34,     5,
      65,    66,   105,   464,     6,    41,    45,   255,   256,     3,
     412,    47,   135,    49,    43,   293,    55,    63,    47,    48,
      49,    57,    51,     3,    63,    64,   154,   155,   430,    58,
      46,    45,    61,   161,   162,   341,   161,   162,   440,    45,
     175,    17,    44,   146,    41,   450,   294,    49,     3,    63,
     298,   138,   175,    47,    48,   142,   159,   157,   161,   162,
       3,    41,    34,    57,   167,    31,   169,   135,    44,   474,
     157,   174,   159,   176,   177,     3,    31,    49,   201,    51,
      46,    47,   487,    11,   489,    57,    41,    17,    31,    19,
      20,    44,    41,    42,    22,    50,   501,    41,    41,   504,
      30,    50,    34,    31,    41,    42,     3,   206,   195,   209,
      63,    55,   212,    41,    44,   212,   219,    49,   186,    63,
      64,   224,     0,    51,   211,    57,    63,    43,     6,     7,
     217,    47,    41,    11,     3,    13,   259,    34,    16,   242,
      70,    11,    72,    73,    22,     3,    43,    56,    44,    79,
      47,    48,    49,    11,    51,     3,     0,    41,    28,   259,
      57,    49,   259,    41,    22,   259,    10,    63,   259,   269,
      41,   271,   259,   276,    43,    34,    35,    55,    47,    48,
      51,   309,   285,   286,   312,    63,    64,    65,    66,    57,
      49,    62,   279,    47,    49,    43,    50,   127,    57,    47,
      48,    49,    57,    51,    42,   308,   306,   310,   308,   309,
     310,   308,   309,   310,   308,   309,   310,   308,   309,   310,
     308,   309,   310,    41,    42,   503,   156,     3,    47,   316,
       6,    45,    50,     3,    53,     6,     7,    48,    45,   362,
      11,    55,    13,   343,    34,    16,   343,   350,    55,    63,
      64,    22,   371,    41,    44,    31,    63,    64,    47,    49,
      38,    51,   381,    41,    53,    41,   385,    57,   362,    50,
      41,   362,    53,    43,    34,    41,    42,    47,    48,    49,
      45,    51,    47,    53,    44,   388,    41,    57,   416,    49,
     377,    55,   415,   428,    65,    66,    50,    57,   426,    63,
      64,    47,    51,   428,    50,   428,    41,   435,   477,   412,
      41,    55,    31,    57,    44,   415,    46,    45,   415,    38,
      42,   415,    41,    42,   415,   428,   413,   430,    53,   428,
      55,   459,    52,    52,    51,    41,    42,   440,     3,    49,
     463,    52,    52,    49,   447,    52,   465,    57,    58,    46,
      47,   470,    46,    47,   477,    46,    47,    52,   486,   482,
     488,   486,    34,   463,   467,    57,   463,    57,   471,   463,
     457,    34,   463,    46,    47,    46,    47,    46,   477,    46,
      47,    49,   482,   486,     3,   482,   309,   310,   482,    53,
     320,   482,    53,    50,   497,    50,    49,   484,    42,     3,
      49,     9,     3,    11,    44,    13,    44,    41,     3,    17,
      52,    19,    41,    49,    22,    23,    24,     3,    41,    27,
      45,    58,     3,    45,    45,    58,    50,    47,    11,    44,
      41,    49,   362,    41,    50,    41,    45,    45,    51,   369,
     370,   371,    52,    51,    47,     3,    21,    55,    50,    47,
      50,    41,    41,    41,    50,    63,    64,    65,    66,     9,
      44,    11,    49,    13,     3,    50,    44,    17,    47,    19,
      52,    47,    22,    23,    24,    25,    26,    27,    47,    53,
      53,    47,    41,    55,    55,    55,    21,     3,    41,    41,
       9,    41,    11,    58,    13,    45,    14,     3,    17,    50,
      19,    51,    13,    22,    23,    24,    25,    26,    27,    55,
      50,    10,   191,   256,   259,    65,    66,   168,    63,   449,
     460,   378,    41,   415,   171,   378,   393,    38,    39,   393,
      41,    42,    51,    44,    13,   465,   219,   242,    49,   286,
     335,    -1,    -1,    54,    -1,    56,    65,    66,    59,    60,
      -1,    -1,    -1,    -1,    65,    66,    67,    68,    -1,    38,
      39,    -1,    41,    42,    -1,    44,    13,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    54,    -1,    56,    -1,    -1,
      59,    60,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      -1,    38,    39,    -1,    41,    42,    -1,    44,    14,    15,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,
      -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    65,    66,
      67,    68,    38,    39,    -1,    41,    42,    -1,    -1,    14,
      -1,    -1,    -1,    49,    -1,    51,    -1,    -1,    54,    -1,
      56,    -1,    -1,    59,    60,    -1,    62,    -1,    -1,    65,
      66,    67,    68,    38,    39,    -1,    41,    42,    -1,    -1,
      -1,    15,    -1,    -1,    49,    -1,    -1,    -1,    -1,    54,
      -1,    56,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    38,    39,    -1,    41,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    51,    -1,    -1,
      54,    -1,    56,    -1,    -1,    59,    60,    -1,    62,    31,
      -1,    65,    66,    67,    68,    -1,    38,    39,    -1,    41,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    54,    -1,    56,    -1,    58,    59,    60,    -1,
      -1,    -1,    -1,    65,    66,    67,    68,    38,    39,    -1,
      41,    42,    -1,    -1,    45,    -1,    -1,    -1,    49,    -1,
      -1,    -1,    -1,    54,    55,    56,    -1,    -1,    59,    60,
      -1,    -1,    63,    64,    65,    66,    67,    68,    38,    39,
      -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    51,    -1,    -1,    54,    -1,    56,    -1,    -1,    59,
      60,    -1,    62,    -1,    -1,    65,    66,    67,    68,    38,
      39,    -1,    41,    42,    -1,    44,    45,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    54,    -1,    56,    -1,    -1,
      59,    60,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      38,    39,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,    -1,
      -1,    59,    60,    -1,    -1,    63,    -1,    65,    66,    67,
      68,    38,    39,    -1,    41,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,
      -1,    -1,    59,    60,    -1,    62,    -1,    -1,    65,    66,
      67,    68,    38,    39,    -1,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    54,    -1,
      56,    -1,    58,    59,    60,    -1,    -1,    -1,    -1,    65,
      66,    67,    68,    38,    39,    -1,    41,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    54,
      -1,    56,    -1,    -1,    59,    60,    -1,    -1,    63,    -1,
      65,    66,    67,    68,    38,    39,    -1,    41,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      54,    -1,    56,    -1,    -1,    59,    60,    -1,    -1,    -1,
      -1,    65,    66,    67,    68,    38,    39,    -1,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    54,    -1,    56,    -1,    -1,    59,    60,    -1,    -1,
      -1,    -1,    65,    66,    67,    68,    38,    39,    -1,    41,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    54,    -1,    56,    -1,    -1,    59,    60,    -1,
      -1,    -1,    -1,    65,    66,    67,    68,    38,    39,    -1,
      41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,
      -1,    -1,    -1,    54,    -1,    56,    -1,    -1,    59,    60,
      -1,    -1,    -1,    -1,    65,    66,    67,    68,    38,    39,
      -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    54,    -1,    56,    -1,    -1,    59,
      60,    -1,    -1,    -1,    -1,    65,    66,    67,    68,    38,
      39,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    54,    -1,    56,    -1,    -1,
      59,    60,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      38,    39,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,    -1,
      -1,    59,    60,    -1,    -1,    -1,    -1,    65,    66,    67,
      68
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,    11,    13,    16,    22,    41,    65,    66,
      74,    75,    76,    77,    78,    94,    99,   107,   108,   109,
     110,   158,   160,   170,   171,    41,    41,    42,    49,    44,
      41,    41,    41,     3,    43,    47,    48,    49,    51,    97,
      98,   100,   101,   150,   151,     0,    55,    63,    64,    75,
     169,   169,    47,    57,    97,    57,    97,    97,    98,    49,
      42,    41,    42,    63,   111,    45,    63,   173,     3,    15,
      41,    97,   109,   110,   151,   157,    11,    28,    48,    41,
      50,    31,    38,    41,    42,    52,    38,    39,    41,    42,
      49,    54,    56,    59,    60,    67,    68,    99,   105,   106,
     107,   109,   110,   112,   140,   147,   156,    41,    62,    95,
     112,   140,   151,   155,   156,   157,   162,   168,    41,    63,
     102,   103,   104,   140,   151,    97,   169,    41,    41,   108,
     112,   108,   140,   140,   140,    41,    79,    84,    42,   169,
     111,    41,    42,    50,    45,    51,    97,    62,    95,   140,
     151,   155,   156,   168,    97,    97,     3,    44,    63,    44,
      63,    97,    98,    52,    52,    52,    52,    51,    34,    46,
      95,   140,    44,   163,   164,    49,    53,    53,     3,    50,
      31,    47,   140,   155,     3,    22,    31,    41,    89,   151,
     170,    47,    50,   169,    50,    42,   169,     3,    41,   112,
     168,    49,     3,     3,   140,   140,    97,    41,    99,   169,
     172,    44,    41,    45,    63,   112,   154,   159,   161,   169,
      95,   140,    95,   140,    58,   112,    38,    41,   106,   112,
      50,   148,   148,    63,   112,   165,   166,   167,   151,   157,
     112,   112,    44,   152,   153,    41,     3,   170,     3,    84,
       6,    44,    49,    80,    81,    82,    87,    88,    90,    92,
     169,    52,   152,    41,   156,    49,     3,   172,    63,   169,
     173,   169,    41,   107,    45,     3,    47,   161,   169,   159,
      47,    47,    47,    47,   112,    58,    58,    45,     3,    50,
      45,   152,   154,    47,    49,    50,    90,    31,    41,    63,
      83,    85,    86,    89,    88,    89,     9,    13,    17,    19,
      23,    24,    27,    41,    45,    91,    93,    94,    96,    99,
     107,   113,   114,   115,   127,   128,   137,   141,   145,   149,
     151,   156,   158,   169,   170,     3,    41,     3,   173,    41,
      99,   172,   112,    41,   161,    52,    52,   112,   112,   162,
      47,    45,    45,   152,    50,    89,    89,    50,    47,    90,
      41,    99,    41,    41,    59,    60,    94,    95,    99,   107,
     109,   110,   112,   142,   143,    44,   116,   117,   118,   140,
     142,    41,    56,   142,   143,   146,    41,   140,    51,    58,
      61,   169,    21,   133,   134,   135,   136,   163,    50,    49,
       3,   173,     3,    41,   107,    52,    47,    47,   112,    50,
      47,   151,    55,    44,   129,   130,     5,    12,    45,   119,
     120,   126,   169,   119,   126,   116,    55,    47,    98,    47,
      55,   129,    47,    98,    47,   138,    38,    41,    42,    41,
      17,   129,   134,   135,    21,   136,     3,    47,    50,     3,
     143,   169,    25,    26,    45,    93,   131,   132,   121,   122,
     124,   140,    58,   125,   140,    41,    56,    14,    41,   143,
      41,    14,   139,   140,   143,    50,   112,    97,   129,   169,
     123,   140,   125,    47,   132,   116,    98,   112,    55,   112,
      47,   129,    50,   151,   155,    47,   169,    14,   129,    41,
     140,   144,   129,     3,   112,    35,   129,   152,   129
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
#line 2139 "y.tab.c"
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
#line 528 "..\\main\\golang.y"


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