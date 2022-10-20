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
#define YYLAST   685

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  72
/* YYNRULES -- Number of rules.  */
#define YYNRULES  192
/* YYNRULES -- Number of states.  */
#define YYNSTATES  361

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
      23,    26,    29,    35,    39,    44,    50,    53,    55,    57,
      61,    64,    66,    68,    70,    72,    74,    76,    78,    80,
      82,    84,    86,    88,    90,    95,   101,   106,   110,   114,
     120,   127,   131,   136,   141,   145,   150,   154,   158,   163,
     167,   174,   181,   187,   192,   197,   201,   205,   211,   215,
     218,   220,   226,   232,   234,   240,   246,   251,   254,   257,
     261,   263,   265,   268,   271,   274,   277,   280,   285,   290,
     294,   298,   303,   305,   307,   309,   311,   313,   315,   317,
     319,   321,   324,   327,   333,   337,   340,   343,   346,   348,
     351,   354,   357,   360,   364,   367,   370,   373,   377,   379,
     381,   383,   385,   388,   392,   394,   398,   401,   404,   406,
     410,   413,   415,   420,   422,   425,   428,   431,   435,   437,
     438,   442,   446,   448,   452,   454,   456,   457,   459,   461,
     463,   464,   466,   469,   477,   481,   483,   485,   490,   499,
     506,   510,   514,   518,   521,   523,   526,   528,   532,   536,
     539,   543,   545,   549,   557,   567,   574,   580,   586,   592,
     597,   601,   603,   608,   613,   617,   619,   623,   630,   635,
     643,   648,   657,   659,   661,   665,   667,   670,   672,   674,
     676,   683,   689
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      73,     0,    -1,    73,    74,   140,    -1,    74,   140,    -1,
      73,   140,    -1,    75,    -1,    76,    -1,    77,    -1,   132,
      -1,   141,    -1,    16,    41,    -1,     7,    42,    -1,     7,
      49,   140,    91,    50,    -1,     7,    41,    42,    -1,     6,
      41,    86,    78,    -1,     6,    41,    86,    90,    78,    -1,
      80,    79,    -1,    45,    -1,    44,    -1,    80,    81,   140,
      -1,    80,   140,    -1,    82,    -1,   120,    -1,    95,    -1,
      93,    -1,    94,    -1,   107,    -1,   125,    -1,    86,    -1,
     116,    -1,   123,    -1,   113,    -1,   132,    -1,   139,    -1,
      13,    41,    84,   115,    -1,    13,    41,    84,   115,     3,
      -1,    13,    41,    84,    83,    -1,    41,    85,   115,    -1,
      41,    84,   115,    -1,    41,    85,   125,     3,   126,    -1,
      13,    41,    84,   125,     3,   126,    -1,    41,    85,    83,
      -1,    41,   125,    84,   115,    -1,    13,    41,    84,   129,
      -1,    41,    85,   129,    -1,    41,   125,    84,   129,    -1,
      41,    85,   130,    -1,    41,    84,   130,    -1,    13,    41,
      84,   130,    -1,    13,    41,   131,    -1,    41,    85,    62,
      49,   131,    50,    -1,    13,    41,    41,    84,    41,   138,
      -1,    13,    41,    84,    41,   138,    -1,    41,    85,    41,
     138,    -1,    41,   139,    84,    92,    -1,    90,    84,   115,
      -1,    13,    41,    90,    -1,    13,    41,    90,    84,   115,
      -1,   115,    53,   115,    -1,     3,    48,    -1,    48,    -1,
      47,    41,    84,   115,    47,    -1,    47,    41,    84,    83,
      47,    -1,    43,    -1,    47,    41,    85,   115,    47,    -1,
      47,    41,    85,    83,    47,    -1,    41,    49,   114,    50,
      -1,    89,    86,    -1,    49,    50,    -1,    88,    34,    88,
      -1,    41,    -1,    38,    -1,    41,    57,    -1,    65,    41,
      -1,    65,     3,    -1,    66,    41,    -1,    42,   140,    -1,
      42,    71,    42,   140,    -1,    42,    67,    42,   140,    -1,
      41,    42,   140,    -1,    91,    42,   140,    -1,    91,    41,
      42,   140,    -1,    38,    -1,    39,    -1,    41,    -1,    42,
      -1,    54,    -1,    56,    -1,    86,    -1,    87,    -1,    90,
      -1,    24,    41,    -1,    41,    58,    -1,    19,   117,    55,
     115,    96,    -1,    19,   115,    96,    -1,    19,    96,    -1,
      97,   106,    -1,    98,   106,    -1,    44,    -1,    44,   140,
      -1,    97,    99,    -1,    97,   100,    -1,    98,    99,    -1,
       5,   104,   105,    -1,    12,   105,    -1,   102,   103,    -1,
     115,    47,    -1,   102,   115,    47,    -1,   115,    -1,   101,
      -1,   115,    -1,    58,    -1,    58,    63,    -1,   105,    81,
     140,    -1,    45,    -1,   108,   109,   111,    -1,   108,   109,
      -1,   108,   111,    -1,   108,    -1,    17,   118,    78,    -1,
     109,   110,    -1,   110,    -1,    21,    17,   118,    78,    -1,
     112,    -1,   111,   112,    -1,    21,    78,    -1,    27,   114,
      -1,   114,    47,   115,    -1,   115,    -1,    -1,   115,    46,
      92,    -1,   121,   115,   122,    -1,    92,    -1,    41,    61,
      41,    -1,    82,    -1,    86,    -1,    -1,    83,    -1,    59,
      -1,    60,    -1,    -1,   115,    -1,    41,    35,    -1,    23,
     117,    55,   118,    55,   119,    78,    -1,    23,   118,    78,
      -1,    49,    -1,    50,    -1,    13,    41,   125,     3,    -1,
      13,    41,   125,     3,    84,   125,     3,   126,    -1,    13,
      41,   125,     3,    84,   129,    -1,    51,    38,    52,    -1,
      51,    41,    52,    -1,    51,    42,    52,    -1,    51,    52,
      -1,   124,    -1,   124,   125,    -1,   127,    -1,   127,    47,
     126,    -1,    44,   128,    45,    -1,    44,    45,    -1,    44,
     126,    45,    -1,    92,    -1,   128,    47,    92,    -1,    62,
      49,   125,     3,    47,    92,    50,    -1,    62,    49,   125,
       3,    47,    92,    47,    38,    92,    -1,    41,    51,    92,
      58,    92,    52,    -1,    41,    51,    58,    92,    52,    -1,
      41,    51,    92,    58,    52,    -1,    15,    51,     3,    52,
       3,    -1,   133,   134,   140,   135,    -1,    22,    41,    28,
      -1,    44,    -1,   134,   140,    41,     3,    -1,   134,   140,
      41,    41,    -1,   134,   140,    41,    -1,    45,    -1,    41,
      58,    92,    -1,   136,    47,   140,    41,    58,    92,    -1,
      41,    58,    41,   137,    -1,   136,    47,   140,    41,    58,
      41,   137,    -1,    44,   140,   136,    45,    -1,    44,   140,
     136,    47,   140,    45,    47,   140,    -1,   127,    -1,   137,
      -1,   137,    47,   138,    -1,    89,    -1,    89,   139,    -1,
      55,    -1,    63,    -1,    64,    -1,    22,    41,    11,   142,
     140,   143,    -1,    44,   140,    41,    49,    50,    -1,    45,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    16,    16,    17,    18,    21,    22,    23,    24,    25,
      28,    31,    32,    33,    36,    37,    41,    44,    47,    48,
      49,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    93,    96,
      97,    98,    99,   101,   102,   103,   106,   107,   108,   111,
     114,   115,   118,   121,   122,   123,   126,   127,   128,   129,
     130,   131,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   145,   148,   151,   152,   153,   156,   157,   161,   162,
     163,   168,   169,   172,   175,   179,   182,   183,   186,   190,
     191,   194,   195,   196,   201,   205,   206,   207,   208,   211,
     215,   216,   220,   224,   225,   228,   231,   234,   235,   236,
     239,   240,   241,   244,   247,   248,   249,   252,   253,   254,
     255,   258,   259,   262,   263,   266,   269,   272,   273,   274,
     277,   278,   279,   280,   283,   284,   287,   288,   290,   291,
     292,   295,   296,   299,   300,   303,   304,   305,   308,   311,
     314,   317,   318,   319,   320,   323,   326,   327,   328,   329,
     332,   333,   334,   337,   338,   341,   342,   345,   346,   347,
     350,   353,   356
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
  "'/'", "$accept", "START", "GLOBAL", "PACKAGE", "IMPORT", "FUNC", "BODY",
  "BODY_END", "BODY_START", "BODY_FILLING", "VAR", "BOOLEAN", "ASSIGNMENT",
  "SHORT_ASSIGN", "FUNC_CALL", "SHIFT", "SHIFT_AC", "METHOD", "POINTER",
  "PARAM_IMPORT", "VALUE", "GOTO", "LABEL", "SWITCH", "SWITCH_BODY",
  "SWITCH_BODY_START", "SWITCH_BODY_START_WITH_DEFAULT", "CASE", "DEFAULT",
  "MULTIPLE_ARG", "FIRST_PART", "SECOND_PART", "CASE_STATEMENT",
  "CASE_BODY", "SWITCH_BODY_END", "IF", "IF_FIRST", "MULTY_ELSEIF_SECOND",
  "ELSEIF_SECOND", "MULTY_ELSE_THIRD", "ELSE_THIRD", "RETURN", "PARAM",
  "EXPR", "SHORT_EXPR", "INIT_STATE", "CONDITION", "POST_STATE", "FOR",
  "EXPR_START", "EXPR_END", "ARRAY_BODY", "ARRAY_INDEX", "MULTI_AR",
  "PLENTY", "PLENTY_OLD", "ENUM", "MAKE", "SLICE", "MAPS", "STRUCT",
  "STRUCT_START", "STRUCT_BODY", "STRUCT_END", "STRUCT_ENUM",
  "STRUCT_FIELD", "ST_EMBEDDED", "ACCESS_FIELDS", "END_SYMBOLS",
  "INTERFACE", "INT_BODY", "INT_END", YY_NULL
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
      75,    76,    76,    76,    77,    77,    78,    79,    80,    80,
      80,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    83,    84,
      84,    84,    84,    85,    85,    85,    86,    86,    86,    87,
      88,    88,    89,    90,    90,    90,    91,    91,    91,    91,
      91,    91,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    93,    94,    95,    95,    95,    96,    96,    97,    97,
      97,    98,    98,    99,   100,   101,   102,   102,   103,   104,
     104,   105,   105,   105,   106,   107,   107,   107,   107,   108,
     109,   109,   110,   111,   111,   112,   113,   114,   114,   114,
     115,   115,   115,   116,   117,   117,   117,   118,   118,   118,
     118,   119,   119,   120,   120,   121,   122,   123,   123,   123,
     124,   124,   124,   124,   125,   125,   126,   126,   127,   127,
     127,   128,   128,   129,   129,   130,   130,   130,   131,   132,
     133,   134,   134,   134,   134,   135,   136,   136,   136,   136,
     137,   137,   137,   138,   138,   139,   139,   140,   140,   140,
     141,   142,   143
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     2,     1,     1,     1,     1,     1,
       2,     2,     5,     3,     4,     5,     2,     1,     1,     3,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     5,     4,     3,     3,     5,
       6,     3,     4,     4,     3,     4,     3,     3,     4,     3,
       6,     6,     5,     4,     4,     3,     3,     5,     3,     2,
       1,     5,     5,     1,     5,     5,     4,     2,     2,     3,
       1,     1,     2,     2,     2,     2,     2,     4,     4,     3,
       3,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     5,     3,     2,     2,     2,     1,     2,
       2,     2,     2,     3,     2,     2,     2,     3,     1,     1,
       1,     1,     2,     3,     1,     3,     2,     2,     1,     3,
       2,     1,     4,     1,     2,     2,     2,     3,     1,     0,
       3,     3,     1,     3,     1,     1,     0,     1,     1,     1,
       0,     1,     2,     7,     3,     1,     1,     4,     8,     6,
       3,     3,     3,     2,     1,     2,     1,     3,     3,     2,
       3,     1,     3,     7,     9,     6,     5,     5,     5,     4,
       3,     1,     4,     4,     3,     1,     3,     6,     4,     7,
       4,     8,     1,     1,     3,     1,     2,     1,     1,     1,
       6,     5,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     5,     6,     7,
       8,     0,     9,     0,     0,    11,     0,    10,     0,     1,
     187,   188,   189,     0,     4,     3,   171,     0,     0,     0,
       0,     0,    13,     0,     0,   170,     2,     0,   129,    72,
      68,    18,     0,     0,    14,     0,     0,    67,     0,     0,
       0,     0,     0,   174,   175,   169,    82,    83,    84,    85,
     145,    86,    87,    88,    89,     0,    90,   132,     0,   128,
       0,    74,    73,    75,     0,   140,   136,     0,   136,     0,
     129,     0,    17,     0,    16,     0,    21,    28,   185,     0,
      24,    25,    23,    26,   118,    31,    29,    22,    30,   154,
      27,    32,    33,    20,    15,     0,     0,     0,    76,     0,
       0,    12,     0,     0,   172,   173,     0,     0,    66,     0,
       0,     0,   138,   139,   137,     0,     0,     0,    84,    98,
     134,    88,    90,    95,     0,     0,     0,     0,     0,     0,
       0,    91,   126,     0,     0,    63,     0,    60,    92,     0,
       0,     0,   185,     0,     0,     0,     0,     0,   153,    19,
     186,     0,     0,     0,   116,   121,   117,   123,   155,    79,
       0,     0,     0,    80,     0,   192,   190,    71,    70,    69,
     127,   130,   146,   131,     0,     0,     0,    56,     0,    49,
       0,   119,     0,    99,     0,     0,   114,   100,   101,    96,
     102,    97,    94,     0,   140,   144,    59,     0,   133,    84,
      38,    47,    84,     0,    41,    37,     0,    44,    46,     0,
       0,   150,   151,   152,     0,    55,   140,   125,   120,   115,
       0,   124,    78,    77,    81,     0,     0,     0,    84,     0,
      36,    34,     0,    43,    48,     0,   147,    58,   109,     0,
       0,   110,   111,   104,     0,     0,     0,     0,     0,     0,
     182,   183,    53,     0,     0,    42,    45,    54,     0,   191,
       0,     0,    52,     0,    35,     0,    57,     0,   105,   108,
     103,   106,   112,     0,    93,     0,     0,     0,     0,     0,
       0,     0,     0,   159,   161,     0,   156,     0,     0,     0,
       0,     0,    39,   122,     0,    51,    40,     0,   149,   107,
     113,    84,   141,     0,    62,    61,    65,    64,     0,     0,
     160,     0,   158,     0,     0,     0,   184,     0,    50,   168,
       0,   142,   143,   166,   167,     0,   157,   162,     0,   180,
       0,     0,   148,   165,    84,   176,     0,     0,   178,     0,
       0,     0,   163,     0,     0,     0,    84,   177,   181,   164,
     179
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,     9,   227,    84,    45,   283,
      86,   124,   150,   151,    63,    64,    65,    31,    66,    50,
      67,    90,    91,    92,   133,   134,   135,   197,   198,   248,
     249,   278,   250,   253,   199,    93,    94,   164,   165,   166,
     167,    95,    68,   125,    96,   137,   126,   313,    97,    70,
     183,    98,    99,   100,   295,   260,   297,   217,   211,   189,
     101,    11,    27,    55,   325,   261,   262,   102,    24,    12,
      52,   176
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -228
static const yytype_int16 yypact[] =
{
     245,   -10,   182,    19,    64,   155,   209,  -228,  -228,  -228,
    -228,    38,  -228,   147,    68,  -228,   209,  -228,   120,  -228,
    -228,  -228,  -228,   209,  -228,  -228,  -228,   209,   -19,    74,
      92,   147,  -228,   281,    90,  -228,  -228,   133,   524,  -228,
    -228,  -228,    13,   104,  -228,   286,   112,  -228,   121,   105,
     165,   209,   209,    22,  -228,  -228,   139,  -228,    81,  -228,
      74,  -228,  -228,  -228,  -228,   151,  -228,  -228,   100,   145,
     524,  -228,  -228,  -228,   164,   398,   350,   179,   315,   186,
     524,   239,  -228,   237,  -228,   209,  -228,  -228,   147,    26,
    -228,  -228,  -228,  -228,   241,  -228,  -228,  -228,  -228,   219,
    -228,  -228,  -228,  -228,  -228,   209,   195,   234,  -228,   251,
     209,  -228,   240,   253,  -228,  -228,   216,   524,  -228,   543,
     210,   218,  -228,  -228,  -228,    37,   112,   261,   146,   209,
    -228,   265,    26,  -228,    23,     7,   248,   277,   278,   284,
     112,  -228,   289,   285,   287,  -228,   297,  -228,  -228,   299,
     562,   160,   301,    26,    26,   291,   293,   294,  -228,  -228,
    -228,   306,   524,    -3,   241,  -228,   334,  -228,  -228,  -228,
     209,   209,   209,  -228,   309,  -228,  -228,  -228,  -228,  -228,
     145,  -228,  -228,  -228,   310,    26,   427,    26,   357,  -228,
     524,  -228,    78,  -228,   524,   304,  -228,  -228,  -228,  -228,
    -228,  -228,  -228,   524,   398,  -228,  -228,    54,  -228,    84,
     145,  -228,   267,   316,  -228,    37,   363,  -228,  -228,   465,
     543,  -228,  -228,  -228,    26,   145,   398,  -228,  -228,   334,
     112,  -228,  -228,  -228,  -228,   317,   365,   329,   267,   323,
    -228,    31,   373,  -228,  -228,   524,    26,   145,  -228,   524,
     304,   279,   322,   360,   248,   331,   524,   524,   484,   379,
    -228,   343,  -228,    34,   349,   145,  -228,  -228,   112,  -228,
     326,   351,  -228,   219,  -228,   349,   145,    41,  -228,   283,
     360,  -228,  -228,   209,  -228,   581,   353,   183,   355,   197,
     543,   338,   446,  -228,  -228,   352,   356,   270,   364,   351,
     395,   358,  -228,  -228,   404,  -228,  -228,   407,  -228,  -228,
    -228,    60,   145,   112,  -228,  -228,  -228,  -228,   361,   505,
    -228,   349,  -228,   543,   354,   274,  -228,   367,  -228,  -228,
     349,  -228,  -228,  -228,  -228,   370,  -228,  -228,   600,  -228,
     209,   543,  -228,  -228,   214,  -228,   250,   257,  -228,   369,
     372,   391,  -228,   619,   209,   543,   214,  -228,  -228,  -228,
    -228
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -228,  -228,   425,  -228,  -228,  -228,   -28,  -228,  -228,   386,
     236,  -128,   -65,   225,   -12,  -228,   325,   -41,   -25,  -228,
    -106,  -228,  -228,  -228,  -133,  -228,  -228,   303,  -228,  -228,
    -228,  -228,  -228,   196,   313,  -228,  -228,  -228,   292,   295,
    -159,  -228,   371,   -11,  -228,   375,   -72,  -228,  -228,  -228,
    -228,  -228,  -228,   -73,  -214,  -184,  -228,  -177,  -115,   187,
      32,  -228,  -228,  -228,  -228,  -174,  -227,   -66,    -6,  -228,
    -228,  -228
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -141
static const yytype_int16 yytable[] =
{
      25,    30,    44,   202,    88,    46,   140,   231,   153,   243,
      33,   272,   194,   181,   226,   154,    71,    36,   104,    47,
      89,    37,   160,   214,   162,   114,   168,    69,   194,   143,
      38,    13,    10,    87,   274,   195,   218,    10,    39,   103,
     152,    41,   266,   108,   305,   112,   113,    88,   188,   184,
     302,   132,   196,   132,    72,   153,   186,   143,   240,   120,
      17,   306,   154,   115,   131,   136,   131,   162,   196,    69,
     231,   244,   326,   161,   147,   296,    47,   119,   216,   159,
     296,   143,    26,   119,   190,    83,   160,   152,   219,   220,
     190,   296,    83,   184,   -70,   331,   187,   145,   191,   169,
     308,   146,   147,   239,   173,    18,   180,   336,   296,    38,
      32,   152,   205,   242,   267,   -70,   342,    39,   -70,   185,
     237,   284,   245,   193,    40,   161,   147,   186,   286,   288,
      38,    34,   255,    38,    51,   258,    41,   296,    39,   210,
     215,    39,   256,    42,    43,    73,   296,   117,    35,   143,
     118,   225,   291,   294,   268,    19,    41,    42,    43,   256,
      20,     1,     2,   105,   232,   233,   234,   187,    21,    22,
     348,     3,   106,   -71,    53,   241,   107,     4,    54,   247,
     -70,   277,   360,   251,   318,   116,   294,   144,    28,   145,
     300,   119,   254,   146,   147,    38,    29,    83,    56,    57,
     300,   212,    59,    39,   307,   121,   109,   110,   265,    60,
      20,    83,    88,   335,    61,   111,    62,   337,    21,    22,
     138,   143,   213,    14,    15,    42,    43,   141,    89,   119,
     315,    16,   345,   184,   276,   347,   190,   170,   279,    88,
     303,    87,   143,   119,   317,   287,   289,   357,   -70,   359,
     190,     1,     2,   298,   177,    89,   119,   178,   259,   185,
     182,     3,   163,    38,    20,   161,   147,     4,    87,    83,
      83,    39,    21,    22,   312,   155,   171,   310,   156,   157,
     144,   174,   145,    42,    43,   332,   146,   147,    38,   158,
      83,   349,   129,   172,   119,   350,    39,   148,   175,    74,
     149,   -70,   192,    75,   351,    76,    35,   352,    77,    78,
      79,   259,   130,    80,   130,   322,    38,   323,   258,   339,
    -135,   340,    48,    49,    39,   119,   281,    81,   127,   119,
     309,    82,   203,   206,   346,    29,   117,    83,   207,   204,
     208,    20,   144,   221,    39,   222,   223,   224,   358,    21,
      22,    42,    43,    56,    57,   230,   128,    59,   235,  -140,
     246,   236,   252,   127,    60,   263,   264,   269,   270,    61,
     271,    62,   273,    74,   122,   123,   275,    75,   304,    76,
      42,    43,    77,    78,    79,   282,   285,    80,    56,    57,
     299,   128,    59,   292,   129,   259,   319,   320,   327,    60,
     314,    81,   316,   321,    61,   324,    62,   329,   328,    29,
     330,    83,   338,   333,   341,    42,    43,    56,    57,   354,
      58,    59,   343,   292,   293,    42,    43,   353,    29,   355,
      23,    85,   257,    61,    20,    62,    56,    57,   200,    58,
      59,   179,    21,    22,    42,    43,   280,    60,   201,     0,
     301,   142,    61,   139,    62,     0,   228,   122,   123,   229,
       0,     0,     0,    42,    43,    56,    57,     0,   238,    59,
       0,     0,     0,     0,     0,     0,    60,     0,    83,     0,
       0,    61,     0,    62,    56,    57,     0,    58,    59,   239,
     292,   293,    42,    43,     0,    29,     0,     0,     0,     0,
      61,     0,    62,    56,    57,     0,    58,    59,     0,     0,
       0,    42,    43,     0,    60,     0,     0,     0,     0,    61,
       0,    62,    56,    57,     0,    58,    59,   239,     0,     0,
      42,    43,     0,    29,     0,     0,     0,     0,    61,     0,
      62,     0,   290,    56,    57,     0,    58,    59,     0,    42,
      43,     0,     0,     0,    29,     0,     0,   334,     0,    61,
       0,    62,    56,    57,     0,    58,    59,     0,     0,     0,
      42,    43,     0,    60,     0,     0,     0,     0,    61,     0,
      62,    56,    57,     0,    58,    59,     0,     0,     0,    42,
      43,     0,    29,     0,     0,     0,     0,    61,     0,    62,
      56,    57,     0,   209,    59,     0,     0,     0,    42,    43,
       0,    60,     0,     0,     0,     0,    61,     0,    62,    56,
      57,     0,   311,    59,     0,     0,     0,    42,    43,     0,
      60,     0,     0,     0,     0,    61,     0,    62,    56,    57,
       0,   344,    59,     0,     0,     0,    42,    43,     0,    29,
       0,     0,     0,     0,    61,     0,    62,    56,    57,     0,
     356,    59,     0,     0,     0,    42,    43,     0,    29,     0,
       0,     0,     0,    61,     0,    62,     0,     0,     0,     0,
       0,     0,     0,     0,    42,    43
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-228)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       6,    13,    30,   136,    45,    30,    78,   166,    81,   186,
      16,   238,     5,   119,    17,    81,     3,    23,    46,    31,
      45,    27,    88,   151,    89,     3,    99,    38,     5,     3,
      49,    41,     0,    45,     3,    12,   151,     5,    57,    45,
      81,    44,   219,    49,   271,    51,    52,    88,   121,    15,
     264,    76,    45,    78,    41,   128,   121,     3,   186,    70,
      41,   275,   128,    41,    76,    76,    78,   132,    45,    80,
     229,   186,   299,    47,    48,   259,    88,    46,   151,    85,
     264,     3,    44,    46,    53,    51,   152,   128,   153,   154,
      53,   275,    51,    15,    34,    35,   121,    43,   126,   105,
     277,    47,    48,    62,   110,    41,   117,   321,   292,    49,
      42,   152,   140,   186,   220,    34,   330,    57,    34,    41,
     185,   254,   187,   129,    50,    47,    48,   192,   256,   257,
      49,    11,   204,    49,    44,    51,    44,   321,    57,   150,
     151,    57,   207,    65,    66,    41,   330,    47,    28,     3,
      50,   162,   258,   259,   226,     0,    44,    65,    66,   224,
      55,     6,     7,    42,   170,   171,   172,   192,    63,    64,
     344,    16,    67,    34,    41,   186,    71,    22,    45,   190,
      34,   246,   356,   194,   290,    34,   292,    41,    41,    43,
     263,    46,   203,    47,    48,    49,    49,    51,    38,    39,
     273,    41,    42,    57,   277,    41,    41,    42,   219,    49,
      55,    51,   253,   319,    54,    50,    56,   323,    63,    64,
      41,     3,    62,    41,    42,    65,    66,    41,   253,    46,
      47,    49,   338,    15,   245,   341,    53,    42,   249,   280,
     268,   253,     3,    46,    47,   256,   257,   353,    34,   355,
      53,     6,     7,   259,    38,   280,    46,    41,    44,    41,
      50,    16,    21,    49,    55,    47,    48,    22,   280,    51,
      51,    57,    63,    64,   285,    38,    42,   283,    41,    42,
      41,    41,    43,    65,    66,   313,    47,    48,    49,    52,
      51,    41,    44,    42,    46,    45,    57,    58,    45,    13,
      61,    34,    41,    17,    47,    19,    28,    50,    22,    23,
      24,    44,    76,    27,    78,    45,    49,    47,    51,    45,
      55,    47,    41,    42,    57,    46,    47,    41,    13,    46,
      47,    45,    55,    48,   340,    49,    47,    51,    41,    55,
      41,    55,    41,    52,    57,    52,    52,    41,   354,    63,
      64,    65,    66,    38,    39,    21,    41,    42,    49,    44,
       3,    51,    58,    13,    49,    49,     3,    50,     3,    54,
      41,    56,    49,    13,    59,    60,     3,    17,    52,    19,
      65,    66,    22,    23,    24,    63,    55,    27,    38,    39,
      47,    41,    42,    44,    44,    44,    58,    45,     3,    49,
      47,    41,    47,    47,    54,    41,    56,     3,    50,    49,
       3,    51,    58,    52,    47,    65,    66,    38,    39,    47,
      41,    42,    52,    44,    45,    65,    66,    58,    49,    38,
       5,    45,   207,    54,    55,    56,    38,    39,   135,    41,
      42,   116,    63,    64,    65,    66,   250,    49,   135,    -1,
     263,    80,    54,    78,    56,    -1,   164,    59,    60,   164,
      -1,    -1,    -1,    65,    66,    38,    39,    -1,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    51,    -1,
      -1,    54,    -1,    56,    38,    39,    -1,    41,    42,    62,
      44,    45,    65,    66,    -1,    49,    -1,    -1,    -1,    -1,
      54,    -1,    56,    38,    39,    -1,    41,    42,    -1,    -1,
      -1,    65,    66,    -1,    49,    -1,    -1,    -1,    -1,    54,
      -1,    56,    38,    39,    -1,    41,    42,    62,    -1,    -1,
      65,    66,    -1,    49,    -1,    -1,    -1,    -1,    54,    -1,
      56,    -1,    58,    38,    39,    -1,    41,    42,    -1,    65,
      66,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    54,
      -1,    56,    38,    39,    -1,    41,    42,    -1,    -1,    -1,
      65,    66,    -1,    49,    -1,    -1,    -1,    -1,    54,    -1,
      56,    38,    39,    -1,    41,    42,    -1,    -1,    -1,    65,
      66,    -1,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,
      38,    39,    -1,    41,    42,    -1,    -1,    -1,    65,    66,
      -1,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,    38,
      39,    -1,    41,    42,    -1,    -1,    -1,    65,    66,    -1,
      49,    -1,    -1,    -1,    -1,    54,    -1,    56,    38,    39,
      -1,    41,    42,    -1,    -1,    -1,    65,    66,    -1,    49,
      -1,    -1,    -1,    -1,    54,    -1,    56,    38,    39,    -1,
      41,    42,    -1,    -1,    -1,    65,    66,    -1,    49,    -1,
      -1,    -1,    -1,    54,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    66
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,    16,    22,    73,    74,    75,    76,    77,
     132,   133,   141,    41,    41,    42,    49,    41,    41,     0,
      55,    63,    64,    74,   140,   140,    44,   134,    41,    49,
      86,    89,    42,   140,    11,    28,   140,   140,    49,    57,
      50,    44,    65,    66,    78,    80,    90,    86,    41,    42,
      91,    44,   142,    41,    45,   135,    38,    39,    41,    42,
      49,    54,    56,    86,    87,    88,    90,    92,   114,   115,
     121,     3,    41,    41,    13,    17,    19,    22,    23,    24,
      27,    41,    45,    51,    79,    81,    82,    86,    89,    90,
      93,    94,    95,   107,   108,   113,   116,   120,   123,   124,
     125,   132,   139,   140,    78,    42,    67,    71,   140,    41,
      42,    50,   140,   140,     3,    41,    34,    47,    50,    46,
     115,    41,    59,    60,    83,   115,   118,    13,    41,    44,
      82,    86,    90,    96,    97,    98,   115,   117,    41,   117,
     118,    41,   114,     3,    41,    43,    47,    48,    58,    61,
      84,    85,    89,   125,   139,    38,    41,    42,    52,   140,
     139,    47,    84,    21,   109,   110,   111,   112,   125,   140,
      42,    42,    42,   140,    41,    45,   143,    38,    41,    88,
     115,    92,    50,   122,    15,    41,    84,    90,   125,   131,
      53,    78,    41,   140,     5,    12,    45,    99,   100,   106,
      99,   106,    96,    55,    55,    78,    48,    41,    41,    41,
     115,   130,    41,    62,    83,   115,   125,   129,   130,    84,
      84,    52,    52,    52,    41,   115,    17,    78,   110,   111,
      21,   112,   140,   140,   140,    49,    51,    84,    41,    62,
      83,   115,   125,   129,   130,    84,     3,   115,   101,   102,
     104,   115,    58,   105,   115,   118,    84,    85,    51,    44,
     127,   137,   138,    49,     3,   115,   129,    92,   118,    50,
       3,    41,   138,    49,     3,     3,   115,    84,   103,   115,
     105,    47,    63,    81,    96,    55,    83,   115,    83,   115,
      58,    92,    44,    45,    92,   126,   127,   128,   140,    47,
     125,   131,   126,    78,    52,   138,   126,   125,   129,    47,
     140,    41,   115,   119,    47,    47,    47,    47,    92,    58,
      45,    47,    45,    47,    41,   136,   138,     3,    50,     3,
       3,    35,    78,    52,    52,    92,   126,    92,    58,    45,
      47,    47,   126,    52,    41,    92,   140,    92,   137,    41,
      45,    47,    50,    58,    47,    38,    41,    92,   140,    92,
     137
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
#line 1894 "y.tab.c"
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
#line 359 "..\\main\\golang.y"


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