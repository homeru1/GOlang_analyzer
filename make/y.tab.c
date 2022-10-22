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
#define YYLAST   774

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  92
/* YYNRULES -- Number of rules.  */
#define YYNRULES  232
/* YYNRULES -- Number of states.  */
#define YYNSTATES  417

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
     312,   315,   317,   320,   323,   325,   327,   330,   332,   336,
     338,   340,   344,   348,   350,   352,   355,   358,   361,   364,
     368,   372,   377,   379,   381,   383,   385,   387,   389,   391,
     393,   395,   397,   400,   403,   409,   413,   416,   419,   422,
     424,   427,   429,   432,   435,   438,   442,   445,   448,   451,
     455,   457,   459,   461,   463,   467,   470,   472,   476,   479,
     482,   484,   488,   494,   497,   499,   503,   505,   507,   509,
     511,   513,   516,   521,   523,   526,   529,   532,   537,   539,
     543,   545,   549,   553,   555,   559,   561,   563,   564,   566,
     568,   570,   571,   573,   576,   584,   588,   590,   592,   597,
     606,   613,   617,   621,   625,   628,   630,   633,   635,   639,
     643,   646,   650,   652,   656,   664,   674,   681,   687,   693,
     699,   704,   708,   713,   715,   720,   725,   729,   731,   735,
     742,   747,   755,   760,   769,   771,   773,   777,   779,   781,
     783,   790,   796
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
      91,    47,    -1,    41,    96,    -1,   103,    96,    -1,    97,
      98,    -1,    49,    50,    -1,    49,    -1,    97,   100,    -1,
      99,    50,    -1,   136,    -1,    63,    -1,   136,    47,    -1,
      63,    -1,   102,    34,   102,    -1,    41,    -1,    38,    -1,
     104,    57,   104,    -1,   103,    57,   104,    -1,    41,    -1,
      95,    -1,    65,    41,    -1,    65,     3,    -1,    66,    41,
      -1,    42,   160,    -1,    41,    42,   160,    -1,   106,    42,
     160,    -1,   106,    41,    42,   160,    -1,    38,    -1,    39,
      -1,    41,    -1,    42,    -1,    54,    -1,    56,    -1,    95,
      -1,   101,    -1,   105,    -1,   103,    -1,    24,    41,    -1,
      41,    58,    -1,    19,   138,    55,   136,   111,    -1,    19,
     136,   111,    -1,    19,   111,    -1,   112,   122,    -1,   114,
     122,    -1,   113,    -1,   112,   115,    -1,    44,    -1,   113,
     160,    -1,   112,   116,    -1,   114,   115,    -1,     5,   120,
     121,    -1,    12,   121,    -1,   118,   119,    -1,   136,    47,
      -1,   118,   136,    47,    -1,   136,    -1,   117,    -1,   136,
      -1,    58,    -1,   121,   128,   160,    -1,   121,   160,    -1,
      45,    -1,   124,   129,   131,    -1,   124,   129,    -1,   124,
     131,    -1,   124,    -1,    17,   139,   125,    -1,    17,   138,
      55,   139,   125,    -1,   126,   127,    -1,   113,    -1,   126,
     128,   160,    -1,    45,    -1,    89,    -1,    26,    -1,    25,
      -1,   130,    -1,   129,   130,    -1,    21,    17,   139,   125,
      -1,   132,    -1,   131,   132,    -1,    21,   125,    -1,    27,
     136,    -1,    27,   136,   134,   135,    -1,    47,    -1,   134,
     136,    47,    -1,   136,    -1,   136,    46,   107,    -1,   142,
     136,   143,    -1,   107,    -1,    41,    61,    41,    -1,    90,
      -1,    95,    -1,    -1,    91,    -1,    59,    -1,    60,    -1,
      -1,   136,    -1,    41,    35,    -1,    23,   138,    55,   139,
      55,   140,   125,    -1,    23,   139,   125,    -1,    49,    -1,
      50,    -1,    13,    41,   146,     3,    -1,    13,    41,   146,
       3,    93,   146,     3,   147,    -1,    13,    41,   146,     3,
      93,   150,    -1,    51,    38,    52,    -1,    51,    41,    52,
      -1,    51,    42,    52,    -1,    51,    52,    -1,   145,    -1,
     145,   146,    -1,   148,    -1,   148,    47,   147,    -1,    44,
     149,    45,    -1,    44,    45,    -1,    44,   147,    45,    -1,
     107,    -1,   149,    47,   107,    -1,    62,    49,   146,     3,
      47,   107,    50,    -1,    62,    49,   146,     3,    47,   107,
      47,    38,   107,    -1,    41,    51,   107,    58,   107,    52,
      -1,    41,    51,    58,   107,    52,    -1,    41,    51,   107,
      58,    52,    -1,    15,    51,     3,    52,     3,    -1,   154,
     155,   160,   156,    -1,    22,    41,    28,    -1,    22,    41,
      28,    63,    -1,    44,    -1,   155,   160,    41,     3,    -1,
     155,   160,    41,    41,    -1,   155,   160,    41,    -1,    45,
      -1,    41,    58,   107,    -1,   157,    47,   160,    41,    58,
     107,    -1,    41,    58,    41,   158,    -1,   157,    47,   160,
      41,    58,    41,   158,    -1,    44,   160,   157,    45,    -1,
      44,   160,   157,    47,   160,    45,    47,   160,    -1,   148,
      -1,   158,    -1,   158,    47,   159,    -1,    55,    -1,    63,
      -1,    64,    -1,    22,    41,    11,   162,   160,   163,    -1,
      44,   160,    41,    49,    50,    -1,    45,    -1
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
     139,   140,   141,   142,   144,   145,   146,   149,   150,   153,
     154,   157,   158,   161,   165,   166,   170,   171,   174,   177,
     178,   181,   182,   186,   187,   190,   191,   192,   195,   196,
     197,   198,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   213,   216,   219,   220,   221,   224,   225,   229,
     230,   233,   234,   238,   239,   242,   245,   249,   252,   253,
     256,   260,   261,   264,   265,   266,   271,   275,   276,   277,
     278,   281,   282,   285,   289,   290,   294,   299,   300,   301,
     305,   306,   310,   314,   315,   318,   321,   322,   327,   328,
     332,   334,   335,   336,   339,   342,   343,   344,   347,   348,
     349,   350,   353,   354,   357,   358,   361,   364,   367,   368,
     369,   372,   373,   374,   375,   378,   379,   382,   383,   385,
     386,   387,   390,   391,   394,   395,   398,   399,   400,   403,
     406,   409,   410,   413,   414,   415,   416,   419,   422,   423,
     424,   425,   428,   429,   430,   433,   434,   441,   442,   443,
     446,   449,   452
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
      93,    93,    93,    93,    94,    94,    94,    95,    95,    96,
      96,    97,    97,    98,    99,    99,   100,   100,   101,   102,
     102,   103,   103,   104,   104,   105,   105,   105,   106,   106,
     106,   106,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   108,   109,   110,   110,   110,   111,   111,   112,
     112,   113,   113,   114,   114,   115,   116,   117,   118,   118,
     119,   120,   120,   121,   121,   121,   122,   123,   123,   123,
     123,   124,   124,   125,   126,   126,   127,   128,   128,   128,
     129,   129,   130,   131,   131,   132,   133,   133,   134,   134,
     135,   136,   136,   136,   137,   138,   138,   138,   139,   139,
     139,   139,   140,   140,   141,   141,   142,   143,   144,   144,
     144,   145,   145,   145,   145,   146,   146,   147,   147,   148,
     148,   148,   149,   149,   150,   150,   151,   151,   151,   152,
     153,   154,   154,   155,   155,   155,   155,   156,   157,   157,
     157,   157,   158,   158,   158,   159,   159,   160,   160,   160,
     161,   162,   163
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
       2,     1,     2,     2,     1,     1,     2,     1,     3,     1,
       1,     3,     3,     1,     1,     2,     2,     2,     2,     3,
       3,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     5,     3,     2,     2,     2,     1,
       2,     1,     2,     2,     2,     3,     2,     2,     2,     3,
       1,     1,     1,     1,     3,     2,     1,     3,     2,     2,
       1,     3,     5,     2,     1,     3,     1,     1,     1,     1,
       1,     2,     4,     1,     2,     2,     2,     4,     1,     3,
       1,     3,     3,     1,     3,     1,     1,     0,     1,     1,
       1,     0,     1,     2,     7,     3,     1,     1,     4,     8,
       6,     3,     3,     3,     2,     1,     2,     1,     3,     3,
       2,     3,     1,     3,     7,     9,     6,     5,     5,     5,
       4,     3,     4,     1,     4,     4,     3,     1,     3,     6,
       4,     7,     4,     8,     1,     1,     3,     1,     1,     1,
       6,     5,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     5,     6,     7,
       8,     0,     9,     0,     0,    11,     0,    10,     0,     1,
     227,   228,   229,     0,     4,     3,   213,     0,    23,    14,
       0,     0,     0,     0,     0,   211,     2,     0,    22,     0,
      19,     0,   108,     0,     0,     0,    12,     0,     0,   212,
     216,   217,   210,    33,    34,    21,    23,     0,   109,    13,
       0,   110,     0,     0,   214,   215,    20,     0,   131,     0,
      15,     0,    28,    30,    16,     0,    37,   111,     0,   232,
     230,     0,    34,     0,    24,    27,    29,    17,     0,     0,
     177,   177,     0,   177,     0,     0,   103,    36,     0,     0,
       0,    35,     0,    39,    52,    46,    53,     0,     0,    42,
      43,    41,    44,   150,    49,    47,    40,    48,   195,    45,
      51,    50,   132,     0,    32,     0,    26,     0,     0,   103,
      79,     0,     0,     0,   112,   113,   114,   115,   186,   116,
     117,   179,   180,   175,   178,   118,   119,     0,   121,   120,
     173,     0,     0,     0,     0,   126,     0,   129,     0,     0,
       0,     0,     0,     0,   122,   114,   118,   121,   120,   166,
       0,    84,     0,    81,    91,     0,   123,     0,     0,     0,
      87,     0,     0,     0,     0,     0,   194,   106,   105,   107,
      38,     0,     0,     0,    88,     0,     0,     0,   148,   160,
     149,   163,   196,   231,    31,    25,    18,     0,     0,     0,
      76,     0,    69,     0,     0,     0,     0,   181,   154,   151,
       0,     0,     0,     0,   146,   130,   133,   127,   134,   128,
     125,     0,   181,   185,   168,     0,    80,     0,    90,   100,
      99,   115,     0,     0,   174,   114,    58,    67,   114,     0,
      61,    57,     0,    64,    66,    97,    89,     0,    92,    94,
       0,   191,   192,   193,     0,   104,   102,    74,   101,    75,
     181,   165,   161,   147,     0,   164,     0,     0,   114,     0,
      56,    54,     0,    63,    68,     0,   188,   100,    99,    98,
     171,    78,     0,   159,   158,   156,   157,   153,     0,   187,
     172,   141,     0,     0,   142,   143,   136,     0,     0,   167,
     170,     0,     0,     0,     0,     0,     0,   224,   225,    73,
       0,     0,    93,    96,    62,    65,     0,     0,     0,    72,
       0,    55,     0,    77,     0,   152,   155,   137,   140,   135,
     138,     0,   145,   124,     0,   169,     0,     0,     0,     0,
     207,   208,     0,     0,   200,   202,     0,   197,     0,     0,
       0,     0,     0,    59,   162,     0,    71,    60,     0,   190,
     139,   144,   114,   182,     0,    83,    82,    86,    85,   206,
     201,     0,   199,     0,     0,     0,   226,     0,    70,   209,
       0,   183,   184,   198,   203,     0,   222,     0,     0,   189,
     114,   218,     0,     0,   220,     0,     0,     0,   204,     0,
       0,     0,   114,   219,   223,   205,   221
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,     9,    70,    39,    40,    83,
      84,    71,    72,    73,    74,   101,    75,   296,   103,   144,
     104,   178,   179,   166,   180,   181,   256,   257,   258,   146,
     147,   167,   107,   168,    33,   150,   109,   110,   111,   155,
     156,   218,   158,   225,   226,   301,   302,   337,   303,   306,
     227,   112,   113,   271,   220,   297,   341,   198,   199,   200,
     201,   114,   235,   309,   151,   115,   152,   153,   374,   116,
     154,   300,   117,   118,   119,   356,   317,   358,   253,   120,
     212,   121,    11,    27,    52,   385,   318,   319,   122,    12,
      48,    80
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -327
static const yytype_int16 yypact[] =
{
     282,   -22,   225,     0,    31,   185,   228,  -327,  -327,  -327,
    -327,    55,  -327,    70,   103,  -327,   130,  -327,    52,  -327,
    -327,  -327,  -327,   228,  -327,  -327,  -327,   228,    63,  -327,
     154,   228,   327,   196,   164,   159,  -327,    30,    84,   192,
    -327,   228,  -327,   288,   217,   228,  -327,   228,   228,  -327,
      99,  -327,  -327,  -327,  -327,  -327,    63,    62,  -327,  -327,
     228,  -327,   193,   265,  -327,  -327,  -327,   221,  -327,   114,
    -327,    64,  -327,  -327,  -327,   385,   228,  -327,   269,  -327,
    -327,    32,    84,   297,  -327,  -327,  -327,  -327,   285,   299,
     283,   378,   309,   283,   322,   573,   214,  -327,   173,   124,
     346,  -327,   228,  -327,  -327,   349,   172,   358,    66,  -327,
    -327,  -327,  -327,   325,  -327,  -327,  -327,  -327,   345,  -327,
    -327,  -327,  -327,   353,  -327,   368,  -327,   114,   381,   372,
     349,   245,   165,   390,   399,  -327,   230,  -327,  -327,  -327,
    -327,  -327,  -327,  -327,  -327,   307,  -327,   401,   172,    66,
    -327,   244,   384,   381,   573,  -327,   141,   228,    79,   289,
     386,   412,   387,   381,  -327,    82,   349,   245,  -327,   354,
     397,  -327,   405,  -327,   398,   500,  -327,   406,   592,   433,
    -327,   506,    66,   402,   408,   409,  -327,  -327,  -327,  -327,
    -327,   416,   285,   670,  -327,   285,   573,    39,   325,  -327,
     428,  -327,  -327,  -327,  -327,  -327,  -327,   411,    66,   452,
      66,   460,  -327,    44,   340,   670,   573,   471,   228,  -327,
     348,   144,   573,   407,  -327,  -327,  -327,  -327,  -327,  -327,
    -327,   573,   471,  -327,  -327,   573,  -327,   119,  -327,   126,
     146,   409,   670,   415,  -327,   148,   418,  -327,   201,   417,
    -327,   244,   464,  -327,  -327,   426,  -327,   431,  -327,   364,
     535,  -327,  -327,  -327,    66,  -327,   358,  -327,   358,   418,
     471,  -327,  -327,   428,   381,  -327,   480,   444,   201,   437,
    -327,     5,   485,  -327,  -327,   573,    66,  -327,  -327,  -327,
    -327,   418,   381,  -327,  -327,  -327,  -327,  -327,   228,  -327,
    -327,  -327,   573,   407,   377,  -327,   290,   289,   441,  -327,
     382,   573,   573,   440,   611,   630,   414,  -327,   450,  -327,
      -1,   456,  -327,  -327,   418,  -327,   381,   453,   458,  -327,
     345,  -327,   456,   418,   112,  -327,  -327,  -327,   391,   290,
    -327,   228,  -327,  -327,   651,  -327,   457,   305,   468,   313,
    -327,  -327,   455,   554,  -327,  -327,   466,   469,   339,   478,
     458,   518,   472,  -327,  -327,   520,  -327,  -327,   521,  -327,
    -327,  -327,   271,   418,   381,  -327,  -327,  -327,  -327,  -327,
    -327,   456,  -327,   670,   470,   343,  -327,   479,  -327,  -327,
     456,  -327,  -327,  -327,  -327,   689,  -327,   228,   670,  -327,
     251,  -327,   278,   333,  -327,   474,   482,   495,  -327,   708,
     228,   670,   251,  -327,  -327,  -327,  -327
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -327,  -327,   529,  -327,  -327,  -327,  -327,  -327,   484,  -327,
     419,  -327,   486,     8,   -64,  -327,  -327,   475,   286,  -164,
    -327,   -54,   298,   -63,   -30,  -327,  -327,  -327,  -327,  -327,
     329,   -59,   190,   -70,   517,  -127,  -327,  -327,  -327,  -155,
    -327,   -47,  -327,   393,  -327,  -327,  -327,  -327,  -327,   250,
     403,  -327,  -327,  -150,  -327,  -327,   344,  -327,   361,   365,
    -194,  -327,  -327,  -327,   -58,  -327,   304,   -91,  -327,  -327,
    -327,  -327,  -327,  -327,   -79,  -283,  -172,  -327,  -200,    -9,
     247,   223,  -327,  -327,  -327,  -327,  -326,  -267,    -5,  -327,
    -327,  -327
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -182
static const yytype_int16 yytable[] =
{
      24,    25,   163,   219,   230,   108,   275,    87,   331,   283,
      76,   329,   105,   233,   207,   250,   106,   182,    36,    13,
     149,   149,    37,   149,    76,   130,    42,   145,   145,   131,
     145,   148,   148,   159,   148,    53,    58,   169,   363,   202,
      61,    17,    62,    63,   157,   280,    55,   170,   243,   367,
      98,   215,   193,   211,   196,    77,   270,   182,   216,   207,
     325,   366,   210,    34,   206,    53,   267,    53,    67,   170,
      67,    50,    18,    54,   404,    51,   194,    85,   209,   275,
      35,    76,   124,    68,   222,   208,   416,    53,   290,   125,
     126,   191,   173,   386,   193,   196,   221,   190,   393,    26,
     252,   194,    64,    54,    38,    54,    68,   399,    68,    99,
     100,    69,   157,   191,   173,   313,   -99,    53,   194,    28,
     246,   251,   170,   259,   224,    54,   292,   187,   260,   265,
     282,   174,   265,   131,   369,    85,   131,   194,   269,  -103,
      65,   308,   335,   210,   357,    29,   222,   346,   348,   357,
     108,   281,   343,   223,   277,    82,   285,   105,   291,   209,
     357,   106,   171,    98,   304,   188,   172,   173,   170,   247,
     254,    30,    31,   307,   279,   170,   364,   310,   261,   326,
     207,   357,   -99,   311,  -112,    19,   224,   352,   243,   355,
     215,     1,     2,    32,   299,   174,    41,   174,   262,   315,
     284,     3,   324,  -103,  -114,  -103,   208,     4,    47,   357,
     311,   183,   191,   173,   184,   185,    98,   170,   357,   191,
     173,   174,    49,    10,   392,   186,   355,   333,    10,   192,
      99,   100,   334,   170,    78,   -99,   108,    44,    45,    56,
      20,   361,    57,   105,   338,   316,    46,   106,    21,    22,
     174,   361,   315,   347,   349,   368,   394,   171,  -103,    60,
     157,   172,   173,   174,   -99,   175,    14,    15,   401,   108,
      81,   403,   176,   171,    16,   177,   105,   172,   173,   174,
     106,    98,   413,    20,   415,   -99,   373,  -103,     1,     2,
     215,    21,    22,   336,   174,   316,   133,   216,     3,    88,
     174,   342,   192,    89,     4,   -99,   391,    90,  -103,    91,
      79,   359,    92,    93,    94,   293,   294,    95,   123,   405,
     174,   134,   135,   406,   136,   137,   129,  -181,  -103,    44,
      45,    96,   138,    68,   342,   215,   371,   139,    59,   140,
     132,    98,   141,   142,   127,    20,   197,   128,    99,   100,
     161,   215,   376,    21,    22,    99,   100,    88,   216,   215,
     378,    89,  -176,   164,  -104,    90,   216,    91,    30,    31,
      92,    93,    94,   293,   294,    95,   143,   143,   287,   143,
     407,   288,   266,   408,   382,   268,   383,   189,   396,    96,
     397,   133,   402,   295,    88,   160,    98,   162,    89,    98,
     215,   234,    90,   203,    91,   414,  -104,    92,    93,    94,
     215,   323,    95,    99,   100,   195,   134,   135,   204,   136,
     137,   174,    68,   215,   340,    68,    96,   138,   215,   345,
      97,   213,   139,  -100,   140,   214,    98,   215,   370,   217,
      35,   231,   232,    99,   100,   236,   237,   244,   238,   274,
      99,   100,   134,   135,   261,   165,   137,   264,   353,   354,
     262,   263,   276,   286,   215,   305,   320,   321,   139,    20,
     140,   134,   135,   314,   248,   137,   -95,    21,    22,    99,
     100,   322,   138,   327,    98,   328,   330,   139,   332,   140,
     134,   135,   350,   278,   137,   249,   344,   360,    99,   100,
     353,   138,   316,    98,   375,   365,   139,   379,   140,   134,
     135,   380,   165,   137,   279,   377,   381,    99,   100,   384,
     138,   387,   388,   389,   390,   139,   398,   140,   395,   410,
     141,   142,   409,   411,    23,   312,    99,   100,   239,   135,
      66,   240,   241,   289,   134,   135,   205,   165,   137,    43,
     102,   228,   186,   339,   139,   138,   140,    86,   242,   272,
     139,   229,   140,   273,   298,    99,   100,   362,     0,   255,
       0,    99,   100,   134,   135,     0,   165,   137,     0,     0,
       0,     0,     0,     0,   138,     0,     0,     0,     0,   139,
       0,   140,   134,   135,     0,   165,   137,   279,   353,   354,
      99,   100,     0,     0,     0,     0,     0,     0,   139,     0,
     140,   134,   135,     0,   165,   137,     0,     0,     0,    99,
     100,     0,   138,     0,     0,     0,     0,   139,     0,   140,
     134,   135,     0,   245,   137,     0,     0,     0,    99,   100,
       0,   138,     0,     0,     0,     0,   139,     0,   140,   134,
     135,     0,   165,   137,     0,     0,     0,    99,   100,     0,
       0,     0,     0,   351,     0,   139,     0,   140,   134,   135,
       0,   165,   137,     0,     0,     0,    99,   100,     0,     0,
       0,     0,     0,     0,   139,     0,   140,     0,   242,   134,
     135,     0,   372,   137,     0,    99,   100,     0,     0,     0,
     138,     0,     0,     0,     0,   139,     0,   140,   134,   135,
       0,   165,   137,     0,     0,     0,    99,   100,     0,     0,
       0,     0,     0,     0,   139,     0,   140,   134,   135,     0,
     400,   137,     0,     0,     0,    99,   100,     0,     0,     0,
       0,     0,     0,   139,     0,   140,   134,   135,     0,   412,
     137,     0,     0,     0,    99,   100,     0,     0,     0,     0,
       0,     0,   139,     0,   140,     0,     0,     0,     0,     0,
       0,     0,     0,    99,   100
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-327)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       5,     6,    93,   153,   159,    75,   200,    71,     3,   209,
      57,   278,    75,   163,    15,   179,    75,    96,    23,    41,
      90,    91,    27,    93,    71,    88,    31,    90,    91,    88,
      93,    90,    91,    91,    93,     3,    41,    95,   321,   118,
      45,    41,    47,    48,    91,   209,    38,     3,   175,   332,
      51,    46,   106,   132,   108,    60,    17,   136,    53,    15,
     260,   328,   132,    11,   128,     3,   193,     3,     6,     3,
       6,    41,    41,    41,   400,    45,   106,    69,   132,   273,
      28,   128,    50,    44,     5,    41,   412,     3,   215,    81,
      82,    47,    48,   360,   148,   149,   154,   102,   381,    44,
     179,   131,     3,    41,    41,    41,    44,   390,    44,    65,
      66,    49,   159,    47,    48,   242,    34,     3,   148,    49,
     178,   179,     3,   181,    45,    41,   217,     3,   182,   192,
     209,    49,   195,   192,   334,   127,   195,   167,   196,    57,
      41,   232,   292,   213,   316,    42,     5,   311,   312,   321,
     220,   209,   307,    12,   208,    41,   210,   220,   216,   213,
     332,   220,    43,    51,   222,    41,    47,    48,     3,   178,
     179,    41,    42,   231,    62,     3,   326,   235,    52,   270,
      15,   353,    34,   237,    58,     0,    45,   314,   315,   316,
      46,     6,     7,    63,    50,    49,    42,    49,    52,    51,
     209,    16,   260,    57,    58,    57,    41,    22,    44,   381,
     264,    38,    47,    48,    41,    42,    51,     3,   390,    47,
      48,    49,    63,     0,   374,    52,   353,   285,     5,    57,
      65,    66,   286,     3,    41,    34,   306,    41,    42,    47,
      55,   320,    50,   306,   302,    44,    50,   306,    63,    64,
      49,   330,    51,   311,   312,   334,   383,    43,    57,    42,
     307,    47,    48,    49,    34,    51,    41,    42,   395,   339,
      49,   398,    58,    43,    49,    61,   339,    47,    48,    49,
     339,    51,   409,    55,   411,    34,   344,    57,     6,     7,
      46,    63,    64,   298,    49,    44,    13,    53,    16,     9,
      49,   306,    57,    13,    22,    34,    35,    17,    57,    19,
      45,   316,    22,    23,    24,    25,    26,    27,    49,    41,
      49,    38,    39,    45,    41,    42,    41,    44,    57,    41,
      42,    41,    49,    44,   339,    46,   341,    54,    50,    56,
      41,    51,    59,    60,    47,    55,    21,    50,    65,    66,
      41,    46,    47,    63,    64,    65,    66,     9,    53,    46,
      47,    13,    55,    41,    57,    17,    53,    19,    41,    42,
      22,    23,    24,    25,    26,    27,    90,    91,    38,    93,
      47,    41,   192,    50,    45,   195,    47,    41,    45,    41,
      47,    13,   397,    45,     9,    91,    51,    93,    13,    51,
      46,    47,    17,    50,    19,   410,    57,    22,    23,    24,
      46,    47,    27,    65,    66,    57,    38,    39,    50,    41,
      42,    49,    44,    46,    47,    44,    41,    49,    46,    47,
      45,    41,    54,    34,    56,    34,    51,    46,    47,    55,
      28,    55,    55,    65,    66,    48,    41,    41,    50,    21,
      65,    66,    38,    39,    52,    41,    42,    41,    44,    45,
      52,    52,    51,     3,    46,    58,    49,     3,    54,    55,
      56,    38,    39,    58,    41,    42,    50,    63,    64,    65,
      66,    50,    49,     3,    51,    41,    49,    54,     3,    56,
      38,    39,    52,    41,    42,    62,    55,    47,    65,    66,
      44,    49,    44,    51,    47,    52,    54,    52,    56,    38,
      39,    45,    41,    42,    62,    47,    47,    65,    66,    41,
      49,     3,    50,     3,     3,    54,    47,    56,    58,    47,
      59,    60,    58,    38,     5,   237,    65,    66,    38,    39,
      56,    41,    42,   214,    38,    39,   127,    41,    42,    32,
      75,   158,    52,   303,    54,    49,    56,    71,    58,   198,
      54,   158,    56,   198,   220,    65,    66,   320,    -1,    63,
      -1,    65,    66,    38,    39,    -1,    41,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    54,
      -1,    56,    38,    39,    -1,    41,    42,    62,    44,    45,
      65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,
      56,    38,    39,    -1,    41,    42,    -1,    -1,    -1,    65,
      66,    -1,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,
      38,    39,    -1,    41,    42,    -1,    -1,    -1,    65,    66,
      -1,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,    38,
      39,    -1,    41,    42,    -1,    -1,    -1,    65,    66,    -1,
      -1,    -1,    -1,    52,    -1,    54,    -1,    56,    38,    39,
      -1,    41,    42,    -1,    -1,    -1,    65,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    56,    -1,    58,    38,
      39,    -1,    41,    42,    -1,    65,    66,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    54,    -1,    56,    38,    39,
      -1,    41,    42,    -1,    -1,    -1,    65,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    56,    38,    39,    -1,
      41,    42,    -1,    -1,    -1,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    56,    38,    39,    -1,    41,
      42,    -1,    -1,    -1,    65,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    66
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
      95,   103,    41,    13,    38,    39,    41,    42,    49,    54,
      56,    59,    60,    90,    91,    95,   101,   102,   103,   105,
     107,   136,   138,   139,   142,   111,   112,   113,   114,   136,
     138,    41,   138,   139,    41,    41,    95,   103,   105,   136,
       3,    43,    47,    48,    49,    51,    58,    61,    93,    94,
      96,    97,   146,    38,    41,    42,    52,     3,    41,    41,
     160,    47,    57,    93,    96,    57,    93,    21,   129,   130,
     131,   132,   146,    50,    50,    82,    86,    15,    41,    93,
     105,   146,   152,    41,    34,    46,    53,    55,   113,   125,
     126,   136,     5,    12,    45,   115,   116,   122,   115,   122,
     111,    55,    55,   125,    47,   134,    48,    41,    50,    38,
      41,    42,    58,   107,    41,    41,   136,   151,    41,    62,
      91,   136,   146,   150,   151,    63,    98,    99,   100,   136,
      93,    52,    52,    52,    41,    95,   104,   107,   104,   136,
      17,   125,   130,   131,    21,   132,    51,    93,    41,    62,
      91,   136,   146,   150,   151,    93,     3,    38,    41,   102,
     107,   136,   139,    25,    26,    45,    89,   127,   128,    50,
     143,   117,   118,   120,   136,    58,   121,   136,   139,   135,
     136,    93,    94,   107,    58,    51,    44,   148,   158,   159,
      49,     3,    50,    47,   136,   150,   139,     3,    41,   159,
      49,     3,     3,   136,    93,   125,   160,   119,   136,   121,
      47,   128,   160,   111,    55,    47,    91,   136,    91,   136,
      52,    52,   107,    44,    45,   107,   147,   148,   149,   160,
      47,   146,   152,   147,   125,    52,   159,   147,   146,   150,
      47,   160,    41,   136,   140,    47,    47,    47,    47,    52,
      45,    47,    45,    47,    41,   157,   159,     3,    50,     3,
       3,    35,   125,   147,   107,    58,    45,    47,    47,   147,
      41,   107,   160,   107,   158,    41,    45,    47,    50,    58,
      47,    38,    41,   107,   160,   107,   158
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