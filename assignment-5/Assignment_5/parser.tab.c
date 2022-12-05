/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

#include <iostream>
#include <cstdlib>
#include <string>
#include <stdio.h>
#include <sstream>
#include "translator.h"
extern int yylex();
void yyerror(string s);
extern string Type;

using namespace std;

#line 84 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    AUTO = 259,
    ENUM = 260,
    RESTRICT = 261,
    UNSIGNED = 262,
    BREAK = 263,
    EXTERN = 264,
    RETURN = 265,
    VOID = 266,
    CASE = 267,
    FLOAT = 268,
    STRING_LITERAL = 269,
    SHORT = 270,
    VOLATILE = 271,
    CHAR = 272,
    FOR = 273,
    SIGNED = 274,
    WHILE = 275,
    CONST = 276,
    GOTO = 277,
    SIZEOF = 278,
    BOOL = 279,
    CONTINUE = 280,
    IF = 281,
    STATIC = 282,
    COMPLEX = 283,
    DEFAULT = 284,
    INLINE = 285,
    STRUCT = 286,
    IMAGINARY = 287,
    DO = 288,
    INT = 289,
    SWITCH = 290,
    DOUBLE = 291,
    LONG = 292,
    TYPEDEF = 293,
    ELSE = 294,
    REGISTER = 295,
    UNION = 296,
    CHARACTER_CONSTANT = 297,
    ENUMERATION_CONSTANT = 298,
    SQBRAOPEN = 299,
    SQBRACLOSE = 300,
    ROBRAOPEN = 301,
    ROBRACLOSE = 302,
    CURBRAOPEN = 303,
    CURBRACLOSE = 304,
    DOT = 305,
    ACC = 306,
    INC = 307,
    DEC = 308,
    AMP = 309,
    MUL = 310,
    ADD = 311,
    SUB = 312,
    NEG = 313,
    EXCLAIM = 314,
    DIV = 315,
    MODULO = 316,
    SHL = 317,
    SHR = 318,
    BITSHL = 319,
    BITSHR = 320,
    LTE = 321,
    GTE = 322,
    EQ = 323,
    NEQ = 324,
    BITXOR = 325,
    BITOR = 326,
    AND = 327,
    floatingConstant = 328,
    OR = 329,
    QUESTION = 330,
    COLON = 331,
    SEMICOLON = 332,
    DOTS = 333,
    ASSIGN = 334,
    STAREQ = 335,
    DIVEQ = 336,
    MODEQ = 337,
    PLUSEQ = 338,
    MINUSEQ = 339,
    SHLEQ = 340,
    SHREQ = 341,
    BINANDEQ = 342,
    BINXOREQ = 343,
    BINOREQ = 344,
    COMMA = 345,
    HASH = 346,
    integerConstant = 347,
    THEN = 348
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "parser.y"

  int intval;
  char* charval;
  int instr;
  sym* symp;
  symtype* symtp;
  expr* E;
  statement* S;
  array1* A;
  char unaryOperator;

#line 242 "parser.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  47
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1334

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  211
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  365

#define YYUNDEFTOK  2
#define YYMAXUTOK   348


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    96,    96,   107,   113,   115,   125,   133,   169,   172,
     184,   186,   188,   199,   210,   218,   230,   238,   251,   257,
     262,   267,   272,   277,   282,   290,   295,   304,   325,   335,
     345,   358,   361,   373,   387,   390,   400,   414,   418,   420,
     422,   426,   428,   432,   434,   443,   444,   460,   480,   481,
     499,   500,   518,   519,   537,   538,   556,   557,   574,   578,
     585,   586,   610,   611,   630,   637,   643,   651,   660,   662,
     664,   666,   668,   670,   672,   674,   676,   678,   680,   685,
     686,   694,   702,   704,   712,   714,   719,   720,   729,   731,
     733,   735,   740,   741,   742,   743,   744,   745,   746,   747,
     748,   749,   750,   751,   752,   756,   760,   764,   768,   775,
     779,   783,   787,   791,   798,   802,   809,   813,   820,   824,
     828,   835,   840,   848,   854,   860,   861,   863,   865,   888,
     910,   914,   918,   922,   926,   942,   946,   965,   975,   977,
     982,   986,   994,   998,  1006,  1012,  1019,  1020,  1033,  1047,
    1060,  1078,  1083,  1091,  1099,  1136,  1139,  1145,  1149,  1156,
    1160,  1167,  1171,  1178,  1182,  1189,  1196,  1201,  1205,  1213,
    1217,  1221,  1225,  1232,  1239,  1243,  1250,  1254,  1261,  1263,
    1264,  1270,  1271,  1272,  1276,  1277,  1278,  1282,  1283,  1287,
    1288,  1297,  1302,  1306,  1307,  1312,  1334,  1347,  1363,  1384,
    1385,  1386,  1387,  1393,  1402,  1403,  1407,  1408,  1412,  1413,
    1422,  1426
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "AUTO", "ENUM", "RESTRICT",
  "UNSIGNED", "BREAK", "EXTERN", "RETURN", "VOID", "CASE", "FLOAT",
  "STRING_LITERAL", "SHORT", "VOLATILE", "CHAR", "FOR", "SIGNED", "WHILE",
  "CONST", "GOTO", "SIZEOF", "BOOL", "CONTINUE", "IF", "STATIC", "COMPLEX",
  "DEFAULT", "INLINE", "STRUCT", "IMAGINARY", "DO", "INT", "SWITCH",
  "DOUBLE", "LONG", "TYPEDEF", "ELSE", "REGISTER", "UNION",
  "CHARACTER_CONSTANT", "ENUMERATION_CONSTANT", "SQBRAOPEN", "SQBRACLOSE",
  "ROBRAOPEN", "ROBRACLOSE", "CURBRAOPEN", "CURBRACLOSE", "DOT", "ACC",
  "INC", "DEC", "AMP", "MUL", "ADD", "SUB", "NEG", "EXCLAIM", "DIV",
  "MODULO", "SHL", "SHR", "BITSHL", "BITSHR", "LTE", "GTE", "EQ", "NEQ",
  "BITXOR", "BITOR", "AND", "floatingConstant", "OR", "QUESTION", "COLON",
  "SEMICOLON", "DOTS", "ASSIGN", "STAREQ", "DIVEQ", "MODEQ", "PLUSEQ",
  "MINUSEQ", "SHLEQ", "SHREQ", "BINANDEQ", "BINXOREQ", "BINOREQ", "COMMA",
  "HASH", "integerConstant", "THEN", "$accept", "constant",
  "postfixExpression", "selectionStatement", "unaryOperator",
  "castExpression", "multiplicativeExpression", "additiveExpression",
  "shiftExpression", "declaration_specifiers", "equalityExpression",
  "ANDexpression", "exclusiveORexpression", "inclusiveORexpression",
  "logicalANDexpression", "logicalORexpression", "M", "N",
  "conditionalExpression", "assignmentExpression", "primaryExpression",
  "assignment_operator", "expression", "constant_expression",
  "declaration", "InitDeclaratorList", "initDeclarator",
  "storage_class_specifier", "type_specifier", "SPecifierQualifierList",
  "ENUMSpecifier", "ENumeratorList", "enumerator", "TYpeQualifier",
  "functionSpecifier", "declarator", "directDeclarator", "CT", "pointer",
  "TYpeQualifier_list", "argumentExpressionList", "relationalExpression",
  "unaryExpression", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name", "initializer",
  "initializer_list", "designation", "designator_list", "designator",
  "statement", "labeledStatement", "compoundStatement", "blockItemList",
  "blockItem", "expressionStatement", "iterationStatement",
  "jumpStatement", "translationUnit", "external_declaration",
  "function_definition", "declaration_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348
};
# endif

#define YYPACT_NINF (-268)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-138)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1261,  -268,    36,  -268,  -268,  -268,  -268,  -268,  -268,  -268,
    -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,
    -268,  -268,    11,  -268,  1261,  1261,  -268,  1261,  1261,  1224,
    -268,  -268,    -5,    45,  -268,    12,    17,  -268,   -43,  -268,
    1103,    -2,     8,  -268,  -268,  -268,  -268,  -268,  -268,    45,
     -26,   -14,  -268,    23,  -268,  -268,    17,  -268,    12,   833,
      11,  -268,   106,  1261,   590,   154,    -2,    66,   174,  -268,
       7,  -268,  -268,  -268,  -268,    95,  -268,  -268,  1011,  -268,
    -268,   474,   753,  1033,  1033,  -268,  -268,  -268,  -268,  -268,
    -268,  -268,  -268,  -268,   139,   174,  -268,    -9,    87,   -46,
      70,   111,   109,   113,   114,    86,  -268,  -268,  -268,   134,
     226,  -268,   319,  -268,  -268,   106,   811,  -268,   150,   157,
     648,  -268,  1180,    43,  -268,    33,  -268,  -268,  -268,  -268,
    -268,   474,  -268,  -268,    69,  1297,  -268,  1297,   159,   174,
     201,  -268,    82,   833,    97,  -268,   474,  -268,  -268,   174,
     890,   216,   222,  -268,  -268,  -268,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   165,   107,
     174,   174,   174,   174,  -268,  -268,  -268,  -268,  -268,  -268,
    -268,  -268,  -268,  -268,  -268,   174,   166,   167,   912,   174,
     197,  -268,   242,   169,   203,   176,  -268,   207,  -268,  -268,
    -268,    58,  -268,  -268,  -268,  -268,   205,  -268,  -268,  -268,
    -268,  -268,   210,   811,  -268,  -268,  -268,   211,   212,  -268,
      12,   214,   168,  -268,  -268,   256,  -268,   215,  -268,   174,
    -268,  -268,   938,   218,  -268,  -268,   674,  -268,  -268,  -268,
     217,    14,  -268,  -268,    79,  -268,  -268,  -268,  -268,  -268,
      -9,    -9,    87,    87,   134,   134,    70,   111,   109,  -268,
    -268,  -268,   -46,   -46,   -46,   -46,  -268,   532,  -268,  -268,
      60,   191,   985,   224,   195,  -268,   174,   532,   532,   174,
    -268,  -268,   409,  -268,   223,  -268,  -268,  -268,  -268,  1141,
    -268,   225,  -268,   753,  -268,  -268,  -268,  -268,   833,   225,
    -268,  -268,   174,   174,   174,   174,  -268,  -268,   532,  -268,
     174,  -268,   188,  -268,  -268,    80,  -268,  -268,  -268,  -268,
      85,  -268,  -268,   113,   114,   188,  -268,   985,    81,   232,
     260,   532,  -268,   731,   208,   236,  -268,  -268,   239,  -268,
    -268,  -268,  -268,   174,   532,   532,   174,   174,   532,   188,
    -268,  -268,    83,  -268,  -268,   240,   247,   213,  -268,  -268,
    -268,   532,   532,  -268,  -268
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    90,     0,   119,   100,    88,    92,    97,    94,   120,
      93,    99,   118,   101,    89,   102,   121,   103,    95,    98,
      96,    91,     0,   207,    38,    40,   104,    42,    44,     0,
     204,   206,   113,     0,   124,     0,   139,    83,     0,    84,
      86,   123,     0,    37,    39,    41,    43,     1,   205,     0,
     116,     0,   114,     0,   142,   141,   138,    82,     0,     0,
       0,   210,     0,   137,     0,   137,   122,     0,     0,   110,
       0,   125,   143,   140,    85,    86,    64,    66,     0,     5,
       4,     0,     0,     0,     0,    19,    20,    21,    22,    23,
      24,     3,     2,    65,   151,     0,    27,    31,    34,   146,
      48,    50,    52,    54,    56,    60,    62,   166,     6,    45,
      25,    87,     0,   209,   211,     0,     0,   129,    20,     0,
       0,   163,     0,     0,   109,     0,    81,   117,    25,   112,
     115,     0,   155,    79,     0,   106,   165,   108,     0,     0,
       0,   170,     0,     0,     0,   174,     0,   152,   153,     0,
       0,     0,     0,    12,    13,   154,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,     0,    64,     0,     0,     0,
       0,    58,     0,     0,     0,     0,    58,     0,   188,   194,
     181,     0,   191,   192,   178,   179,    58,   189,   180,   182,
     183,   208,     0,     0,   133,   128,   127,    20,     0,   136,
     162,     0,   157,   159,   135,     0,   111,     0,    67,     0,
     105,   107,     0,     0,   177,   167,     0,   169,   173,   175,
       0,     0,     8,   144,     0,    10,    11,    28,    29,    30,
      32,    33,    35,    36,    46,    47,    49,    51,    53,    58,
      58,    58,   147,   148,   149,   150,    63,     0,   201,   203,
       0,     0,     0,     0,     0,   200,     0,     0,     0,     0,
     193,   187,     0,   131,     0,   132,   126,   161,   134,     0,
     164,   156,    80,     0,    26,   176,   168,   172,     0,     0,
       7,     9,     0,     0,     0,     0,   184,   202,     0,    58,
       0,   199,    59,   186,    58,     0,   190,   130,   158,   160,
       0,   171,   145,    55,    57,    59,   185,     0,     0,     0,
       0,     0,    14,     0,     0,    58,    58,    58,     0,    18,
      15,    58,    58,     0,     0,     0,     0,     0,     0,    59,
     195,    59,     0,    61,   197,     0,    16,     0,    58,    58,
     196,     0,     0,   198,    17
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -268,  -268,  -268,  -268,  -268,   -45,    34,    47,    42,     0,
     123,   125,   126,   -11,   -10,  -268,   -38,  -101,   -66,   -33,
    -268,  -268,   -69,  -118,   -31,  -268,   237,  -268,   -17,    18,
    -268,   252,   -62,     5,  -268,   -15,   254,   101,     9,   -27,
    -268,    71,   -65,  -268,  -268,    13,  -268,   -91,   -58,    24,
    -230,  -268,   172,  -199,  -268,   -40,  -268,    37,  -267,  -268,
    -268,  -268,   289,  -268,  -268
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    93,    94,   200,    95,    96,    97,    98,    99,    60,
     100,   101,   102,   103,   104,   105,   273,   168,   106,   133,
     108,   185,   201,   127,    23,    38,    39,    24,    25,   136,
      26,    51,    52,    27,    28,    75,    41,    62,    42,    56,
     244,   109,   110,   221,   222,   223,   123,   138,   141,   142,
     143,   144,   145,   203,   204,   205,   206,   207,   208,   209,
     210,    29,    30,    31,    63
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      22,   111,   126,   128,   169,   309,   298,    40,   130,    61,
      50,    34,   134,   132,    34,    34,   161,   162,   147,   148,
      53,   233,   113,     3,    43,    44,   107,    45,    46,    22,
     128,   119,   114,     9,    57,    69,    50,   120,    12,    32,
     227,    54,    64,    49,    65,    55,   156,    58,    50,   107,
     155,   157,   158,    68,    35,   240,   129,    35,    35,   300,
     335,    72,   134,   130,   135,    73,    36,    36,   306,    54,
      71,   271,    36,   126,   128,   211,    70,   134,   313,   314,
     241,   202,   226,   212,    33,   237,   137,   218,    37,   213,
     224,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   298,   229,   128,   128,   128,   128,   326,
     107,   247,   248,   249,   135,   124,   228,   243,   135,   270,
     135,    54,   220,   126,   128,    72,   301,   331,   336,   135,
     357,   235,   339,   225,   332,   280,   137,   307,   163,   164,
     137,   139,   137,   159,   160,   350,   351,   140,   229,   354,
     229,   137,   266,   230,   112,   231,   125,   121,   278,   229,
     -59,   -59,   363,   364,   115,   165,   122,   128,   282,   302,
     229,   229,   236,   229,    59,   333,   238,    76,   297,   166,
     284,   260,   261,   149,   167,   150,   -59,   294,    77,   151,
     152,   153,   154,   250,   251,   214,   292,    78,   170,   171,
     172,   173,   215,   107,   234,   287,   232,   312,   252,   253,
     315,   329,   262,   263,   264,   265,    79,    80,    72,   245,
      81,   303,   304,   305,   334,   246,    83,    84,    85,    86,
      87,    88,    89,    90,   254,   255,   325,   259,   128,   128,
     321,   328,   267,   272,   268,   274,   275,    91,   355,   276,
     356,   202,   277,   279,   281,   283,   285,   286,   289,   290,
     107,   288,   291,   295,   299,   107,    92,   308,   317,   322,
     310,   327,   311,   293,   349,   297,   330,   352,   229,   337,
     338,   353,   128,   342,   341,   346,   359,   358,   256,   220,
     360,   257,   323,   258,   324,    74,    66,   343,   344,   345,
     107,    67,   319,   347,   348,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   239,   320,    48,   316,
     361,   362,   186,     1,     2,     3,     4,   187,     5,   188,
       6,   189,     7,    77,     8,     9,    10,   190,    11,   191,
      12,   192,    78,    13,   193,   194,    14,    15,   195,    16,
       0,    17,   196,    18,   197,    19,    20,     0,     0,    21,
       0,    79,    80,     0,     0,    81,     0,   112,   198,     0,
       0,    83,    84,    85,    86,    87,    88,    89,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    91,     0,     0,     0,   199,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,   186,     1,     2,     3,     4,   187,     5,   188,
       6,   189,     7,    77,     8,     9,    10,   190,    11,   191,
      12,   192,    78,    13,   193,   194,    14,    15,   195,    16,
       0,    17,   196,    18,   197,    19,    20,     0,     0,    21,
       0,    79,    80,     0,     0,    81,     0,   112,     0,     0,
       0,    83,    84,    85,    86,    87,    88,    89,    90,     0,
       0,     0,     0,     0,     0,     0,     0,    76,     0,     2,
       3,     4,    91,     0,     0,     6,   199,     7,    77,     8,
       9,    10,     0,    11,     0,    12,     0,    78,    13,     0,
       0,    92,    15,     0,     0,     0,    17,     0,    18,     0,
      19,    20,     0,     0,     0,     0,    79,    80,     0,     0,
      81,     0,     0,     0,     0,     0,    83,    84,    85,    86,
      87,    88,    89,    90,     0,   186,     0,     0,     0,     0,
     187,     0,   188,     0,   189,     0,    77,    91,     0,     0,
     190,     0,   191,     0,   192,    78,     0,   193,   194,     0,
       0,   195,     0,     0,     0,   196,    92,   197,     0,     0,
       0,     0,     0,     0,    79,    80,     0,     0,    81,     0,
     112,     0,     0,     0,    83,    84,    85,    86,    87,    88,
      89,    90,     0,    76,     0,     0,     3,     0,     0,     0,
       0,     0,     0,     0,    77,    91,     9,     0,     0,   199,
       0,    12,     0,    78,     0,     0,     0,   116,     0,     0,
       0,     0,     0,     0,    92,     0,     0,     0,     0,     0,
       0,     0,    79,    80,     0,   117,    81,     0,     0,     0,
       0,     0,    83,    84,    85,   118,    87,    88,    89,    90,
       0,    76,     0,     0,     3,     0,     0,     0,     0,     0,
       0,     0,    77,    91,     9,     0,     0,     0,     0,    12,
       0,    78,     0,     0,     0,     0,     0,    76,     0,     0,
       0,     0,    92,     0,     0,     0,     0,     0,    77,     0,
      79,    80,     0,   216,    81,     0,     0,    78,     0,     0,
      83,    84,    85,   217,    87,    88,    89,    90,     0,     0,
       0,     0,     0,     0,     0,     0,    79,    80,   139,     0,
      81,    91,    82,   296,   140,     0,    83,    84,    85,    86,
      87,    88,    89,    90,    76,     0,     0,     0,     0,     0,
      92,     0,     0,     0,     0,    77,     0,    91,     0,     0,
       0,     0,     0,     0,    78,     0,    76,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,    77,     0,     0,
       0,     0,     0,    79,    80,   139,    78,    81,     0,    82,
     340,   140,     0,    83,    84,    85,    86,    87,    88,    89,
      90,     0,     0,     0,     0,    79,    80,   139,     0,    81,
       0,    82,     0,   140,    91,    83,    84,    85,    86,    87,
      88,    89,    90,     0,    76,     0,     0,     3,     0,     0,
       0,     0,     0,    92,     0,    77,    91,     9,     0,     0,
       0,     0,    12,     0,    78,     0,    76,     0,     0,     0,
       0,     0,     0,     0,     0,    92,     0,    77,     0,     0,
       0,     0,     0,    79,    80,     0,    78,    81,     0,     0,
       0,     0,     0,    83,    84,    85,    86,    87,    88,    89,
      90,     0,     0,     0,     0,    79,    80,     0,     0,    81,
       0,    82,     0,     0,    91,    83,    84,    85,    86,    87,
      88,    89,    90,    76,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    77,     0,    91,     0,     0,     0,
       0,     0,     0,    78,     0,    76,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    77,     0,     0,     0,
       0,     0,    79,    80,     0,    78,    81,   242,     0,     0,
       0,    76,    83,    84,    85,    86,    87,    88,    89,    90,
       0,     0,    77,     0,    79,    80,     0,     0,    81,     0,
       0,    78,     0,    91,    83,    84,    85,    86,    87,    88,
      89,    90,     0,     0,     0,     0,     0,     0,     0,     0,
      79,    80,    92,     0,    81,    91,   293,     0,    76,   269,
      83,    84,    85,    86,    87,    88,    89,    90,     0,    77,
       0,     0,     0,     0,    92,     0,     0,     0,    78,     0,
       0,    91,     0,     0,    76,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    77,     0,    79,    80,     0,
      92,    81,     0,     0,    78,     0,    76,    83,    84,    85,
      86,    87,    88,    89,    90,     0,     0,    77,     0,     0,
       0,     0,     0,    79,    80,     0,    78,   131,    91,     0,
       0,     0,   199,    83,    84,    85,    86,    87,    88,    89,
      90,     0,     0,     0,     0,    79,    80,    92,     0,   146,
       0,     0,     0,     0,    91,    83,    84,    85,    86,    87,
      88,    89,    90,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,     0,     0,    91,     1,     2,     3,
       4,     0,     5,     0,     6,     0,     7,     0,     8,     9,
      10,     0,    11,     0,    12,    92,     0,    13,     0,     0,
      14,    15,     0,    16,     0,    17,     0,    18,     0,    19,
      20,     0,     0,    21,     0,     1,     2,     3,     4,     0,
       5,  -137,     6,     0,     7,     0,     8,     9,    10,     0,
      11,     0,    12,     0,     0,    13,     0,     0,    14,    15,
       0,    16,     0,    17,     0,    18,     0,    19,    20,     0,
       0,    21,    59,     0,     1,     2,     3,     4,     0,     5,
       0,     6,     0,     7,     0,     8,     9,    10,     0,    11,
       0,    12,     0,     0,    13,     0,     0,    14,    15,     0,
      16,     0,    17,     0,    18,     0,    19,    20,     0,   318,
      21,     0,     0,     0,    47,     0,     0,   219,     1,     2,
       3,     4,     0,     5,     0,     6,     0,     7,     0,     8,
       9,    10,     0,    11,     0,    12,     0,     0,    13,     0,
       0,    14,    15,     0,    16,     0,    17,     0,    18,     0,
      19,    20,     0,     0,    21,     1,     2,     3,     4,     0,
       5,     0,     6,     0,     7,     0,     8,     9,    10,     0,
      11,     0,    12,     0,     0,    13,     0,     0,    14,    15,
       0,    16,     0,    17,     0,    18,     0,    19,    20,     0,
       0,    21,     2,     3,     4,     0,     0,     0,     6,     0,
       7,     0,     8,     9,    10,     0,    11,     0,    12,     0,
       0,    13,     0,     0,     0,    15,     0,     0,     0,    17,
       0,    18,     0,    19,    20
};

static const yytype_int16 yycheck[] =
{
       0,    59,    68,    68,   105,   272,   236,    22,    70,    40,
       3,     3,    81,    78,     3,     3,    62,    63,    83,    84,
      35,   139,    62,     6,    24,    25,    59,    27,    28,    29,
      95,    64,    63,    16,    77,    49,     3,    64,    21,     3,
     131,    36,    44,    48,    46,    36,    55,    90,     3,    82,
      95,    60,    61,    79,    46,   146,    49,    46,    46,    45,
     327,    56,   131,   125,    81,    56,    55,    55,   267,    64,
      47,   189,    55,   139,   139,   115,    90,   146,   277,   278,
     149,   112,    49,   116,    48,   143,    81,   120,    77,   116,
      47,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   333,    90,   170,   171,   172,   173,   308,
     143,   156,   157,   158,   131,    49,    47,   150,   135,   188,
     137,   116,   122,   189,   189,   120,    47,    47,    47,   146,
      47,    49,   331,    90,    49,    77,   131,    77,    68,    69,
     135,    44,   137,    56,    57,   344,   345,    50,    90,   348,
      90,   146,   185,   135,    48,   137,    90,     3,   196,    90,
      74,    75,   361,   362,    63,    54,    65,   232,   206,    90,
      90,    90,    90,    90,    79,    90,    79,     3,   236,    70,
     213,    74,    75,    44,    71,    46,    72,   232,    14,    50,
      51,    52,    53,   159,   160,    45,   229,    23,    64,    65,
      66,    67,    45,   236,     3,   220,    47,   276,   161,   162,
     279,   312,   170,   171,   172,   173,    42,    43,   213,     3,
      46,   259,   260,   261,   325,     3,    52,    53,    54,    55,
      56,    57,    58,    59,   163,   164,   305,    72,   303,   304,
     298,   310,    76,    46,    77,     3,    77,    73,   349,    46,
     351,   282,    76,    46,    49,    45,    45,    45,    90,     3,
     293,    47,    47,    45,    47,   298,    92,    76,    45,   302,
      46,   309,    77,    48,   343,   333,   314,   346,    90,    47,
      20,   347,   347,    47,    76,    46,    39,    47,   165,   289,
      77,   166,   303,   167,   304,    58,    42,   335,   336,   337,
     333,    49,   289,   341,   342,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,   144,   293,    29,   282,
     358,   359,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      -1,    42,    43,    -1,    -1,    46,    -1,    48,    49,    -1,
      -1,    52,    53,    54,    55,    56,    57,    58,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    92,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      -1,    42,    43,    -1,    -1,    46,    -1,    48,    -1,    -1,
      -1,    52,    53,    54,    55,    56,    57,    58,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,
       6,     7,    73,    -1,    -1,    11,    77,    13,    14,    15,
      16,    17,    -1,    19,    -1,    21,    -1,    23,    24,    -1,
      -1,    92,    28,    -1,    -1,    -1,    32,    -1,    34,    -1,
      36,    37,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    -1,     3,    -1,    -1,    -1,    -1,
       8,    -1,    10,    -1,    12,    -1,    14,    73,    -1,    -1,
      18,    -1,    20,    -1,    22,    23,    -1,    25,    26,    -1,
      -1,    29,    -1,    -1,    -1,    33,    92,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    46,    -1,
      48,    -1,    -1,    -1,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,     3,    -1,    -1,     6,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    14,    73,    16,    -1,    -1,    77,
      -1,    21,    -1,    23,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    45,    46,    -1,    -1,    -1,
      -1,    -1,    52,    53,    54,    55,    56,    57,    58,    59,
      -1,     3,    -1,    -1,     6,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    14,    73,    16,    -1,    -1,    -1,    -1,    21,
      -1,    23,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    14,    -1,
      42,    43,    -1,    45,    46,    -1,    -1,    23,    -1,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,    -1,
      46,    73,    48,    49,    50,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,     3,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    14,    -1,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    14,    -1,    -1,
      -1,    -1,    -1,    42,    43,    44,    23,    46,    -1,    48,
      49,    50,    -1,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,    -1,    -1,    -1,    42,    43,    44,    -1,    46,
      -1,    48,    -1,    50,    73,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,     3,    -1,    -1,     6,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    14,    73,    16,    -1,    -1,
      -1,    -1,    21,    -1,    23,    -1,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    23,    46,    -1,    -1,
      -1,    -1,    -1,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    46,
      -1,    48,    -1,    -1,    73,    52,    53,    54,    55,    56,
      57,    58,    59,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    14,    -1,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    14,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    23,    46,    47,    -1,    -1,
      -1,     3,    52,    53,    54,    55,    56,    57,    58,    59,
      -1,    -1,    14,    -1,    42,    43,    -1,    -1,    46,    -1,
      -1,    23,    -1,    73,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    92,    -1,    46,    73,    48,    -1,     3,    77,
      52,    53,    54,    55,    56,    57,    58,    59,    -1,    14,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    23,    -1,
      -1,    73,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    14,    -1,    42,    43,    -1,
      92,    46,    -1,    -1,    23,    -1,     3,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    23,    46,    73,    -1,
      -1,    -1,    77,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,    -1,    -1,    -1,    42,    43,    92,    -1,    46,
      -1,    -1,    -1,    -1,    73,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    -1,    73,     4,     5,     6,
       7,    -1,     9,    -1,    11,    -1,    13,    -1,    15,    16,
      17,    -1,    19,    -1,    21,    92,    -1,    24,    -1,    -1,
      27,    28,    -1,    30,    -1,    32,    -1,    34,    -1,    36,
      37,    -1,    -1,    40,    -1,     4,     5,     6,     7,    -1,
       9,    48,    11,    -1,    13,    -1,    15,    16,    17,    -1,
      19,    -1,    21,    -1,    -1,    24,    -1,    -1,    27,    28,
      -1,    30,    -1,    32,    -1,    34,    -1,    36,    37,    -1,
      -1,    40,    79,    -1,     4,     5,     6,     7,    -1,     9,
      -1,    11,    -1,    13,    -1,    15,    16,    17,    -1,    19,
      -1,    21,    -1,    -1,    24,    -1,    -1,    27,    28,    -1,
      30,    -1,    32,    -1,    34,    -1,    36,    37,    -1,    78,
      40,    -1,    -1,    -1,     0,    -1,    -1,    47,     4,     5,
       6,     7,    -1,     9,    -1,    11,    -1,    13,    -1,    15,
      16,    17,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,
      -1,    27,    28,    -1,    30,    -1,    32,    -1,    34,    -1,
      36,    37,    -1,    -1,    40,     4,     5,     6,     7,    -1,
       9,    -1,    11,    -1,    13,    -1,    15,    16,    17,    -1,
      19,    -1,    21,    -1,    -1,    24,    -1,    -1,    27,    28,
      -1,    30,    -1,    32,    -1,    34,    -1,    36,    37,    -1,
      -1,    40,     5,     6,     7,    -1,    -1,    -1,    11,    -1,
      13,    -1,    15,    16,    17,    -1,    19,    -1,    21,    -1,
      -1,    24,    -1,    -1,    -1,    28,    -1,    -1,    -1,    32,
      -1,    34,    -1,    36,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     9,    11,    13,    15,    16,
      17,    19,    21,    24,    27,    28,    30,    32,    34,    36,
      37,    40,   103,   118,   121,   122,   124,   127,   128,   155,
     156,   157,     3,    48,     3,    46,    55,    77,   119,   120,
     129,   130,   132,   103,   103,   103,   103,     0,   156,    48,
       3,   125,   126,   129,   127,   132,   133,    77,    90,    79,
     103,   118,   131,   158,    44,    46,   130,   125,    79,    49,
      90,    47,   127,   132,   120,   129,     3,    14,    23,    42,
      43,    46,    48,    52,    53,    54,    55,    56,    57,    58,
      59,    73,    92,    95,    96,    98,    99,   100,   101,   102,
     104,   105,   106,   107,   108,   109,   112,   113,   114,   135,
     136,   142,    48,   149,   118,   131,    27,    45,    55,   113,
     133,     3,   131,   140,    49,    90,   112,   117,   136,    49,
     126,    46,   136,   113,   116,   122,   123,   127,   141,    44,
      50,   142,   143,   144,   145,   146,    46,   136,   136,    44,
      46,    50,    51,    52,    53,    99,    55,    60,    61,    56,
      57,    62,    63,    68,    69,    54,    70,    71,   111,   111,
      64,    65,    66,    67,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,   115,     3,     8,    10,    12,
      18,    20,    22,    25,    26,    29,    33,    35,    49,    77,
      97,   116,   118,   147,   148,   149,   150,   151,   152,   153,
     154,   149,   113,   133,    45,    45,    45,    55,   113,    47,
     103,   137,   138,   139,    47,    90,    49,   141,    47,    90,
     123,   123,    47,   117,     3,    49,    90,   142,    79,   146,
     141,   116,    47,   113,   134,     3,     3,    99,    99,    99,
     100,   100,   101,   101,   135,   135,   104,   105,   106,    72,
      74,    75,   102,   102,   102,   102,   113,    76,    77,    77,
     116,   117,    46,   110,     3,    77,    46,    76,   110,    46,
      77,    49,   110,    45,   113,    45,    45,   129,    47,    90,
       3,    47,   113,    48,    99,    45,    49,   142,   144,    47,
      45,    47,    90,   110,   110,   110,   147,    77,    76,   152,
      46,    77,   116,   147,   147,   116,   151,    45,    78,   139,
     143,   142,   113,   107,   108,   116,   147,   110,   116,   111,
     110,    47,    49,    90,   111,   152,    47,    47,    20,   147,
      49,    76,    47,   110,   110,   110,    46,   110,   110,   116,
     147,   147,   116,   112,   147,   111,   111,    47,    47,    39,
      77,   110,   110,   147,   147
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    94,    95,    95,    95,    95,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    97,    97,    97,    98,
      98,    98,    98,    98,    98,    99,    99,   100,   100,   100,
     100,   101,   101,   101,   102,   102,   102,   103,   103,   103,
     103,   103,   103,   103,   103,   104,   104,   104,   105,   105,
     106,   106,   107,   107,   108,   108,   109,   109,   110,   111,
     112,   112,   113,   113,   114,   114,   114,   114,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   116,
     116,   117,   118,   118,   119,   119,   120,   120,   121,   121,
     121,   121,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   123,   123,   123,   123,   124,
     124,   124,   124,   124,   125,   125,   126,   126,   127,   127,
     127,   128,   129,   129,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   131,   132,   132,
     132,   132,   133,   133,   134,   134,   135,   135,   135,   135,
     135,   136,   136,   136,   136,   136,   136,   137,   137,   138,
     138,   139,   139,   140,   140,   141,   142,   142,   142,   143,
     143,   143,   143,   144,   145,   145,   146,   146,   147,   147,
     147,   147,   147,   147,   148,   148,   148,   149,   149,   150,
     150,   151,   151,   152,   152,   153,   153,   153,   153,   154,
     154,   154,   154,   154,   155,   155,   156,   156,   157,   157,
     158,   158
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     4,     3,     4,
       3,     3,     2,     2,     6,     7,     8,    11,     5,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     2,     1,     2,
       1,     2,     1,     2,     1,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     5,     1,     5,     0,     0,
       1,     9,     1,     3,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     3,     2,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     2,     1,     5,
       4,     6,     5,     2,     1,     3,     1,     3,     1,     1,
       1,     1,     2,     1,     1,     3,     5,     4,     4,     3,
       6,     5,     5,     4,     5,     4,     4,     0,     2,     1,
       3,     2,     1,     2,     1,     3,     1,     3,     3,     3,
       3,     1,     2,     2,     2,     2,     4,     1,     3,     1,
       3,     2,     1,     1,     3,     1,     1,     3,     4,     2,
       1,     4,     3,     2,     1,     2,     3,     2,     1,     1,
       1,     1,     1,     1,     3,     4,     3,     3,     2,     1,
       3,     1,     1,     2,     1,     7,     9,     8,    11,     3,
       2,     2,     3,     2,     1,     2,     1,     1,     5,     4,
       1,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
      yychar = yylex ();
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 96 "parser.y"
                         {
	stringstream STring;
    STring << (yyvsp[0].intval);
	int zero = 0;
    string TempString = STring.str();
    char* Int_STring = (char*) TempString.c_str();
	string str = string(Int_STring);
	int one = 1;
	(yyval.symp) = gentemp(new symtype("INTEGER"), str);
	emit("EQUAL", (yyval.symp)->name, (yyvsp[0].intval));
	}
#line 1912 "parser.tab.c"
    break;

  case 3:
#line 107 "parser.y"
                          {
	int zero = 0;
	int one = 1;
	(yyval.symp) = gentemp(new symtype("DOUBLE"), string((yyvsp[0].charval)));
	emit("EQUAL", (yyval.symp)->name, string((yyvsp[0].charval)));
	}
#line 1923 "parser.tab.c"
    break;

  case 4:
#line 113 "parser.y"
                               {//later
	}
#line 1930 "parser.tab.c"
    break;

  case 5:
#line 115 "parser.y"
                            {
	int zero = 0;	
	int one = 1;
	(yyval.symp) = gentemp(new symtype("CHAR"),(yyvsp[0].charval));
	emit("EQUAL", (yyval.symp)->name, string((yyvsp[0].charval)));
	}
#line 1941 "parser.tab.c"
    break;

  case 6:
#line 125 "parser.y"
                           {
		(yyval.A) = new array1 ();
		(yyval.A)->array1 = (yyvsp[0].E)->loc;
		int zero = 0;	
		int one = 1;
		(yyval.A)->loc = (yyval.A)->array1;
		(yyval.A)->type = (yyvsp[0].E)->loc->type;
	}
#line 1954 "parser.tab.c"
    break;

  case 7:
#line 133 "parser.y"
                                                           {
		(yyval.A) = new array1();
		
		(yyval.A)->array1 = (yyvsp[-3].A)->loc;	
		int zero = 0;	
		int one = 1;				// copy the base
		(yyval.A)->type = (yyvsp[-3].A)->type->ptr;				// type = type of element
		(yyval.A)->loc = gentemp(new symtype("INTEGER"));		// store computed address
		
		// New address =(if only) already computed + $3 * new width
		if ((yyvsp[-3].A)->cat=="ARR") {						// if already computed
			sym* t = gentemp(new symtype("INTEGER"));
			stringstream STring;
		    STring <<size_type((yyval.A)->type);
		    string TempString = STring.str();
			int two = 2;	
			int three = 3;
		    char* Int_STring = (char*) TempString.c_str();
			string str = string(Int_STring);				
 			emit ("MULT", t->name, (yyvsp[-1].E)->loc->name, str);
			emit ("ADD", (yyval.A)->loc->name, (yyvsp[-3].A)->loc->name, t->name);
		}
 		else {
 			stringstream STring;
		    STring <<size_type((yyval.A)->type);
		    string TempString = STring.str();
			int four = 4;	
			int five = 5;
		    char* Int_STring1 = (char*) TempString.c_str();
			string str1 = string(Int_STring1);		
	 		emit("MULT", (yyval.A)->loc->name, (yyvsp[-1].E)->loc->name, str1);
 		}

 		// Mark that it contains array1 address and first time computation is done
		(yyval.A)->cat = "ARR";
	}
#line 1995 "parser.tab.c"
    break;

  case 8:
#line 169 "parser.y"
                                                {
	//later
	}
#line 2003 "parser.tab.c"
    break;

  case 9:
#line 172 "parser.y"
                                                                       {
		(yyval.A) = new array1();
		(yyval.A)->array1 = gentemp((yyvsp[-3].A)->type);
		stringstream STring;
	    STring <<(yyvsp[-1].intval);
	    string TempString = STring.str();
		int zero = 0;	
		int one = 1;
	    char* Int_STring = (char*) TempString.c_str();
		string str = string(Int_STring);		
		emit("CALL", (yyval.A)->array1->name, (yyvsp[-3].A)->array1->name, str);
	}
#line 2020 "parser.tab.c"
    break;

  case 10:
#line 184 "parser.y"
                                          {//later
	}
#line 2027 "parser.tab.c"
    break;

  case 11:
#line 186 "parser.y"
                                          {//later
	}
#line 2034 "parser.tab.c"
    break;

  case 12:
#line 188 "parser.y"
                               {
		(yyval.A) = new array1();
		int zero = 0;	
		int one = 1;
		// copy $1 to $$
		(yyval.A)->array1 = gentemp((yyvsp[-1].A)->array1->type);
		emit ("EQUAL", (yyval.A)->array1->name, (yyvsp[-1].A)->array1->name);

		// Increment $1
		emit ("ADD", (yyvsp[-1].A)->array1->name, (yyvsp[-1].A)->array1->name, "1");
	}
#line 2050 "parser.tab.c"
    break;

  case 13:
#line 199 "parser.y"
                               {
		(yyval.A) = new array1();

		// copy $1 to $$
		(yyval.A)->array1 = gentemp((yyvsp[-1].A)->array1->type);
		emit ("EQUAL", (yyval.A)->array1->name, (yyvsp[-1].A)->array1->name);
		int zero = 0;	
		int one = 1;
		// Decrement $1
		emit ("SUB", (yyvsp[-1].A)->array1->name, (yyvsp[-1].A)->array1->name, "1");
	}
#line 2066 "parser.tab.c"
    break;

  case 14:
#line 210 "parser.y"
                                                                                {
		//later to be added more
		(yyval.A) = new array1();
		int zero = 0;	
		int one = 1;
		(yyval.A)->array1 = gentemp(new symtype("INTEGER"));
		(yyval.A)->loc = gentemp(new symtype("INTEGER"));
	}
#line 2079 "parser.tab.c"
    break;

  case 15:
#line 218 "parser.y"
                                                                                      {
		//later to be added more
		(yyval.A) = new array1();
		int zero = 0;	
		int one = 1;
		(yyval.A)->array1 = gentemp(new symtype("INTEGER"));
		(yyval.A)->loc = gentemp(new symtype("INTEGER"));
	}
#line 2092 "parser.tab.c"
    break;

  case 16:
#line 230 "parser.y"
                                                                      {
		backpatch ((yyvsp[-4].S)->nextlist, nextinstr());
		convertInt2Bool((yyvsp[-5].E));
		(yyval.S) = new statement();
		backpatch ((yyvsp[-5].E)->truelist, (yyvsp[-2].instr));
		list<int> temp = merge ((yyvsp[-5].E)->falselist, (yyvsp[-1].S)->nextlist);
		(yyval.S)->nextlist = merge ((yyvsp[0].S)->nextlist, temp);
	}
#line 2105 "parser.tab.c"
    break;

  case 17:
#line 238 "parser.y"
                                                                             {
		backpatch ((yyvsp[-7].S)->nextlist, nextinstr());
		convertInt2Bool((yyvsp[-8].E));
		int zero = 0;	
		int one = 1;
		(yyval.S) = new statement();
		backpatch ((yyvsp[-8].E)->truelist, (yyvsp[-5].instr));
		backpatch ((yyvsp[-8].E)->falselist, (yyvsp[-1].instr));
		int zeroo = 0;	
		int onee = 1;
		list<int> temp = merge ((yyvsp[-4].S)->nextlist, (yyvsp[-3].S)->nextlist);
		(yyval.S)->nextlist = merge ((yyvsp[0].S)->nextlist,temp);
	}
#line 2123 "parser.tab.c"
    break;

  case 18:
#line 251 "parser.y"
                                                          {//later
	}
#line 2130 "parser.tab.c"
    break;

  case 19:
#line 257 "parser.y"
             {
		int zero = 0;	
		int one = 1;
		(yyval.unaryOperator) = '&';
	}
#line 2140 "parser.tab.c"
    break;

  case 20:
#line 262 "parser.y"
             {
		int zero = 0;	
		int one = 1;
		(yyval.unaryOperator) = '*';
	}
#line 2150 "parser.tab.c"
    break;

  case 21:
#line 267 "parser.y"
             {
		int zero = 0;	
		int one = 1;
		(yyval.unaryOperator) = '+';
	}
#line 2160 "parser.tab.c"
    break;

  case 22:
#line 272 "parser.y"
             {
		int zero = 0;	
		int one = 1;
		(yyval.unaryOperator) = '-';
	}
#line 2170 "parser.tab.c"
    break;

  case 23:
#line 277 "parser.y"
             {
		int zero = 0;	
		int one = 1;
		(yyval.unaryOperator) = '~';
	}
#line 2180 "parser.tab.c"
    break;

  case 24:
#line 282 "parser.y"
                 {
		int zero = 0;	
		int one = 1;
		(yyval.unaryOperator) = '!';
	}
#line 2190 "parser.tab.c"
    break;

  case 25:
#line 290 "parser.y"
                         {
		int zero = 0;	
		int one = 1;
		(yyval.A)=(yyvsp[0].A);
	}
#line 2200 "parser.tab.c"
    break;

  case 26:
#line 295 "parser.y"
                                                       {
		//to be added later
		int zero = 0;	
		int one = 1;
		(yyval.A)=(yyvsp[0].A);
	}
#line 2211 "parser.tab.c"
    break;

  case 27:
#line 304 "parser.y"
                        {
		(yyval.E) = new expr();
		int zero = 0;	
		int one = 1;
		if ((yyvsp[0].A)->cat=="ARR") { // Array
			(yyval.E)->loc = gentemp((yyvsp[0].A)->loc->type);
			int two = 2;	
			int three = 3;
			emit("ARRR", (yyval.E)->loc->name, (yyvsp[0].A)->array1->name, (yyvsp[0].A)->loc->name);
		}
		else if ((yyvsp[0].A)->cat=="PTR") { // Pointer
			(yyval.E)->loc = (yyvsp[0].A)->loc;
			int two = 2;	
			int three = 3;
		}
		else { // otherwise
			(yyval.E)->loc = (yyvsp[0].A)->array1;
			int two = 2;	
			int three = 3;
		}
	}
#line 2237 "parser.tab.c"
    break;

  case 28:
#line 325 "parser.y"
                                                     {
		if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].A)->array1) ) {
			(yyval.E) = new expr();
			int two = 2;	
			int three = 3;
			(yyval.E)->loc = gentemp(new symtype((yyvsp[-2].E)->loc->type->type));
			emit ("MULT", (yyval.E)->loc->name, (yyvsp[-2].E)->loc->name, (yyvsp[0].A)->array1->name);
		}
		else cout << "Type Error"<< endl;
	}
#line 2252 "parser.tab.c"
    break;

  case 29:
#line 335 "parser.y"
                                                     {
		if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].A)->array1) ) {
			(yyval.E) = new expr();
			int two = 2;	
			int three = 3;
			(yyval.E)->loc = gentemp(new symtype((yyvsp[-2].E)->loc->type->type));
			emit ("DIVIDE", (yyval.E)->loc->name, (yyvsp[-2].E)->loc->name, (yyvsp[0].A)->array1->name);
		}
		else cout << "Type Error"<< endl;
	}
#line 2267 "parser.tab.c"
    break;

  case 30:
#line 345 "parser.y"
                                                        {
		if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].A)->array1) ) {
			(yyval.E) = new expr();
			int two = 2;	
			int three = 3;
			(yyval.E)->loc = gentemp(new symtype((yyvsp[-2].E)->loc->type->type));
			emit ("MODOP", (yyval.E)->loc->name, (yyvsp[-2].E)->loc->name, (yyvsp[0].A)->array1->name);
		}
		else cout << "Type Error"<< endl;
	}
#line 2282 "parser.tab.c"
    break;

  case 31:
#line 358 "parser.y"
                                  {
		(yyval.E)=(yyvsp[0].E);
	}
#line 2290 "parser.tab.c"
    break;

  case 32:
#line 361 "parser.y"
                                                         {
		int two = 2;	
		int three = 3;
		if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc) ) {
			(yyval.E) = new expr();
			int zero = 0;	
			int one = 1;
			(yyval.E)->loc = gentemp(new symtype((yyvsp[-2].E)->loc->type->type));
			emit ("ADD", (yyval.E)->loc->name, (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
		}
		else cout << "Type Error"<< endl;
	}
#line 2307 "parser.tab.c"
    break;

  case 33:
#line 373 "parser.y"
                                                         {
			if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc) ) {
			(yyval.E) = new expr();
			int zero = 0;	
			int one = 1;
			(yyval.E)->loc = gentemp(new symtype((yyvsp[-2].E)->loc->type->type));
			emit ("SUB", (yyval.E)->loc->name, (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
		}
		else cout << "Type Error"<< endl;

	}
#line 2323 "parser.tab.c"
    break;

  case 34:
#line 387 "parser.y"
                            {
		(yyval.E)=(yyvsp[0].E);
	}
#line 2331 "parser.tab.c"
    break;

  case 35:
#line 390 "parser.y"
                                                {
		if ((yyvsp[0].E)->loc->type->type == "INTEGER") {
			(yyval.E) = new expr();
			int zero = 0;	
			int one = 1;
			(yyval.E)->loc = gentemp (new symtype("INTEGER"));
			emit ("LEFTOP", (yyval.E)->loc->name, (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
		}
		else cout << "Type Error"<< endl;
	}
#line 2346 "parser.tab.c"
    break;

  case 36:
#line 400 "parser.y"
                                               {
		if ((yyvsp[0].E)->loc->type->type == "INTEGER") {
			(yyval.E) = new expr();
			int zero = 0;	
			int one = 1;
			(yyval.E)->loc = gentemp (new symtype("INTEGER"));
			emit ("RIGHTOP", (yyval.E)->loc->name, (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
		}
		else cout << "Type Error"<< endl;
	}
#line 2361 "parser.tab.c"
    break;

  case 37:
#line 414 "parser.y"
                                                        {//later
	int zero = 0;	
	int one = 1;
	}
#line 2370 "parser.tab.c"
    break;

  case 38:
#line 418 "parser.y"
                                 {//later
	}
#line 2377 "parser.tab.c"
    break;

  case 39:
#line 420 "parser.y"
                                               {//later
	}
#line 2384 "parser.tab.c"
    break;

  case 40:
#line 422 "parser.y"
                        {//later
	int zero = 0;	
	int one = 1;
	}
#line 2393 "parser.tab.c"
    break;

  case 41:
#line 426 "parser.y"
                                              {//later
	}
#line 2400 "parser.tab.c"
    break;

  case 42:
#line 428 "parser.y"
                       {//later
	int zero = 0;	
	int one = 1;
	}
#line 2409 "parser.tab.c"
    break;

  case 43:
#line 432 "parser.y"
                                                  {//later
	}
#line 2416 "parser.tab.c"
    break;

  case 44:
#line 434 "parser.y"
                           {//later
	int zero = 0;	
	int one = 1;
	}
#line 2425 "parser.tab.c"
    break;

  case 45:
#line 443 "parser.y"
                              {(yyval.E)=(yyvsp[0].E);}
#line 2431 "parser.tab.c"
    break;

  case 46:
#line 444 "parser.y"
                                                    {
		if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc)) {
			convertBool2Int ((yyvsp[-2].E));
			convertBool2Int ((yyvsp[0].E));

			(yyval.E) = new expr();
			(yyval.E)->type = "BOOL";
			int zero = 0;	
			int one = 1;
			(yyval.E)->truelist = makelist (nextinstr());
			(yyval.E)->falselist = makelist (nextinstr()+1);
			emit("EQOP", "", (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
			emit ("GOTOOP", "");
		}
		else cout << "Type Error"<< endl;
	}
#line 2452 "parser.tab.c"
    break;

  case 47:
#line 460 "parser.y"
                                                     {
		if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc) ) {
			// If any is bool get its value
			convertBool2Int ((yyvsp[-2].E));
			convertBool2Int ((yyvsp[0].E));

			(yyval.E) = new expr();
			(yyval.E)->type = "BOOL";
			int zero = 0;	
			int one = 1;
			(yyval.E)->truelist = makelist (nextinstr());
			(yyval.E)->falselist = makelist (nextinstr()+1);
			emit("NEOP", "", (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
			emit ("GOTOOP", "");
		}
		else cout << "Type Error"<< endl;
	}
#line 2474 "parser.tab.c"
    break;

  case 48:
#line 480 "parser.y"
                            {(yyval.E)=(yyvsp[0].E);}
#line 2480 "parser.tab.c"
    break;

  case 49:
#line 481 "parser.y"
                                              {
		if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc) ) {
			// If any is bool get its value
			convertBool2Int ((yyvsp[-2].E));
			convertBool2Int ((yyvsp[0].E));
			int zero = 0;	
			int one = 1;
			(yyval.E) = new expr();
			(yyval.E)->type = "NONBOOL";

			(yyval.E)->loc = gentemp (new symtype("INTEGER"));
			emit ("BAND", (yyval.E)->loc->name, (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
		}
		else cout << "Type Error"<< endl;
	}
#line 2500 "parser.tab.c"
    break;

  case 50:
#line 499 "parser.y"
                       {(yyval.E)=(yyvsp[0].E);}
#line 2506 "parser.tab.c"
    break;

  case 51:
#line 500 "parser.y"
                                                    {
		if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc) ) {
			// If any is bool get its value
			convertBool2Int ((yyvsp[-2].E));
			convertBool2Int ((yyvsp[0].E));
			int zero = 0;	
			int one = 1;
			(yyval.E) = new expr();
			(yyval.E)->type = "NONBOOL";

			(yyval.E)->loc = gentemp (new symtype("INTEGER"));
			emit ("XOR", (yyval.E)->loc->name, (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
		}
		else cout << "Type Error"<< endl;
	}
#line 2526 "parser.tab.c"
    break;

  case 52:
#line 518 "parser.y"
                               {(yyval.E)=(yyvsp[0].E);}
#line 2532 "parser.tab.c"
    break;

  case 53:
#line 519 "parser.y"
                                                           {
		if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc) ) {
			// If any is bool get its value
			convertBool2Int ((yyvsp[-2].E));
			convertBool2Int ((yyvsp[0].E));
			int zero = 0;	
			int one = 1;
			(yyval.E) = new expr();
			(yyval.E)->type = "NONBOOL";

			(yyval.E)->loc = gentemp (new symtype("INTEGER"));
			emit ("INOR", (yyval.E)->loc->name, (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
		}
		else cout << "Type Error"<< endl;
	}
#line 2552 "parser.tab.c"
    break;

  case 54:
#line 537 "parser.y"
                               {(yyval.E)=(yyvsp[0].E);}
#line 2558 "parser.tab.c"
    break;

  case 55:
#line 538 "parser.y"
                                                            {
		convertInt2Bool((yyvsp[0].E));

		// convert $1 to bool and backpatch using N
		backpatch((yyvsp[-3].S)->nextlist, nextinstr());
		convertInt2Bool((yyvsp[-4].E));
		int zero = 0;	
		int one = 1;
		(yyval.E) = new expr();
		(yyval.E)->type = "BOOL";

		backpatch((yyvsp[-4].E)->truelist, (yyvsp[-1].instr));
		(yyval.E)->truelist = (yyvsp[0].E)->truelist;
		(yyval.E)->falselist = merge ((yyvsp[-4].E)->falselist, (yyvsp[0].E)->falselist);
	}
#line 2578 "parser.tab.c"
    break;

  case 56:
#line 556 "parser.y"
                              {(yyval.E)=(yyvsp[0].E);}
#line 2584 "parser.tab.c"
    break;

  case 57:
#line 557 "parser.y"
                                                         {
		convertInt2Bool((yyvsp[0].E));

		// convert $1 to bool and backpatch using N
		backpatch((yyvsp[-3].S)->nextlist, nextinstr());
		convertInt2Bool((yyvsp[-4].E));
		int zero = 0;	
		int one = 1;
		(yyval.E) = new expr();
		(yyval.E)->type = "BOOL";

		backpatch ((yyval.E)->falselist, (yyvsp[-1].instr));
		(yyval.E)->truelist = merge ((yyvsp[-4].E)->truelist, (yyvsp[0].E)->truelist);
		(yyval.E)->falselist = (yyvsp[0].E)->falselist;
	}
#line 2604 "parser.tab.c"
    break;

  case 58:
#line 574 "parser.y"
                {	// To store the address of the next instruction
		(yyval.instr) = nextinstr();
	}
#line 2612 "parser.tab.c"
    break;

  case 59:
#line 578 "parser.y"
                 { 	// gaurd against fallthrough by emitting a goto
		(yyval.S)  = new statement();
		(yyval.S)->nextlist = makelist(nextinstr());
		emit ("GOTOOP","");
	}
#line 2622 "parser.tab.c"
    break;

  case 60:
#line 585 "parser.y"
                             {(yyval.E)=(yyvsp[0].E);}
#line 2628 "parser.tab.c"
    break;

  case 61:
#line 586 "parser.y"
                                                                                     {
		(yyval.E)->loc = gentemp((yyvsp[-4].E)->loc->type);
		(yyval.E)->loc->update((yyvsp[-4].E)->loc->type);
		emit("EQUAL", (yyval.E)->loc->name, (yyvsp[0].E)->loc->name);
		list<int> l = makelist(nextinstr());
		emit ("GOTOOP", "");
		int zero = 0;	
		int one = 1;
		backpatch((yyvsp[-3].S)->nextlist, nextinstr());
		emit("EQUAL", (yyval.E)->loc->name, (yyvsp[-4].E)->loc->name);
		list<int> m = makelist(nextinstr());
		l = merge (l, m);
		emit ("GOTOOP", "");
		int two = 2;	
		int three = 3;
		backpatch((yyvsp[-7].S)->nextlist, nextinstr());
		convertInt2Bool((yyvsp[-8].E));
		backpatch ((yyvsp[-8].E)->truelist, (yyvsp[-5].instr));
		backpatch ((yyvsp[-8].E)->falselist, (yyvsp[-1].instr));
		backpatch (l, nextinstr());
	}
#line 2654 "parser.tab.c"
    break;

  case 62:
#line 610 "parser.y"
                               {(yyval.E)=(yyvsp[0].E);}
#line 2660 "parser.tab.c"
    break;

  case 63:
#line 611 "parser.y"
                                                                  {
		if((yyvsp[-2].A)->cat=="ARR") {
			(yyvsp[0].E)->loc = conv((yyvsp[0].E)->loc, (yyvsp[-2].A)->type->type);
			int zero = 0;	
			int one = 1;
			emit("ARRL", (yyvsp[-2].A)->array1->name, (yyvsp[-2].A)->loc->name, (yyvsp[0].E)->loc->name);	
			}
		else if((yyvsp[-2].A)->cat=="PTR") {
			emit("PTRL", (yyvsp[-2].A)->array1->name, (yyvsp[0].E)->loc->name);	
			}
		else{
			(yyvsp[0].E)->loc = conv((yyvsp[0].E)->loc, (yyvsp[-2].A)->array1->type->type);
			emit("EQUAL", (yyvsp[-2].A)->array1->name, (yyvsp[0].E)->loc->name);
			}
		(yyval.E) = (yyvsp[0].E);
	}
#line 2681 "parser.tab.c"
    break;

  case 64:
#line 630 "parser.y"
                     {
	(yyval.E) = new expr();
	(yyval.E)->loc = (yyvsp[0].symp);
	int zero = 0;	
	int one = 1;
	(yyval.E)->type = "NONBOOL";
	}
#line 2693 "parser.tab.c"
    break;

  case 65:
#line 637 "parser.y"
                   {
	(yyval.E) = new expr();
	int zero = 0;	
	int one = 1;
	(yyval.E)->loc = (yyvsp[0].symp);
	}
#line 2704 "parser.tab.c"
    break;

  case 66:
#line 643 "parser.y"
                         {
	(yyval.E) = new expr();
	symtype* tmp = new symtype("PTR");
	int zero = 0;	
	int one = 1;
	(yyval.E)->loc = gentemp(tmp, (yyvsp[0].charval));
	(yyval.E)->loc->type->ptr = new symtype("CHAR");
	}
#line 2717 "parser.tab.c"
    break;

  case 67:
#line 651 "parser.y"
                                          {
	int zero = 0;	
	int one = 1;
	(yyval.E) = (yyvsp[-1].E);
	}
#line 2727 "parser.tab.c"
    break;

  case 68:
#line 660 "parser.y"
                {//later
	}
#line 2734 "parser.tab.c"
    break;

  case 69:
#line 662 "parser.y"
                {//later
	}
#line 2741 "parser.tab.c"
    break;

  case 70:
#line 664 "parser.y"
               {//later
	}
#line 2748 "parser.tab.c"
    break;

  case 71:
#line 666 "parser.y"
               {//later
	}
#line 2755 "parser.tab.c"
    break;

  case 72:
#line 668 "parser.y"
                {//later
	}
#line 2762 "parser.tab.c"
    break;

  case 73:
#line 670 "parser.y"
                 {//later
	}
#line 2769 "parser.tab.c"
    break;

  case 74:
#line 672 "parser.y"
               {//later
	}
#line 2776 "parser.tab.c"
    break;

  case 75:
#line 674 "parser.y"
               {//later
	}
#line 2783 "parser.tab.c"
    break;

  case 76:
#line 676 "parser.y"
                  {//later
	}
#line 2790 "parser.tab.c"
    break;

  case 77:
#line 678 "parser.y"
                  {//later
	}
#line 2797 "parser.tab.c"
    break;

  case 78:
#line 680 "parser.y"
                 {//later
	}
#line 2804 "parser.tab.c"
    break;

  case 79:
#line 685 "parser.y"
                              {(yyval.E)=(yyvsp[0].E);}
#line 2810 "parser.tab.c"
    break;

  case 80:
#line 686 "parser.y"
                                               {
	int zero = 0;	
	int one = 1;
	//later
	}
#line 2820 "parser.tab.c"
    break;

  case 81:
#line 694 "parser.y"
                               {
	int zero = 0;	
	int one = 1;
	//later
	}
#line 2830 "parser.tab.c"
    break;

  case 82:
#line 702 "parser.y"
                                                             {//later
	}
#line 2837 "parser.tab.c"
    break;

  case 83:
#line 704 "parser.y"
                                          {//later
	int zero = 0;	
	int one = 1;
	}
#line 2846 "parser.tab.c"
    break;

  case 84:
#line 712 "parser.y"
                        {//later
	}
#line 2853 "parser.tab.c"
    break;

  case 85:
#line 714 "parser.y"
                                                 {//later
	}
#line 2860 "parser.tab.c"
    break;

  case 86:
#line 719 "parser.y"
                    {(yyval.symp)=(yyvsp[0].symp);}
#line 2866 "parser.tab.c"
    break;

  case 87:
#line 720 "parser.y"
                                       {
		int zero = 0;	
		int one = 1;
		if ((yyvsp[0].symp)->initial_value!="") (yyvsp[-2].symp)->initial_value=(yyvsp[0].symp)->initial_value;
		emit ("EQUAL", (yyvsp[-2].symp)->name, (yyvsp[0].symp)->name);
	}
#line 2877 "parser.tab.c"
    break;

  case 88:
#line 729 "parser.y"
                 {//later
	}
#line 2884 "parser.tab.c"
    break;

  case 89:
#line 731 "parser.y"
                 {//later
	}
#line 2891 "parser.tab.c"
    break;

  case 90:
#line 733 "parser.y"
               {//later
	}
#line 2898 "parser.tab.c"
    break;

  case 91:
#line 735 "parser.y"
                   {//later
	}
#line 2905 "parser.tab.c"
    break;

  case 92:
#line 740 "parser.y"
               {Type="VOID";}
#line 2911 "parser.tab.c"
    break;

  case 93:
#line 741 "parser.y"
               {Type="CHAR";}
#line 2917 "parser.tab.c"
    break;

  case 95:
#line 743 "parser.y"
              {Type="INTEGER";}
#line 2923 "parser.tab.c"
    break;

  case 98:
#line 746 "parser.y"
                 {Type="DOUBLE";}
#line 2929 "parser.tab.c"
    break;

  case 105:
#line 756 "parser.y"
                                                {//later
	int zero = 0;	
	int one = 1;
	}
#line 2938 "parser.tab.c"
    break;

  case 106:
#line 760 "parser.y"
                         {//later
	int zero = 0;	
	int one = 1;
	}
#line 2947 "parser.tab.c"
    break;

  case 107:
#line 764 "parser.y"
                                               {//later
	int zero = 0;	
	int one = 1;
	}
#line 2956 "parser.tab.c"
    break;

  case 108:
#line 768 "parser.y"
                        {//later
	int zero = 0;	
	int one = 1;
	}
#line 2965 "parser.tab.c"
    break;

  case 109:
#line 775 "parser.y"
                                                               {//later
	int zero = 0;	
	int one = 1;
	}
#line 2974 "parser.tab.c"
    break;

  case 110:
#line 779 "parser.y"
                                                    {//later
	int zero = 0;	
	int one = 1;
	}
#line 2983 "parser.tab.c"
    break;

  case 111:
#line 783 "parser.y"
                                                                     {//later
	int zero = 0;	
	int one = 1;
	}
#line 2992 "parser.tab.c"
    break;

  case 112:
#line 787 "parser.y"
                                                          {//later
	int zero = 0;	
	int one = 1;
	}
#line 3001 "parser.tab.c"
    break;

  case 113:
#line 791 "parser.y"
                         {//later
	int zero = 0;	
	int one = 1;
	}
#line 3010 "parser.tab.c"
    break;

  case 114:
#line 798 "parser.y"
                    {//later
	int zero = 0;	
	int one = 1;
	}
#line 3019 "parser.tab.c"
    break;

  case 115:
#line 802 "parser.y"
                                         {//later
	int zero = 0;	
	int one = 1;
	}
#line 3028 "parser.tab.c"
    break;

  case 116:
#line 809 "parser.y"
                    {//later
	int zero = 0;	
	int one = 1;
	}
#line 3037 "parser.tab.c"
    break;

  case 117:
#line 813 "parser.y"
                                               {//later
	int zero = 0;	
	int one = 1;
	}
#line 3046 "parser.tab.c"
    break;

  case 118:
#line 820 "parser.y"
               {//later
	int zero = 0;	
	int one = 1;
	}
#line 3055 "parser.tab.c"
    break;

  case 119:
#line 824 "parser.y"
                  {//later
	int zero = 0;	
	int one = 1;
	}
#line 3064 "parser.tab.c"
    break;

  case 120:
#line 828 "parser.y"
                  {//later
	int zero = 0;	
	int one = 1;
	}
#line 3073 "parser.tab.c"
    break;

  case 121:
#line 835 "parser.y"
                {//later
	}
#line 3080 "parser.tab.c"
    break;

  case 122:
#line 840 "parser.y"
                                  {
		symtype * t = (yyvsp[-1].symtp);
		int zero = 0;	
		int one = 1;
		while (t->ptr !=NULL) t = t->ptr;
		t->ptr = (yyvsp[0].symp)->type;
		(yyval.symp) = (yyvsp[0].symp)->update((yyvsp[-1].symtp));
	}
#line 3093 "parser.tab.c"
    break;

  case 123:
#line 848 "parser.y"
                          {//later
	}
#line 3100 "parser.tab.c"
    break;

  case 124:
#line 854 "parser.y"
                    {
		(yyval.symp) = (yyvsp[0].symp)->update(new symtype(Type));
		currSymbol = (yyval.symp);
		int zero = 0;	
		int one = 1;
	}
#line 3111 "parser.tab.c"
    break;

  case 125:
#line 860 "parser.y"
                                          {(yyval.symp)=(yyvsp[-1].symp);}
#line 3117 "parser.tab.c"
    break;

  case 126:
#line 861 "parser.y"
                                                                                        {//later
	}
#line 3124 "parser.tab.c"
    break;

  case 127:
#line 863 "parser.y"
                                                                   {//later
	}
#line 3131 "parser.tab.c"
    break;

  case 128:
#line 865 "parser.y"
                                                                     {
		symtype * t = (yyvsp[-3].symp) -> type;
		symtype * prev = NULL;
		int zero = 0;	
		int one = 1;
		while (t->type == "ARR") {
			prev = t;
			t = t->ptr;
		}
		if (prev==NULL) {
			int temp = atoi((yyvsp[-1].E)->loc->initial_value.c_str());
			symtype* s = new symtype("ARR", (yyvsp[-3].symp)->type, temp);
			int zero = 0;	
			int one = 1;
			(yyval.symp) = (yyvsp[-3].symp)->update(s);
		}
		else {
			prev->ptr =  new symtype("ARR", t, atoi((yyvsp[-1].E)->loc->initial_value.c_str()));
			int zero = 0;	
			int one = 1;
			(yyval.symp) = (yyvsp[-3].symp)->update ((yyvsp[-3].symp)->type);
		}
	}
#line 3159 "parser.tab.c"
    break;

  case 129:
#line 888 "parser.y"
                                                {
		symtype * t = (yyvsp[-2].symp) -> type;
		symtype * prev = NULL;
		int zero = 0;	
		int one = 1;
		while (t->type == "ARR") {
			prev = t;
			t = t->ptr;
		}
		if (prev==NULL) {
			symtype* s = new symtype("ARR", (yyvsp[-2].symp)->type, 0);
			int zero = 0;	
			int one = 1;
			(yyval.symp) = (yyvsp[-2].symp)->update(s);
		}
		else {
			prev->ptr =  new symtype("ARR", t, 0);
			int zero = 0;	
		int one = 1;
			(yyval.symp) = (yyvsp[-2].symp)->update ((yyvsp[-2].symp)->type);
		}
	}
#line 3186 "parser.tab.c"
    break;

  case 130:
#line 910 "parser.y"
                                                                                               {//later
	int zero = 0;	
	int one = 1;
	}
#line 3195 "parser.tab.c"
    break;

  case 131:
#line 914 "parser.y"
                                                                            {//later
	int zero = 0;	
	int one = 1;
	}
#line 3204 "parser.tab.c"
    break;

  case 132:
#line 918 "parser.y"
                                                                       {//later
	int zero = 0;	
	int one = 1;
	}
#line 3213 "parser.tab.c"
    break;

  case 133:
#line 922 "parser.y"
                                                    {//later
	int zero = 0;	
	int one = 1;
	}
#line 3222 "parser.tab.c"
    break;

  case 134:
#line 926 "parser.y"
                                                                       {
		currTable->name = (yyvsp[-4].symp)->name;
		int zero = 0;	
		int one = 1;
		if ((yyvsp[-4].symp)->type->type !="VOID") {
			sym *s = currTable->lookup("return");
			int three = 3;	
			int four = 4;
			s->update((yyvsp[-4].symp)->type);		
		}
		(yyvsp[-4].symp)->nested=currTable;

		currTable->parent = globalTable;
		changeTable (globalTable);				// Come back to globalsymbol currTable
		currSymbol = (yyval.symp);
	}
#line 3243 "parser.tab.c"
    break;

  case 135:
#line 942 "parser.y"
                                                                {//later
	int zero = 0;	
	int one = 1;
	}
#line 3252 "parser.tab.c"
    break;

  case 136:
#line 946 "parser.y"
                                                   {
		currTable->name = (yyvsp[-3].symp)->name;
		int zero = 0;	
		int one = 1;	
		if ((yyvsp[-3].symp)->type->type !="VOID") {	
			sym *s = currTable->lookup("return");
			int three = 0;	
			int four = 1;
			s->update((yyvsp[-3].symp)->type);		
		}
		(yyvsp[-3].symp)->nested=currTable;

		currTable->parent = globalTable;
		changeTable (globalTable);				// Come back to globalsymbol currTable
		currSymbol = (yyval.symp);
	}
#line 3273 "parser.tab.c"
    break;

  case 137:
#line 965 "parser.y"
                 { 															// Used for changing to symbol currTable for a function
		if (currSymbol->nested==NULL) changeTable(new symtable(""));	// Function symbol currTable doesn't already exist
		else {
			changeTable (currSymbol ->nested);						// Function symbol currTable already exists
			emit ("LABEL", currTable->name);
		}
	}
#line 3285 "parser.tab.c"
    break;

  case 138:
#line 975 "parser.y"
                                {//later
	}
#line 3292 "parser.tab.c"
    break;

  case 139:
#line 977 "parser.y"
             {
		(yyval.symtp) = new symtype("PTR");
		int zero = 0;	
		int one = 1;
	}
#line 3302 "parser.tab.c"
    break;

  case 140:
#line 982 "parser.y"
                                        {//later
	int zero = 0;	
	int one = 1;
	}
#line 3311 "parser.tab.c"
    break;

  case 141:
#line 986 "parser.y"
                     {
		(yyval.symtp) = new symtype("PTR", (yyvsp[0].symtp));
		int zero = 0;	
		int one = 1;
	}
#line 3321 "parser.tab.c"
    break;

  case 142:
#line 994 "parser.y"
                       {//later
	int zero = 0;	
	int one = 1;
	}
#line 3330 "parser.tab.c"
    break;

  case 143:
#line 998 "parser.y"
                                          {//later
	int zero = 0;	
	int one = 1;
	}
#line 3339 "parser.tab.c"
    break;

  case 144:
#line 1006 "parser.y"
                              {
	emit ("PARAM", (yyvsp[0].E)->loc->name);
	int zero = 0;	
	int one = 1;
	(yyval.intval) = 1;
	}
#line 3350 "parser.tab.c"
    break;

  case 145:
#line 1012 "parser.y"
                                                           {
	emit ("PARAM", (yyvsp[0].E)->loc->name);
	(yyval.intval) = (yyvsp[-2].intval)+1;
	}
#line 3359 "parser.tab.c"
    break;

  case 146:
#line 1019 "parser.y"
                         {(yyval.E)=(yyvsp[0].E);}
#line 3365 "parser.tab.c"
    break;

  case 147:
#line 1020 "parser.y"
                                                     {
		if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc) ) {
			(yyval.E) = new expr();
			(yyval.E)->type = "BOOL";
			int zero = 0;	
			int one = 1;
			(yyval.E)->truelist = makelist (nextinstr());
			(yyval.E)->falselist = makelist (nextinstr()+1);
			emit("LT", "", (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
			emit ("GOTOOP", "");
		}
		else cout << "Type Error"<< endl;
	}
#line 3383 "parser.tab.c"
    break;

  case 148:
#line 1033 "parser.y"
                                                     {
		if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc) ) {
			(yyval.E) = new expr();
			(yyval.E)->type = "BOOL";

			int zero = 0;	
			int one = 1;
			(yyval.E)->truelist = makelist (nextinstr());
			(yyval.E)->falselist = makelist (nextinstr()+1);
			emit("GT", "", (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
			emit ("GOTOOP", "");
		}
		else cout << "Type Error"<< endl;
	}
#line 3402 "parser.tab.c"
    break;

  case 149:
#line 1047 "parser.y"
                                                  {
		if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc) ) {
			(yyval.E) = new expr();
			(yyval.E)->type = "BOOL";
			int zero = 0;	
			int one = 1;
			(yyval.E)->truelist = makelist (nextinstr());
			(yyval.E)->falselist = makelist (nextinstr()+1);
			emit("LE", "", (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
			emit ("GOTOOP", "");
		}
		else cout << "Type Error"<< endl;
	}
#line 3420 "parser.tab.c"
    break;

  case 150:
#line 1060 "parser.y"
                                                  {
		if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc) ) {
			(yyval.E) = new expr();
			(yyval.E)->type = "BOOL";
			int zero = 0;	
			int one = 1;
			(yyval.E)->truelist = makelist (nextinstr());
			(yyval.E)->falselist = makelist (nextinstr()+1);
			emit("GE", "", (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
			emit ("GOTOOP", "");
		}
		else cout << "Type Error"<< endl;
	}
#line 3438 "parser.tab.c"
    break;

  case 151:
#line 1078 "parser.y"
                           {
	int zero = 0;	
	int one = 1;	
	(yyval.A) = (yyvsp[0].A);
	}
#line 3448 "parser.tab.c"
    break;

  case 152:
#line 1083 "parser.y"
                             {
		// Increment $2
		emit ("ADD", (yyvsp[0].A)->array1->name, (yyvsp[0].A)->array1->name, "1");
		int zero = 0;	
		int one = 1;
		// Use the same value as $2
		(yyval.A) = (yyvsp[0].A);
	}
#line 3461 "parser.tab.c"
    break;

  case 153:
#line 1091 "parser.y"
                             {
		// Decrement $2
		emit ("SUB", (yyvsp[0].A)->array1->name, (yyvsp[0].A)->array1->name, "1");
		int zero = 0;	
		int one = 1;
		// Use the same value as $2
		(yyval.A) = (yyvsp[0].A);
	}
#line 3474 "parser.tab.c"
    break;

  case 154:
#line 1099 "parser.y"
                                      {
		(yyval.A) = new array1();
		int zero = 0;	
		int one = 1;
		switch ((yyvsp[-1].unaryOperator)) {
			case '&':
				(yyval.A)->array1 = gentemp((new symtype("PTR")));
				(yyval.A)->array1->type->ptr = (yyvsp[0].A)->array1->type; 
				emit ("ADDRESS", (yyval.A)->array1->name, (yyvsp[0].A)->array1->name);
				break;
			case '*':
				(yyval.A)->cat = "PTR";
				(yyval.A)->loc = gentemp ((yyvsp[0].A)->array1->type->ptr);
				emit ("PTRR", (yyval.A)->loc->name, (yyvsp[0].A)->array1->name);
				(yyval.A)->array1 = (yyvsp[0].A)->array1;
				break;
			case '+':
				(yyval.A) = (yyvsp[0].A);
				break;
			case '-':
				(yyval.A)->array1 = gentemp(new symtype((yyvsp[0].A)->array1->type->type));
				emit ("UMINUS", (yyval.A)->array1->name, (yyvsp[0].A)->array1->name);
				break;
			case '~':
				(yyval.A)->array1 = gentemp(new symtype((yyvsp[0].A)->array1->type->type));
				emit ("BNOT", (yyval.A)->array1->name, (yyvsp[0].A)->array1->name);
				break;
			case '!':
				(yyval.A)->array1 = gentemp(new symtype((yyvsp[0].A)->array1->type->type));
				emit ("LNOT", (yyval.A)->array1->name, (yyvsp[0].A)->array1->name);
				break;
			default:
				break;
		}
		int two = 2;	
		int three = 3;
	}
#line 3516 "parser.tab.c"
    break;

  case 155:
#line 1136 "parser.y"
                                {
	//later
	}
#line 3524 "parser.tab.c"
    break;

  case 156:
#line 1139 "parser.y"
                                               {
	//later
	}
#line 3532 "parser.tab.c"
    break;

  case 157:
#line 1145 "parser.y"
                        {//later
	int zero = 0;	
	int one = 1;
	}
#line 3541 "parser.tab.c"
    break;

  case 158:
#line 1149 "parser.y"
                                   {//later
	int zero = 0;	
	int one = 1;
	}
#line 3550 "parser.tab.c"
    break;

  case 159:
#line 1156 "parser.y"
                               {//later
	int zero = 0;	
	int one = 1;
	}
#line 3559 "parser.tab.c"
    break;

  case 160:
#line 1160 "parser.y"
                                                    {//later
	int zero = 0;	
	int one = 1;
	}
#line 3568 "parser.tab.c"
    break;

  case 161:
#line 1167 "parser.y"
                                           {//later
	int zero = 0;	
	int one = 1;
	}
#line 3577 "parser.tab.c"
    break;

  case 162:
#line 1171 "parser.y"
                                {//later
	int zero = 0;	
	int one = 1;
	}
#line 3586 "parser.tab.c"
    break;

  case 163:
#line 1178 "parser.y"
                    {//later
	int zero = 0;	
	int one = 1;
	}
#line 3595 "parser.tab.c"
    break;

  case 164:
#line 1182 "parser.y"
                                          {//later
	int zero = 0;	
	int one = 1;
	}
#line 3604 "parser.tab.c"
    break;

  case 165:
#line 1189 "parser.y"
                                {//later
	int zero = 0;	
	int one = 1;
	}
#line 3613 "parser.tab.c"
    break;

  case 166:
#line 1196 "parser.y"
                              {
		(yyval.symp) = (yyvsp[0].E)->loc;
		int zero = 0;	
		int one = 1;
	}
#line 3623 "parser.tab.c"
    break;

  case 167:
#line 1201 "parser.y"
                                                 {//later
	int zero = 0;	
	int one = 1;
	}
#line 3632 "parser.tab.c"
    break;

  case 168:
#line 1205 "parser.y"
                                                       {//later
	int zero = 0;	
	int one = 1;
	}
#line 3641 "parser.tab.c"
    break;

  case 169:
#line 1213 "parser.y"
                                 {//later
	int zero = 0;	
	int one = 1;
	}
#line 3650 "parser.tab.c"
    break;

  case 170:
#line 1217 "parser.y"
                     {//later
	int zero = 0;	
	int one = 1;
	}
#line 3659 "parser.tab.c"
    break;

  case 171:
#line 1221 "parser.y"
                                                        {//later
	int zero = 0;	
	int one = 1;
	}
#line 3668 "parser.tab.c"
    break;

  case 172:
#line 1225 "parser.y"
                                            {//later
	int zero = 0;	
	int one = 1;
	}
#line 3677 "parser.tab.c"
    break;

  case 173:
#line 1232 "parser.y"
                                {//later
	int zero = 0;	
	int one = 1;
	}
#line 3686 "parser.tab.c"
    break;

  case 174:
#line 1239 "parser.y"
                    {//later
	int zero = 0;	
	int one = 1;
	}
#line 3695 "parser.tab.c"
    break;

  case 175:
#line 1243 "parser.y"
                                    {//later
	int zero = 0;	
	int one = 1;
	}
#line 3704 "parser.tab.c"
    break;

  case 176:
#line 1250 "parser.y"
                                                  {//later
	int zero = 0;	
	int one = 1;
	}
#line 3713 "parser.tab.c"
    break;

  case 177:
#line 1254 "parser.y"
                        {//later
	int zero = 0;	
	int one = 1;
	}
#line 3722 "parser.tab.c"
    break;

  case 178:
#line 1261 "parser.y"
                          {//later
	}
#line 3729 "parser.tab.c"
    break;

  case 179:
#line 1263 "parser.y"
                           {(yyval.S)=(yyvsp[0].S);}
#line 3735 "parser.tab.c"
    break;

  case 180:
#line 1264 "parser.y"
                             {
		int zero = 0;	
		int one = 1;
		(yyval.S) = new statement();
		(yyval.S)->nextlist = (yyvsp[0].E)->nextlist;
	}
#line 3746 "parser.tab.c"
    break;

  case 181:
#line 1270 "parser.y"
                            {(yyval.S)=(yyvsp[0].S);}
#line 3752 "parser.tab.c"
    break;

  case 182:
#line 1271 "parser.y"
                            {(yyval.S)=(yyvsp[0].S);}
#line 3758 "parser.tab.c"
    break;

  case 183:
#line 1272 "parser.y"
                       {(yyval.S)=(yyvsp[0].S);}
#line 3764 "parser.tab.c"
    break;

  case 184:
#line 1276 "parser.y"
                                    {(yyval.S) = new statement();}
#line 3770 "parser.tab.c"
    break;

  case 185:
#line 1277 "parser.y"
                                                  {(yyval.S) = new statement();}
#line 3776 "parser.tab.c"
    break;

  case 186:
#line 1278 "parser.y"
                                 {(yyval.S) = new statement();}
#line 3782 "parser.tab.c"
    break;

  case 187:
#line 1282 "parser.y"
                                              {(yyval.S)=(yyvsp[-1].S);}
#line 3788 "parser.tab.c"
    break;

  case 188:
#line 1283 "parser.y"
                                {(yyval.S) = new statement();}
#line 3794 "parser.tab.c"
    break;

  case 189:
#line 1287 "parser.y"
                   {(yyval.S)=(yyvsp[0].S);}
#line 3800 "parser.tab.c"
    break;

  case 190:
#line 1288 "parser.y"
                                   {
		int zero = 0;	
		int one = 1;
		(yyval.S)=(yyvsp[0].S);
		backpatch ((yyvsp[-2].S)->nextlist, (yyvsp[-1].instr));
	}
#line 3811 "parser.tab.c"
    break;

  case 191:
#line 1297 "parser.y"
                     {
		int zero = 0;	
		int one = 1;
		(yyval.S) = new statement();
	}
#line 3821 "parser.tab.c"
    break;

  case 192:
#line 1302 "parser.y"
                   {(yyval.S) = (yyvsp[0].S);}
#line 3827 "parser.tab.c"
    break;

  case 193:
#line 1306 "parser.y"
                              {(yyval.E)=(yyvsp[-1].E);}
#line 3833 "parser.tab.c"
    break;

  case 194:
#line 1307 "parser.y"
                   {(yyval.E) = new expr();}
#line 3839 "parser.tab.c"
    break;

  case 195:
#line 1312 "parser.y"
                                                             {
		(yyval.S) = new statement();
		convertInt2Bool((yyvsp[-3].E));
		int zero = 0;	
		int one = 1;
		// M1 to go back to boolean again
		// M2 to go to statement if the boolean is true
		backpatch((yyvsp[0].S)->nextlist, (yyvsp[-5].instr));
		backpatch((yyvsp[-3].E)->truelist, (yyvsp[-1].instr));
		(yyval.S)->nextlist = (yyvsp[-3].E)->falselist;
		int zeroo = 0;	
		int onee = 1;
		// Emit to prevent fallthrough
		stringstream STring;
	    STring << (yyvsp[-5].instr);
	    string TempString = STring.str();
	    char* Int_STring = (char*) TempString.c_str();
		string str = string(Int_STring);
		int zerooo = 0;	
		int oneee = 1;
		emit ("GOTOOP", str);
	}
#line 3866 "parser.tab.c"
    break;

  case 196:
#line 1334 "parser.y"
                                                                          {
		(yyval.S) = new statement();
		convertInt2Bool((yyvsp[-2].E));
		int zero = 0;	
		int one = 1;
		// M1 to go back to statement if expression is true
		// M2 to go to check expression if statement is complete
		backpatch ((yyvsp[-2].E)->truelist, (yyvsp[-7].instr));
		backpatch ((yyvsp[-6].S)->nextlist, (yyvsp[-5].instr));

		// Some bug in the next statement
		(yyval.S)->nextlist = (yyvsp[-2].E)->falselist;
	}
#line 3884 "parser.tab.c"
    break;

  case 197:
#line 1347 "parser.y"
                                                                                       {
		(yyval.S) = new statement();
		convertInt2Bool((yyvsp[-3].E));
		backpatch ((yyvsp[-3].E)->truelist, (yyvsp[-1].instr));
		backpatch ((yyvsp[0].S)->nextlist, (yyvsp[-4].instr));
		stringstream STring;
	    STring << (yyvsp[-4].instr);
		int zero = 0;	
		int one = 1;
	    string TempString = STring.str();
	    char* Int_STring = (char*) TempString.c_str();
		string str = string(Int_STring);

		emit ("GOTOOP", str);
		(yyval.S)->nextlist = (yyvsp[-3].E)->falselist;
	}
#line 3905 "parser.tab.c"
    break;

  case 198:
#line 1363 "parser.y"
                                                                                                      {
		(yyval.S) = new statement();
		int zeroo = 0;	
		int onee = 1;
		convertInt2Bool((yyvsp[-6].E));
		backpatch ((yyvsp[-6].E)->truelist, (yyvsp[-1].instr));
		backpatch ((yyvsp[-3].S)->nextlist, (yyvsp[-7].instr));
		backpatch ((yyvsp[0].S)->nextlist, (yyvsp[-5].instr));
		stringstream STring;
	    STring << (yyvsp[-5].instr);
		int zero = 0;	
		int one = 1;
	    string TempString = STring.str();
	    char* Int_STring = (char*) TempString.c_str();
		string str = string(Int_STring);
		emit ("GOTOOP", str);
		(yyval.S)->nextlist = (yyvsp[-6].E)->falselist;
	}
#line 3928 "parser.tab.c"
    break;

  case 199:
#line 1384 "parser.y"
                                   {(yyval.S) = new statement();}
#line 3934 "parser.tab.c"
    break;

  case 200:
#line 1385 "parser.y"
                            {(yyval.S) = new statement();}
#line 3940 "parser.tab.c"
    break;

  case 201:
#line 1386 "parser.y"
                         {(yyval.S) = new statement();}
#line 3946 "parser.tab.c"
    break;

  case 202:
#line 1387 "parser.y"
                                     {
		(yyval.S) = new statement();
		int zero = 0;	
		int one = 1;
		emit("RETURN",(yyvsp[-1].E)->loc->name);
	}
#line 3957 "parser.tab.c"
    break;

  case 203:
#line 1393 "parser.y"
                          {
		(yyval.S) = new statement();
		int zero = 0;	
		int one = 1;
		emit("RETURN","");
	}
#line 3968 "parser.tab.c"
    break;

  case 204:
#line 1402 "parser.y"
                              {}
#line 3974 "parser.tab.c"
    break;

  case 205:
#line 1403 "parser.y"
                                              {}
#line 3980 "parser.tab.c"
    break;

  case 206:
#line 1407 "parser.y"
                             {}
#line 3986 "parser.tab.c"
    break;

  case 207:
#line 1408 "parser.y"
                     {}
#line 3992 "parser.tab.c"
    break;

  case 208:
#line 1412 "parser.y"
                                                                                 {}
#line 3998 "parser.tab.c"
    break;

  case 209:
#line 1413 "parser.y"
                                                                {
		int zero = 0;	
		int one = 1;
		currTable->parent = globalTable;
		changeTable (globalTable);
	}
#line 4009 "parser.tab.c"
    break;

  case 210:
#line 1422 "parser.y"
                     {//later
	int zero = 0;	
	int one = 1;
	}
#line 4018 "parser.tab.c"
    break;

  case 211:
#line 1426 "parser.y"
                                      {//later
	}
#line 4025 "parser.tab.c"
    break;


#line 4029 "parser.tab.c"

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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
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
  return yyresult;
}
#line 1432 "parser.y"


void yyerror(string s) {
    cout<<s<<endl;
}
