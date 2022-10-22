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
     t_ampersand = 321
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
#line 275 "y.tab.c"

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
#define YYFINAL  20
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   720

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  94
/* YYNRULES -- Number of rules.  */
#define YYNRULES  251
/* YYNRULES -- Number of states.  */
#define YYNSTATES  445

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   321

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,    69,    67,     2,    68,     2,    70,     2,     2,
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
      65,    66
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    10,    13,    15,    17,    19,    21,
      23,    26,    29,    34,    40,    44,    51,    53,    56,    61,
      63,    67,    70,    72,    73,    75,    79,    82,    84,    86,
      89,    91,    96,   100,   102,   104,   107,   109,   111,   115,
     118,   120,   122,   124,   126,   128,   130,   132,   134,   136,
     138,   140,   142,   144,   146,   148,   153,   159,   164,   168,
     172,   178,   185,   189,   194,   199,   203,   208,   212,   216,
     221,   225,   232,   238,   243,   247,   251,   255,   259,   265,
     269,   272,   275,   277,   283,   289,   291,   297,   303,   306,
     309,   312,   314,   317,   320,   322,   324,   327,   329,   333,
     335,   337,   341,   345,   347,   349,   351,   354,   357,   361,
     365,   370,   372,   374,   376,   378,   380,   382,   384,   386,
     388,   390,   394,   397,   400,   406,   410,   413,   416,   419,
     421,   424,   427,   430,   433,   437,   440,   443,   446,   450,
     452,   454,   456,   458,   462,   464,   468,   471,   474,   476,
     480,   486,   489,   491,   494,   498,   500,   502,   504,   506,
     508,   511,   516,   518,   521,   524,   527,   532,   534,   538,
     540,   542,   546,   550,   552,   554,   555,   557,   559,   561,
     562,   564,   567,   575,   579,   581,   583,   588,   597,   604,
     608,   612,   616,   619,   621,   624,   626,   630,   634,   637,
     641,   643,   647,   655,   665,   672,   678,   684,   690,   692,
     695,   698,   700,   703,   708,   713,   718,   722,   728,   735,
     743,   748,   750,   753,   755,   763,   769,   774,   780,   786,
     790,   794,   801,   808,   814,   820,   822,   824,   826,   828,
     830,   832,   839,   847,   856,   858,   861,   866,   873,   878,
     882,   884
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      72,     0,    -1,    72,    73,   160,    -1,    73,   160,    -1,
      72,   160,    -1,    74,    -1,    75,    -1,    76,    -1,   151,
      -1,   161,    -1,    16,    41,    -1,     7,    42,    -1,     7,
      49,   105,    50,    -1,     7,    49,    63,   105,    50,    -1,
       7,    41,    42,    -1,     6,    41,    49,    78,    50,    77,
      -1,    85,    -1,    82,    85,    -1,    49,    80,    50,    85,
      -1,    79,    -1,    78,    47,    79,    -1,    41,    84,    -1,
      41,    -1,    -1,    81,    -1,    80,    47,    81,    -1,    41,
      84,    -1,    84,    -1,    83,    -1,    82,    83,    -1,    84,
      -1,     6,    49,    84,    50,    -1,     6,    49,    50,    -1,
       3,    -1,    41,    -1,    87,    86,    -1,    45,    -1,    44,
      -1,    87,    88,   160,    -1,    87,   160,    -1,    89,    -1,
     139,    -1,   109,    -1,   107,    -1,   108,    -1,   121,    -1,
     144,    -1,    94,    -1,   135,    -1,   142,    -1,   131,    -1,
     151,    -1,   149,    -1,    91,    -1,   102,    -1,    13,    41,
      92,   134,    -1,    13,    41,    92,   134,     3,    -1,    13,
      41,    92,    90,    -1,    41,    93,   134,    -1,    41,    92,
     134,    -1,    41,    93,   144,     3,   145,    -1,    13,    41,
      92,   144,     3,   145,    -1,    41,    93,    90,    -1,    41,
     144,    92,   134,    -1,    13,    41,    92,   148,    -1,    41,
      93,   148,    -1,    41,   144,    92,   148,    -1,    41,    93,
     149,    -1,    41,    92,   149,    -1,    13,    41,    92,   149,
      -1,    13,    41,   150,    -1,    41,    93,    62,    49,   150,
      50,    -1,    13,    41,    41,    92,   159,    -1,    13,    41,
      92,   159,    -1,    41,    93,   159,    -1,   102,    92,   106,
      -1,   104,    92,   134,    -1,    13,    41,   104,    -1,    13,
      41,   104,    92,   134,    -1,   134,    53,   134,    -1,     9,
      94,    -1,     3,    48,    -1,    48,    -1,    47,    41,    92,
     134,    47,    -1,    47,    41,    92,    90,    47,    -1,    43,
      -1,    47,    41,    93,   134,    47,    -1,    47,    41,    93,
      90,    47,    -1,    41,    95,    -1,    96,    97,    -1,    49,
      50,    -1,    49,    -1,    96,    99,    -1,    98,    50,    -1,
     134,    -1,    63,    -1,   134,    47,    -1,    63,    -1,   101,
      34,   101,    -1,    41,    -1,    38,    -1,   103,    57,   103,
      -1,   102,    57,   103,    -1,    41,    -1,    94,    -1,    65,
      -1,    65,     3,    -1,    42,   160,    -1,    41,    42,   160,
      -1,   105,    42,   160,    -1,   105,    41,    42,   160,    -1,
      38,    -1,    39,    -1,    41,    -1,    42,    -1,    54,    -1,
      56,    -1,    94,    -1,   100,    -1,   104,    -1,   102,    -1,
     140,   134,   141,    -1,    24,    41,    -1,    41,    58,    -1,
      19,   136,    55,   134,   110,    -1,    19,   134,   110,    -1,
      19,   110,    -1,   111,   120,    -1,   112,   120,    -1,    44,
      -1,   111,   160,    -1,   111,   113,    -1,   111,   114,    -1,
     112,   113,    -1,     5,   118,   119,    -1,    12,   119,    -1,
     116,   117,    -1,   134,    47,    -1,   116,   134,    47,    -1,
     134,    -1,   115,    -1,   134,    -1,    58,    -1,   119,   126,
     160,    -1,    45,    -1,   122,   127,   129,    -1,   122,   127,
      -1,   122,   129,    -1,   122,    -1,    17,   137,   123,    -1,
      17,   136,    55,   137,   123,    -1,   124,   125,    -1,    44,
      -1,    44,   160,    -1,   124,   126,   160,    -1,    45,    -1,
      88,    -1,    26,    -1,    25,    -1,   128,    -1,   127,   128,
      -1,    21,    17,   137,   123,    -1,   130,    -1,   129,   130,
      -1,    21,   123,    -1,    27,   134,    -1,    27,   134,   132,
     133,    -1,    47,    -1,   132,   134,    47,    -1,   134,    -1,
     106,    -1,   134,    46,   106,    -1,    41,    61,    41,    -1,
      89,    -1,    94,    -1,    -1,    90,    -1,    59,    -1,    60,
      -1,    -1,   134,    -1,    41,    35,    -1,    23,   136,    55,
     137,    55,   138,   123,    -1,    23,   137,   123,    -1,    49,
      -1,    50,    -1,    13,    41,   144,     3,    -1,    13,    41,
     144,     3,    92,   144,     3,   145,    -1,    13,    41,   144,
       3,    92,   148,    -1,    51,    38,    52,    -1,    51,    41,
      52,    -1,    51,    42,    52,    -1,    51,    52,    -1,   143,
      -1,   143,   144,    -1,   146,    -1,   146,    47,   145,    -1,
      44,   147,    45,    -1,    44,    45,    -1,    44,   145,    45,
      -1,   106,    -1,   147,    47,   106,    -1,    62,    49,   144,
       3,    47,   106,    50,    -1,    62,    49,   144,     3,    47,
     106,    47,    38,   106,    -1,    41,    51,   106,    58,   106,
      52,    -1,    41,    51,    58,   106,    52,    -1,    41,    51,
     106,    58,    52,    -1,    15,    51,     3,    52,     3,    -1,
     153,    -1,   147,     3,    -1,    41,    41,    -1,    41,    -1,
      41,   102,    -1,   152,   160,    41,   102,    -1,   152,   160,
      41,     3,    -1,   152,   160,    41,    41,    -1,   152,   160,
      41,    -1,    22,    41,    28,    44,   154,    -1,    22,    41,
      28,    44,   152,   154,    -1,    22,    41,    28,    44,   160,
     152,   154,    -1,    22,    41,    28,    63,    -1,    45,    -1,
      63,    45,    -1,   156,    -1,    41,    44,   160,   157,    47,
     160,   158,    -1,    41,    44,   160,   157,   158,    -1,    41,
      44,   157,   158,    -1,    41,    58,   106,    47,   160,    -1,
      41,    58,   156,    47,   160,    -1,    41,    58,   156,    -1,
      41,    58,   106,    -1,    41,    58,   106,    47,   160,   157,
      -1,    41,    58,   156,    47,   160,   157,    -1,    41,    58,
     106,    47,   157,    -1,    41,    58,   156,    47,   157,    -1,
      45,    -1,   155,    -1,    55,    -1,    63,    -1,    64,    -1,
     162,    -1,    22,    41,    11,    44,   163,   164,    -1,    22,
      41,    11,    44,   160,   163,   164,    -1,    22,    41,    11,
      63,    44,   160,   163,   164,    -1,    94,    -1,    94,     3,
      -1,    41,    49,     3,    50,    -1,   163,   160,    41,    49,
       3,    50,    -1,   163,   160,    94,     3,    -1,   163,   160,
      94,    -1,    45,    -1,    63,    45,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    16,    16,    17,    18,    21,    22,    23,    24,    25,
      28,    31,    32,    33,    34,    37,    41,    42,    43,    46,
      47,    51,    52,    53,    57,    58,    62,    63,    67,    68,
      71,    72,    73,    76,    77,    81,    84,    87,    88,    89,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   135,
     138,   141,   142,   143,   144,   146,   147,   148,   151,   154,
     155,   158,   159,   162,   167,   168,   172,   173,   176,   179,
     180,   183,   184,   188,   189,   192,   193,   196,   197,   198,
     199,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   215,   218,   221,   222,   223,   226,   227,   231,
     232,   233,   237,   238,   241,   244,   248,   251,   252,   255,
     259,   260,   263,   264,   269,   273,   274,   275,   276,   279,
     280,   283,   287,   288,   289,   293,   298,   299,   300,   304,
     305,   309,   313,   314,   317,   320,   321,   326,   327,   331,
     333,   334,   337,   340,   341,   342,   345,   346,   347,   348,
     351,   352,   355,   356,   359,   362,   365,   366,   367,   370,
     371,   372,   373,   376,   377,   380,   381,   383,   384,   385,
     388,   389,   392,   393,   396,   397,   398,   401,   404,   407,
     408,   409,   410,   411,   412,   413,   414,   417,   418,   419,
     420,   423,   424,   427,   430,   431,   432,   435,   436,   437,
     438,   439,   440,   441,   442,   445,   448,   451,   452,   453,
     456,   459,   460,   461,   464,   465,   466,   467,   468,   469,
     471,   472
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
  "t_eof", "t_pointer", "t_ampersand", "'+'", "'-'", "'*'", "'/'",
  "$accept", "START", "GLOBAL", "PACKAGE", "IMPORT", "FUNC",
  "FUNC_SECOND_PART", "FUNC_PARAM", "FUNC_PARAM_FULFILL",
  "FUNC_PARAM_SECOND", "FUNC_PARAM_FULFILL_SECOND", "FUNC_RETURN_VALUE",
  "FUNC_RETURN_VALUE_FULFILL", "TYPE_AND_STRUCT", "BODY", "BODY_END",
  "BODY_START", "BODY_FILLING", "VAR", "BOOLEAN", "DEFER", "ASSIGNMENT",
  "SHORT_ASSIGN", "FUNC_CALL", "PARAM", "PARAM_START", "PARAM_END",
  "PARAM_END_FULFILL", "PARAM_FULFILL", "SHIFT", "SHIFT_AC", "METHOD",
  "METHOD_FULFILL", "POINTER", "PARAM_IMPORT", "VALUE", "GOTO", "LABEL",
  "SWITCH", "SWITCH_BODY", "SWITCH_BODY_START",
  "SWITCH_BODY_START_WITH_DEFAULT", "CASE", "DEFAULT", "MULTIPLE_ARG",
  "FIRST_PART", "SECOND_PART", "CASE_STATEMENT", "CASE_BODY",
  "SWITCH_BODY_END", "IF", "IF_FIRST", "BODY_FOR_LOOP",
  "BODY_FOR_LOOP_START", "BODY_FOR_LOOP_END", "LOOP_FILLING",
  "MULTY_ELSEIF_SECOND", "ELSEIF_SECOND", "MULTY_ELSE_THIRD", "ELSE_THIRD",
  "RETURN", "MANY_RETURN_START", "MANY_RETURN_START_END", "EXPR",
  "SHORT_EXPR", "INIT_STATE", "CONDITION", "POST_STATE", "FOR",
  "EXPR_START", "EXPR_END", "ARRAY_BODY", "ARRAY_INDEX", "MULTI_AR",
  "PLENTY", "PLENTY_OLD", "ENUM", "MAKE", "SLICE", "MAPS", "STRUCT",
  "STRUCT_BODY", "STRUCT_START", "STRUCT_END", "STRUCT_FIELD",
  "FIELD_START", "FIELD_BODY", "FIELD_END", "ST_EMBEDDED", "END_SYMBOLS",
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
     315,   316,   317,   318,   319,   320,   321,    43,    45,    42,
      47
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    72,    72,    72,    73,    73,    73,    73,    73,
      74,    75,    75,    75,    75,    76,    77,    77,    77,    78,
      78,    79,    79,    79,    80,    80,    81,    81,    82,    82,
      83,    83,    83,    84,    84,    85,    86,    87,    87,    87,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    90,
      91,    92,    92,    92,    92,    93,    93,    93,    94,    95,
      95,    96,    96,    97,    98,    98,    99,    99,   100,   101,
     101,   102,   102,   103,   103,   104,   104,   105,   105,   105,
     105,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   107,   108,   109,   109,   109,   110,   110,   111,
     111,   111,   112,   112,   113,   114,   115,   116,   116,   117,
     118,   118,   119,   119,   120,   121,   121,   121,   121,   122,
     122,   123,   124,   124,   124,   125,   126,   126,   126,   127,
     127,   128,   129,   129,   130,   131,   131,   132,   132,   133,
     134,   134,   135,   136,   136,   136,   137,   137,   137,   137,
     138,   138,   139,   139,   140,   141,   142,   142,   142,   143,
     143,   143,   143,   144,   144,   145,   145,   146,   146,   146,
     147,   147,   148,   148,   149,   149,   149,   150,   151,   152,
     152,   152,   152,   152,   152,   152,   152,   153,   153,   153,
     153,   154,   154,   155,   156,   156,   156,   157,   157,   157,
     157,   157,   157,   157,   157,   158,   159,   160,   160,   160,
     161,   162,   162,   162,   163,   163,   163,   163,   163,   163,
     164,   164
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     2,     1,     1,     1,     1,     1,
       2,     2,     4,     5,     3,     6,     1,     2,     4,     1,
       3,     2,     1,     0,     1,     3,     2,     1,     1,     2,
       1,     4,     3,     1,     1,     2,     1,     1,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     5,     4,     3,     3,
       5,     6,     3,     4,     4,     3,     4,     3,     3,     4,
       3,     6,     5,     4,     3,     3,     3,     3,     5,     3,
       2,     2,     1,     5,     5,     1,     5,     5,     2,     2,
       2,     1,     2,     2,     1,     1,     2,     1,     3,     1,
       1,     3,     3,     1,     1,     1,     2,     2,     3,     3,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     2,     5,     3,     2,     2,     2,     1,
       2,     2,     2,     2,     3,     2,     2,     2,     3,     1,
       1,     1,     1,     3,     1,     3,     2,     2,     1,     3,
       5,     2,     1,     2,     3,     1,     1,     1,     1,     1,
       2,     4,     1,     2,     2,     2,     4,     1,     3,     1,
       1,     3,     3,     1,     1,     0,     1,     1,     1,     0,
       1,     2,     7,     3,     1,     1,     4,     8,     6,     3,
       3,     3,     2,     1,     2,     1,     3,     3,     2,     3,
       1,     3,     7,     9,     6,     5,     5,     5,     1,     2,
       2,     1,     2,     4,     4,     4,     3,     5,     6,     7,
       4,     1,     2,     1,     7,     5,     4,     5,     5,     3,
       3,     6,     6,     5,     5,     1,     1,     1,     1,     1,
       1,     6,     7,     8,     1,     2,     4,     6,     4,     3,
       1,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     5,     6,     7,
       8,   208,     9,   240,     0,     0,    11,     0,    10,     0,
       1,   237,   238,   239,     0,     4,     3,    23,    14,     0,
       0,     0,     0,     0,     0,     2,    22,     0,    19,     0,
     107,     0,     0,     0,    12,     0,     0,     0,   220,    33,
      34,    21,    23,     0,   108,    13,     0,   109,     0,   244,
       0,     0,     0,   111,   112,   211,   114,   221,   184,   115,
     116,   238,   105,   117,   118,     0,   120,     0,   119,   200,
       0,     0,     0,   217,     0,    20,     0,    37,     0,    15,
       0,    28,    30,    16,     0,   110,    91,    88,     0,   245,
       0,   250,   238,     0,   241,     0,   210,    91,   104,   212,
     222,   106,     0,     0,     0,   113,   170,     0,   209,     0,
     218,     0,     0,     0,    34,     0,    24,    27,    29,    17,
       0,     0,   175,   175,     0,   175,     0,     0,   103,    36,
       0,    35,     0,    40,    53,    47,    54,     0,    43,    44,
      42,    45,   148,    50,    48,    41,    49,   193,    46,    52,
      51,    39,     0,    90,    97,    89,     0,    92,    94,   242,
     251,     0,   249,     0,   100,    99,    98,   103,   102,   101,
       0,   185,   121,   201,   216,   219,    32,     0,    26,     0,
       0,     0,    80,     0,     0,   113,   177,   178,   173,   176,
     117,   120,   119,     0,     0,     0,   129,   126,     0,     0,
       0,     0,     0,     0,     0,   122,   165,     0,    85,     0,
      82,     0,   123,     0,     0,     0,     0,     0,     0,     0,
     192,    38,     0,     0,     0,     0,   146,   159,   147,   162,
     194,   246,    93,    96,    91,   248,   243,   171,   214,   215,
     213,    31,    25,    18,     0,     0,     0,    77,     0,    70,
       0,     0,   179,   152,   149,     0,     0,     0,   144,   131,
     132,   127,   130,   133,   128,   125,     0,   179,   183,   167,
       0,    81,     0,   100,    99,   114,     0,     0,   172,   113,
      59,    68,   113,     0,    62,    58,     0,    65,    67,   236,
     223,    74,     0,   189,   190,   191,     0,    75,    76,   179,
     164,   160,   145,     0,   163,     0,     0,     0,     0,    57,
      55,     0,    64,    69,    73,     0,   186,    79,     0,   153,
     158,   157,   155,   156,   151,     0,   140,     0,     0,   141,
     142,   135,     0,     0,   166,   169,     0,     0,     0,     0,
       0,     0,     0,     0,    63,    66,     0,   247,     0,     0,
      72,     0,    56,     0,    78,     0,   150,   154,   136,   139,
     134,   137,     0,   124,     0,   168,     0,     0,     0,     0,
     205,   206,     0,     0,     0,     0,     0,     0,     0,    60,
     195,   161,     0,    61,     0,   188,   138,   143,   113,   180,
       0,    84,    83,    87,    86,   204,     0,   235,   226,     0,
       0,    71,   198,     0,     0,     0,   207,     0,   181,   182,
     113,   230,   229,     0,   225,     0,   199,   197,   196,   187,
       0,     0,     0,     0,   233,   227,   234,   228,   224,     0,
     202,   231,   232,     0,   203
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,     9,    89,    37,    38,   125,
     126,    90,    91,    92,    93,   141,    94,   333,   143,   199,
     144,   224,   225,    73,    97,    98,   165,   166,   167,    74,
      75,    76,    77,    78,    32,   116,   148,   149,   150,   207,
     208,   209,   269,   270,   336,   337,   368,   338,   341,   271,
     151,   152,   310,   265,   334,   372,   236,   237,   238,   239,
     153,   280,   344,   203,   154,   204,   205,   400,   155,    80,
     182,   156,   157,   158,   389,   390,    81,   297,   159,   259,
     160,    82,    11,    83,   299,   300,   384,   408,   301,   103,
      12,    13,    61,   104
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -336
static const yytype_int16 yypact[] =
{
     316,    -6,   278,     5,   160,    48,   350,  -336,  -336,  -336,
    -336,  -336,  -336,  -336,   -32,   142,  -336,   239,  -336,     4,
    -336,  -336,  -336,  -336,   350,  -336,  -336,   188,  -336,   205,
     350,   114,   170,   -13,    76,  -336,    84,   167,  -336,   350,
    -336,   389,   209,   350,  -336,   245,   211,   427,  -336,  -336,
    -336,  -336,   188,   229,  -336,  -336,   350,  -336,   215,   269,
     236,   155,   350,   256,  -336,   126,  -336,  -336,  -336,  -336,
    -336,   251,   309,   300,  -336,   302,   303,   313,  -336,  -336,
     605,   103,   311,  -336,   611,  -336,   352,  -336,   107,  -336,
     254,  -336,  -336,  -336,   270,  -336,    33,  -336,   549,  -336,
     155,  -336,   332,   367,  -336,   236,    66,   361,  -336,   303,
    -336,  -336,   247,   374,   374,   257,  -336,   143,  -336,   605,
    -336,   395,   311,   184,    84,   260,  -336,  -336,  -336,  -336,
     400,   410,   378,   408,   422,   378,   426,   605,   201,  -336,
     354,  -336,   350,  -336,  -336,   300,   123,   144,  -336,  -336,
    -336,  -336,   402,  -336,  -336,  -336,  -336,   397,  -336,  -336,
    -336,  -336,   420,  -336,   421,  -336,   424,  -336,   382,  -336,
    -336,   428,   472,   155,  -336,  -336,  -336,   429,  -336,  -336,
     605,  -336,  -336,  -336,   118,  -336,  -336,   430,  -336,   107,
     435,   429,  -336,    53,   445,   179,  -336,  -336,  -336,  -336,
     287,   123,   144,   -20,   434,   449,  -336,  -336,   152,    79,
     318,   439,   468,   442,   449,  -336,   398,   451,  -336,   460,
    -336,   446,  -336,   462,   630,   467,   144,   455,   458,   461,
    -336,  -336,   471,   605,   605,   162,   402,  -336,   493,  -336,
    -336,  -336,  -336,  -336,    99,  -336,  -336,  -336,  -336,    66,
     303,  -336,  -336,  -336,   464,   144,   486,   144,   514,  -336,
     104,   605,   505,   350,  -336,   328,   605,   473,  -336,  -336,
    -336,  -336,  -336,  -336,  -336,  -336,   605,   505,  -336,  -336,
     605,  -336,   195,    86,   345,   461,   605,   475,  -336,   267,
     474,  -336,   212,   470,  -336,   -20,   519,  -336,  -336,  -336,
    -336,  -336,   555,  -336,  -336,  -336,   144,  -336,   474,   505,
    -336,  -336,   493,   449,  -336,   476,   527,   495,   485,  -336,
      46,   535,  -336,  -336,  -336,   605,   144,   474,   449,  -336,
    -336,  -336,  -336,  -336,  -336,   350,  -336,   605,   473,   407,
    -336,   359,   318,   484,  -336,   409,   605,   605,   489,   577,
     583,   276,    45,   501,   474,  -336,   449,  -336,   497,   506,
    -336,   397,  -336,   501,   474,   -21,  -336,  -336,  -336,   412,
     359,  -336,   350,  -336,   636,  -336,   508,   221,   509,   312,
    -336,  -336,   500,   499,   513,   512,   557,   516,   530,  -336,
     515,  -336,   560,  -336,   564,  -336,  -336,  -336,   314,   474,
     449,  -336,  -336,  -336,  -336,  -336,   655,  -336,  -336,   362,
     526,  -336,  -336,   531,   388,   501,  -336,   501,  -336,  -336,
     355,   533,   534,   350,  -336,   605,  -336,  -336,  -336,  -336,
     276,   276,   513,   279,  -336,   512,  -336,   512,  -336,   539,
    -336,  -336,  -336,   605,  -336
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -336,  -336,   573,  -336,  -336,  -336,  -336,  -336,   537,  -336,
     393,  -336,   502,   -15,   -76,  -336,  -336,   491,   255,  -213,
    -336,   -61,   301,   -42,  -336,  -336,  -336,  -336,  -336,  -336,
     487,   -57,   347,   -88,   569,   -45,  -336,  -336,  -336,  -199,
    -336,  -336,   392,  -336,  -336,  -336,  -336,  -336,   264,   399,
    -336,  -336,  -198,  -336,  -336,   341,  -336,   371,   377,  -233,
    -336,  -336,  -336,   -71,  -336,   307,  -131,  -336,  -336,  -336,
    -336,  -336,  -336,  -128,  -335,  -336,   222,  -243,    15,   271,
     181,   543,  -336,   -24,  -336,   224,  -269,  -296,  -236,    -5,
    -336,  -336,   -36,   -78
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -180
static const yytype_int16 yytable[] =
{
      25,    26,    79,    59,   214,   314,   147,   264,   109,   117,
     226,   275,   294,   322,   129,    33,   278,    27,    59,    35,
     324,    51,   169,   108,   100,    40,   180,   168,   393,   240,
     140,    45,    34,   261,    54,    14,   162,   146,    57,    79,
      60,   318,    84,   319,   202,   202,    18,   202,    20,   362,
      46,    95,   145,   413,     1,     2,   217,   105,   120,   355,
     254,   172,   210,    59,     3,   258,   216,   226,   254,   173,
       4,   108,   108,   127,   183,   201,   201,   121,   201,   314,
     428,   360,   429,   163,   266,   233,   234,    49,   192,   161,
     200,   200,   180,   200,   255,   246,   140,   296,   185,   261,
     232,   220,   315,    21,   140,   257,   118,   217,   187,   188,
      49,    22,    23,   424,   253,   107,   409,   121,    72,   254,
      47,   248,   395,  -103,   268,    50,   217,   250,   321,  -113,
     366,   328,   256,   376,   378,   247,   438,   231,   303,    48,
     233,   234,   108,   373,  -111,   255,   343,   217,   124,   163,
     119,   232,   220,   290,   295,    29,    30,   266,   391,   249,
     -99,   434,   436,   308,   267,   302,   441,   106,   442,    72,
     232,   220,   257,  -113,   127,   107,   287,   147,   356,   309,
     113,    10,   217,  -103,    28,   320,    10,    49,   307,   180,
     327,   232,   220,   181,   317,   339,   325,   268,   217,   256,
     101,    19,   419,   272,   217,   342,   263,    21,   146,   345,
      21,    42,    43,   -99,    52,    22,    23,    53,   102,    23,
      44,   346,   218,   145,   386,    50,   219,   220,   107,    36,
     140,   354,    49,   386,   186,    86,  -103,   394,   218,   291,
     298,   348,   219,   220,   218,   346,   -99,    39,   219,   220,
     107,    56,   221,   147,   364,    62,   351,    49,   329,   222,
      86,   107,   223,   350,    96,   365,   369,   180,   402,  -103,
      50,   323,    99,    87,   261,   377,   379,    58,    88,   130,
      29,    30,   147,   131,   146,   174,    58,   132,   175,   133,
    -100,   -99,   134,   135,   136,    50,   110,   137,    87,   145,
      21,   -99,    31,   399,   382,   287,   107,   189,    22,    23,
     190,   138,   111,   146,  -103,   139,   107,   383,   350,    15,
      16,   140,     1,     2,  -103,    21,   439,    17,   145,   440,
     367,    21,     3,    22,    23,    72,   112,   130,     4,    22,
      23,   131,  -174,    79,  -104,   132,   385,   133,   -99,   418,
     134,   135,   136,   330,   331,   137,    67,  -104,   180,   404,
     113,   421,   206,   107,   180,   261,    21,   397,   130,   138,
     114,  -103,   131,   332,    71,    23,   132,   170,   133,   140,
     433,   134,   135,   136,   330,   331,   137,   198,   198,   -99,
     198,   194,   227,    72,   107,   228,   229,   304,   444,   351,
     138,   123,  -103,  -113,   107,    21,   230,   407,   171,   423,
     140,   163,  -103,    22,    23,   177,    63,    64,   432,   195,
      66,   194,  -179,   235,    72,   435,   437,    68,   180,   243,
      42,    43,    69,   427,    70,   119,   184,   196,   197,    55,
     211,   191,   213,    72,   180,   279,    63,    64,   140,   195,
      66,   193,   206,   180,   371,   180,   375,    68,   180,   396,
     178,   179,    69,   212,    70,    63,    64,   215,    65,    66,
     241,   -95,    67,    72,   242,   245,    68,   244,   107,    87,
     251,    69,    21,    70,   283,    64,   260,   284,   285,   262,
      71,    23,    72,   263,   276,    68,    34,   277,   230,   281,
      69,   282,    70,   288,   286,    63,    64,   303,   292,    66,
     304,    72,   306,   305,   313,   316,    68,   326,   140,   352,
     180,    69,   353,    70,    63,    64,   357,   292,    66,   293,
     358,   340,    72,   349,   361,    68,   359,   140,   363,   374,
      69,   380,    70,    63,    64,   388,   115,    66,   318,   392,
     351,    72,   405,   383,    68,   401,   403,   406,   407,    69,
     410,    70,   415,   416,   196,   197,   411,   417,    63,    64,
      72,   115,    66,   425,   388,   412,   426,   443,    24,    68,
     430,   431,   252,   347,    69,   142,    70,    63,    64,    85,
     115,    66,   128,    63,    64,    72,   115,    66,    68,   176,
      41,   273,   370,    69,    68,    70,   335,   311,   274,    69,
     414,    70,   164,   312,    72,    63,    64,   318,   115,    66,
      72,    63,    64,   387,   115,    66,    68,   122,     0,   381,
     422,    69,    68,    70,     0,     0,     0,    69,     0,    70,
       0,   286,    72,    63,    64,     0,   115,    66,    72,    63,
      64,     0,    65,    66,    68,     0,     0,     0,     0,    69,
      68,    70,     0,     0,     0,    69,     0,    70,    63,    64,
      72,   289,    66,     0,    63,    64,    72,   398,    66,    68,
       0,     0,     0,     0,    69,    68,    70,     0,     0,     0,
      69,     0,    70,    63,    64,    72,   420,    66,     0,     0,
       0,    72,     0,     0,    68,     0,     0,     0,     0,    69,
       0,    70,     0,     0,     0,     0,     0,     0,     0,     0,
      72
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-336)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       5,     6,    47,    45,   135,   238,    94,   205,    65,    80,
     138,   210,   225,   256,    90,    11,   214,    49,    60,    24,
     256,    36,   100,    65,    60,    30,    46,    98,   363,   157,
      51,    44,    28,    53,    39,    41,     3,    94,    43,    84,
      45,    62,    47,   256,   132,   133,    41,   135,     0,     3,
      63,    56,    94,   388,     6,     7,     3,    62,    82,   302,
      15,   103,   133,   105,    16,   193,   137,   195,    15,   105,
      22,   113,   114,    88,   119,   132,   133,    82,   135,   312,
     415,   317,   417,    50,     5,   146,   147,     3,   130,    94,
     132,   133,    46,   135,    41,   173,    51,   225,   122,    53,
      47,    48,     3,    55,    51,   193,     3,     3,   123,   124,
       3,    63,    64,   409,   190,    49,   385,   122,    65,    15,
      44,     3,   365,    57,    45,    41,     3,   184,   256,     3,
     328,   262,   193,   346,   347,   180,   432,   142,    52,    63,
     201,   202,   184,   342,    58,    41,   277,     3,    41,    50,
      47,    47,    48,   224,   225,    41,    42,     5,   356,    41,
      34,   430,   431,   234,    12,   226,   435,    41,   437,    65,
      47,    48,   260,    47,   189,    49,   221,   265,   309,    17,
      57,     0,     3,    57,    42,   256,     5,     3,   233,    46,
     261,    47,    48,    50,   255,   266,   257,    45,     3,   260,
      45,    41,   400,   208,     3,   276,    44,    55,   265,   280,
      55,    41,    42,    34,    47,    63,    64,    50,    63,    64,
      50,   282,    43,   265,   352,    41,    47,    48,    49,    41,
      51,   302,     3,   361,    50,     6,    57,   365,    43,   224,
     225,   286,    47,    48,    43,   306,    34,    42,    47,    48,
      49,    42,    51,   341,   325,    44,    44,     3,   263,    58,
       6,    49,    61,    51,    49,   326,   337,    46,    47,    57,
      41,   256,     3,    44,    53,   346,   347,    41,    49,     9,
      41,    42,   370,    13,   341,    38,    41,    17,    41,    19,
      34,    34,    22,    23,    24,    41,    45,    27,    44,   341,
      55,    34,    63,   374,   349,   350,    49,    47,    63,    64,
      50,    41,     3,   370,    57,    45,    49,    41,    51,    41,
      42,    51,     6,     7,    57,    55,    47,    49,   370,    50,
     335,    55,    16,    63,    64,    65,    34,     9,    22,    63,
      64,    13,    55,   388,    57,    17,   351,    19,    34,    35,
      22,    23,    24,    25,    26,    27,    45,    57,    46,    47,
      57,   406,    44,    49,    46,    53,    55,   372,     9,    41,
      57,    57,    13,    45,    63,    64,    17,    45,    19,    51,
     425,    22,    23,    24,    25,    26,    27,   132,   133,    34,
     135,    13,    38,    65,    49,    41,    42,    52,   443,    44,
      41,    49,    57,    58,    49,    55,    52,    45,    41,    47,
      51,    50,    57,    63,    64,    41,    38,    39,   423,    41,
      42,    13,    44,    21,    65,   430,   431,    49,    46,    47,
      41,    42,    54,    45,    56,    47,    41,    59,    60,    50,
     133,    41,   135,    65,    46,    47,    38,    39,    51,    41,
      42,    41,    44,    46,    47,    46,    47,    49,    46,    47,
     113,   114,    54,    41,    56,    38,    39,    41,    41,    42,
      50,    50,    45,    65,    50,     3,    49,    49,    49,    44,
      50,    54,    55,    56,    38,    39,    41,    41,    42,    55,
      63,    64,    65,    44,    55,    49,    28,    55,    52,    48,
      54,    41,    56,    41,    58,    38,    39,    52,    41,    42,
      52,    65,    41,    52,    21,    51,    49,     3,    51,    49,
      46,    54,     3,    56,    38,    39,    50,    41,    42,    62,
       3,    58,    65,    58,    49,    49,    41,    51,     3,    55,
      54,    52,    56,    38,    39,    44,    41,    42,    62,    52,
      44,    65,    52,    41,    49,    47,    47,    58,    45,    54,
       3,    56,    47,     3,    59,    60,    50,     3,    38,    39,
      65,    41,    42,    47,    44,    45,    45,    38,     5,    49,
      47,    47,   189,   282,    54,    94,    56,    38,    39,    52,
      41,    42,    90,    38,    39,    65,    41,    42,    49,   112,
      31,   209,   338,    54,    49,    56,   265,   236,   209,    54,
     388,    56,    63,   236,    65,    38,    39,    62,    41,    42,
      65,    38,    39,   352,    41,    42,    49,    84,    -1,    52,
     406,    54,    49,    56,    -1,    -1,    -1,    54,    -1,    56,
      -1,    58,    65,    38,    39,    -1,    41,    42,    65,    38,
      39,    -1,    41,    42,    49,    -1,    -1,    -1,    -1,    54,
      49,    56,    -1,    -1,    -1,    54,    -1,    56,    38,    39,
      65,    41,    42,    -1,    38,    39,    65,    41,    42,    49,
      -1,    -1,    -1,    -1,    54,    49,    56,    -1,    -1,    -1,
      54,    -1,    56,    38,    39,    65,    41,    42,    -1,    -1,
      -1,    65,    -1,    -1,    49,    -1,    -1,    -1,    -1,    54,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,    16,    22,    72,    73,    74,    75,    76,
     151,   153,   161,   162,    41,    41,    42,    49,    41,    41,
       0,    55,    63,    64,    73,   160,   160,    49,    42,    41,
      42,    63,   105,    11,    28,   160,    41,    78,    79,    42,
     160,   105,    41,    42,    50,    44,    63,    44,    63,     3,
      41,    84,    47,    50,   160,    50,    42,   160,    41,    94,
     160,   163,    44,    38,    39,    41,    42,    45,    49,    54,
      56,    63,    65,    94,   100,   101,   102,   103,   104,   106,
     140,   147,   152,   154,   160,    79,     6,    44,    49,    77,
      82,    83,    84,    85,    87,   160,    49,    95,    96,     3,
     163,    45,    63,   160,   164,   160,    41,    49,    94,   102,
      45,     3,    34,    57,    57,    41,   106,   134,     3,    47,
     154,   160,   152,    49,    41,    80,    81,    84,    83,    85,
       9,    13,    17,    19,    22,    23,    24,    27,    41,    45,
      51,    86,    88,    89,    91,    94,   102,   104,   107,   108,
     109,   121,   122,   131,   135,   139,   142,   143,   144,   149,
     151,   160,     3,    50,    63,    97,    98,    99,   134,   164,
      45,    41,    94,   163,    38,    41,   101,    41,   103,   103,
      46,    50,   141,   106,    41,   154,    50,    84,    84,    47,
      50,    41,    94,    41,    13,    41,    59,    60,    89,    90,
      94,   102,   104,   134,   136,   137,    44,   110,   111,   112,
     134,   136,    41,   136,   137,    41,   134,     3,    43,    47,
      48,    51,    58,    61,    92,    93,   144,    38,    41,    42,
      52,   160,    47,    92,    92,    21,   127,   128,   129,   130,
     144,    50,    50,    47,    49,     3,   164,   106,     3,    41,
     102,    50,    81,    85,    15,    41,    92,   104,   144,   150,
      41,    53,    55,    44,   123,   124,     5,    12,    45,   113,
     114,   120,   160,   113,   120,   110,    55,    55,   123,    47,
     132,    48,    41,    38,    41,    42,    58,   106,    41,    41,
     134,   149,    41,    62,    90,   134,   144,   148,   149,   155,
     156,   159,    92,    52,    52,    52,    41,   106,   134,    17,
     123,   128,   129,    21,   130,     3,    51,    92,    62,    90,
     134,   144,   148,   149,   159,    92,     3,   134,   137,   160,
      25,    26,    45,    88,   125,   126,   115,   116,   118,   134,
      58,   119,   134,   137,   133,   134,    92,    93,   106,    58,
      51,    44,    49,     3,   134,   148,   137,    50,     3,    41,
     159,    49,     3,     3,   134,    92,   123,   160,   117,   134,
     119,    47,   126,   110,    55,    47,    90,   134,    90,   134,
      52,    52,   106,    41,   157,   160,   144,   150,    44,   145,
     146,   123,    52,   145,   144,   148,    47,   160,    41,   134,
     138,    47,    47,    47,    47,    52,    58,    45,   158,   157,
       3,    50,    45,   145,   147,    47,     3,     3,    35,   123,
      41,   106,   156,    47,   158,    47,    45,    45,   145,   145,
      47,    47,   160,   106,   157,   160,   157,   160,   158,    47,
      50,   157,   157,    38,   106
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
#line 1978 "y.tab.c"
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
#line 475 "..\\main\\golang.y"


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