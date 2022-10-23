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
#define YYLAST   720

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  112
/* YYNRULES -- Number of rules.  */
#define YYNRULES  270
/* YYNRULES -- Number of states.  */
#define YYNSTATES  457

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
     181,   183,   185,   187,   189,   191,   193,   195,   197,   201,
     206,   211,   216,   222,   227,   232,   237,   243,   245,   246,
     248,   250,   254,   256,   258,   263,   265,   267,   270,   272,
     274,   277,   281,   285,   288,   291,   293,   295,   298,   301,
     304,   307,   309,   311,   314,   317,   319,   321,   324,   327,
     330,   333,   336,   338,   341,   344,   346,   348,   351,   353,
     357,   359,   361,   365,   369,   371,   373,   375,   378,   382,
     386,   391,   393,   395,   397,   400,   402,   404,   406,   409,
     411,   413,   415,   417,   421,   425,   428,   431,   437,   441,
     444,   447,   450,   452,   455,   458,   461,   464,   468,   471,
     474,   477,   481,   483,   485,   487,   489,   493,   495,   499,
     502,   505,   507,   511,   517,   520,   522,   525,   529,   531,
     533,   535,   537,   539,   542,   547,   549,   552,   555,   557,
     560,   565,   567,   571,   573,   575,   579,   583,   585,   587,
     588,   590,   592,   594,   595,   597,   600,   608,   612,   614,
     616,   620,   624,   628,   631,   633,   636,   638,   642,   646,
     649,   653,   655,   659,   667,   677,   684,   690,   696,   702,
     704,   707,   710,   712,   715,   720,   725,   730,   734,   740,
     747,   755,   760,   762,   765,   768,   771,   774,   776,   779,
     784,   789,   791,   794,   798,   800,   802,   804,   806,   808,
     810,   817,   825,   834,   836,   839,   844,   851,   856,   860,
     862
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      72,     0,    -1,    72,    73,   178,    -1,    73,   178,    -1,
      72,   178,    -1,    74,    -1,    75,    -1,    76,    -1,   167,
      -1,   179,    -1,    88,    -1,    16,    41,    -1,     7,    42,
      -1,     7,    49,   122,    50,    -1,     7,    49,    63,   122,
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
      94,   178,    -1,    93,    95,    -1,    93,   178,    -1,   156,
      -1,   126,    -1,   124,    -1,   125,    -1,   138,    -1,   160,
      -1,   111,    -1,   152,    -1,   148,    -1,   167,    -1,   165,
      -1,   100,    -1,   119,    -1,   179,    -1,   103,   102,   107,
      -1,   103,   102,    97,   178,    -1,    13,   103,   101,   107,
      -1,    13,   103,    87,   178,    -1,    13,   103,   101,    97,
     178,    -1,    13,    41,   166,   178,    -1,    98,   102,    97,
      96,    -1,    13,    98,    87,   178,    -1,    13,    98,   101,
      97,   178,    -1,   178,    -1,    -1,   151,    -1,    99,    -1,
     160,     3,   162,    -1,   164,    -1,   165,    -1,    62,    49,
     166,    50,    -1,   177,    -1,    41,    -1,    41,   160,    -1,
     119,    -1,   121,    -1,    41,   121,    -1,   123,    53,   123,
      -1,    99,    53,   123,    -1,     9,   111,    -1,    87,    48,
      -1,    48,    -1,    43,    -1,   104,   106,    -1,    98,    47,
      -1,   104,   105,    -1,    98,    47,    -1,    63,    -1,    98,
      -1,   109,   110,    -1,    97,    47,    -1,    63,    -1,   108,
      -1,   109,   108,    -1,    97,   178,    -1,    41,   112,    -1,
     113,   114,    -1,    49,    50,    -1,    49,    -1,   113,   116,
      -1,   115,    50,    -1,    98,    -1,    63,    -1,    98,    47,
      -1,    63,    -1,   118,    34,   118,    -1,    41,    -1,    38,
      -1,   120,    57,   120,    -1,   119,    57,   120,    -1,    41,
      -1,   111,    -1,    65,    -1,    42,   178,    -1,    41,    42,
     178,    -1,   122,    42,   178,    -1,   122,    41,    42,   178,
      -1,    38,    -1,    39,    -1,    41,    -1,    46,    41,    -1,
      42,    -1,    54,    -1,    56,    -1,    90,   112,    -1,   111,
      -1,   117,    -1,   121,    -1,   119,    -1,   157,   151,   158,
      -1,   157,    99,   158,    -1,    24,    41,    -1,    41,    58,
      -1,    19,   153,    55,   151,   127,    -1,    19,   151,   127,
      -1,    19,   127,    -1,   128,   137,    -1,   129,   137,    -1,
      44,    -1,   128,   178,    -1,   128,   130,    -1,   128,   131,
      -1,   129,   130,    -1,     5,   135,   136,    -1,    12,   136,
      -1,   133,   134,    -1,   151,    47,    -1,   133,   151,    47,
      -1,   151,    -1,   132,    -1,   151,    -1,    58,    -1,   136,
     143,   178,    -1,    45,    -1,   139,   144,   146,    -1,   139,
     144,    -1,   139,   146,    -1,   139,    -1,    17,   154,   140,
      -1,    17,   153,    55,   154,   140,    -1,   141,   142,    -1,
      44,    -1,    44,   178,    -1,   141,   143,   178,    -1,    45,
      -1,    94,    -1,    26,    -1,    25,    -1,   145,    -1,   144,
     145,    -1,    21,    17,   154,   140,    -1,   147,    -1,   146,
     147,    -1,    21,   140,    -1,    27,    -1,    27,   151,    -1,
      27,   151,   149,   150,    -1,    47,    -1,   149,   151,    47,
      -1,   151,    -1,   123,    -1,   151,    46,   123,    -1,    41,
      61,    41,    -1,    95,    -1,   111,    -1,    -1,    99,    -1,
      59,    -1,    60,    -1,    -1,   151,    -1,    41,    35,    -1,
      23,   153,    55,   154,    55,   155,   140,    -1,    23,   154,
     140,    -1,    49,    -1,    50,    -1,    51,    38,    52,    -1,
      51,    41,    52,    -1,    51,    42,    52,    -1,    51,    52,
      -1,   159,    -1,   159,   160,    -1,   162,    -1,   162,    47,
     161,    -1,    44,   163,    45,    -1,    44,    45,    -1,    44,
     161,    45,    -1,   123,    -1,   163,    47,   123,    -1,    62,
      49,   160,     3,    47,   123,    50,    -1,    62,    49,   160,
       3,    47,   123,    47,    38,   123,    -1,    41,    51,   123,
      58,   123,    52,    -1,    41,    51,    58,   123,    52,    -1,
      41,    51,   123,    58,    52,    -1,    15,    51,     3,    52,
       3,    -1,   169,    -1,   163,     3,    -1,    41,    41,    -1,
      41,    -1,    41,   119,    -1,   168,   178,    41,   119,    -1,
     168,   178,    41,     3,    -1,   168,   178,    41,    41,    -1,
     168,   178,    41,    -1,    22,    41,    28,    44,   170,    -1,
      22,    41,    28,    44,   168,   170,    -1,    22,    41,    28,
      44,   178,   168,   170,    -1,    22,    41,    28,    63,    -1,
      45,    -1,    63,    45,    -1,    41,   172,    -1,   173,   175,
      -1,    44,    45,    -1,    44,    -1,   173,   174,    -1,   123,
      58,   123,    47,    -1,   123,    58,   171,    47,    -1,    63,
      -1,   176,    45,    -1,   123,    58,   123,    -1,    63,    -1,
     171,    -1,    55,    -1,    63,    -1,    64,    -1,   180,    -1,
      22,    41,    11,    44,   181,   182,    -1,    22,    41,    11,
      44,   178,   181,   182,    -1,    22,    41,    11,    63,    44,
     178,   181,   182,    -1,   111,    -1,   111,     3,    -1,    41,
      49,     3,    50,    -1,   181,   178,    41,    49,     3,    50,
      -1,   181,   178,   111,     3,    -1,   181,   178,   111,    -1,
      45,    -1,    63,    45,    -1
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
     127,   128,   130,   131,   132,   133,   134,   135,   138,   139,
     140,   141,   142,   143,   145,   146,   147,   150,   151,   155,
     156,   157,   158,   159,   160,   161,   165,   166,   167,   168,
     169,   174,   175,   179,   182,   183,   185,   188,   192,   193,
     197,   198,   201,   206,   210,   211,   215,   216,   220,   223,
     226,   227,   230,   231,   234,   239,   240,   244,   245,   248,
     251,   252,   255,   256,   260,   261,   264,   267,   268,   269,
     270,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   289,   292,   295,   296,   297,
     300,   301,   305,   306,   307,   311,   312,   315,   318,   322,
     325,   326,   329,   333,   334,   337,   338,   343,   347,   348,
     349,   350,   353,   354,   357,   361,   362,   363,   367,   372,
     374,   375,   379,   380,   384,   388,   389,   392,   395,   396,
     397,   402,   403,   407,   409,   410,   413,   416,   417,   418,
     421,   422,   423,   424,   427,   428,   431,   432,   435,   438,
     441,   442,   443,   444,   447,   448,   451,   452,   454,   455,
     456,   459,   460,   463,   464,   467,   468,   469,   472,   475,
     478,   479,   480,   481,   482,   483,   484,   485,   488,   489,
     490,   491,   494,   495,   499,   502,   503,   506,   507,   511,
     512,   513,   516,   521,   522,   525,   528,   529,   530,   533,
     536,   537,   538,   541,   542,   543,   544,   545,   546,   548,
     549
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
  "BODY_END", "BODY_START", "BODY_FILLING", "VAR", "SPEC",
  "FULFILL_FOR_VAL", "FULFILL_FOR_IDS", "BOOLEAN", "DEFER", "ASSIGNMENT",
  "SHORT_ASSIGN", "MANY_IDS", "MANY_IDS_START", "MANY_IDS_FULFILL",
  "MANY_IDS_END", "MANY_VALUES", "MANY_VALUES_START_FULFILL",
  "MANY_VALUES_START", "MANY_VALUES_END", "FUNC_CALL", "PARAM",
  "PARAM_START", "PARAM_END", "PARAM_END_FULFILL", "PARAM_FULFILL",
  "SHIFT", "SHIFT_AC", "METHOD", "METHOD_FULFILL", "POINTER",
  "PARAM_IMPORT", "VALUE", "GOTO", "LABEL", "SWITCH", "SWITCH_BODY",
  "SWITCH_BODY_START", "SWITCH_BODY_START_WITH_DEFAULT", "CASE", "DEFAULT",
  "MULTIPLE_ARG", "FIRST_PART", "SECOND_PART", "CASE_STATEMENT",
  "CASE_BODY", "SWITCH_BODY_END", "IF", "IF_FIRST", "BODY_FOR_LOOP",
  "BODY_FOR_LOOP_START", "BODY_FOR_LOOP_END", "LOOP_FILLING",
  "MULTY_ELSEIF_SECOND", "ELSEIF_SECOND", "MULTY_ELSE_THIRD", "ELSE_THIRD",
  "RETURN", "MANY_RETURN_START", "MANY_RETURN_START_END", "EXPR",
  "SHORT_EXPR", "INIT_STATE", "CONDITION", "POST_STATE", "FOR",
  "EXPR_START", "EXPR_END", "ARRAY_INDEX", "MULTI_AR", "PLENTY",
  "PLENTY_OLD", "ENUM", "MAKE", "SLICE", "MAPS", "STRUCT", "STRUCT_BODY",
  "STRUCT_START", "STRUCT_END", "FIELD", "FIELD_BODY", "FIELD_START",
  "FIELD_FULFILL", "FIELD_END", "FIELD_END_FULFILL", "ST_EMBEDDED",
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
      94,    94,    94,    94,    94,    94,    94,    94,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    96,    96,    97,
      97,    97,    97,    97,    97,    97,    98,    98,    98,    98,
      98,    99,    99,   100,   101,   101,   102,   103,   104,   104,
     105,   105,   106,   107,   108,   108,   109,   109,   110,   111,
     112,   112,   113,   113,   114,   115,   115,   116,   116,   117,
     118,   118,   119,   119,   120,   120,   121,   122,   122,   122,
     122,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   124,   125,   126,   126,   126,
     127,   127,   128,   128,   128,   129,   129,   130,   131,   132,
     133,   133,   134,   135,   135,   136,   136,   137,   138,   138,
     138,   138,   139,   139,   140,   141,   141,   141,   142,   143,
     143,   143,   144,   144,   145,   146,   146,   147,   148,   148,
     148,   149,   149,   150,   151,   151,   152,   153,   153,   153,
     154,   154,   154,   154,   155,   155,   156,   156,   157,   158,
     159,   159,   159,   159,   160,   160,   161,   161,   162,   162,
     162,   163,   163,   164,   164,   165,   165,   165,   166,   167,
     168,   168,   168,   168,   168,   168,   168,   168,   169,   169,
     169,   169,   170,   170,   171,   172,   172,   173,   173,   174,
     174,   174,   175,   176,   176,   177,   178,   178,   178,   179,
     180,   180,   180,   181,   181,   181,   181,   181,   181,   182,
     182
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
       1,     1,     1,     1,     1,     1,     1,     1,     3,     4,
       4,     4,     5,     4,     4,     4,     5,     1,     0,     1,
       1,     3,     1,     1,     4,     1,     1,     2,     1,     1,
       2,     3,     3,     2,     2,     1,     1,     2,     2,     2,
       2,     1,     1,     2,     2,     1,     1,     2,     2,     2,
       2,     2,     1,     2,     2,     1,     1,     2,     1,     3,
       1,     1,     3,     3,     1,     1,     1,     2,     3,     3,
       4,     1,     1,     1,     2,     1,     1,     1,     2,     1,
       1,     1,     1,     3,     3,     2,     2,     5,     3,     2,
       2,     2,     1,     2,     2,     2,     2,     3,     2,     2,
       2,     3,     1,     1,     1,     1,     3,     1,     3,     2,
       2,     1,     3,     5,     2,     1,     2,     3,     1,     1,
       1,     1,     1,     2,     4,     1,     2,     2,     1,     2,
       4,     1,     3,     1,     1,     3,     3,     1,     1,     0,
       1,     1,     1,     0,     1,     2,     7,     3,     1,     1,
       3,     3,     3,     2,     1,     2,     1,     3,     3,     2,
       3,     1,     3,     7,     9,     6,     5,     5,     5,     1,
       2,     2,     1,     2,     4,     4,     4,     3,     5,     6,
       7,     4,     1,     2,     2,     2,     2,     1,     2,     4,
       4,     1,     2,     3,     1,     1,     1,     1,     1,     1,
       6,     7,     8,     1,     2,     4,     6,     4,     3,     1,
       2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     5,     6,     7,
      10,     8,   229,     9,   259,     0,     0,     0,    12,     0,
      11,     0,     1,   256,   257,   258,     0,     4,     3,    30,
       0,    15,     0,     0,     0,     0,     0,     0,     2,    29,
       0,    17,    41,    42,     0,     0,   127,     0,     0,     0,
      13,     0,     0,     0,   241,    28,    30,     0,     0,   128,
      14,     0,   129,     0,   263,     0,     0,     0,     0,   131,
     132,   232,   135,   242,     0,   208,   136,   137,   257,   126,
       0,   139,   140,     0,   142,     0,   141,   221,     0,     0,
       0,   238,     0,    18,     0,    50,    25,    16,     0,     0,
       0,    37,     0,    19,     0,     0,    43,   130,   112,   109,
       0,   264,     0,   269,   257,     0,   260,     0,    30,   231,
     112,   125,   233,   134,   243,   138,     0,     0,     0,   133,
       0,   194,     0,   230,     0,   239,     0,     0,     0,    24,
      22,    42,    33,    23,    26,     0,    35,    38,     0,    20,
       0,     0,   199,   199,   199,     0,   188,    86,    49,     0,
      48,     0,    52,     0,    65,     0,     0,    60,    66,    89,
      56,    57,    55,    58,   171,    62,    61,    54,   214,    59,
      64,    63,    53,    67,     0,     0,   111,    86,   118,   115,
     110,     0,   113,    88,   261,   270,     0,   268,     0,     0,
     121,   120,   119,   124,   123,   122,   209,     0,   144,     0,
       0,   143,   222,   237,   240,    40,     0,    34,    27,    32,
      21,     0,    93,    86,     0,     0,   133,   201,   202,   197,
     200,   139,   142,   141,     0,     0,     0,   152,   194,   149,
       0,     0,     0,     0,     0,     0,   145,   189,     0,   146,
       0,    90,    87,     0,     0,     0,   213,    51,    96,    98,
       0,     0,   101,   102,    99,    97,     0,   169,   182,   170,
     185,   215,     0,     0,    44,   265,   117,   114,   112,   267,
     262,     0,    92,    91,   195,   235,   236,   234,    39,    31,
       0,     0,    95,     0,     0,     0,     0,   203,   175,   172,
       0,     0,     0,   167,   154,   155,   150,   153,   156,   151,
     148,     0,   203,   207,   191,     0,   121,   120,   135,     0,
       0,   196,   210,   211,   212,   133,     0,    78,    80,    79,
       0,    82,    83,   255,    85,   105,     0,    68,   106,     0,
     100,   203,   187,   183,   168,     0,   186,    46,    45,     0,
      47,     0,    73,    94,    75,     0,    71,     0,    70,     0,
     176,   181,   180,   124,   178,   179,    66,   174,     0,   163,
       0,     0,   164,   165,   158,     0,     0,   190,   193,     0,
       0,   247,     0,   244,     0,     0,    74,    77,     0,   104,
      69,     0,   107,   103,     0,   266,     0,    76,    72,   173,
     177,   159,   162,   157,   160,     0,   147,     0,   192,   226,
     227,     0,   246,   251,     0,   248,   245,     0,     0,     0,
       0,    81,   108,   184,     0,   161,   166,   133,   204,     0,
     225,     0,   252,     0,    84,   219,     0,   216,     0,   228,
     205,   206,   133,   253,     0,     0,   220,     0,   218,   249,
     250,     0,   217,     0,   223,     0,   224
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,     9,    40,    97,    98,    99,
     143,    41,   144,   145,   100,   101,   102,    10,   106,    80,
     103,   160,   104,   365,   229,   386,   327,   163,   230,   164,
     294,   260,   165,   166,   264,   265,   337,   338,   339,   393,
      81,   109,   110,   190,   191,   192,    82,    83,    84,    85,
      86,    35,   238,   170,   171,   172,   239,   240,   241,   304,
     305,   369,   370,   401,   371,   374,   306,   173,   174,   342,
     300,   367,   405,   267,   268,   269,   270,   175,   315,   377,
     329,   176,   235,   236,   429,   177,    88,   208,   178,   330,
     436,   437,    89,   331,   332,   291,   181,    90,    12,    91,
     333,   383,   384,   415,   416,   417,   334,   115,   183,    14,
      66,   116
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -242
static const yytype_int16 yypact[] =
{
     455,    13,   274,    80,    91,   139,   217,  -242,  -242,  -242,
    -242,  -242,  -242,  -242,  -242,   104,   127,   133,  -242,   138,
    -242,    17,  -242,  -242,  -242,  -242,   217,  -242,  -242,   146,
      20,  -242,   151,   217,   303,   181,    49,    99,  -242,    20,
     229,  -242,  -242,  -242,   150,   217,  -242,   253,   168,   217,
    -242,   110,   184,   331,  -242,  -242,   146,   214,   210,  -242,
    -242,   217,  -242,   211,   267,   242,    50,   217,   255,   283,
    -242,    93,  -242,  -242,   295,  -242,  -242,  -242,   319,  -242,
     322,   327,  -242,   381,   373,   383,  -242,  -242,   549,    16,
     297,  -242,   570,  -242,   349,  -242,   386,  -242,   400,     5,
     117,  -242,   400,  -242,   655,   401,  -242,  -242,    27,  -242,
      -7,  -242,    50,  -242,   409,   416,  -242,   242,   146,   149,
     422,  -242,   373,  -242,  -242,  -242,   350,   437,   437,   196,
     285,   429,   163,  -242,   549,  -242,   445,   297,    35,  -242,
    -242,    20,   460,  -242,  -242,   465,   417,  -242,   400,  -242,
     451,   -28,   208,   368,   208,   454,   549,   473,  -242,   341,
    -242,   217,  -242,   354,  -242,   484,   107,   327,   134,  -242,
    -242,  -242,  -242,  -242,   516,  -242,  -242,  -242,   489,  -242,
    -242,  -242,  -242,  -242,   100,   492,  -242,   372,   494,   498,
    -242,   501,  -242,   373,  -242,  -242,   499,   550,    50,   391,
    -242,  -242,  -242,   322,  -242,  -242,  -242,   549,  -242,   549,
     549,  -242,  -242,    37,  -242,  -242,   506,   511,  -242,  -242,
    -242,   322,  -242,   175,    89,    41,   263,  -242,  -242,  -242,
     507,   301,   134,   361,   429,   504,   517,  -242,  -242,  -242,
     121,    45,   423,   510,   514,   517,  -242,   379,   393,  -242,
     522,  -242,  -242,   520,   525,   527,  -242,  -242,  -242,  -242,
     414,   236,  -242,   533,  -242,  -242,     8,   516,  -242,   553,
    -242,  -242,   400,   400,  -242,  -242,  -242,  -242,    29,  -242,
    -242,   214,  -242,  -242,  -242,  -242,   149,   373,  -242,  -242,
     530,   217,  -242,   411,   414,   411,   236,   442,   217,  -242,
     664,   549,   524,  -242,  -242,  -242,  -242,  -242,  -242,  -242,
    -242,   549,   442,  -242,  -242,   549,   -10,   305,   527,   549,
     526,  -242,  -242,  -242,  -242,   275,   537,   217,   507,   543,
     594,  -242,  -242,  -242,  -242,  -242,   364,  -242,  -242,   236,
    -242,   442,  -242,  -242,   553,   517,  -242,  -242,  -242,   551,
    -242,   596,  -242,  -242,  -242,   217,  -242,   364,  -242,   517,
    -242,  -242,  -242,   436,  -242,  -242,   373,  -242,   217,  -242,
     549,   524,   443,  -242,   324,   423,   538,  -242,   453,   548,
     487,   557,   508,  -242,   529,    96,  -242,  -242,   560,  -242,
    -242,   364,  -242,  -242,   517,  -242,   554,  -242,  -242,  -242,
    -242,  -242,   457,   324,  -242,   217,  -242,   590,  -242,  -242,
    -242,   555,  -242,   565,   562,  -242,  -242,   568,   612,   571,
     467,  -242,  -242,  -242,   615,  -242,  -242,   170,   543,   517,
    -242,   611,  -242,   575,  -242,  -242,   578,   580,   371,  -242,
    -242,  -242,   356,   583,   586,   549,  -242,   560,  -242,  -242,
    -242,   396,  -242,   587,  -242,   549,  -242
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -242,  -242,   629,  -242,  -242,  -242,   519,   357,   -93,  -242,
    -242,   584,  -242,  -242,  -242,   541,   -13,  -242,  -242,  -242,
     -84,  -242,  -242,   539,   544,  -242,  -241,   -94,   -78,  -242,
     420,   477,   496,  -242,  -242,  -242,   355,   315,  -242,  -242,
     -44,   576,  -242,  -242,  -242,  -242,  -242,   532,   -35,   390,
      82,   625,   -53,  -242,  -242,  -242,  -237,  -242,  -242,   421,
    -242,  -242,  -242,  -242,  -242,   290,   425,  -242,  -242,  -230,
    -242,  -242,   363,  -242,   402,   403,  -240,  -242,  -242,  -242,
     -86,  -242,   366,  -145,  -242,  -242,  -242,   552,  -242,   -63,
     224,   287,   260,  -242,  -103,   300,   302,   600,  -242,   -57,
     262,  -242,  -242,  -242,  -242,  -242,  -242,    -2,   313,  -242,
     -43,  -101
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -255
static const yytype_int16 yytable[] =
{
      87,   180,   132,    27,    28,   310,   299,    64,    42,   245,
     130,   194,   184,   223,   140,   313,   189,    44,   149,   133,
     336,    64,   112,    42,    38,   341,    55,   121,    36,   346,
     185,    46,   349,   135,   187,   131,   122,    79,    42,    87,
     285,   179,   322,    59,    42,    37,   141,    62,  -131,    65,
     301,    92,   298,   355,    15,   357,   188,   224,    79,   107,
     167,    43,    16,   134,   220,   117,   121,   242,   142,   168,
     247,   197,   263,    64,   198,   193,    43,   186,   286,   186,
     214,   212,    43,   121,   121,   215,   146,   148,   136,   292,
     303,   272,    42,    51,   252,   113,  -133,   280,   391,   234,
     274,   234,   182,    42,   346,    23,   222,   121,   231,   231,
     231,   290,    52,   114,    25,   271,   193,   232,   232,   232,
      42,    20,   121,    94,   252,   216,   301,  -120,   217,   399,
      43,   193,    21,   302,   119,   136,   259,   292,   406,    22,
    -133,    43,   120,    53,    95,     1,     2,   159,   187,    96,
    -124,    63,   359,    29,   282,     3,   283,   284,    43,   257,
     252,     4,    54,   252,   423,    23,   303,   376,    30,   121,
     262,   273,    79,    24,    25,    31,    23,   -88,   287,    32,
      33,   -88,   328,   328,    24,    25,   169,    39,   347,   348,
     290,   127,   169,    45,    23,   320,   394,   180,   120,   441,
      58,    34,    24,    25,  -120,   440,  -124,   131,   131,   210,
      61,   293,   295,   206,    68,   372,   328,    42,   328,   120,
      94,   151,    48,    49,   120,   375,   159,  -124,    67,   378,
    -120,    50,  -124,   169,   233,   233,   233,   179,   307,   251,
      79,   131,    68,   131,   234,   120,    69,    70,   169,   226,
      72,   105,  -203,  -124,    74,    43,   167,    75,    95,   234,
     108,   328,    76,    96,    77,   366,   379,   227,   228,   251,
     111,   180,    23,    79,    69,    70,    56,   325,    72,    57,
      24,    25,    74,    63,   402,    75,   131,   159,   234,   352,
      76,   354,    77,   356,    48,    49,   360,  -120,   326,   335,
     180,    79,    11,    60,   118,   251,   -86,    11,   251,  -120,
     -86,   179,   120,    13,   159,    17,    18,  -121,    13,   381,
    -124,   428,   418,    19,   120,   387,   382,   411,    79,   320,
     167,   414,  -124,   150,   390,   206,   123,    68,   207,   366,
     179,   152,    73,   153,    32,    33,     4,   154,   155,   361,
     362,   156,    23,   397,   120,   398,  -198,   323,  -125,   167,
      78,    25,  -124,  -133,   124,   363,   400,    87,   366,    69,
      70,   120,    71,    72,    68,   159,    73,    74,   443,   253,
      75,   151,   254,   255,  -125,    76,    23,    77,   200,   422,
    -120,   201,   451,   256,    78,    25,    79,   258,   138,    68,
     381,   259,   456,   426,   -89,   120,    69,    70,   -89,   226,
      72,   389,   237,  -124,    74,   126,   448,    75,   134,    23,
      68,   120,    76,   159,    77,   210,   314,    24,    25,  -124,
     127,   316,    70,    79,   317,   318,   139,    79,    56,    74,
     128,   281,    75,   453,    95,   256,   454,    76,    68,    77,
      96,   319,    69,    70,   195,   325,    72,   196,    79,   353,
      74,     1,     2,    75,   219,   159,    23,   237,    76,   210,
      77,     3,   186,    68,    24,    25,   326,     4,   203,    79,
      69,    70,   209,   129,    72,   120,   213,   382,    74,   210,
     404,    75,   221,    68,   249,   246,    76,   250,    77,   210,
     408,   227,   228,   210,   425,    69,    70,    79,   129,    72,
     -36,   420,   435,    74,    68,   218,    75,   204,   205,   243,
     244,    76,   120,    77,   248,    69,    70,   258,   129,    72,
    -124,   249,    79,    74,   250,    68,    75,   266,    79,   410,
     159,    76,   275,    77,  -116,   276,    69,    70,   278,   129,
      72,   277,    79,   279,    74,    68,   288,    75,   289,   297,
     207,   298,    76,   321,    77,   311,   319,    69,    70,   312,
     129,    72,   322,    79,   345,    74,    68,   323,    75,   324,
     340,   351,   373,    76,   380,    77,   385,    69,    70,   210,
     129,    72,   413,   407,    79,    74,    68,   388,    75,   396,
     409,   395,   412,    76,   420,    77,   424,   430,    69,    70,
    -254,    71,    72,   432,    79,   433,    74,    68,   439,    75,
     431,   434,   445,   446,    76,   455,    77,   447,    69,    70,
     449,   427,    72,   450,    26,    79,    74,   199,   350,    75,
      93,   147,   261,   161,    76,   296,    77,   225,   162,    69,
      70,   358,   442,    72,   392,    79,   125,    74,   202,    47,
      75,   403,   308,   368,   150,    76,   309,    77,   151,   343,
     344,   452,   152,   150,   153,   421,    79,     4,   154,   155,
     438,   152,   156,   153,   211,   419,     4,   154,   155,   361,
     362,   156,   137,   444,     0,     0,   157,     0,     0,     0,
     158,     0,     0,     0,     0,   363,   159,     0,     0,   364,
      23,     0,     0,     0,     0,   159,     0,     0,    24,    25,
      79
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-242)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      53,   104,    88,     5,     6,   242,   236,    51,     3,   154,
      88,   112,   105,    41,    98,   245,   110,    30,   102,     3,
     261,    65,    65,     3,    26,    17,    39,    71,    11,   269,
       3,    33,     3,    90,    41,    88,    71,    65,     3,    92,
       3,   104,    52,    45,     3,    28,    41,    49,    58,    51,
       5,    53,    44,   294,    41,   296,    63,   151,    65,    61,
     104,    41,    49,    47,   148,    67,   110,   153,    63,   104,
     156,   115,   166,   117,   117,   110,    41,    50,    41,    50,
     137,   134,    41,   127,   128,    50,    99,   100,    90,    48,
      45,   184,     3,    44,   157,    45,     3,   198,   339,   152,
     184,   154,   104,     3,   344,    55,   150,   151,   152,   153,
     154,    15,    63,    63,    64,   178,   151,   152,   153,   154,
       3,    41,   166,     6,   187,   138,     5,    34,   141,   359,
      41,   166,    41,    12,    41,   137,    47,    48,   375,     0,
      47,    41,    49,    44,    44,     6,     7,    51,    41,    49,
      57,    41,   297,    49,   207,    16,   209,   210,    41,   161,
     223,    22,    63,   226,   394,    55,    45,   312,    41,   213,
      63,   184,    65,    63,    64,    42,    55,    43,   213,    41,
      42,    47,   260,   261,    63,    64,   104,    41,   272,   273,
      15,    57,   110,    42,    55,   248,   341,   300,    49,   429,
      50,    63,    63,    64,    34,    35,    57,   260,   261,    46,
      42,   224,   225,    50,     6,   301,   294,     3,   296,    49,
       6,    13,    41,    42,    49,   311,    51,    57,    44,   315,
      34,    50,    57,   151,   152,   153,   154,   300,   240,   157,
      65,   294,     6,   296,   297,    49,    38,    39,   166,    41,
      42,    41,    44,    57,    46,    41,   300,    49,    44,   312,
      49,   339,    54,    49,    56,   300,   319,    59,    60,   187,
       3,   374,    55,    65,    38,    39,    47,    41,    42,    50,
      63,    64,    46,    41,   370,    49,   339,    51,   341,   291,
      54,   293,    56,   295,    41,    42,   298,    34,    62,    63,
     403,    65,     0,    50,    49,   223,    43,     5,   226,    34,
      47,   374,    49,     0,    51,    41,    42,    34,     5,    44,
      57,   407,   385,    49,    49,   327,    51,   380,    65,   382,
     374,   384,    57,     9,   336,    50,    41,     6,    53,   374,
     403,    17,    45,    19,    41,    42,    22,    23,    24,    25,
      26,    27,    55,   355,    49,   357,    55,    52,    57,   403,
      63,    64,    57,    58,    45,    41,   368,   420,   403,    38,
      39,    49,    41,    42,     6,    51,    45,    46,   431,    38,
      49,    13,    41,    42,    57,    54,    55,    56,    38,   391,
      34,    41,   445,    52,    63,    64,    65,    43,    49,     6,
      44,    47,   455,   405,    43,    49,    38,    39,    47,    41,
      42,    47,    44,    57,    46,    34,    45,    49,    47,    55,
       6,    49,    54,    51,    56,    46,    47,    63,    64,    57,
      57,    38,    39,    65,    41,    42,    50,    65,    47,    46,
      57,    50,    49,    47,    44,    52,    50,    54,     6,    56,
      49,    58,    38,    39,    45,    41,    42,    41,    65,    48,
      46,     6,     7,    49,    47,    51,    55,    44,    54,    46,
      56,    16,    50,     6,    63,    64,    62,    22,    41,    65,
      38,    39,    53,    41,    42,    49,    41,    51,    46,    46,
      47,    49,    41,     6,    58,    41,    54,    61,    56,    46,
      47,    59,    60,    46,    47,    38,    39,    65,    41,    42,
      50,    44,    45,    46,     6,    50,    49,   127,   128,   153,
     154,    54,    49,    56,    51,    38,    39,    43,    41,    42,
      57,    58,    65,    46,    61,     6,    49,    21,    65,    52,
      51,    54,    50,    56,    50,    47,    38,    39,    49,    41,
      42,    50,    65,     3,    46,     6,    50,    49,    47,    55,
      53,    44,    54,    41,    56,    55,    58,    38,    39,    55,
      41,    42,    52,    65,    21,    46,     6,    52,    49,    52,
      47,    51,    58,    54,    58,    56,    49,    38,    39,    46,
      41,    42,    63,    55,    65,    46,     6,     3,    49,     3,
      52,    50,    45,    54,    44,    56,    52,    52,    38,    39,
      45,    41,    42,    45,    65,     3,    46,     6,     3,    49,
      58,    50,    47,    45,    54,    38,    56,    47,    38,    39,
      47,    41,    42,    47,     5,    65,    46,   118,   281,    49,
      56,   100,   165,   104,    54,   225,    56,   151,   104,    38,
      39,   296,    41,    42,   339,    65,    80,    46,   126,    34,
      49,   371,   241,   300,     9,    54,   241,    56,    13,   267,
     267,   447,    17,     9,    19,   388,    65,    22,    23,    24,
     420,    17,    27,    19,   132,   385,    22,    23,    24,    25,
      26,    27,    92,   431,    -1,    -1,    41,    -1,    -1,    -1,
      45,    -1,    -1,    -1,    -1,    41,    51,    -1,    -1,    45,
      55,    -1,    -1,    -1,    -1,    51,    -1,    -1,    63,    64,
      65
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,    16,    22,    72,    73,    74,    75,    76,
      88,   167,   169,   179,   180,    41,    49,    41,    42,    49,
      41,    41,     0,    55,    63,    64,    73,   178,   178,    49,
      41,    42,    41,    42,    63,   122,    11,    28,   178,    41,
      77,    82,     3,    41,    87,    42,   178,   122,    41,    42,
      50,    44,    63,    44,    63,    87,    47,    50,    50,   178,
      50,    42,   178,    41,   111,   178,   181,    44,     6,    38,
      39,    41,    42,    45,    46,    49,    54,    56,    63,    65,
      90,   111,   117,   118,   119,   120,   121,   123,   157,   163,
     168,   170,   178,    82,     6,    44,    49,    78,    79,    80,
      85,    86,    87,    91,    93,    41,    89,   178,    49,   112,
     113,     3,   181,    45,    63,   178,   182,   178,    49,    41,
      49,   111,   119,    41,    45,   112,    34,    57,    57,    41,
      99,   123,   151,     3,    47,   170,   178,   168,    49,    50,
      91,    41,    63,    81,    83,    84,    87,    86,    87,    91,
       9,    13,    17,    19,    23,    24,    27,    41,    45,    51,
      92,    94,    95,    98,   100,   103,   104,   111,   119,   121,
     124,   125,   126,   138,   139,   148,   152,   156,   159,   160,
     165,   167,   178,   179,    79,     3,    50,    41,    63,    98,
     114,   115,   116,   119,   182,    45,    41,   111,   181,    77,
      38,    41,   118,    41,   120,   120,    50,    53,   158,    53,
      46,   158,   123,    41,   170,    50,    87,    87,    50,    47,
      91,    41,   111,    41,    98,   103,    41,    59,    60,    95,
      99,   111,   119,   121,   123,   153,   154,    44,   123,   127,
     128,   129,   151,   153,   153,   154,    41,   151,    51,    58,
      61,   121,   160,    38,    41,    42,    52,   178,    43,    47,
     102,   102,    63,    98,   105,   106,    21,   144,   145,   146,
     147,   160,    79,    87,    91,    50,    47,    50,    49,     3,
     182,    50,   123,   123,   123,     3,    41,   119,    50,    47,
      15,   166,    48,    87,   101,    87,   101,    55,    44,   140,
     141,     5,    12,    45,   130,   131,   137,   178,   130,   137,
     127,    55,    55,   140,    47,   149,    38,    41,    42,    58,
     123,    41,    52,    52,    52,    41,    62,    97,    99,   151,
     160,   164,   165,   171,   177,    63,    97,   107,   108,   109,
      47,    17,   140,   145,   146,    21,   147,    91,    91,     3,
      78,    51,   178,    48,   178,    97,   178,    97,   107,   154,
     178,    25,    26,    41,    45,    94,   119,   142,   143,   132,
     133,   135,   151,    58,   136,   151,   154,   150,   151,   123,
      58,    44,    51,   172,   173,    49,    96,   178,     3,    47,
     178,    97,   108,   110,   154,    50,     3,   178,   178,   140,
     178,   134,   151,   136,    47,   143,   127,    55,    47,    52,
      52,   123,    45,    63,   123,   174,   175,   176,   160,   166,
      44,   162,   178,   140,    52,    47,   178,    41,   151,   155,
      52,    58,    45,     3,    50,    45,   161,   162,   163,     3,
      35,   140,    41,   123,   171,    47,    45,    47,    45,    47,
      47,   123,   161,    47,    50,    38,   123
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
#line 1996 "y.tab.c"
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
#line 552 "..\\main\\golang.y"


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