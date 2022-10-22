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
     t_path_pack = 322
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
#define t_path_pack 322



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
#line 277 "y.tab.c"

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
#define YYFINAL  19
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   773

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  92
/* YYNRULES -- Number of rules.  */
#define YYNRULES  231
/* YYNRULES -- Number of states.  */
#define YYNSTATES  416

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   322

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,    70,    68,     2,    69,     2,    71,     2,     2,
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
      65,    66,    67
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
     117,   119,   121,   123,   125,   127,   129,   131,   133,   135,
     137,   139,   141,   143,   145,   150,   156,   161,   165,   169,
     175,   182,   186,   191,   196,   200,   205,   209,   213,   218,
     222,   229,   236,   242,   247,   251,   255,   259,   265,   269,
     272,   275,   277,   283,   289,   291,   297,   303,   306,   309,
     312,   314,   317,   320,   322,   324,   327,   329,   333,   335,
     337,   341,   345,   347,   349,   352,   355,   358,   361,   365,
     369,   374,   376,   378,   380,   382,   384,   386,   388,   390,
     392,   394,   397,   400,   406,   410,   413,   416,   419,   421,
     424,   426,   429,   432,   435,   439,   442,   445,   448,   452,
     454,   456,   458,   460,   464,   467,   469,   473,   476,   479,
     481,   485,   491,   494,   496,   500,   502,   504,   506,   508,
     510,   513,   518,   520,   523,   526,   529,   534,   536,   540,
     542,   546,   550,   552,   556,   558,   560,   561,   563,   565,
     567,   568,   570,   573,   581,   585,   587,   589,   594,   603,
     610,   614,   618,   622,   625,   627,   630,   632,   636,   640,
     643,   647,   649,   653,   661,   671,   678,   684,   690,   696,
     701,   705,   710,   712,   717,   722,   726,   728,   732,   739,
     744,   752,   757,   766,   768,   770,   774,   776,   778,   780,
     787,   793
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      73,     0,    -1,    73,    74,   160,    -1,    74,   160,    -1,
      73,   160,    -1,    75,    -1,    76,    -1,    77,    -1,   153,
      -1,   161,    -1,    16,    41,    -1,     7,    42,    -1,     7,
      49,   106,    50,    -1,     7,    49,    63,   106,    50,    -1,
       7,    41,    42,    -1,     6,    41,    49,    79,    50,    78,
      -1,    86,    -1,    83,    86,    -1,    49,    81,    50,    86,
      -1,    80,    -1,    79,    47,    80,    -1,    41,    85,    -1,
      41,    -1,    -1,    82,    -1,    81,    47,    82,    -1,    41,
      85,    -1,    85,    -1,    84,    -1,    83,    84,    -1,    85,
      -1,     6,    49,    85,    50,    -1,     6,    49,    50,    -1,
       3,    -1,    41,    -1,    88,    87,    -1,    45,    -1,   113,
      -1,    88,    89,   160,    -1,    90,    -1,   141,    -1,   110,
      -1,   108,    -1,   109,    -1,   123,    -1,   146,    -1,    95,
      -1,   137,    -1,   144,    -1,   133,    -1,   153,    -1,   151,
      -1,    92,    -1,   103,    -1,    13,    41,    93,   136,    -1,
      13,    41,    93,   136,     3,    -1,    13,    41,    93,    91,
      -1,    41,    94,   136,    -1,    41,    93,   136,    -1,    41,
      94,   146,     3,   147,    -1,    13,    41,    93,   146,     3,
     147,    -1,    41,    94,    91,    -1,    41,   146,    93,   136,
      -1,    13,    41,    93,   150,    -1,    41,    94,   150,    -1,
      41,   146,    93,   150,    -1,    41,    94,   151,    -1,    41,
      93,   151,    -1,    13,    41,    93,   151,    -1,    13,    41,
     152,    -1,    41,    94,    62,    49,   152,    50,    -1,    13,
      41,    41,    93,    41,   159,    -1,    13,    41,    93,    41,
     159,    -1,    41,    94,    41,   159,    -1,   103,    93,   107,
      -1,   105,    93,   136,    -1,    13,    41,   105,    -1,    13,
      41,   105,    93,   136,    -1,   136,    53,   136,    -1,     9,
      95,    -1,     3,    48,    -1,    48,    -1,    47,    41,    93,
     136,    47,    -1,    47,    41,    93,    91,    47,    -1,    43,
      -1,    47,    41,    94,   136,    47,    -1,    47,    41,    94,
      91,    47,    -1,    41,    96,    -1,    97,    98,    -1,    49,
      50,    -1,    49,    -1,    97,   100,    -1,    99,    50,    -1,
     136,    -1,    63,    -1,   136,    47,    -1,    63,    -1,   102,
      34,   102,    -1,    41,    -1,    38,    -1,   104,    57,   104,
      -1,   103,    57,   104,    -1,    41,    -1,    95,    -1,    65,
      41,    -1,    65,     3,    -1,    66,    41,    -1,    42,   160,
      -1,    41,    42,   160,    -1,   106,    42,   160,    -1,   106,
      41,    42,   160,    -1,    38,    -1,    39,    -1,    41,    -1,
      42,    -1,    54,    -1,    56,    -1,    95,    -1,   101,    -1,
     105,    -1,   103,    -1,    24,    41,    -1,    41,    58,    -1,
      19,   138,    55,   136,   111,    -1,    19,   136,   111,    -1,
      19,   111,    -1,   112,   122,    -1,   114,   122,    -1,   113,
      -1,   112,   115,    -1,    44,    -1,   113,   160,    -1,   112,
     116,    -1,   114,   115,    -1,     5,   120,   121,    -1,    12,
     121,    -1,   118,   119,    -1,   136,    47,    -1,   118,   136,
      47,    -1,   136,    -1,   117,    -1,   136,    -1,    58,    -1,
     121,   128,   160,    -1,   121,   160,    -1,    45,    -1,   124,
     129,   131,    -1,   124,   129,    -1,   124,   131,    -1,   124,
      -1,    17,   139,   125,    -1,    17,   138,    55,   139,   125,
      -1,   126,   127,    -1,   113,    -1,   126,   128,   160,    -1,
      45,    -1,    89,    -1,    26,    -1,    25,    -1,   130,    -1,
     129,   130,    -1,    21,    17,   139,   125,    -1,   132,    -1,
     131,   132,    -1,    21,   125,    -1,    27,   136,    -1,    27,
     136,   134,   135,    -1,    47,    -1,   134,   136,    47,    -1,
     136,    -1,   136,    46,   107,    -1,   142,   136,   143,    -1,
     107,    -1,    41,    61,    41,    -1,    90,    -1,    95,    -1,
      -1,    91,    -1,    59,    -1,    60,    -1,    -1,   136,    -1,
      41,    35,    -1,    23,   138,    55,   139,    55,   140,   125,
      -1,    23,   139,   125,    -1,    49,    -1,    50,    -1,    13,
      41,   146,     3,    -1,    13,    41,   146,     3,    93,   146,
       3,   147,    -1,    13,    41,   146,     3,    93,   150,    -1,
      51,    38,    52,    -1,    51,    41,    52,    -1,    51,    42,
      52,    -1,    51,    52,    -1,   145,    -1,   145,   146,    -1,
     148,    -1,   148,    47,   147,    -1,    44,   149,    45,    -1,
      44,    45,    -1,    44,   147,    45,    -1,   107,    -1,   149,
      47,   107,    -1,    62,    49,   146,     3,    47,   107,    50,
      -1,    62,    49,   146,     3,    47,   107,    47,    38,   107,
      -1,    41,    51,   107,    58,   107,    52,    -1,    41,    51,
      58,   107,    52,    -1,    41,    51,   107,    58,    52,    -1,
      15,    51,     3,    52,     3,    -1,   154,   155,   160,   156,
      -1,    22,    41,    28,    -1,    22,    41,    28,    63,    -1,
      44,    -1,   155,   160,    41,     3,    -1,   155,   160,    41,
      41,    -1,   155,   160,    41,    -1,    45,    -1,    41,    58,
     107,    -1,   157,    47,   160,    41,    58,   107,    -1,    41,
      58,    41,   158,    -1,   157,    47,   160,    41,    58,    41,
     158,    -1,    44,   160,   157,    45,    -1,    44,   160,   157,
      47,   160,    45,    47,   160,    -1,   148,    -1,   158,    -1,
     158,    47,   159,    -1,    55,    -1,    63,    -1,    64,    -1,
      22,    41,    11,   162,   160,   163,    -1,    44,   160,    41,
      49,    50,    -1,    45,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    16,    16,    17,    18,    21,    22,    23,    24,    25,
      28,    31,    32,    33,    34,    37,    41,    42,    43,    46,
      47,    51,    52,    53,    57,    58,    62,    63,    67,    68,
      71,    72,    73,    76,    77,    79,    82,    85,    86,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   132,   136,
     139,   140,   141,   142,   144,   145,   146,   149,   153,   154,
     157,   158,   161,   165,   166,   170,   171,   174,   177,   178,
     181,   182,   186,   187,   190,   191,   192,   195,   196,   197,
     198,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   213,   216,   219,   220,   221,   224,   225,   229,   230,
     233,   234,   238,   239,   242,   245,   249,   252,   253,   256,
     260,   261,   264,   265,   266,   271,   275,   276,   277,   278,
     281,   282,   285,   289,   290,   294,   299,   300,   301,   305,
     306,   310,   314,   315,   318,   321,   322,   327,   328,   332,
     334,   335,   336,   339,   342,   343,   344,   347,   348,   349,
     350,   353,   354,   357,   358,   361,   364,   367,   368,   369,
     372,   373,   374,   375,   378,   379,   382,   383,   385,   386,
     387,   390,   391,   394,   395,   398,   399,   400,   403,   406,
     409,   410,   413,   414,   415,   416,   419,   422,   423,   424,
     425,   428,   429,   430,   433,   434,   441,   442,   443,   446,
     449,   452
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
  "t_eof", "t_pointer", "t_ampersand", "t_path_pack", "'+'", "'-'", "'*'",
  "'/'", "$accept", "START", "GLOBAL", "PACKAGE", "IMPORT", "FUNC",
  "FUNC_SECOND_PART", "FUNC_PARAM", "FUNC_PARAM_FULFILL",
  "FUNC_PARAM_SECOND", "FUNC_PARAM_FULFILL_SECOND", "FUNC_RETURN_VALUE",
  "FUNC_RETURN_VALUE_FULFILL", "TYPE_AND_STRUCT", "BODY", "BODY_END",
  "BODY_START", "BODY_FILLING", "VAR", "BOOLEAN", "DEFER", "ASSIGNMENT",
  "SHORT_ASSIGN", "FUNC_CALL", "PARAM", "PARAM_START", "PARAM_END",
  "PARAM_END_FULFILL", "PARAM_FULFILL", "SHIFT", "SHIFT_AC", "METHOD",
  "METHOD_FULFILL", "POINTER", "PARAM_IMPORT", "VALUE", "GOTO", "LABEL",
  "SWITCH", "SWITCH_BODY", "SWITCH_BODY_START", "ABSORB_EMPTYNESS",
  "SWITCH_BODY_START_WITH_DEFAULT", "CASE", "DEFAULT", "MULTIPLE_ARG",
  "FIRST_PART", "SECOND_PART", "CASE_STATEMENT", "CASE_BODY",
  "SWITCH_BODY_END", "IF", "IF_FIRST", "BODY_FOR_LOOP",
  "BODY_FOR_LOOP_START", "BODY_FOR_LOOP_END", "LOOP_FILLING",
  "MULTY_ELSEIF_SECOND", "ELSEIF_SECOND", "MULTY_ELSE_THIRD", "ELSE_THIRD",
  "RETURN", "MANY_RETURN_START", "MANY_RETURN_START_END", "EXPR",
  "SHORT_EXPR", "INIT_STATE", "CONDITION", "POST_STATE", "FOR",
  "EXPR_START", "EXPR_END", "ARRAY_BODY", "ARRAY_INDEX", "MULTI_AR",
  "PLENTY", "PLENTY_OLD", "ENUM", "MAKE", "SLICE", "MAPS", "STRUCT",
  "STRUCT_START", "STRUCT_BODY", "STRUCT_END", "STRUCT_ENUM",
  "STRUCT_FIELD", "ST_EMBEDDED", "END_SYMBOLS", "INTERFACE", "INT_BODY",
  "INT_END", YY_NULL
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
     315,   316,   317,   318,   319,   320,   321,   322,    43,    45,
      42,    47
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    72,    73,    73,    73,    74,    74,    74,    74,    74,
      75,    76,    76,    76,    76,    77,    78,    78,    78,    79,
      79,    80,    80,    80,    81,    81,    82,    82,    83,    83,
      84,    84,    84,    85,    85,    86,    87,    88,    88,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    91,    92,
      93,    93,    93,    93,    94,    94,    94,    95,    96,    96,
      97,    97,    98,    99,    99,   100,   100,   101,   102,   102,
     103,   103,   104,   104,   105,   105,   105,   106,   106,   106,
     106,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   108,   109,   110,   110,   110,   111,   111,   112,   112,
     113,   113,   114,   114,   115,   116,   117,   118,   118,   119,
     120,   120,   121,   121,   121,   122,   123,   123,   123,   123,
     124,   124,   125,   126,   126,   127,   128,   128,   128,   129,
     129,   130,   131,   131,   132,   133,   133,   134,   134,   135,
     136,   136,   136,   137,   138,   138,   138,   139,   139,   139,
     139,   140,   140,   141,   141,   142,   143,   144,   144,   144,
     145,   145,   145,   145,   146,   146,   147,   147,   148,   148,
     148,   149,   149,   150,   150,   151,   151,   151,   152,   153,
     154,   154,   155,   155,   155,   155,   156,   157,   157,   157,
     157,   158,   158,   158,   159,   159,   160,   160,   160,   161,
     162,   163
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     2,     1,     1,     1,     1,     1,
       2,     2,     4,     5,     3,     6,     1,     2,     4,     1,
       3,     2,     1,     0,     1,     3,     2,     1,     1,     2,
       1,     4,     3,     1,     1,     2,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     5,     4,     3,     3,     5,
       6,     3,     4,     4,     3,     4,     3,     3,     4,     3,
       6,     6,     5,     4,     3,     3,     3,     5,     3,     2,
       2,     1,     5,     5,     1,     5,     5,     2,     2,     2,
       1,     2,     2,     1,     1,     2,     1,     3,     1,     1,
       3,     3,     1,     1,     2,     2,     2,     2,     3,     3,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     5,     3,     2,     2,     2,     1,     2,
       1,     2,     2,     2,     3,     2,     2,     2,     3,     1,
       1,     1,     1,     3,     2,     1,     3,     2,     2,     1,
       3,     5,     2,     1,     3,     1,     1,     1,     1,     1,
       2,     4,     1,     2,     2,     2,     4,     1,     3,     1,
       3,     3,     1,     3,     1,     1,     0,     1,     1,     1,
       0,     1,     2,     7,     3,     1,     1,     4,     8,     6,
       3,     3,     3,     2,     1,     2,     1,     3,     3,     2,
       3,     1,     3,     7,     9,     6,     5,     5,     5,     4,
       3,     4,     1,     4,     4,     3,     1,     3,     6,     4,
       7,     4,     8,     1,     1,     3,     1,     1,     1,     6,
       5,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     5,     6,     7,
       8,     0,     9,     0,     0,    11,     0,    10,     0,     1,
     226,   227,   228,     0,     4,     3,   212,     0,    23,    14,
       0,     0,     0,     0,     0,   210,     2,     0,    22,     0,
      19,     0,   107,     0,     0,     0,    12,     0,     0,   211,
     215,   216,   209,    33,    34,    21,    23,     0,   108,    13,
       0,   109,     0,     0,   213,   214,    20,     0,   130,     0,
      15,     0,    28,    30,    16,     0,    37,   110,     0,   231,
     229,     0,    34,     0,    24,    27,    29,    17,     0,     0,
     176,   176,     0,   176,     0,     0,   102,    36,     0,     0,
       0,    35,     0,    39,    52,    46,    53,     0,     0,    42,
      43,    41,    44,   149,    49,    47,    40,    48,   194,    45,
      51,    50,   131,     0,    32,     0,    26,     0,     0,     0,
      79,     0,     0,   111,   112,   113,   114,   185,   115,   116,
     178,   179,   174,   177,   117,   118,     0,   120,   119,   172,
       0,     0,     0,     0,   125,     0,   128,     0,     0,     0,
       0,     0,     0,   121,   113,   117,   120,   119,   165,     0,
      84,     0,    81,    90,     0,   122,     0,     0,     0,    87,
       0,     0,     0,     0,     0,   193,   105,   104,   106,    38,
       0,     0,     0,     0,     0,     0,   147,   159,   148,   162,
     195,   230,    31,    25,    18,     0,     0,     0,    76,     0,
      69,     0,     0,     0,     0,   180,   153,   150,     0,     0,
       0,     0,   145,   129,   132,   126,   133,   127,   124,     0,
     180,   184,   167,     0,    80,     0,    89,    99,    98,   114,
       0,     0,   173,   113,    58,    67,   113,     0,    61,    57,
       0,    64,    66,    96,    88,     0,    91,    93,     0,   190,
     191,   192,     0,   102,   103,   101,    74,   100,    75,   180,
     164,   160,   146,     0,   163,     0,     0,   113,     0,    56,
      54,     0,    63,    68,     0,   187,    99,    98,    97,   170,
      78,     0,   158,   157,   155,   156,   152,     0,   186,   171,
     140,     0,     0,   141,   142,   135,     0,     0,   166,   169,
       0,     0,     0,     0,     0,     0,   223,   224,    73,     0,
       0,    92,    95,    62,    65,     0,     0,     0,    72,     0,
      55,     0,    77,     0,   151,   154,   136,   139,   134,   137,
       0,   144,   123,     0,   168,     0,     0,     0,     0,   206,
     207,     0,     0,   199,   201,     0,   196,     0,     0,     0,
       0,     0,    59,   161,     0,    71,    60,     0,   189,   138,
     143,   113,   181,     0,    83,    82,    86,    85,   205,   200,
       0,   198,     0,     0,     0,   225,     0,    70,   208,     0,
     182,   183,   197,   202,     0,   221,     0,     0,   188,   113,
     217,     0,     0,   219,     0,     0,     0,   203,     0,     0,
       0,   113,   218,   222,   204,   220
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,     9,    70,    39,    40,    83,
      84,    71,    72,    73,    74,   101,    75,   295,   103,   143,
     104,   177,   178,   165,   179,   180,   254,   255,   256,   145,
     146,   166,   107,   167,    33,   149,   109,   110,   111,   154,
     155,   216,   157,   223,   224,   300,   301,   336,   302,   305,
     225,   112,   113,   270,   218,   296,   340,   196,   197,   198,
     199,   114,   233,   308,   150,   115,   151,   152,   373,   116,
     153,   299,   117,   118,   119,   355,   316,   357,   251,   120,
     210,   121,    11,    27,    52,   384,   317,   318,   122,    12,
      48,    80
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -355
static const yytype_int16 yypact[] =
{
     321,   -17,   217,    13,    55,   198,   111,  -355,  -355,  -355,
    -355,    76,  -355,    67,   103,  -355,   182,  -355,   121,  -355,
    -355,  -355,  -355,   111,  -355,  -355,  -355,   111,   132,  -355,
     139,   111,   196,   169,   147,   140,  -355,   116,    35,   224,
    -355,   111,  -355,   244,   175,   111,  -355,   111,   111,  -355,
      66,  -355,  -355,  -355,  -355,  -355,   132,    65,  -355,  -355,
     111,  -355,   208,   186,  -355,  -355,  -355,   214,  -355,    74,
    -355,   174,  -355,  -355,  -355,   384,   111,  -355,   220,  -355,
    -355,    53,    35,   254,  -355,  -355,  -355,  -355,   243,   262,
     377,   280,   282,   377,   298,   572,   229,  -355,   309,    97,
     308,  -355,   111,  -355,  -355,   200,    64,   301,     5,  -355,
    -355,  -355,  -355,   346,  -355,  -355,  -355,  -355,   317,  -355,
    -355,  -355,  -355,   327,  -355,   339,  -355,    74,   341,   338,
    -355,   131,   355,   368,  -355,   248,  -355,  -355,  -355,  -355,
    -355,  -355,  -355,  -355,    72,  -355,   371,    64,     5,  -355,
      27,   359,   341,   572,  -355,    39,   111,    36,   263,   362,
     392,   369,   341,  -355,   207,   200,   370,  -355,   242,   380,
    -355,   389,  -355,   382,   499,  -355,   393,   591,   432,  -355,
     505,     5,   386,   387,   388,  -355,  -355,  -355,  -355,  -355,
     400,   403,   669,   403,   572,    93,   346,  -355,   424,  -355,
    -355,  -355,  -355,  -355,  -355,   395,     5,   451,     5,   444,
    -355,   161,   337,   669,   572,   470,   111,  -355,   347,   183,
     572,   390,  -355,  -355,  -355,  -355,  -355,  -355,  -355,   572,
     470,  -355,  -355,   572,  -355,   120,  -355,   148,   268,   388,
     669,   398,  -355,   179,   407,  -355,   150,   410,  -355,    27,
     457,  -355,  -355,   411,  -355,   412,  -355,   348,   534,  -355,
    -355,  -355,     5,   338,  -355,  -355,  -355,  -355,   407,   470,
    -355,  -355,   424,   341,  -355,   460,   423,   150,   416,  -355,
      46,   463,  -355,  -355,   572,     5,  -355,  -355,  -355,  -355,
     407,   341,  -355,  -355,  -355,  -355,  -355,   111,  -355,  -355,
    -355,   572,   390,   353,  -355,   289,   263,   417,  -355,   363,
     572,   572,   428,   610,   629,   413,  -355,   435,  -355,    75,
     431,  -355,  -355,   407,  -355,   341,   433,   440,  -355,   317,
    -355,   431,   407,    88,  -355,  -355,  -355,   376,   289,  -355,
     111,  -355,  -355,   650,  -355,   448,   285,   449,   295,  -355,
    -355,   439,   553,  -355,  -355,   442,   452,   312,   462,   440,
     498,   454,  -355,  -355,   503,  -355,  -355,   507,  -355,  -355,
    -355,   136,   407,   341,  -355,  -355,  -355,  -355,  -355,  -355,
     431,  -355,   669,   456,   335,  -355,   468,  -355,  -355,   431,
    -355,  -355,  -355,  -355,   688,  -355,   111,   669,  -355,   216,
    -355,   202,   329,  -355,   464,   471,   482,  -355,   707,   111,
     669,   216,  -355,  -355,  -355,  -355
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -355,  -355,   516,  -355,  -355,  -355,  -355,  -355,   467,  -355,
     401,  -355,   461,    -3,   -56,  -355,  -355,   450,   272,  -168,
    -355,   -46,   292,   -63,  -355,  -355,  -355,  -355,  -355,  -355,
     319,   -59,   190,   -70,   501,  -127,  -355,  -355,  -355,  -154,
    -355,   -54,  -355,   385,  -355,  -355,  -355,  -355,  -355,   232,
     391,  -355,  -355,  -133,  -355,  -355,   331,  -355,   343,   349,
    -189,  -355,  -355,  -355,   -89,  -355,   293,   -79,  -355,  -355,
    -355,  -355,  -355,  -355,   -85,  -272,  -233,  -355,  -200,   -24,
     231,    70,  -355,  -355,  -355,  -355,  -354,  -264,    -5,  -355,
    -355,  -355
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -181
static const yytype_int16 yytable[] =
{
      24,    25,   158,    76,   228,   108,   168,   282,   169,   274,
     248,   181,   105,   328,   162,    87,   106,    76,    36,   217,
     148,   148,    37,   148,    13,   130,    42,   144,   144,   231,
     144,   147,   147,   200,   147,    55,    58,   156,    53,   279,
      61,   220,    62,    63,   220,   403,   209,   241,   362,   330,
     181,   221,   190,   172,    17,    77,    53,   415,   324,   366,
     192,   208,   194,   365,   219,   266,    85,   169,    53,    64,
      10,    67,   204,   213,    76,    10,    54,    53,   125,   126,
     214,   222,   356,   274,   222,   207,   289,   356,   244,   249,
     205,   257,   213,   250,    54,   385,    18,   189,   356,   214,
     186,   192,   194,   124,   156,   268,    54,    65,   392,    68,
     269,   190,   172,   312,    69,    82,    28,   398,   280,   356,
      26,   191,   281,   169,    85,   290,    98,  -175,   264,  -103,
     264,   303,    34,   368,   169,   258,   291,    68,   187,    98,
     306,   208,   345,   347,   309,    29,   205,   356,   108,    35,
     278,   307,   342,   245,   252,   105,   356,    50,   334,   106,
     276,    51,   284,   170,   169,   207,    20,   171,   172,   323,
     -98,   390,   206,    38,    21,    22,   205,    53,   190,   172,
      67,    41,    98,   283,   -98,   173,   351,   241,   354,   310,
     325,    47,   363,  -102,   315,   332,    99,   100,    19,   173,
     259,   314,   206,    49,     1,     2,  -111,  -102,   190,   172,
      44,    45,   337,   -98,     3,    54,   310,    60,    68,    46,
       4,   346,   348,    30,    31,   354,    99,   100,   173,   213,
     314,    79,   169,   298,   360,   108,  -102,    30,    31,   333,
     391,   -98,   105,   404,   360,    32,   106,   405,   367,    78,
     -98,   169,   156,    20,   372,   393,   173,  -103,    14,    15,
     315,    21,    22,    81,  -102,   173,    16,   400,   108,   123,
     402,    56,   170,  -102,    57,   105,   171,   172,   173,   106,
     174,   412,   -98,   414,   129,    44,    45,   175,   213,   232,
     176,   170,   335,   132,    59,   171,   172,   173,    88,    98,
     341,   127,    89,   131,   128,  -102,    90,    68,    91,   213,
     358,    92,    93,    94,   292,   293,    95,   173,   133,   134,
     260,   135,   136,   160,    68,  -102,  -113,     1,     2,   137,
      96,   213,   375,   341,   138,   370,   139,     3,   214,   163,
      98,   213,   377,     4,    20,    99,   100,   182,   214,   188,
     183,   184,    21,    22,    99,   100,    88,   381,   193,   382,
      89,   185,   142,   142,    90,   142,    91,   195,    98,    92,
      93,    94,   292,   293,    95,   286,   406,   201,   287,   407,
     395,   265,   396,   267,   159,    68,   161,   173,    96,   202,
     132,   401,   294,    88,   213,   322,   211,    89,    98,   213,
     339,    90,   -99,    91,   413,   212,    92,    93,    94,   213,
     344,    95,    99,   100,   215,   133,   134,   229,   135,   136,
      35,  -180,   213,   369,   230,    96,   137,   191,   234,    97,
     235,   138,   236,   139,   242,    98,   140,   141,   259,   260,
     261,   262,    99,   100,   263,   273,   275,   285,   304,    99,
     100,   133,   134,   213,   164,   136,   313,   352,   353,   319,
     320,   -94,   321,   326,   327,   329,   331,   138,    20,   139,
     133,   134,   343,   246,   136,   352,    21,    22,    99,   100,
     349,   137,   359,    98,   315,   364,   138,   379,   139,   133,
     134,   378,   277,   136,   247,   374,   376,    99,   100,   380,
     137,   386,    98,   383,   387,   138,   388,   139,   133,   134,
     389,   164,   136,   278,   394,   397,    99,   100,   409,   137,
     410,    23,   408,    66,   138,   102,   139,   311,   203,   140,
     141,   288,    86,    43,   338,    99,   100,   237,   134,   271,
     238,   239,   226,   133,   134,   272,   164,   136,   227,   297,
     361,   185,     0,   138,   137,   139,     0,   240,     0,   138,
       0,   139,     0,     0,    99,   100,     0,     0,   253,     0,
      99,   100,   133,   134,     0,   164,   136,     0,     0,     0,
       0,     0,     0,   137,     0,     0,     0,     0,   138,     0,
     139,   133,   134,     0,   164,   136,   278,   352,   353,    99,
     100,     0,     0,     0,     0,     0,     0,   138,     0,   139,
     133,   134,     0,   164,   136,     0,     0,     0,    99,   100,
       0,   137,     0,     0,     0,     0,   138,     0,   139,   133,
     134,     0,   243,   136,     0,     0,     0,    99,   100,     0,
     137,     0,     0,     0,     0,   138,     0,   139,   133,   134,
       0,   164,   136,     0,     0,     0,    99,   100,     0,     0,
       0,     0,   350,     0,   138,     0,   139,   133,   134,     0,
     164,   136,     0,     0,     0,    99,   100,     0,     0,     0,
       0,     0,     0,   138,     0,   139,     0,   240,   133,   134,
       0,   371,   136,     0,    99,   100,     0,     0,     0,   137,
       0,     0,     0,     0,   138,     0,   139,   133,   134,     0,
     164,   136,     0,     0,     0,    99,   100,     0,     0,     0,
       0,     0,     0,   138,     0,   139,   133,   134,     0,   399,
     136,     0,     0,     0,    99,   100,     0,     0,     0,     0,
       0,     0,   138,     0,   139,   133,   134,     0,   411,   136,
       0,     0,     0,    99,   100,     0,     0,     0,     0,     0,
       0,   138,     0,   139,     0,     0,     0,     0,     0,     0,
       0,     0,    99,   100
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-355)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       5,     6,    91,    57,   158,    75,    95,   207,     3,   198,
     178,    96,    75,   277,    93,    71,    75,    71,    23,   152,
      90,    91,    27,    93,    41,    88,    31,    90,    91,   162,
      93,    90,    91,   118,    93,    38,    41,    91,     3,   207,
      45,     5,    47,    48,     5,   399,   131,   174,   320,     3,
     135,    12,    47,    48,    41,    60,     3,   411,   258,   331,
     106,   131,   108,   327,   153,   192,    69,     3,     3,     3,
       0,     6,   128,    46,   128,     5,    41,     3,    81,    82,
      53,    45,   315,   272,    45,   131,   213,   320,   177,   178,
      15,   180,    46,   178,    41,   359,    41,   102,   331,    53,
       3,   147,   148,    50,   158,   194,    41,    41,   380,    44,
      17,    47,    48,   240,    49,    41,    49,   389,   207,   352,
      44,    57,   207,     3,   127,   214,    51,    55,   191,    57,
     193,   220,    11,   333,     3,   181,   215,    44,    41,    51,
     229,   211,   310,   311,   233,    42,    15,   380,   218,    28,
      62,   230,   306,   177,   178,   218,   389,    41,   291,   218,
     206,    45,   208,    43,     3,   211,    55,    47,    48,   258,
      34,    35,    41,    41,    63,    64,    15,     3,    47,    48,
       6,    42,    51,   207,    34,    49,   313,   314,   315,   235,
     269,    44,   325,    57,    44,   284,    65,    66,     0,    49,
      52,    51,    41,    63,     6,     7,    58,    57,    47,    48,
      41,    42,   301,    34,    16,    41,   262,    42,    44,    50,
      22,   310,   311,    41,    42,   352,    65,    66,    49,    46,
      51,    45,     3,    50,   319,   305,    57,    41,    42,   285,
     373,    34,   305,    41,   329,    63,   305,    45,   333,    41,
      34,     3,   306,    55,   343,   382,    49,    57,    41,    42,
      44,    63,    64,    49,    57,    49,    49,   394,   338,    49,
     397,    47,    43,    57,    50,   338,    47,    48,    49,   338,
      51,   408,    34,   410,    41,    41,    42,    58,    46,    47,
      61,    43,   297,    13,    50,    47,    48,    49,     9,    51,
     305,    47,    13,    41,    50,    57,    17,    44,    19,    46,
     315,    22,    23,    24,    25,    26,    27,    49,    38,    39,
      52,    41,    42,    41,    44,    57,    58,     6,     7,    49,
      41,    46,    47,   338,    54,   340,    56,    16,    53,    41,
      51,    46,    47,    22,    55,    65,    66,    38,    53,    41,
      41,    42,    63,    64,    65,    66,     9,    45,    57,    47,
      13,    52,    90,    91,    17,    93,    19,    21,    51,    22,
      23,    24,    25,    26,    27,    38,    47,    50,    41,    50,
      45,   191,    47,   193,    91,    44,    93,    49,    41,    50,
      13,   396,    45,     9,    46,    47,    41,    13,    51,    46,
      47,    17,    34,    19,   409,    34,    22,    23,    24,    46,
      47,    27,    65,    66,    55,    38,    39,    55,    41,    42,
      28,    44,    46,    47,    55,    41,    49,    57,    48,    45,
      41,    54,    50,    56,    41,    51,    59,    60,    52,    52,
      52,    41,    65,    66,    41,    21,    51,     3,    58,    65,
      66,    38,    39,    46,    41,    42,    58,    44,    45,    49,
       3,    50,    50,     3,    41,    49,     3,    54,    55,    56,
      38,    39,    55,    41,    42,    44,    63,    64,    65,    66,
      52,    49,    47,    51,    44,    52,    54,    45,    56,    38,
      39,    52,    41,    42,    62,    47,    47,    65,    66,    47,
      49,     3,    51,    41,    50,    54,     3,    56,    38,    39,
       3,    41,    42,    62,    58,    47,    65,    66,    47,    49,
      38,     5,    58,    56,    54,    75,    56,   235,   127,    59,
      60,   212,    71,    32,   302,    65,    66,    38,    39,   196,
      41,    42,   157,    38,    39,   196,    41,    42,   157,   218,
     319,    52,    -1,    54,    49,    56,    -1,    58,    -1,    54,
      -1,    56,    -1,    -1,    65,    66,    -1,    -1,    63,    -1,
      65,    66,    38,    39,    -1,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    54,    -1,
      56,    38,    39,    -1,    41,    42,    62,    44,    45,    65,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    56,
      38,    39,    -1,    41,    42,    -1,    -1,    -1,    65,    66,
      -1,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,    38,
      39,    -1,    41,    42,    -1,    -1,    -1,    65,    66,    -1,
      49,    -1,    -1,    -1,    -1,    54,    -1,    56,    38,    39,
      -1,    41,    42,    -1,    -1,    -1,    65,    66,    -1,    -1,
      -1,    -1,    52,    -1,    54,    -1,    56,    38,    39,    -1,
      41,    42,    -1,    -1,    -1,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    56,    -1,    58,    38,    39,
      -1,    41,    42,    -1,    65,    66,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    54,    -1,    56,    38,    39,    -1,
      41,    42,    -1,    -1,    -1,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    56,    38,    39,    -1,    41,
      42,    -1,    -1,    -1,    65,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    -1,    56,    38,    39,    -1,    41,    42,
      -1,    -1,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    66
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,    16,    22,    73,    74,    75,    76,    77,
     153,   154,   161,    41,    41,    42,    49,    41,    41,     0,
      55,    63,    64,    74,   160,   160,    44,   155,    49,    42,
      41,    42,    63,   106,    11,    28,   160,   160,    41,    79,
      80,    42,   160,   106,    41,    42,    50,    44,   162,    63,
      41,    45,   156,     3,    41,    85,    47,    50,   160,    50,
      42,   160,   160,   160,     3,    41,    80,     6,    44,    49,
      78,    83,    84,    85,    86,    88,   113,   160,    41,    45,
     163,    49,    41,    81,    82,    85,    84,    86,     9,    13,
      17,    19,    22,    23,    24,    27,    41,    45,    51,    65,
      66,    87,    89,    90,    92,    95,   103,   104,   105,   108,
     109,   110,   123,   124,   133,   137,   141,   144,   145,   146,
     151,   153,   160,    49,    50,    85,    85,    47,    50,    41,
      95,    41,    13,    38,    39,    41,    42,    49,    54,    56,
      59,    60,    90,    91,    95,   101,   102,   103,   105,   107,
     136,   138,   139,   142,   111,   112,   113,   114,   136,   138,
      41,   138,   139,    41,    41,    95,   103,   105,   136,     3,
      43,    47,    48,    49,    51,    58,    61,    93,    94,    96,
      97,   146,    38,    41,    42,    52,     3,    41,    41,   160,
      47,    57,    93,    57,    93,    21,   129,   130,   131,   132,
     146,    50,    50,    82,    86,    15,    41,    93,   105,   146,
     152,    41,    34,    46,    53,    55,   113,   125,   126,   136,
       5,    12,    45,   115,   116,   122,   115,   122,   111,    55,
      55,   125,    47,   134,    48,    41,    50,    38,    41,    42,
      58,   107,    41,    41,   136,   151,    41,    62,    91,   136,
     146,   150,   151,    63,    98,    99,   100,   136,    93,    52,
      52,    52,    41,    41,    95,   104,   107,   104,   136,    17,
     125,   130,   131,    21,   132,    51,    93,    41,    62,    91,
     136,   146,   150,   151,    93,     3,    38,    41,   102,   107,
     136,   139,    25,    26,    45,    89,   127,   128,    50,   143,
     117,   118,   120,   136,    58,   121,   136,   139,   135,   136,
      93,    94,   107,    58,    51,    44,   148,   158,   159,    49,
       3,    50,    47,   136,   150,   139,     3,    41,   159,    49,
       3,     3,   136,    93,   125,   160,   119,   136,   121,    47,
     128,   160,   111,    55,    47,    91,   136,    91,   136,    52,
      52,   107,    44,    45,   107,   147,   148,   149,   160,    47,
     146,   152,   147,   125,    52,   159,   147,   146,   150,    47,
     160,    41,   136,   140,    47,    47,    47,    47,    52,    45,
      47,    45,    47,    41,   157,   159,     3,    50,     3,     3,
      35,   125,   147,   107,    58,    45,    47,    47,   147,    41,
     107,   160,   107,   158,    41,    45,    47,    50,    58,    47,
      38,    41,   107,   160,   107,   158
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
#line 1964 "y.tab.c"
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
#line 455 "..\\main\\golang.y"


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