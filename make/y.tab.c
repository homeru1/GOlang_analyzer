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
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   647

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  103
/* YYNRULES -- Number of rules.  */
#define YYNRULES  244
/* YYNRULES -- Number of states.  */
#define YYNSTATES  412

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
      23,    25,    28,    31,    36,    42,    46,    53,    55,    59,
      61,    64,    68,    71,    74,    77,    79,    82,    85,    88,
      90,    91,    95,    98,   100,   103,   105,   107,   109,   112,
     117,   121,   123,   125,   132,   136,   141,   146,   152,   155,
     157,   159,   163,   166,   169,   171,   173,   175,   177,   179,
     181,   183,   185,   187,   189,   191,   193,   195,   197,   199,
     202,   206,   208,   210,   214,   218,   222,   225,   228,   230,
     232,   235,   238,   241,   244,   246,   249,   252,   255,   257,
     260,   263,   265,   268,   271,   274,   277,   279,   282,   285,
     287,   289,   292,   294,   298,   300,   302,   306,   310,   312,
     314,   316,   319,   323,   327,   332,   334,   336,   338,   341,
     343,   345,   347,   350,   352,   354,   356,   358,   362,   366,
     369,   372,   378,   382,   385,   388,   391,   393,   396,   399,
     402,   405,   409,   412,   415,   418,   422,   424,   426,   428,
     430,   434,   436,   440,   443,   446,   448,   452,   458,   461,
     463,   466,   470,   472,   474,   476,   478,   480,   483,   488,
     490,   493,   496,   498,   501,   506,   508,   512,   514,   516,
     520,   524,   526,   528,   529,   531,   533,   535,   536,   538,
     541,   549,   553,   555,   557,   562,   571,   578,   582,   586,
     590,   593,   595,   598,   600,   604,   608,   611,   615,   617,
     621,   629,   639,   646,   652,   658,   660,   663,   666,   668,
     671,   676,   681,   686,   690,   696,   703,   711,   716,   718,
     721,   723,   725,   727,   729,   736,   744,   753,   755,   758,
     763,   770,   775,   779,   781
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      72,     0,    -1,    72,    73,   169,    -1,    73,   169,    -1,
      72,   169,    -1,    74,    -1,    75,    -1,    76,    -1,   165,
      -1,   170,    -1,    88,    -1,    16,    41,    -1,     7,    42,
      -1,     7,    49,   120,    50,    -1,     7,    49,    63,   120,
      50,    -1,     7,    41,    42,    -1,     6,    41,    49,    77,
      50,    78,    -1,    82,    -1,    77,    47,    82,    -1,    91,
      -1,    87,    91,    -1,    85,    87,    91,    -1,    79,    91,
      -1,    80,    81,    -1,    49,    50,    -1,    49,    -1,    80,
      83,    -1,    84,    50,    -1,    41,    87,    -1,    41,    -1,
      -1,    41,    87,    47,    -1,    87,    47,    -1,    63,    -1,
      41,    87,    -1,    87,    -1,    63,    -1,    86,    -1,    85,
      86,    -1,     6,    49,    87,    50,    -1,     6,    49,    50,
      -1,     3,    -1,    41,    -1,     6,    49,    41,    87,    50,
      89,    -1,    41,    79,    91,    -1,    41,    79,    87,    91,
      -1,    41,    79,    79,    91,    -1,     6,    49,    77,    50,
      78,    -1,    93,    92,    -1,    45,    -1,    44,    -1,    93,
      94,   169,    -1,    93,    95,    -1,    93,   169,    -1,   154,
      -1,   124,    -1,   122,    -1,   123,    -1,   136,    -1,   159,
      -1,   109,    -1,   150,    -1,   157,    -1,   146,    -1,   165,
      -1,   164,    -1,    98,    -1,   117,    -1,   170,    -1,   101,
     105,    -1,    13,   101,   105,    -1,   149,    -1,    97,    -1,
     159,     3,   160,    -1,   121,    53,   121,    -1,    97,    53,
     121,    -1,     9,   109,    -1,     3,    48,    -1,    48,    -1,
      43,    -1,   102,   104,    -1,    41,    47,    -1,   102,   103,
      -1,    41,    47,    -1,    63,    -1,    41,   100,    -1,    41,
      99,    -1,   106,   108,    -1,   107,    -1,   106,   107,    -1,
      96,    47,    -1,    63,    -1,   149,   169,    -1,    41,   110,
      -1,   111,   112,    -1,    49,    50,    -1,    49,    -1,   111,
     114,    -1,   113,    50,    -1,   149,    -1,    63,    -1,   149,
      47,    -1,    63,    -1,   116,    34,   116,    -1,    41,    -1,
      38,    -1,   118,    57,   118,    -1,   117,    57,   118,    -1,
      41,    -1,   109,    -1,    65,    -1,    42,   169,    -1,    41,
      42,   169,    -1,   120,    42,   169,    -1,   120,    41,    42,
     169,    -1,    38,    -1,    39,    -1,    41,    -1,    46,    41,
      -1,    42,    -1,    54,    -1,    56,    -1,    90,   110,    -1,
     109,    -1,   115,    -1,   119,    -1,   117,    -1,   155,   149,
     156,    -1,   155,    97,   156,    -1,    24,    41,    -1,    41,
      58,    -1,    19,   151,    55,   149,   125,    -1,    19,   149,
     125,    -1,    19,   125,    -1,   126,   135,    -1,   127,   135,
      -1,    44,    -1,   126,   169,    -1,   126,   128,    -1,   126,
     129,    -1,   127,   128,    -1,     5,   133,   134,    -1,    12,
     134,    -1,   131,   132,    -1,   149,    47,    -1,   131,   149,
      47,    -1,   149,    -1,   130,    -1,   149,    -1,    58,    -1,
     134,   141,   169,    -1,    45,    -1,   137,   142,   144,    -1,
     137,   142,    -1,   137,   144,    -1,   137,    -1,    17,   152,
     138,    -1,    17,   151,    55,   152,   138,    -1,   139,   140,
      -1,    44,    -1,    44,   169,    -1,   139,   141,   169,    -1,
      45,    -1,    94,    -1,    26,    -1,    25,    -1,   143,    -1,
     142,   143,    -1,    21,    17,   152,   138,    -1,   145,    -1,
     144,   145,    -1,    21,   138,    -1,    27,    -1,    27,   149,
      -1,    27,   149,   147,   148,    -1,    47,    -1,   147,   149,
      47,    -1,   149,    -1,   121,    -1,   149,    46,   121,    -1,
      41,    61,    41,    -1,    95,    -1,   109,    -1,    -1,    97,
      -1,    59,    -1,    60,    -1,    -1,   149,    -1,    41,    35,
      -1,    23,   151,    55,   152,    55,   153,   138,    -1,    23,
     152,   138,    -1,    49,    -1,    50,    -1,    13,    41,   159,
       3,    -1,    13,    41,   159,     3,    99,   159,     3,   160,
      -1,    13,    41,   159,     3,    99,   163,    -1,    51,    38,
      52,    -1,    51,    41,    52,    -1,    51,    42,    52,    -1,
      51,    52,    -1,   158,    -1,   158,   159,    -1,   161,    -1,
     161,    47,   160,    -1,    44,   162,    45,    -1,    44,    45,
      -1,    44,   160,    45,    -1,   121,    -1,   162,    47,   121,
      -1,    62,    49,   159,     3,    47,   121,    50,    -1,    62,
      49,   159,     3,    47,   121,    47,    38,   121,    -1,    41,
      51,   121,    58,   121,    52,    -1,    41,    51,    58,   121,
      52,    -1,    41,    51,   121,    58,    52,    -1,   167,    -1,
     162,     3,    -1,    41,    41,    -1,    41,    -1,    41,   117,
      -1,   166,   169,    41,   117,    -1,   166,   169,    41,     3,
      -1,   166,   169,    41,    41,    -1,   166,   169,    41,    -1,
      22,    41,    28,    44,   168,    -1,    22,    41,    28,    44,
     166,   168,    -1,    22,    41,    28,    44,   169,   166,   168,
      -1,    22,    41,    28,    63,    -1,    45,    -1,    63,    45,
      -1,    55,    -1,    63,    -1,    64,    -1,   171,    -1,    22,
      41,    11,    44,   172,   173,    -1,    22,    41,    11,    44,
     169,   172,   173,    -1,    22,    41,    11,    63,    44,   169,
     172,   173,    -1,   109,    -1,   109,     3,    -1,    41,    49,
       3,    50,    -1,   172,   169,    41,    49,     3,    50,    -1,
     172,   169,   109,     3,    -1,   172,   169,   109,    -1,    45,
      -1,    63,    45,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    16,    16,    17,    18,    21,    22,    23,    24,    25,
      26,    29,    32,    33,    34,    35,    38,    41,    42,    46,
      47,    48,    49,    52,    53,    56,    57,    61,    65,    66,
      67,    71,    72,    73,    77,    78,    79,    82,    83,    86,
      87,    90,    91,    96,    99,   100,   101,   105,   109,   112,
     115,   116,   117,   118,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   141,
     142,   166,   167,   168,   171,   172,   176,   179,   180,   182,
     185,   189,   190,   194,   195,   198,   199,   202,   205,   206,
     210,   211,   215,   218,   221,   222,   225,   226,   229,   234,
     235,   239,   240,   243,   246,   247,   250,   251,   255,   256,
     259,   262,   263,   264,   265,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   284,
     287,   290,   291,   292,   295,   296,   300,   301,   302,   306,
     307,   310,   313,   317,   320,   321,   324,   328,   329,   332,
     333,   338,   342,   343,   344,   345,   348,   349,   352,   356,
     357,   358,   362,   367,   368,   369,   373,   374,   378,   382,
     383,   386,   389,   390,   391,   396,   397,   401,   403,   404,
     407,   410,   411,   412,   415,   416,   417,   418,   421,   422,
     425,   426,   429,   432,   435,   436,   437,   440,   441,   442,
     443,   446,   447,   450,   451,   453,   454,   455,   458,   459,
     462,   463,   466,   467,   468,   474,   477,   478,   479,   480,
     481,   482,   483,   484,   487,   488,   489,   490,   493,   494,
     526,   527,   528,   531,   534,   535,   536,   539,   540,   541,
     542,   543,   544,   546,   547
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
  "$accept", "START", "GLOBAL", "PACKAGE", "IMPORT", "FUNC", "FUNC_PARAM",
  "FUNC_SECOND_PART", "FUNC_PARAM_SECOND", "FUNC_PARAM_SECOND_START",
  "FUNC_PARAM_SECOND_END", "FUNC_PARAM_FULFILL",
  "FUNC_PARAM_FULFILL_SECOND", "FUNC_PARAM_FULFILL_SECOND_END",
  "FUNC_RETURN_VALUE", "FUNC_RETURN_VALUE_FULFILL", "TYPE_AND_STRUCT",
  "STRUCT_METHOD", "STRUCT_METHOD_SECOND_PART", "SHORT_FUNC", "BODY",
  "BODY_END", "BODY_START", "BODY_FILLING", "VAR", "FULFILL_FOR_VAR",
  "BOOLEAN", "DEFER", "ASSIGNMENT", "SHORT_ASSIGN", "MANY_IDS",
  "MANY_IDS_START", "MANY_IDS_FULFILL", "MANY_IDS_END", "MANY_VALUES",
  "MANY_VALUES_START", "MANY_VALUES_START_FULFILL", "MANY_VALUES_END",
  "FUNC_CALL", "PARAM", "PARAM_START", "PARAM_END", "PARAM_END_FULFILL",
  "PARAM_FULFILL", "SHIFT", "SHIFT_AC", "METHOD", "METHOD_FULFILL",
  "POINTER", "PARAM_IMPORT", "VALUE", "GOTO", "LABEL", "SWITCH",
  "SWITCH_BODY", "SWITCH_BODY_START", "SWITCH_BODY_START_WITH_DEFAULT",
  "CASE", "DEFAULT", "MULTIPLE_ARG", "FIRST_PART", "SECOND_PART",
  "CASE_STATEMENT", "CASE_BODY", "SWITCH_BODY_END", "IF", "IF_FIRST",
  "BODY_FOR_LOOP", "BODY_FOR_LOOP_START", "BODY_FOR_LOOP_END",
  "LOOP_FILLING", "MULTY_ELSEIF_SECOND", "ELSEIF_SECOND",
  "MULTY_ELSE_THIRD", "ELSE_THIRD", "RETURN", "MANY_RETURN_START",
  "MANY_RETURN_START_END", "EXPR", "SHORT_EXPR", "INIT_STATE", "CONDITION",
  "POST_STATE", "FOR", "EXPR_START", "EXPR_END", "ARRAY_BODY",
  "ARRAY_INDEX", "MULTI_AR", "PLENTY", "PLENTY_OLD", "ENUM", "MAKE",
  "SLICE", "STRUCT", "STRUCT_BODY", "STRUCT_START", "STRUCT_END",
  "END_SYMBOLS", "INTERFACE", "INT_START", "INT_BODY", "INT_END", YY_NULL
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
      73,    74,    75,    75,    75,    75,    76,    77,    77,    78,
      78,    78,    78,    79,    79,    80,    80,    81,    82,    82,
      82,    83,    83,    83,    84,    84,    84,    85,    85,    86,
      86,    87,    87,    88,    89,    89,    89,    90,    91,    92,
      93,    93,    93,    93,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    95,
      95,    96,    96,    96,    97,    97,    98,    99,    99,   100,
     101,   102,   102,   103,   103,   104,   104,   105,   106,   106,
     107,   107,   108,   109,   110,   110,   111,   111,   112,   113,
     113,   114,   114,   115,   116,   116,   117,   117,   118,   118,
     119,   120,   120,   120,   120,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   122,
     123,   124,   124,   124,   125,   125,   126,   126,   126,   127,
     127,   128,   129,   130,   131,   131,   132,   133,   133,   134,
     134,   135,   136,   136,   136,   136,   137,   137,   138,   139,
     139,   139,   140,   141,   141,   141,   142,   142,   143,   144,
     144,   145,   146,   146,   146,   147,   147,   148,   149,   149,
     150,   151,   151,   151,   152,   152,   152,   152,   153,   153,
     154,   154,   155,   156,   157,   157,   157,   158,   158,   158,
     158,   159,   159,   160,   160,   161,   161,   161,   162,   162,
     163,   163,   164,   164,   164,   165,   166,   166,   166,   166,
     166,   166,   166,   166,   167,   167,   167,   167,   168,   168,
     169,   169,   169,   170,   171,   171,   171,   172,   172,   172,
     172,   172,   172,   173,   173
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     2,     1,     1,     1,     1,     1,
       1,     2,     2,     4,     5,     3,     6,     1,     3,     1,
       2,     3,     2,     2,     2,     1,     2,     2,     2,     1,
       0,     3,     2,     1,     2,     1,     1,     1,     2,     4,
       3,     1,     1,     6,     3,     4,     4,     5,     2,     1,
       1,     3,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       3,     1,     1,     3,     3,     3,     2,     2,     1,     1,
       2,     2,     2,     2,     1,     2,     2,     2,     1,     2,
       2,     1,     2,     2,     2,     2,     1,     2,     2,     1,
       1,     2,     1,     3,     1,     1,     3,     3,     1,     1,
       1,     2,     3,     3,     4,     1,     1,     1,     2,     1,
       1,     1,     2,     1,     1,     1,     1,     3,     3,     2,
       2,     5,     3,     2,     2,     2,     1,     2,     2,     2,
       2,     3,     2,     2,     2,     3,     1,     1,     1,     1,
       3,     1,     3,     2,     2,     1,     3,     5,     2,     1,
       2,     3,     1,     1,     1,     1,     1,     2,     4,     1,
       2,     2,     1,     2,     4,     1,     3,     1,     1,     3,
       3,     1,     1,     0,     1,     1,     1,     0,     1,     2,
       7,     3,     1,     1,     4,     8,     6,     3,     3,     3,
       2,     1,     2,     1,     3,     3,     2,     3,     1,     3,
       7,     9,     6,     5,     5,     1,     2,     2,     1,     2,
       4,     4,     4,     3,     5,     6,     7,     4,     1,     2,
       1,     1,     1,     1,     6,     7,     8,     1,     2,     4,
       6,     4,     3,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     5,     6,     7,
      10,     8,   215,     9,   233,     0,     0,     0,    12,     0,
      11,     0,     1,   230,   231,   232,     0,     4,     3,    30,
       0,    15,     0,     0,     0,     0,     0,     0,     2,    29,
       0,    17,    41,    42,     0,     0,   111,     0,     0,     0,
      13,     0,     0,     0,   227,    28,    30,     0,     0,   112,
      14,     0,   113,     0,   237,     0,     0,     0,     0,   115,
     116,   218,   119,   228,     0,   192,   120,   121,   231,   110,
       0,   123,   124,     0,   126,     0,   125,   208,     0,     0,
       0,   224,     0,    18,     0,    50,    25,    16,     0,     0,
       0,    37,     0,    19,     0,     0,    43,   114,    96,    93,
       0,   238,     0,   243,   231,     0,   234,     0,    30,   217,
      96,   109,   219,   118,   229,   122,     0,     0,     0,   117,
       0,   178,     0,   216,     0,   225,     0,     0,     0,    24,
      22,    42,    33,    23,    26,     0,    35,    38,     0,    20,
       0,     0,   183,   183,   183,     0,   172,   108,    49,     0,
      48,     0,    52,    66,     0,     0,    60,    67,    56,    57,
      55,    58,   155,    63,    61,    54,    62,   201,    59,    65,
      64,    53,    68,     0,     0,    95,   102,    94,     0,    97,
     178,    99,   235,   244,     0,   242,     0,     0,   105,   104,
     103,   108,   107,   106,   193,     0,   128,     0,     0,   127,
     209,   223,   226,    40,     0,    34,    27,    32,    21,     0,
      76,     0,     0,     0,   117,   185,   186,   181,   184,   123,
       0,     0,     0,   136,   133,     0,     0,     0,     0,     0,
       0,   129,   173,    81,     0,   130,     0,     0,     0,     0,
     200,    51,    91,     0,    72,    69,     0,    88,    71,     0,
       0,    84,    82,    80,     0,   153,   166,   154,   169,   202,
       0,     0,    44,   239,    98,   101,    96,   241,   236,     0,
      75,    74,   179,   221,   222,   220,    39,    31,     0,    70,
       0,   187,   159,   156,     0,     0,     0,   151,   138,   139,
     134,   137,   140,   135,   132,     0,   187,   191,   175,     0,
       0,     0,   180,   197,   198,   199,    90,    89,    87,    71,
       0,     0,    79,    83,    78,    86,    85,   187,   171,   167,
     152,     0,   170,    46,    45,     0,    47,   194,     0,   160,
       0,   165,   164,   108,   162,   163,   158,     0,   147,     0,
       0,   148,   149,   142,     0,     0,   174,   177,     0,     0,
      92,     0,    73,   203,    77,     0,   240,     0,   157,     0,
     161,   143,   146,   141,   144,     0,   131,     0,   176,   213,
     214,     0,   206,     0,     0,     0,   168,     0,     0,   196,
     145,   150,   117,   188,     0,   212,   207,   205,   204,     0,
       0,   189,   190,     0,   195,     0,     0,     0,     0,   210,
       0,   211
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,     9,    40,    97,    98,    99,
     143,    41,   144,   145,   100,   101,   102,    10,   106,    80,
     103,   160,   104,   345,   227,   253,   228,   163,   325,   326,
     164,   165,   262,   263,   255,   256,   257,   318,    81,   109,
     110,   187,   188,   189,    82,    83,    84,    85,    86,    35,
     190,   168,   169,   170,   234,   235,   236,   298,   299,   348,
     349,   371,   350,   353,   300,   171,   172,   328,   294,   346,
     375,   265,   266,   267,   268,   173,   309,   356,   258,   174,
     231,   232,   394,   175,    88,   206,   176,   177,   178,   362,
     363,    89,   389,   179,   180,    90,    12,    91,   115,   182,
      14,    66,   116
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -273
static const yytype_int16 yypact[] =
{
     242,   174,   201,    -4,   138,    45,   -14,  -273,  -273,  -273,
    -273,  -273,  -273,  -273,  -273,   146,   188,    68,  -273,   105,
    -273,   143,  -273,  -273,  -273,  -273,   -14,  -273,  -273,   193,
      19,  -273,   211,   -14,   266,   163,   -10,   147,  -273,    19,
      69,  -273,  -273,  -273,   232,   -14,  -273,   196,   228,   -14,
    -273,    74,   231,   144,  -273,  -273,   193,   118,   258,  -273,
    -273,   -14,  -273,   240,   316,   262,   157,   -14,   278,   298,
    -273,    92,  -273,  -273,   302,  -273,  -273,  -273,   294,  -273,
     310,   292,  -273,   320,   306,   318,  -273,  -273,   446,    30,
     216,  -273,   467,  -273,   328,  -273,   317,  -273,   334,    13,
      95,  -273,   334,  -273,   531,   331,  -273,  -273,    24,  -273,
     375,  -273,   157,  -273,   337,   342,  -273,   262,   193,   183,
     335,  -273,   306,  -273,  -273,  -273,   225,   346,   346,    86,
     113,   338,   134,  -273,   446,  -273,   347,   216,    23,  -273,
    -273,    19,   348,  -273,  -273,   352,   345,  -273,   334,  -273,
     362,   364,   213,   279,   213,   365,   446,   239,  -273,   260,
    -273,   -14,  -273,  -273,   299,   124,   292,   306,  -273,  -273,
    -273,  -273,   386,  -273,  -273,  -273,  -273,   357,  -273,  -273,
    -273,  -273,  -273,    22,   368,  -273,   369,  -273,   372,  -273,
    -273,   269,  -273,  -273,   363,   412,   157,   244,  -273,  -273,
    -273,   310,  -273,  -273,  -273,   446,  -273,   446,   446,  -273,
    -273,    56,  -273,  -273,   373,   378,  -273,  -273,  -273,   310,
    -273,   171,   299,   385,   154,  -273,  -273,  -273,   374,   219,
     338,   379,   384,  -273,  -273,   106,    34,   237,   380,   381,
     384,  -273,   283,  -273,   404,  -273,   389,   387,   392,   395,
    -273,  -273,  -273,   390,   374,  -273,   299,  -273,   402,   430,
     149,  -273,  -273,  -273,    14,   386,  -273,   420,  -273,  -273,
     334,   334,  -273,  -273,  -273,  -273,    33,  -273,  -273,   118,
    -273,  -273,  -273,  -273,   183,   306,  -273,  -273,   448,  -273,
     407,   330,   -14,  -273,   566,   446,   391,  -273,  -273,  -273,
    -273,  -273,  -273,  -273,  -273,   446,   330,  -273,  -273,   446,
     446,   397,  -273,  -273,  -273,  -273,  -273,  -273,  -273,   181,
     413,   408,  -273,  -273,  -273,  -273,  -273,   330,  -273,  -273,
     420,   384,  -273,  -273,  -273,   409,  -273,    17,   384,  -273,
     422,  -273,  -273,   273,  -273,  -273,  -273,   -14,  -273,   446,
     391,   300,  -273,   596,   237,   406,  -273,   305,   414,   426,
    -273,   355,  -273,   423,  -273,   384,  -273,    61,  -273,   357,
    -273,  -273,   311,   596,  -273,   -14,  -273,   487,  -273,  -273,
    -273,   419,  -273,   429,   248,   413,  -273,   427,   474,  -273,
    -273,  -273,   182,   402,   384,  -273,  -273,  -273,  -273,   357,
     413,  -273,  -273,   476,  -273,   434,   446,   263,   445,  -273,
     446,  -273
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -273,  -273,   481,  -273,  -273,  -273,   371,   215,   -92,  -273,
    -273,   440,  -273,  -273,  -273,   398,    -7,  -273,  -273,  -273,
     -93,  -273,  -273,   393,   399,  -273,   -82,  -273,   153,  -273,
    -137,  -273,  -273,  -273,   277,  -273,   245,  -273,   -47,   424,
    -273,  -273,  -273,  -273,  -273,   388,   -69,   238,  -273,   473,
     -50,  -273,  -273,  -273,  -227,  -273,  -273,   274,  -273,  -273,
    -273,  -273,  -273,   162,   281,  -273,  -273,  -221,  -273,  -273,
     221,  -273,   253,   254,  -252,  -273,  -273,  -273,   -81,  -273,
     220,  -146,  -273,  -273,  -273,   403,  -273,  -273,  -134,  -272,
    -273,   159,  -273,  -273,   125,   432,  -273,   -43,    -5,   148,
    -273,   -48,  -100
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -188
static const yytype_int16 yytable[] =
{
      27,    28,   122,    87,    64,   140,   130,   132,   240,   149,
     304,   293,   192,   183,   222,   332,    42,   112,    64,   307,
     321,    38,    42,    44,   121,    42,    42,   184,    46,   191,
     259,   327,    55,   133,    51,   167,   335,    20,   131,   295,
      59,    23,    87,   269,    62,    22,    65,   135,    92,    24,
      25,     1,     2,    52,   141,   218,   107,   166,   292,   283,
      43,     3,   117,    43,    43,   324,    95,     4,   195,   196,
      64,    96,   237,   213,   185,   242,   142,   134,   332,   297,
     121,   121,   254,   185,   210,   136,   222,   288,   259,   383,
     272,   270,   146,   148,   212,  -117,   278,   284,    42,   181,
      23,    94,   230,   220,   230,   229,   229,   229,    24,    25,
      31,   295,   159,   398,   131,    63,    56,   368,   296,    57,
    -104,    42,   259,   387,    94,    11,  -104,   376,   404,    23,
      11,   214,   136,   119,   215,   120,    43,    24,    25,  -117,
     254,   120,   285,  -108,   386,   338,    32,    33,    13,  -108,
      68,   297,   321,    13,    36,   280,   251,   281,   282,    43,
     355,    23,    95,   204,   121,   260,   205,    96,    34,    24,
      25,    37,   131,   402,   254,   319,   271,   333,   334,    21,
     208,   365,    69,    70,   204,    71,    72,   261,  -104,    73,
      74,    53,   322,    75,   311,    29,   323,   324,    76,    23,
      77,   243,   113,   120,    48,    49,   131,    78,    25,    79,
      54,  -108,    23,    50,   351,    15,  -104,   401,   243,    68,
     114,    25,   159,    16,   354,   167,   223,   208,   357,    30,
     301,   120,   120,   388,    39,   288,    23,    48,    49,  -108,
    -108,   230,    17,    18,    24,    25,    60,   166,     1,     2,
      19,    69,    70,    45,   224,    72,   230,  -187,     3,    74,
     358,    73,    75,   198,     4,   403,   199,    76,   372,    77,
      61,    23,   225,   226,  -182,    67,  -109,   230,    79,    78,
      25,   233,    58,   208,   167,    68,   243,   339,   120,   108,
     244,    56,   223,   397,   279,   134,   393,   245,   247,   105,
     246,   248,   249,    63,   167,    68,   166,    32,    33,   381,
     408,    87,   250,   409,   360,   208,   275,    69,    70,   111,
     224,    72,   120,   233,   244,    74,   166,   118,    75,   208,
     308,   245,  -105,    76,   246,    77,    68,    69,    70,   124,
     129,    72,   370,   123,    79,    74,   208,   374,    75,  -109,
     159,   208,   378,    76,   126,    77,   407,   208,   390,   120,
     411,    68,   252,   127,    79,   202,   203,   139,    69,    70,
     391,   129,    72,   238,   239,   128,    74,   138,    95,    75,
      96,    68,   193,   194,    76,   185,    77,   201,   211,   225,
     226,   207,   217,    69,    70,    79,   129,    72,   -36,   361,
     382,    74,   216,   219,    75,   221,   241,   264,   159,    76,
      68,    77,   276,    69,    70,   277,   129,    72,   273,  -100,
      79,    74,   274,   286,    75,   287,   290,   205,   292,    76,
     312,    77,    68,   320,   291,   305,   306,   316,   186,   313,
      79,   331,    69,    70,   314,   129,    72,   315,   208,   352,
      74,   337,    68,    75,   243,   359,   364,   361,    76,   366,
      77,   377,   310,   369,    69,    70,   379,   129,    72,    79,
     385,   395,    74,    68,   396,    75,   399,   400,   380,   405,
      76,   406,    77,   410,    69,    70,    26,   129,    72,   197,
     367,    79,    74,    68,   336,    75,    93,   161,   147,   289,
      76,   317,    77,   162,   125,    69,    70,    47,    71,    72,
     302,    79,   373,    74,   200,   347,    75,   303,   329,   330,
     384,    76,     0,    77,   137,    69,    70,     0,   392,    72,
       0,     0,    79,    74,     0,   209,    75,     0,     0,     0,
     150,    76,     0,    77,   151,     0,     0,     0,   152,     0,
     153,     0,    79,     4,   154,   155,     0,     0,   156,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   157,     0,     0,   150,   158,     0,     0,   340,
       0,     0,   159,   152,     0,   153,    23,     0,     4,   154,
     155,   341,   342,   156,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   150,     0,   343,     0,   340,
       0,   344,     0,   152,     0,   153,     0,   159,     4,   154,
     155,   341,   342,   156,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   343,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   159
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-273)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       5,     6,    71,    53,    51,    98,    88,    88,   154,   102,
     237,   232,   112,   105,   151,   267,     3,    65,    65,   240,
       3,    26,     3,    30,    71,     3,     3,     3,    33,   110,
     164,    17,    39,     3,    44,   104,     3,    41,    88,     5,
      45,    55,    92,   177,    49,     0,    51,    90,    53,    63,
      64,     6,     7,    63,    41,   148,    61,   104,    44,     3,
      41,    16,    67,    41,    41,    48,    44,    22,   115,   117,
     117,    49,   153,    50,    50,   156,    63,    47,   330,    45,
     127,   128,   164,    50,   134,    90,   223,   221,   222,   361,
     183,   183,    99,   100,   137,     3,   196,    41,     3,   104,
      55,     6,   152,   150,   154,   152,   153,   154,    63,    64,
      42,     5,    51,   385,   164,    41,    47,   338,    12,    50,
      34,     3,   256,    62,     6,     0,    34,   354,   400,    55,
       5,   138,   137,    41,   141,    49,    41,    63,    64,    47,
     222,    49,   211,    57,   365,   291,    41,    42,     0,    57,
       6,    45,     3,     5,    11,   205,   161,   207,   208,    41,
     306,    55,    44,    50,   211,    41,    53,    49,    63,    63,
      64,    28,   222,   394,   256,   256,   183,   270,   271,    41,
      46,   327,    38,    39,    50,    41,    42,    63,    34,    45,
      46,    44,    43,    49,   244,    49,    47,    48,    54,    55,
      56,    47,    45,    49,    41,    42,   256,    63,    64,    65,
      63,    57,    55,    50,   295,    41,    34,    35,    47,     6,
      63,    64,    51,    49,   305,   294,    13,    46,   309,    41,
     235,    49,    49,   367,    41,   369,    55,    41,    42,    57,
      57,   291,    41,    42,    63,    64,    50,   294,     6,     7,
      49,    38,    39,    42,    41,    42,   306,    44,    16,    46,
     310,    45,    49,    38,    22,   399,    41,    54,   349,    56,
      42,    55,    59,    60,    55,    44,    57,   327,    65,    63,
      64,    44,    50,    46,   353,     6,    47,   292,    49,    49,
      51,    47,    13,    45,    50,    47,   377,    58,    38,    41,
      61,    41,    42,    41,   373,     6,   353,    41,    42,   359,
      47,   361,    52,    50,   319,    46,    47,    38,    39,     3,
      41,    42,    49,    44,    51,    46,   373,    49,    49,    46,
      47,    58,    34,    54,    61,    56,     6,    38,    39,    45,
      41,    42,   347,    41,    65,    46,    46,    47,    49,    57,
      51,    46,    47,    54,    34,    56,   406,    46,    47,    49,
     410,     6,    63,    57,    65,   127,   128,    50,    38,    39,
     375,    41,    42,   153,   154,    57,    46,    49,    44,    49,
      49,     6,    45,    41,    54,    50,    56,    41,    41,    59,
      60,    53,    47,    38,    39,    65,    41,    42,    50,    44,
      45,    46,    50,    41,    49,    41,    41,    21,    51,    54,
       6,    56,    49,    38,    39,     3,    41,    42,    50,    50,
      65,    46,    50,    50,    49,    47,    41,    53,    44,    54,
      41,    56,     6,     3,    55,    55,    55,    47,    63,    52,
      65,    21,    38,    39,    52,    41,    42,    52,    46,    58,
      46,     3,     6,    49,    47,    58,    48,    44,    54,    50,
      56,    55,    58,    41,    38,    39,    52,    41,    42,    65,
      47,    52,    46,     6,    45,    49,    49,     3,    52,     3,
      54,    47,    56,    38,    38,    39,     5,    41,    42,   118,
     337,    65,    46,     6,   279,    49,    56,   104,   100,   222,
      54,   256,    56,   104,    80,    38,    39,    34,    41,    42,
     236,    65,   350,    46,   126,   294,    49,   236,   265,   265,
     361,    54,    -1,    56,    92,    38,    39,    -1,    41,    42,
      -1,    -1,    65,    46,    -1,   132,    49,    -1,    -1,    -1,
       9,    54,    -1,    56,    13,    -1,    -1,    -1,    17,    -1,
      19,    -1,    65,    22,    23,    24,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    -1,     9,    45,    -1,    -1,    13,
      -1,    -1,    51,    17,    -1,    19,    55,    -1,    22,    23,
      24,    25,    26,    27,    63,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    -1,    41,    -1,    13,
      -1,    45,    -1,    17,    -1,    19,    -1,    51,    22,    23,
      24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,    16,    22,    72,    73,    74,    75,    76,
      88,   165,   167,   170,   171,    41,    49,    41,    42,    49,
      41,    41,     0,    55,    63,    64,    73,   169,   169,    49,
      41,    42,    41,    42,    63,   120,    11,    28,   169,    41,
      77,    82,     3,    41,    87,    42,   169,   120,    41,    42,
      50,    44,    63,    44,    63,    87,    47,    50,    50,   169,
      50,    42,   169,    41,   109,   169,   172,    44,     6,    38,
      39,    41,    42,    45,    46,    49,    54,    56,    63,    65,
      90,   109,   115,   116,   117,   118,   119,   121,   155,   162,
     166,   168,   169,    82,     6,    44,    49,    78,    79,    80,
      85,    86,    87,    91,    93,    41,    89,   169,    49,   110,
     111,     3,   172,    45,    63,   169,   173,   169,    49,    41,
      49,   109,   117,    41,    45,   110,    34,    57,    57,    41,
      97,   121,   149,     3,    47,   168,   169,   166,    49,    50,
      91,    41,    63,    81,    83,    84,    87,    86,    87,    91,
       9,    13,    17,    19,    23,    24,    27,    41,    45,    51,
      92,    94,    95,    98,   101,   102,   109,   117,   122,   123,
     124,   136,   137,   146,   150,   154,   157,   158,   159,   164,
     165,   169,   170,    79,     3,    50,    63,   112,   113,   114,
     121,   149,   173,    45,    41,   109,   172,    77,    38,    41,
     116,    41,   118,   118,    50,    53,   156,    53,    46,   156,
     121,    41,   168,    50,    87,    87,    50,    47,    91,    41,
     109,    41,   101,    13,    41,    59,    60,    95,    97,   109,
     121,   151,   152,    44,   125,   126,   127,   149,   151,   151,
     152,    41,   149,    47,    51,    58,    61,    38,    41,    42,
      52,   169,    63,    96,    97,   105,   106,   107,   149,   159,
      41,    63,   103,   104,    21,   142,   143,   144,   145,   159,
      79,    87,    91,    50,    50,    47,    49,     3,   173,    50,
     121,   121,   121,     3,    41,   117,    50,    47,   159,   105,
      41,    55,    44,   138,   139,     5,    12,    45,   128,   129,
     135,   169,   128,   135,   125,    55,    55,   138,    47,   147,
      58,   121,    41,    52,    52,    52,    47,   107,   108,   149,
       3,     3,    43,    47,    48,    99,   100,    17,   138,   143,
     144,    21,   145,    91,    91,     3,    78,     3,   152,   169,
      13,    25,    26,    41,    45,    94,   140,   141,   130,   131,
     133,   149,    58,   134,   149,   152,   148,   149,   121,    58,
     169,    44,   160,   161,    48,   152,    50,    99,   138,    41,
     169,   132,   149,   134,    47,   141,   125,    55,    47,    52,
      52,   121,    45,   160,   162,    47,   138,    62,   159,   163,
      47,   169,    41,   149,   153,    52,    45,    45,   160,    49,
       3,    35,   138,   159,   160,     3,    47,   121,    47,    50,
      38,   121
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
#line 1944 "y.tab.c"
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
#line 550 "..\\main\\golang.y"


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