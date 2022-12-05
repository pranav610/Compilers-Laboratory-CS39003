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
#line 1 "ass5_20CS10082_20CS30029.y"

#include <iostream>
#include <cstdlib>
#include <string>
#include <stdio.h>
#include <sstream>
#include "ass5_20CS10082_20CS30029_translator.h"
extern int yylex();
void yyerror(string s);
extern string Type;

using namespace std;

#line 84 "y.tab.c"

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
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    AUTO = 258,
    BREAK = 259,
    CASE = 260,
    CHAR = 261,
    CONST = 262,
    CONTINUE = 263,
    DEFAULT = 264,
    DO = 265,
    DOUBLE = 266,
    ELSE = 267,
    ENUM = 268,
    EXTERN = 269,
    FLOAT = 270,
    FOR = 271,
    GOTO = 272,
    IF = 273,
    INLINE = 274,
    INT = 275,
    LONG = 276,
    REGISTER = 277,
    RESTRICT = 278,
    RETURN = 279,
    SHORT = 280,
    SIGNED = 281,
    SIZEOF = 282,
    STATIC = 283,
    STRUCT = 284,
    SWITCH = 285,
    TYPEDEF = 286,
    UNION = 287,
    UNSIGNED = 288,
    VOID = 289,
    VOLATILE = 290,
    WHILE = 291,
    _BOOL = 292,
    _COMPLEX = 293,
    _IMAGINARY = 294,
    SQUARE_BRACKET_OPEN = 295,
    SQUARE_BRACKET_CLOSE = 296,
    ROUND_BRACKET_OPEN = 297,
    ROUND_BRACKET_CLOSE = 298,
    CURLY_BRACKET_OPEN = 299,
    CURLY_BRACKET_CLOSE = 300,
    DOT = 301,
    ARROW = 302,
    INCREMENT = 303,
    DECREMENT = 304,
    BITWISE_AND = 305,
    MULTIPLY = 306,
    ADD = 307,
    SUBTRACT = 308,
    BITWISE_NOT = 309,
    LOGICAL_NOT = 310,
    DIVIDE = 311,
    MODULUS = 312,
    LEFT_SHIFT = 313,
    RIGHT_SHIFT = 314,
    LESS_THAN = 315,
    GREATER_THAN = 316,
    LESS_THAN_OR_EQUAL_TO = 317,
    GREATER_THAN_OR_EQUAL_TO = 318,
    EQUAL_TO = 319,
    NOT_EQUAL_TO = 320,
    BITWISE_XOR = 321,
    BITWISE_OR = 322,
    LOGICAL_AND = 323,
    LOGICAL_OR = 324,
    QUESTION_MARK = 325,
    COLON = 326,
    SEMICOLON = 327,
    ELLIPSIS = 328,
    ASSIGNMENT = 329,
    MULTIPLY_ASSIGNMENT = 330,
    DIVIDE_ASSIGNMENT = 331,
    MODULUS_ASSIGNMENT = 332,
    ADD_ASSIGNMENT = 333,
    SUBTRACT_ASSIGNMENT = 334,
    LEFT_SHIFT_ASSIGNMENT = 335,
    RIGHT_SHIFT_ASSIGNMENT = 336,
    BITWISE_AND_ASSIGNMENT = 337,
    BITWISE_XOR_ASSIGNMENT = 338,
    BITWISE_OR_ASSIGNMENT = 339,
    COMMA = 340,
    HASH = 341,
    IDENTIFIER = 342,
    STRING_LITERAL = 343,
    CHARACTER_CONSTANT = 344,
    ENUMERATION_CONSTANT = 345,
    FLOATING_CONSTANT = 346,
    INTEGER_CONSTANT = 347,
    THEN = 348
  };
#endif
/* Tokens.  */
#define AUTO 258
#define BREAK 259
#define CASE 260
#define CHAR 261
#define CONST 262
#define CONTINUE 263
#define DEFAULT 264
#define DO 265
#define DOUBLE 266
#define ELSE 267
#define ENUM 268
#define EXTERN 269
#define FLOAT 270
#define FOR 271
#define GOTO 272
#define IF 273
#define INLINE 274
#define INT 275
#define LONG 276
#define REGISTER 277
#define RESTRICT 278
#define RETURN 279
#define SHORT 280
#define SIGNED 281
#define SIZEOF 282
#define STATIC 283
#define STRUCT 284
#define SWITCH 285
#define TYPEDEF 286
#define UNION 287
#define UNSIGNED 288
#define VOID 289
#define VOLATILE 290
#define WHILE 291
#define _BOOL 292
#define _COMPLEX 293
#define _IMAGINARY 294
#define SQUARE_BRACKET_OPEN 295
#define SQUARE_BRACKET_CLOSE 296
#define ROUND_BRACKET_OPEN 297
#define ROUND_BRACKET_CLOSE 298
#define CURLY_BRACKET_OPEN 299
#define CURLY_BRACKET_CLOSE 300
#define DOT 301
#define ARROW 302
#define INCREMENT 303
#define DECREMENT 304
#define BITWISE_AND 305
#define MULTIPLY 306
#define ADD 307
#define SUBTRACT 308
#define BITWISE_NOT 309
#define LOGICAL_NOT 310
#define DIVIDE 311
#define MODULUS 312
#define LEFT_SHIFT 313
#define RIGHT_SHIFT 314
#define LESS_THAN 315
#define GREATER_THAN 316
#define LESS_THAN_OR_EQUAL_TO 317
#define GREATER_THAN_OR_EQUAL_TO 318
#define EQUAL_TO 319
#define NOT_EQUAL_TO 320
#define BITWISE_XOR 321
#define BITWISE_OR 322
#define LOGICAL_AND 323
#define LOGICAL_OR 324
#define QUESTION_MARK 325
#define COLON 326
#define SEMICOLON 327
#define ELLIPSIS 328
#define ASSIGNMENT 329
#define MULTIPLY_ASSIGNMENT 330
#define DIVIDE_ASSIGNMENT 331
#define MODULUS_ASSIGNMENT 332
#define ADD_ASSIGNMENT 333
#define SUBTRACT_ASSIGNMENT 334
#define LEFT_SHIFT_ASSIGNMENT 335
#define RIGHT_SHIFT_ASSIGNMENT 336
#define BITWISE_AND_ASSIGNMENT 337
#define BITWISE_XOR_ASSIGNMENT 338
#define BITWISE_OR_ASSIGNMENT 339
#define COMMA 340
#define HASH 341
#define IDENTIFIER 342
#define STRING_LITERAL 343
#define CHARACTER_CONSTANT 344
#define ENUMERATION_CONSTANT 345
#define FLOATING_CONSTANT 346
#define INTEGER_CONSTANT 347
#define THEN 348

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "ass5_20CS10082_20CS30029.y"

  int intval;
  char* charval;
  int instr;
  sym* symp;
  symtype* symtp;
  expr* E;
  statement* S;
  array1* A;
  char unary_operator;

#line 334 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



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
#define YYLAST   1392

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
       0,    93,    93,   104,   110,   112,   122,   130,   166,   169,
     181,   183,   185,   196,   207,   215,   227,   235,   248,   254,
     259,   264,   269,   274,   279,   287,   292,   301,   322,   332,
     342,   355,   358,   370,   384,   387,   397,   411,   415,   417,
     419,   423,   425,   429,   431,   440,   441,   457,   477,   478,
     496,   497,   515,   516,   534,   535,   553,   554,   571,   575,
     582,   583,   607,   608,   627,   634,   640,   648,   657,   659,
     661,   663,   665,   667,   669,   671,   673,   675,   677,   682,
     683,   691,   699,   701,   709,   711,   716,   717,   726,   728,
     730,   732,   737,   738,   739,   740,   741,   742,   743,   744,
     745,   746,   747,   748,   749,   753,   757,   761,   765,   772,
     776,   780,   784,   788,   795,   799,   806,   810,   817,   821,
     825,   832,   837,   845,   851,   857,   858,   860,   862,   885,
     907,   911,   915,   919,   923,   939,   943,   962,   972,   974,
     979,   983,   991,   995,  1003,  1009,  1016,  1017,  1030,  1044,
    1057,  1075,  1080,  1088,  1096,  1133,  1136,  1142,  1146,  1153,
    1157,  1164,  1168,  1175,  1179,  1186,  1193,  1198,  1202,  1210,
    1214,  1218,  1222,  1229,  1236,  1240,  1247,  1251,  1258,  1260,
    1261,  1267,  1268,  1269,  1273,  1274,  1275,  1279,  1280,  1284,
    1285,  1294,  1299,  1303,  1304,  1309,  1331,  1344,  1360,  1381,
    1382,  1383,  1384,  1390,  1399,  1400,  1404,  1405,  1409,  1410,
    1419,  1423
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AUTO", "BREAK", "CASE", "CHAR", "CONST",
  "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "ENUM", "EXTERN", "FLOAT",
  "FOR", "GOTO", "IF", "INLINE", "INT", "LONG", "REGISTER", "RESTRICT",
  "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC", "STRUCT", "SWITCH",
  "TYPEDEF", "UNION", "UNSIGNED", "VOID", "VOLATILE", "WHILE", "_BOOL",
  "_COMPLEX", "_IMAGINARY", "SQUARE_BRACKET_OPEN", "SQUARE_BRACKET_CLOSE",
  "ROUND_BRACKET_OPEN", "ROUND_BRACKET_CLOSE", "CURLY_BRACKET_OPEN",
  "CURLY_BRACKET_CLOSE", "DOT", "ARROW", "INCREMENT", "DECREMENT",
  "BITWISE_AND", "MULTIPLY", "ADD", "SUBTRACT", "BITWISE_NOT",
  "LOGICAL_NOT", "DIVIDE", "MODULUS", "LEFT_SHIFT", "RIGHT_SHIFT",
  "LESS_THAN", "GREATER_THAN", "LESS_THAN_OR_EQUAL_TO",
  "GREATER_THAN_OR_EQUAL_TO", "EQUAL_TO", "NOT_EQUAL_TO", "BITWISE_XOR",
  "BITWISE_OR", "LOGICAL_AND", "LOGICAL_OR", "QUESTION_MARK", "COLON",
  "SEMICOLON", "ELLIPSIS", "ASSIGNMENT", "MULTIPLY_ASSIGNMENT",
  "DIVIDE_ASSIGNMENT", "MODULUS_ASSIGNMENT", "ADD_ASSIGNMENT",
  "SUBTRACT_ASSIGNMENT", "LEFT_SHIFT_ASSIGNMENT", "RIGHT_SHIFT_ASSIGNMENT",
  "BITWISE_AND_ASSIGNMENT", "BITWISE_XOR_ASSIGNMENT",
  "BITWISE_OR_ASSIGNMENT", "COMMA", "HASH", "IDENTIFIER", "STRING_LITERAL",
  "CHARACTER_CONSTANT", "ENUMERATION_CONSTANT", "FLOATING_CONSTANT",
  "INTEGER_CONSTANT", "THEN", "$accept", "constant", "postfix_expression",
  "selection_statement", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "declaration_specifiers", "equality_expression", "AND_expression",
  "exclusive_OR_expression", "inclusive_OR_expression",
  "logical_AND_expression", "logical_OR_expression", "M", "N",
  "conditional_expression", "assignment_expression", "primary_expression",
  "assignment_operator", "expression", "constant_expression",
  "declaration", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "enum_specifier", "enumerator_list", "enumerator", "type_qualifier",
  "function_specifier", "declarator", "direct_declarator", "CT", "pointer",
  "type_qualifier_list", "argument_expression_list",
  "relational_expression", "unary_expression", "parameter_type_list",
  "parameter_list", "parameter_declaration", "identifier_list",
  "type_name", "initializer", "initializer_list", "designation",
  "designator_list", "designator", "statement", "labeled_statement",
  "compound_statement", "block_item_list", "block_item",
  "expression_statement", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list", YY_NULLPTR
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

#define YYPACT_NINF (-263)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-138)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1319,  -263,  -263,  -263,  -263,   -22,  -263,  -263,  -263,  -263,
    -263,  -263,  -263,  -263,  -263,  -263,  -263,  -263,  -263,  -263,
    -263,  -263,     2,  -263,  1319,  1319,  -263,  1319,  1319,  1282,
    -263,  -263,   -54,    26,    -4,   126,  -263,  -263,   -49,  -263,
     816,   129,   -24,  -263,  -263,  -263,  -263,  -263,  -263,   -35,
      69,  -263,   -54,     7,  -263,  -263,   126,  -263,    -4,   948,
       2,  -263,    91,  1319,   617,    52,   129,  1093,  -263,   -10,
      71,  -263,  -263,  -263,  -263,    76,  1122,   559,   919,  1151,
    1151,  -263,  -263,  -263,  -263,  -263,  -263,  -263,  -263,  -263,
    -263,  -263,  -263,  -263,   174,  1093,  -263,   101,     4,   134,
      63,    94,    87,    92,   105,   136,  -263,  -263,  -263,   169,
     106,  -263,   293,  -263,  -263,    91,   726,  -263,   137,   168,
     675,  -263,  1241,    -1,  -263,  -263,  -263,  -263,  -263,  -263,
      -2,   559,  -263,  -263,     3,  1353,  -263,  1353,   127,  1093,
     132,  -263,    75,   948,   102,  -263,   559,  -263,  -263,  1093,
     977,   146,   160,  -263,  -263,  -263,  1093,  1093,  1093,  1093,
    1093,  1093,  1093,  1093,  1093,  1093,  1093,  1093,   145,   156,
    1093,  1093,  1093,  1093,  -263,  -263,  -263,  -263,  -263,  -263,
    -263,  -263,  -263,  -263,  -263,  1093,   176,  1093,   180,   182,
    -263,   212,   170,   214,  1006,   216,  -263,  -263,  -263,   188,
    -263,   -27,  -263,  -263,  -263,  -263,   217,  -263,  -263,  -263,
    -263,  -263,   220,   726,  -263,  -263,  -263,   222,   224,  -263,
      -4,   223,   183,  -263,  -263,   184,  -263,   226,  -263,  1093,
    -263,  -263,  1035,   229,  -263,  -263,   860,  -263,  -263,  -263,
     230,   -30,  -263,  -263,     5,  -263,  -263,  -263,  -263,  -263,
     101,   101,     4,     4,   169,   169,    63,    94,    87,  -263,
    -263,  -263,   134,   134,   134,   134,  -263,  -263,   196,  -263,
     472,   472,  1064,   203,  1093,  -263,    66,  1093,   235,   472,
    -263,  -263,   383,  -263,   237,  -263,  -263,  -263,  -263,   858,
    -263,   236,  -263,   919,  -263,  -263,  -263,  -263,   948,   236,
    -263,  -263,  1093,  1093,  1093,  1093,   472,  -263,  -263,  -263,
    -263,   194,  -263,     6,  1093,  -263,  -263,  -263,  -263,  -263,
      89,  -263,  -263,    92,   105,   194,  -263,   246,  1064,   241,
     472,    61,  -263,   890,   215,   243,   244,  -263,  -263,  -263,
    -263,  -263,  1093,  -263,  1093,   472,   472,  1093,    70,   472,
     194,  -263,  -263,  -263,   218,  -263,   245,   279,  -263,  -263,
    -263,   472,   472,  -263,  -263
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    90,    93,   118,    98,     0,    88,    97,   121,    95,
      96,    91,   119,    94,    99,    89,   100,    92,   120,   101,
     102,   103,     0,   207,    38,    40,   104,    42,    44,     0,
     204,   206,     0,   113,     0,   139,    83,   124,     0,    84,
      86,   123,     0,    37,    39,    41,    43,     1,   205,   116,
       0,   114,     0,     0,   142,   141,   138,    82,     0,     0,
       0,   210,     0,   137,     0,   137,   122,     0,   110,     0,
       0,   125,   143,   140,    85,    86,     0,     0,     0,     0,
       0,    19,    20,    21,    22,    23,    24,    64,    66,     5,
       4,     3,     2,    65,   151,     0,    27,    31,    34,   146,
      48,    50,    52,    54,    56,    60,    62,   166,     6,    45,
      25,    87,     0,   209,   211,     0,     0,   129,    20,     0,
       0,   163,     0,     0,    81,   117,    25,   112,   115,   109,
       0,     0,   155,    79,     0,   106,   165,   108,     0,     0,
       0,   170,     0,     0,     0,   174,     0,   152,   153,     0,
       0,     0,     0,    12,    13,   154,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,     0,     0,     0,     0,     0,
      58,     0,     0,     0,     0,     0,    58,   188,   194,    64,
     181,     0,   191,   192,   178,   179,    58,   189,   180,   182,
     183,   208,     0,     0,   133,   128,   127,    20,     0,   136,
     162,     0,   157,   159,   135,     0,   111,     0,    67,     0,
     105,   107,     0,     0,   177,   167,     0,   169,   173,   175,
       0,     0,     8,   144,     0,    10,    11,    28,    29,    30,
      32,    33,    35,    36,    46,    47,    49,    51,    53,    58,
      58,    58,   147,   148,   149,   150,    63,   201,     0,   200,
       0,     0,     0,     0,     0,   203,     0,     0,     0,     0,
     193,   187,     0,   131,     0,   132,   126,   161,   134,     0,
     164,   156,    80,     0,    26,   176,   168,   172,     0,     0,
       7,     9,     0,     0,     0,     0,     0,   186,    58,    58,
     199,    59,   202,     0,     0,   184,   190,   130,   158,   160,
       0,   171,   145,    55,    57,    59,   185,     0,     0,     0,
       0,     0,    14,     0,     0,     0,    58,    58,    18,    58,
      15,    58,     0,    58,     0,     0,     0,     0,     0,     0,
      59,    59,   195,    61,     0,   197,     0,    16,   196,    58,
      58,     0,     0,   198,    17
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -263,  -263,  -263,  -263,  -263,   -89,    78,    81,    -8,     0,
     128,   139,   125,    -9,    18,  -263,  -142,  -101,   -66,   -38,
    -263,  -263,   -70,  -125,   -31,  -263,   266,  -263,    -6,    65,
    -263,   273,   -50,    -5,  -263,   -17,   291,   171,   -15,   -56,
    -263,    82,   -64,  -263,  -263,    45,  -263,   -94,   -57,    43,
    -223,  -263,   195,  -134,  -263,   -28,  -263,    58,  -262,  -263,
    -263,  -263,   320,  -263,  -263
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    93,    94,   200,    95,    96,    97,    98,    99,    60,
     100,   101,   102,   103,   104,   105,   271,   168,   106,   133,
     108,   185,   201,   125,    23,    38,    39,    24,    25,   136,
      26,    50,    51,    27,    28,    75,    41,    62,    42,    56,
     244,   109,   110,   221,   222,   223,   123,   138,   141,   142,
     143,   144,   145,   203,   204,   205,   206,   207,   208,   209,
     210,    29,    30,    31,    63
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      22,   124,   111,   126,   169,    40,   155,   134,   120,    61,
     309,   300,   132,   298,   233,   147,   148,    53,    34,   128,
      55,   107,    32,    57,    43,    44,   119,    45,    46,    22,
      54,   126,   114,    49,   113,   127,    58,   227,    34,    67,
     107,    73,   224,   226,    34,   280,   228,    35,   301,   330,
      71,    72,   240,    35,   278,   229,   159,   160,   229,    54,
     213,   134,   268,    37,   282,    33,   336,   247,   248,   249,
      52,   135,   137,   124,    36,   126,   134,    49,   212,   241,
     128,   202,   218,    37,   225,    49,   237,   211,   229,    37,
     302,   229,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   339,   107,   126,   126,   126,   126,
     298,    54,   243,   354,    68,    72,   129,   303,   304,   305,
     235,   124,   220,   126,   276,   135,   137,   163,   164,   135,
     137,   135,   137,     3,   332,   112,   307,   308,   312,   121,
     135,   137,   139,   294,   165,   315,   229,   266,   140,    12,
      59,   229,   156,   166,    69,   229,   130,   157,   158,   167,
     236,    18,   262,   263,   264,   265,   327,   328,   126,    64,
     232,    65,   326,   -59,   333,   284,   238,    35,   214,   297,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   292,   161,   162,   344,   345,   338,   346,   107,   347,
     230,   349,   231,   287,   311,   -59,   -59,   313,    72,   215,
     329,   351,   352,   259,   149,   355,   150,   361,   362,   234,
     151,   152,   153,   154,   334,   260,   261,   363,   364,   170,
     171,   172,   173,   245,   115,   325,   122,   250,   251,   126,
     126,   321,   252,   253,   331,   254,   255,   246,   267,   356,
     357,   202,   269,   270,   272,   107,   274,   273,   277,   279,
     107,   283,   281,   285,   322,   286,   288,   306,   289,   291,
     295,   290,   348,   299,   350,   310,   297,   314,   317,   229,
     293,   353,   335,   126,   337,   342,   341,   343,   359,   220,
     358,   360,   258,   256,   323,   107,     1,   186,   187,     2,
       3,   188,   189,   190,     4,   257,     5,     6,     7,   191,
     192,   193,     8,     9,    10,    11,    12,   194,    13,    14,
      76,    15,   324,   195,    74,    70,    16,    17,    18,   196,
      19,    20,    21,    66,   319,    77,   320,   112,   197,   239,
     316,    79,    80,    81,    82,    83,    84,    85,    86,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   198,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     199,    88,    89,    90,    91,    92,     1,   186,   187,     2,
       3,   188,   189,   190,     4,     0,     5,     6,     7,   191,
     192,   193,     8,     9,    10,    11,    12,   194,    13,    14,
      76,    15,     0,   195,     0,     0,    16,    17,    18,   196,
      19,    20,    21,     0,     0,    77,     0,   112,     0,     0,
       0,    79,    80,    81,    82,    83,    84,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   198,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     199,    88,    89,    90,    91,    92,   186,   187,     0,     0,
     188,   189,   190,     0,     0,     0,     0,     0,   191,   192,
     193,     0,     0,     0,     0,     0,   194,     0,     0,    76,
       0,     0,   195,     0,     0,     0,     0,     0,   196,     0,
       0,     0,     0,     0,    77,     0,   112,     0,     0,     0,
      79,    80,    81,    82,    83,    84,    85,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   198,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   199,
      88,    89,    90,    91,    92,     2,     3,     0,     0,     0,
       4,     0,     5,     0,     7,     0,     0,     0,     0,     9,
      10,     0,    12,     0,    13,    14,    76,     0,     0,     0,
       0,     0,    16,    17,    18,     0,    19,    20,    21,     0,
       0,    77,     0,     0,     0,     0,     0,    79,    80,    81,
      82,    83,    84,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     3,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,     0,     0,     0,    76,   116,    87,    88,    89,    90,
      91,    92,    18,     0,     0,     0,     0,     0,   117,    77,
       0,     0,     0,     0,     0,    79,    80,    81,   118,    83,
      84,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,     0,
       0,     0,    76,     0,    87,    88,    89,    90,    91,    92,
      18,     0,     0,     0,     0,     0,   216,    77,     0,     0,
       0,     0,     0,    79,    80,    81,   217,    83,    84,    85,
      86,     0,     0,     3,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    12,
       0,     0,     0,    76,     0,     0,     0,     0,     0,     0,
       0,    18,    87,    88,    89,    90,    91,    92,    77,     0,
       0,     0,     0,     0,    79,    80,    81,    82,    83,    84,
      85,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,    88,    89,    90,    91,    92,     1,
       0,     0,     2,     3,     0,     0,     0,     4,     0,     5,
       6,     7,     0,     0,     0,     8,     9,    10,    11,    12,
       0,    13,    14,     0,    15,     0,     0,     0,     0,    16,
      17,    18,     0,    19,    20,    21,     0,     0,     0,     0,
    -137,     1,     0,     0,     2,     3,     0,     0,     0,     4,
       0,     5,     6,     7,     0,     0,     0,     8,     9,    10,
      11,    12,     0,    13,    14,     0,    15,    76,     0,     0,
      59,    16,    17,    18,     0,    19,    20,    21,     0,     0,
     139,     0,    77,     0,    78,   296,   140,     0,    79,    80,
      81,    82,    83,    84,    85,    86,     0,    76,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     139,   318,    77,     0,    78,   340,   140,     0,    79,    80,
      81,    82,    83,    84,    85,    86,    76,    87,    88,    89,
      90,    91,    92,     0,     0,     0,     0,     0,     0,   139,
       0,    77,     0,    78,     0,   140,     0,    79,    80,    81,
      82,    83,    84,    85,    86,    76,     0,    87,    88,    89,
      90,    91,    92,     0,     0,     0,     0,     0,     0,     0,
      77,     0,    78,     0,     0,     0,    79,    80,    81,    82,
      83,    84,    85,    86,    76,     0,    87,    88,    89,    90,
      91,    92,     0,     0,     0,     0,     0,     0,     0,    77,
     242,     0,     0,     0,     0,    79,    80,    81,    82,    83,
      84,    85,    86,    76,     0,    87,    88,    89,    90,    91,
      92,     0,     0,     0,     0,     0,     0,     0,    77,     0,
       0,     0,     0,     0,    79,    80,    81,    82,    83,    84,
      85,    86,    76,     0,    87,    88,    89,    90,    91,    92,
       0,     0,     0,     0,     0,     0,     0,    77,   275,   293,
       0,     0,     0,    79,    80,    81,    82,    83,    84,    85,
      86,    76,     0,    87,    88,    89,    90,    91,    92,     0,
       0,     0,     0,     0,     0,     0,    77,     0,     0,     0,
       0,     0,    79,    80,    81,    82,    83,    84,    85,    86,
      76,     0,    87,    88,    89,    90,    91,    92,     0,     0,
       0,     0,     0,     0,     0,    77,   198,     0,     0,     0,
       0,    79,    80,    81,    82,    83,    84,    85,    86,    76,
       0,    87,    88,    89,    90,    91,    92,     0,     0,     0,
       0,     0,     0,     0,   131,     0,     0,     0,     0,     0,
      79,    80,    81,    82,    83,    84,    85,    86,    76,     0,
      87,    88,    89,    90,    91,    92,     0,     0,     0,     0,
       0,     0,     0,   146,     0,     0,     0,     0,     0,    79,
      80,    81,    82,    83,    84,    85,    86,     0,     0,    87,
      88,    89,    90,    91,    92,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    87,    88,
      89,    90,    91,    92,     1,     0,     0,     2,     3,     0,
       0,     0,     4,     0,     5,     6,     7,     0,     0,     0,
       8,     9,    10,    11,    12,     0,    13,    14,     0,    15,
       0,     0,     0,     0,    16,    17,    18,     0,    19,    20,
      21,     0,    47,     0,   219,     1,     0,     0,     2,     3,
       0,     0,     0,     4,     0,     5,     6,     7,     0,     0,
       0,     8,     9,    10,    11,    12,     0,    13,    14,     0,
      15,     0,     0,     0,     0,    16,    17,    18,     0,    19,
      20,    21,     1,     0,     0,     2,     3,     0,     0,     0,
       4,     0,     5,     6,     7,     0,     0,     0,     8,     9,
      10,    11,    12,     0,    13,    14,     0,    15,     0,     0,
       0,     0,    16,    17,    18,     0,    19,    20,    21,     2,
       3,     0,     0,     0,     4,     0,     5,     0,     7,     0,
       0,     0,     0,     9,    10,     0,    12,     0,    13,    14,
       0,     0,     0,     0,     0,     0,    16,    17,    18,     0,
      19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    67,    59,    67,   105,    22,    95,    77,    64,    40,
     272,    41,    76,   236,   139,    79,    80,    34,    42,    69,
      35,    59,    44,    72,    24,    25,    64,    27,    28,    29,
      35,    95,    63,    87,    62,    45,    85,   131,    42,    74,
      78,    56,    43,    45,    42,    72,    43,    51,    43,    43,
      43,    56,   146,    51,   196,    85,    52,    53,    85,    64,
     116,   131,   187,    87,   206,    87,   328,   156,   157,   158,
      44,    77,    77,   139,    72,   139,   146,    87,   116,   149,
     130,   112,   120,    87,    85,    87,   143,   115,    85,    87,
      85,    85,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,    43,   143,   170,   171,   172,   173,
     333,   116,   150,    43,    45,   120,    45,   259,   260,   261,
      45,   187,   122,   187,   194,   131,   131,    64,    65,   135,
     135,   137,   137,     7,    45,    44,   270,   271,    72,    87,
     146,   146,    40,   232,    50,   279,    85,   185,    46,    23,
      74,    85,    51,    66,    85,    85,    85,    56,    57,    67,
      85,    35,   170,   171,   172,   173,   308,   309,   232,    40,
      43,    42,   306,    68,    85,   213,    74,    51,    41,   236,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,   229,    58,    59,   336,   337,   330,   339,   236,   341,
     135,   343,   137,   220,   274,    69,    70,   277,   213,    41,
     311,   345,   346,    68,    40,   349,    42,   359,   360,    87,
      46,    47,    48,    49,   325,    69,    70,   361,   362,    60,
      61,    62,    63,    87,    63,   305,    65,   159,   160,   303,
     304,   298,   161,   162,   314,   163,   164,    87,    72,   350,
     351,   282,    72,    71,    42,   293,    42,    87,    42,    71,
     298,    41,    45,    41,   302,    41,    43,    71,    85,    43,
      41,    87,   342,    43,   344,    72,   333,    42,    41,    85,
      44,   347,    36,   347,    43,    42,    71,    43,    43,   289,
      72,    12,   167,   165,   303,   333,     3,     4,     5,     6,
       7,     8,     9,    10,    11,   166,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,   304,    30,    58,    52,    33,    34,    35,    36,
      37,    38,    39,    42,   289,    42,   293,    44,    45,   144,
     282,    48,    49,    50,    51,    52,    53,    54,    55,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    88,    89,    90,    91,    92,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    -1,    30,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    -1,    -1,    42,    -1,    44,    -1,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    88,    89,    90,    91,    92,     4,     5,    -1,    -1,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    27,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    44,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,    90,    91,    92,     6,     7,    -1,    -1,    -1,
      11,    -1,    13,    -1,    15,    -1,    -1,    -1,    -1,    20,
      21,    -1,    23,    -1,    25,    26,    27,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    -1,    37,    38,    39,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    27,    28,    87,    88,    89,    90,
      91,    92,    35,    -1,    -1,    -1,    -1,    -1,    41,    42,
      -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    27,    -1,    87,    88,    89,    90,    91,    92,
      35,    -1,    -1,    -1,    -1,    -1,    41,    42,    -1,    -1,
      -1,    -1,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    87,    88,    89,    90,    91,    92,    42,    -1,
      -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,    90,    91,    92,     3,
      -1,    -1,     6,     7,    -1,    -1,    -1,    11,    -1,    13,
      14,    15,    -1,    -1,    -1,    19,    20,    21,    22,    23,
      -1,    25,    26,    -1,    28,    -1,    -1,    -1,    -1,    33,
      34,    35,    -1,    37,    38,    39,    -1,    -1,    -1,    -1,
      44,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,
      -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    -1,    25,    26,    -1,    28,    27,    -1,    -1,
      74,    33,    34,    35,    -1,    37,    38,    39,    -1,    -1,
      40,    -1,    42,    -1,    44,    45,    46,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    73,    42,    -1,    44,    45,    46,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    27,    87,    88,    89,
      90,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    42,    -1,    44,    -1,    46,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    27,    -1,    87,    88,    89,
      90,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    44,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    27,    -1,    87,    88,    89,    90,
      91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    27,    -1,    87,    88,    89,    90,    91,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    27,    -1,    87,    88,    89,    90,    91,    92,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    72,    44,
      -1,    -1,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    27,    -1,    87,    88,    89,    90,    91,    92,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      27,    -1,    87,    88,    89,    90,    91,    92,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    72,    -1,    -1,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    27,
      -1,    87,    88,    89,    90,    91,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    27,    -1,
      87,    88,    89,    90,    91,    92,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    87,
      88,    89,    90,    91,    92,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,
      89,    90,    91,    92,     3,    -1,    -1,     6,     7,    -1,
      -1,    -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    -1,    25,    26,    -1,    28,
      -1,    -1,    -1,    -1,    33,    34,    35,    -1,    37,    38,
      39,    -1,     0,    -1,    43,     3,    -1,    -1,     6,     7,
      -1,    -1,    -1,    11,    -1,    13,    14,    15,    -1,    -1,
      -1,    19,    20,    21,    22,    23,    -1,    25,    26,    -1,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,    37,
      38,    39,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    -1,    25,    26,    -1,    28,    -1,    -1,
      -1,    -1,    33,    34,    35,    -1,    37,    38,    39,     6,
       7,    -1,    -1,    -1,    11,    -1,    13,    -1,    15,    -1,
      -1,    -1,    -1,    20,    21,    -1,    23,    -1,    25,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,
      37,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    11,    13,    14,    15,    19,    20,
      21,    22,    23,    25,    26,    28,    33,    34,    35,    37,
      38,    39,   103,   118,   121,   122,   124,   127,   128,   155,
     156,   157,    44,    87,    42,    51,    72,    87,   119,   120,
     129,   130,   132,   103,   103,   103,   103,     0,   156,    87,
     125,   126,    44,   129,   127,   132,   133,    72,    85,    74,
     103,   118,   131,   158,    40,    42,   130,    74,    45,    85,
     125,    43,   127,   132,   120,   129,    27,    42,    44,    48,
      49,    50,    51,    52,    53,    54,    55,    87,    88,    89,
      90,    91,    92,    95,    96,    98,    99,   100,   101,   102,
     104,   105,   106,   107,   108,   109,   112,   113,   114,   135,
     136,   142,    44,   149,   118,   131,    28,    41,    51,   113,
     133,    87,   131,   140,   112,   117,   136,    45,   126,    45,
      85,    42,   136,   113,   116,   122,   123,   127,   141,    40,
      46,   142,   143,   144,   145,   146,    42,   136,   136,    40,
      42,    46,    47,    48,    49,    99,    51,    56,    57,    52,
      53,    58,    59,    64,    65,    50,    66,    67,   111,   111,
      60,    61,    62,    63,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,   115,     4,     5,     8,     9,
      10,    16,    17,    18,    24,    30,    36,    45,    72,    87,
      97,   116,   118,   147,   148,   149,   150,   151,   152,   153,
     154,   149,   113,   133,    41,    41,    41,    51,   113,    43,
     103,   137,   138,   139,    43,    85,    45,   141,    43,    85,
     123,   123,    43,   117,    87,    45,    85,   142,    74,   146,
     141,   116,    43,   113,   134,    87,    87,    99,    99,    99,
     100,   100,   101,   101,   135,   135,   104,   105,   106,    68,
      69,    70,   102,   102,   102,   102,   113,    72,   117,    72,
      71,   110,    42,    87,    42,    72,   116,    42,   110,    71,
      72,    45,   110,    41,   113,    41,    41,   129,    43,    85,
      87,    43,   113,    44,    99,    41,    45,   142,   144,    43,
      41,    43,    85,   110,   110,   110,    71,   147,   147,   152,
      72,   116,    72,   116,    42,   147,   151,    41,    73,   139,
     143,   142,   113,   107,   108,   116,   147,   110,   110,   111,
      43,   116,    45,    85,   111,    36,   152,    43,   147,    43,
      45,    71,    42,    43,   110,   110,   110,   110,   116,   110,
     116,   147,   147,   112,    43,   147,   111,   111,    72,    43,
      12,   110,   110,   147,   147
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
#line 93 "ass5_20CS10082_20CS30029.y"
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
#line 2023 "y.tab.c"
    break;

  case 3:
#line 104 "ass5_20CS10082_20CS30029.y"
                           {
	int zero = 0;
	int one = 1;
	(yyval.symp) = gentemp(new symtype("FLOAT"), string((yyvsp[0].charval)));
	emit("EQUAL", (yyval.symp)->name, string((yyvsp[0].charval)));
	}
#line 2034 "y.tab.c"
    break;

  case 4:
#line 110 "ass5_20CS10082_20CS30029.y"
                               {//later
	}
#line 2041 "y.tab.c"
    break;

  case 5:
#line 112 "ass5_20CS10082_20CS30029.y"
                            {
	int zero = 0;	
	int one = 1;
	(yyval.symp) = gentemp(new symtype("CHAR"),(yyvsp[0].charval));
	emit("EQUAL", (yyval.symp)->name, string((yyvsp[0].charval)));
	}
#line 2052 "y.tab.c"
    break;

  case 6:
#line 122 "ass5_20CS10082_20CS30029.y"
                            {
		(yyval.A) = new array1 ();
		(yyval.A)->array1 = (yyvsp[0].E)->loc;
		int zero = 0;	
		int one = 1;
		(yyval.A)->loc = (yyval.A)->array1;
		(yyval.A)->type = (yyvsp[0].E)->loc->type;
	}
#line 2065 "y.tab.c"
    break;

  case 7:
#line 130 "ass5_20CS10082_20CS30029.y"
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
#line 2106 "y.tab.c"
    break;

  case 8:
#line 166 "ass5_20CS10082_20CS30029.y"
                                                                   {
	//later
	}
#line 2114 "y.tab.c"
    break;

  case 9:
#line 169 "ass5_20CS10082_20CS30029.y"
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
#line 2131 "y.tab.c"
    break;

  case 10:
#line 181 "ass5_20CS10082_20CS30029.y"
                                           {//later
	}
#line 2138 "y.tab.c"
    break;

  case 11:
#line 183 "ass5_20CS10082_20CS30029.y"
                                             {//later
	}
#line 2145 "y.tab.c"
    break;

  case 12:
#line 185 "ass5_20CS10082_20CS30029.y"
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
#line 2161 "y.tab.c"
    break;

  case 13:
#line 196 "ass5_20CS10082_20CS30029.y"
                                      {
		(yyval.A) = new array1();

		// copy $1 to $$
		(yyval.A)->array1 = gentemp((yyvsp[-1].A)->array1->type);
		emit ("EQUAL", (yyval.A)->array1->name, (yyvsp[-1].A)->array1->name);
		int zero = 0;	
		int one = 1;
		// Decrement $1
		emit ("SUBTRACT", (yyvsp[-1].A)->array1->name, (yyvsp[-1].A)->array1->name, "1");
	}
#line 2177 "y.tab.c"
    break;

  case 14:
#line 207 "ass5_20CS10082_20CS30029.y"
                                                                                                                  {
		//later to be added more
		(yyval.A) = new array1();
		int zero = 0;	
		int one = 1;
		(yyval.A)->array1 = gentemp(new symtype("INTEGER"));
		(yyval.A)->loc = gentemp(new symtype("INTEGER"));
	}
#line 2190 "y.tab.c"
    break;

  case 15:
#line 215 "ass5_20CS10082_20CS30029.y"
                                                                                                                        {
		//later to be added more
		(yyval.A) = new array1();
		int zero = 0;	
		int one = 1;
		(yyval.A)->array1 = gentemp(new symtype("INTEGER"));
		(yyval.A)->loc = gentemp(new symtype("INTEGER"));
	}
#line 2203 "y.tab.c"
    break;

  case 16:
#line 227 "ass5_20CS10082_20CS30029.y"
                                                                                        {
		backpatch ((yyvsp[-4].S)->nextlist, nextinstr());
		convertInt2Bool((yyvsp[-5].E));
		(yyval.S) = new statement();
		backpatch ((yyvsp[-5].E)->truelist, (yyvsp[-2].instr));
		list<int> temp = merge ((yyvsp[-5].E)->falselist, (yyvsp[-1].S)->nextlist);
		(yyval.S)->nextlist = merge ((yyvsp[0].S)->nextlist, temp);
	}
#line 2216 "y.tab.c"
    break;

  case 17:
#line 235 "ass5_20CS10082_20CS30029.y"
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
#line 2234 "y.tab.c"
    break;

  case 18:
#line 248 "ass5_20CS10082_20CS30029.y"
                                                                            {//later
	}
#line 2241 "y.tab.c"
    break;

  case 19:
#line 254 "ass5_20CS10082_20CS30029.y"
                     {
		int zero = 0;	
		int one = 1;
		(yyval.unary_operator) = '&';
	}
#line 2251 "y.tab.c"
    break;

  case 20:
#line 259 "ass5_20CS10082_20CS30029.y"
                  {
		int zero = 0;	
		int one = 1;
		(yyval.unary_operator) = '*';
	}
#line 2261 "y.tab.c"
    break;

  case 21:
#line 264 "ass5_20CS10082_20CS30029.y"
             {
		int zero = 0;	
		int one = 1;
		(yyval.unary_operator) = '+';
	}
#line 2271 "y.tab.c"
    break;

  case 22:
#line 269 "ass5_20CS10082_20CS30029.y"
                  {
		int zero = 0;	
		int one = 1;
		(yyval.unary_operator) = '-';
	}
#line 2281 "y.tab.c"
    break;

  case 23:
#line 274 "ass5_20CS10082_20CS30029.y"
                     {
		int zero = 0;	
		int one = 1;
		(yyval.unary_operator) = '~';
	}
#line 2291 "y.tab.c"
    break;

  case 24:
#line 279 "ass5_20CS10082_20CS30029.y"
                     {
		int zero = 0;	
		int one = 1;
		(yyval.unary_operator) = '!';
	}
#line 2301 "y.tab.c"
    break;

  case 25:
#line 287 "ass5_20CS10082_20CS30029.y"
                          {
		int zero = 0;	
		int one = 1;
		(yyval.A)=(yyvsp[0].A);
	}
#line 2311 "y.tab.c"
    break;

  case 26:
#line 292 "ass5_20CS10082_20CS30029.y"
                                                                          {
		//to be added later
		int zero = 0;	
		int one = 1;
		(yyval.A)=(yyvsp[0].A);
	}
#line 2322 "y.tab.c"
    break;

  case 27:
#line 301 "ass5_20CS10082_20CS30029.y"
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
#line 2348 "y.tab.c"
    break;

  case 28:
#line 322 "ass5_20CS10082_20CS30029.y"
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
#line 2363 "y.tab.c"
    break;

  case 29:
#line 332 "ass5_20CS10082_20CS30029.y"
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
#line 2378 "y.tab.c"
    break;

  case 30:
#line 342 "ass5_20CS10082_20CS30029.y"
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
#line 2393 "y.tab.c"
    break;

  case 31:
#line 355 "ass5_20CS10082_20CS30029.y"
                                   {
		(yyval.E)=(yyvsp[0].E);
	}
#line 2401 "y.tab.c"
    break;

  case 32:
#line 358 "ass5_20CS10082_20CS30029.y"
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
#line 2418 "y.tab.c"
    break;

  case 33:
#line 370 "ass5_20CS10082_20CS30029.y"
                                                                {
			if (typecheck ((yyvsp[-2].E)->loc, (yyvsp[0].E)->loc) ) {
			(yyval.E) = new expr();
			int zero = 0;	
			int one = 1;
			(yyval.E)->loc = gentemp(new symtype((yyvsp[-2].E)->loc->type->type));
			emit ("SUBTRACT", (yyval.E)->loc->name, (yyvsp[-2].E)->loc->name, (yyvsp[0].E)->loc->name);
		}
		else cout << "Type Error"<< endl;

	}
#line 2434 "y.tab.c"
    break;

  case 34:
#line 384 "ass5_20CS10082_20CS30029.y"
                             {
		(yyval.E)=(yyvsp[0].E);
	}
#line 2442 "y.tab.c"
    break;

  case 35:
#line 387 "ass5_20CS10082_20CS30029.y"
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
#line 2457 "y.tab.c"
    break;

  case 36:
#line 397 "ass5_20CS10082_20CS30029.y"
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
#line 2472 "y.tab.c"
    break;

  case 37:
#line 411 "ass5_20CS10082_20CS30029.y"
                                                        {//later
	int zero = 0;	
	int one = 1;
	}
#line 2481 "y.tab.c"
    break;

  case 38:
#line 415 "ass5_20CS10082_20CS30029.y"
                                 {//later
	}
#line 2488 "y.tab.c"
    break;

  case 39:
#line 417 "ass5_20CS10082_20CS30029.y"
                                               {//later
	}
#line 2495 "y.tab.c"
    break;

  case 40:
#line 419 "ass5_20CS10082_20CS30029.y"
                        {//later
	int zero = 0;	
	int one = 1;
	}
#line 2504 "y.tab.c"
    break;

  case 41:
#line 423 "ass5_20CS10082_20CS30029.y"
                                               {//later
	}
#line 2511 "y.tab.c"
    break;

  case 42:
#line 425 "ass5_20CS10082_20CS30029.y"
                        {//later
	int zero = 0;	
	int one = 1;
	}
#line 2520 "y.tab.c"
    break;

  case 43:
#line 429 "ass5_20CS10082_20CS30029.y"
                                                   {//later
	}
#line 2527 "y.tab.c"
    break;

  case 44:
#line 431 "ass5_20CS10082_20CS30029.y"
                            {//later
	int zero = 0;	
	int one = 1;
	}
#line 2536 "y.tab.c"
    break;

  case 45:
#line 440 "ass5_20CS10082_20CS30029.y"
                               {(yyval.E)=(yyvsp[0].E);}
#line 2542 "y.tab.c"
    break;

  case 46:
#line 441 "ass5_20CS10082_20CS30029.y"
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
#line 2563 "y.tab.c"
    break;

  case 47:
#line 457 "ass5_20CS10082_20CS30029.y"
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
#line 2585 "y.tab.c"
    break;

  case 48:
#line 477 "ass5_20CS10082_20CS30029.y"
                             {(yyval.E)=(yyvsp[0].E);}
#line 2591 "y.tab.c"
    break;

  case 49:
#line 478 "ass5_20CS10082_20CS30029.y"
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
#line 2611 "y.tab.c"
    break;

  case 50:
#line 496 "ass5_20CS10082_20CS30029.y"
                        {(yyval.E)=(yyvsp[0].E);}
#line 2617 "y.tab.c"
    break;

  case 51:
#line 497 "ass5_20CS10082_20CS30029.y"
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
#line 2637 "y.tab.c"
    break;

  case 52:
#line 515 "ass5_20CS10082_20CS30029.y"
                                 {(yyval.E)=(yyvsp[0].E);}
#line 2643 "y.tab.c"
    break;

  case 53:
#line 516 "ass5_20CS10082_20CS30029.y"
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
#line 2663 "y.tab.c"
    break;

  case 54:
#line 534 "ass5_20CS10082_20CS30029.y"
                                 {(yyval.E)=(yyvsp[0].E);}
#line 2669 "y.tab.c"
    break;

  case 55:
#line 535 "ass5_20CS10082_20CS30029.y"
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
#line 2689 "y.tab.c"
    break;

  case 56:
#line 553 "ass5_20CS10082_20CS30029.y"
                                {(yyval.E)=(yyvsp[0].E);}
#line 2695 "y.tab.c"
    break;

  case 57:
#line 554 "ass5_20CS10082_20CS30029.y"
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
#line 2715 "y.tab.c"
    break;

  case 58:
#line 571 "ass5_20CS10082_20CS30029.y"
                {	// To store the address of the next instruction
		(yyval.instr) = nextinstr();
	}
#line 2723 "y.tab.c"
    break;

  case 59:
#line 575 "ass5_20CS10082_20CS30029.y"
                 { 	// gaurd against fallthrough by emitting a goto
		(yyval.S)  = new statement();
		(yyval.S)->nextlist = makelist(nextinstr());
		emit ("GOTOOP","");
	}
#line 2733 "y.tab.c"
    break;

  case 60:
#line 582 "ass5_20CS10082_20CS30029.y"
                               {(yyval.E)=(yyvsp[0].E);}
#line 2739 "y.tab.c"
    break;

  case 61:
#line 583 "ass5_20CS10082_20CS30029.y"
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
#line 2765 "y.tab.c"
    break;

  case 62:
#line 607 "ass5_20CS10082_20CS30029.y"
                                {(yyval.E)=(yyvsp[0].E);}
#line 2771 "y.tab.c"
    break;

  case 63:
#line 608 "ass5_20CS10082_20CS30029.y"
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
#line 2792 "y.tab.c"
    break;

  case 64:
#line 627 "ass5_20CS10082_20CS30029.y"
                     {
	(yyval.E) = new expr();
	(yyval.E)->loc = (yyvsp[0].symp);
	int zero = 0;	
	int one = 1;
	(yyval.E)->type = "NONBOOL";
	}
#line 2804 "y.tab.c"
    break;

  case 65:
#line 634 "ass5_20CS10082_20CS30029.y"
                   {
	(yyval.E) = new expr();
	int zero = 0;	
	int one = 1;
	(yyval.E)->loc = (yyvsp[0].symp);
	}
#line 2815 "y.tab.c"
    break;

  case 66:
#line 640 "ass5_20CS10082_20CS30029.y"
                         {
	(yyval.E) = new expr();
	symtype* tmp = new symtype("PTR");
	int zero = 0;	
	int one = 1;
	(yyval.E)->loc = gentemp(tmp, (yyvsp[0].charval));
	(yyval.E)->loc->type->ptr = new symtype("CHAR");
	}
#line 2828 "y.tab.c"
    break;

  case 67:
#line 648 "ass5_20CS10082_20CS30029.y"
                                                            {
	int zero = 0;	
	int one = 1;
	(yyval.E) = (yyvsp[-1].E);
	}
#line 2838 "y.tab.c"
    break;

  case 68:
#line 657 "ass5_20CS10082_20CS30029.y"
                    {//later
	}
#line 2845 "y.tab.c"
    break;

  case 69:
#line 659 "ass5_20CS10082_20CS30029.y"
                             {//later
	}
#line 2852 "y.tab.c"
    break;

  case 70:
#line 661 "ass5_20CS10082_20CS30029.y"
                           {//later
	}
#line 2859 "y.tab.c"
    break;

  case 71:
#line 663 "ass5_20CS10082_20CS30029.y"
                            {//later
	}
#line 2866 "y.tab.c"
    break;

  case 72:
#line 665 "ass5_20CS10082_20CS30029.y"
                        {//later
	}
#line 2873 "y.tab.c"
    break;

  case 73:
#line 667 "ass5_20CS10082_20CS30029.y"
                             {//later
	}
#line 2880 "y.tab.c"
    break;

  case 74:
#line 669 "ass5_20CS10082_20CS30029.y"
                               {//later
	}
#line 2887 "y.tab.c"
    break;

  case 75:
#line 671 "ass5_20CS10082_20CS30029.y"
                                {//later
	}
#line 2894 "y.tab.c"
    break;

  case 76:
#line 673 "ass5_20CS10082_20CS30029.y"
                                {//later
	}
#line 2901 "y.tab.c"
    break;

  case 77:
#line 675 "ass5_20CS10082_20CS30029.y"
                                {//later
	}
#line 2908 "y.tab.c"
    break;

  case 78:
#line 677 "ass5_20CS10082_20CS30029.y"
                               {//later
	}
#line 2915 "y.tab.c"
    break;

  case 79:
#line 682 "ass5_20CS10082_20CS30029.y"
                               {(yyval.E)=(yyvsp[0].E);}
#line 2921 "y.tab.c"
    break;

  case 80:
#line 683 "ass5_20CS10082_20CS30029.y"
                                                {
	int zero = 0;	
	int one = 1;
	//later
	}
#line 2931 "y.tab.c"
    break;

  case 81:
#line 691 "ass5_20CS10082_20CS30029.y"
                                {
	int zero = 0;	
	int one = 1;
	//later
	}
#line 2941 "y.tab.c"
    break;

  case 82:
#line 699 "ass5_20CS10082_20CS30029.y"
                                                               {//later
	}
#line 2948 "y.tab.c"
    break;

  case 83:
#line 701 "ass5_20CS10082_20CS30029.y"
                                          {//later
	int zero = 0;	
	int one = 1;
	}
#line 2957 "y.tab.c"
    break;

  case 84:
#line 709 "ass5_20CS10082_20CS30029.y"
                         {//later
	}
#line 2964 "y.tab.c"
    break;

  case 85:
#line 711 "ass5_20CS10082_20CS30029.y"
                                                    {//later
	}
#line 2971 "y.tab.c"
    break;

  case 86:
#line 716 "ass5_20CS10082_20CS30029.y"
                    {(yyval.symp)=(yyvsp[0].symp);}
#line 2977 "y.tab.c"
    break;

  case 87:
#line 717 "ass5_20CS10082_20CS30029.y"
                                           {
		int zero = 0;	
		int one = 1;
		if ((yyvsp[0].symp)->initial_value!="") (yyvsp[-2].symp)->initial_value=(yyvsp[0].symp)->initial_value;
		emit ("EQUAL", (yyvsp[-2].symp)->name, (yyvsp[0].symp)->name);
	}
#line 2988 "y.tab.c"
    break;

  case 88:
#line 726 "ass5_20CS10082_20CS30029.y"
                 {//later
	}
#line 2995 "y.tab.c"
    break;

  case 89:
#line 728 "ass5_20CS10082_20CS30029.y"
                 {//later
	}
#line 3002 "y.tab.c"
    break;

  case 90:
#line 730 "ass5_20CS10082_20CS30029.y"
               {//later
	}
#line 3009 "y.tab.c"
    break;

  case 91:
#line 732 "ass5_20CS10082_20CS30029.y"
                   {//later
	}
#line 3016 "y.tab.c"
    break;

  case 92:
#line 737 "ass5_20CS10082_20CS30029.y"
               {Type="VOID";}
#line 3022 "y.tab.c"
    break;

  case 93:
#line 738 "ass5_20CS10082_20CS30029.y"
               {Type="CHAR";}
#line 3028 "y.tab.c"
    break;

  case 95:
#line 740 "ass5_20CS10082_20CS30029.y"
              {Type="INTEGER";}
#line 3034 "y.tab.c"
    break;

  case 97:
#line 742 "ass5_20CS10082_20CS30029.y"
                {Type="FLOAT";}
#line 3040 "y.tab.c"
    break;

  case 105:
#line 753 "ass5_20CS10082_20CS30029.y"
                                                  {//later
	int zero = 0;	
	int one = 1;
	}
#line 3049 "y.tab.c"
    break;

  case 106:
#line 757 "ass5_20CS10082_20CS30029.y"
                         {//later
	int zero = 0;	
	int one = 1;
	}
#line 3058 "y.tab.c"
    break;

  case 107:
#line 761 "ass5_20CS10082_20CS30029.y"
                                                  {//later
	int zero = 0;	
	int one = 1;
	}
#line 3067 "y.tab.c"
    break;

  case 108:
#line 765 "ass5_20CS10082_20CS30029.y"
                         {//later
	int zero = 0;	
	int one = 1;
	}
#line 3076 "y.tab.c"
    break;

  case 109:
#line 772 "ass5_20CS10082_20CS30029.y"
                                                                                {//later
	int zero = 0;	
	int one = 1;
	}
#line 3085 "y.tab.c"
    break;

  case 110:
#line 776 "ass5_20CS10082_20CS30029.y"
                                                                     {//later
	int zero = 0;	
	int one = 1;
	}
#line 3094 "y.tab.c"
    break;

  case 111:
#line 780 "ass5_20CS10082_20CS30029.y"
                                                                                      {//later
	int zero = 0;	
	int one = 1;
	}
#line 3103 "y.tab.c"
    break;

  case 112:
#line 784 "ass5_20CS10082_20CS30029.y"
                                                                           {//later
	int zero = 0;	
	int one = 1;
	}
#line 3112 "y.tab.c"
    break;

  case 113:
#line 788 "ass5_20CS10082_20CS30029.y"
                         {//later
	int zero = 0;	
	int one = 1;
	}
#line 3121 "y.tab.c"
    break;

  case 114:
#line 795 "ass5_20CS10082_20CS30029.y"
                    {//later
	int zero = 0;	
	int one = 1;
	}
#line 3130 "y.tab.c"
    break;

  case 115:
#line 799 "ass5_20CS10082_20CS30029.y"
                                          {//later
	int zero = 0;	
	int one = 1;
	}
#line 3139 "y.tab.c"
    break;

  case 116:
#line 806 "ass5_20CS10082_20CS30029.y"
                    {//later
	int zero = 0;	
	int one = 1;
	}
#line 3148 "y.tab.c"
    break;

  case 117:
#line 810 "ass5_20CS10082_20CS30029.y"
                                                   {//later
	int zero = 0;	
	int one = 1;
	}
#line 3157 "y.tab.c"
    break;

  case 118:
#line 817 "ass5_20CS10082_20CS30029.y"
               {//later
	int zero = 0;	
	int one = 1;
	}
#line 3166 "y.tab.c"
    break;

  case 119:
#line 821 "ass5_20CS10082_20CS30029.y"
                  {//later
	int zero = 0;	
	int one = 1;
	}
#line 3175 "y.tab.c"
    break;

  case 120:
#line 825 "ass5_20CS10082_20CS30029.y"
                  {//later
	int zero = 0;	
	int one = 1;
	}
#line 3184 "y.tab.c"
    break;

  case 121:
#line 832 "ass5_20CS10082_20CS30029.y"
                {//later
	}
#line 3191 "y.tab.c"
    break;

  case 122:
#line 837 "ass5_20CS10082_20CS30029.y"
                                   {
		symtype * t = (yyvsp[-1].symtp);
		int zero = 0;	
		int one = 1;
		while (t->ptr !=NULL) t = t->ptr;
		t->ptr = (yyvsp[0].symp)->type;
		(yyval.symp) = (yyvsp[0].symp)->update((yyvsp[-1].symtp));
	}
#line 3204 "y.tab.c"
    break;

  case 123:
#line 845 "ass5_20CS10082_20CS30029.y"
                           {//later
	}
#line 3211 "y.tab.c"
    break;

  case 124:
#line 851 "ass5_20CS10082_20CS30029.y"
                    {
		(yyval.symp) = (yyvsp[0].symp)->update(new symtype(Type));
		currSymbol = (yyval.symp);
		int zero = 0;	
		int one = 1;
	}
#line 3222 "y.tab.c"
    break;

  case 125:
#line 857 "ass5_20CS10082_20CS30029.y"
                                                            {(yyval.symp)=(yyvsp[-1].symp);}
#line 3228 "y.tab.c"
    break;

  case 126:
#line 858 "ass5_20CS10082_20CS30029.y"
                                                                                                               {//later
	}
#line 3235 "y.tab.c"
    break;

  case 127:
#line 860 "ass5_20CS10082_20CS30029.y"
                                                                                         {//later
	}
#line 3242 "y.tab.c"
    break;

  case 128:
#line 862 "ass5_20CS10082_20CS30029.y"
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
#line 3270 "y.tab.c"
    break;

  case 129:
#line 885 "ass5_20CS10082_20CS30029.y"
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
#line 3297 "y.tab.c"
    break;

  case 130:
#line 907 "ass5_20CS10082_20CS30029.y"
                                                                                                                      {//later
	int zero = 0;	
	int one = 1;
	}
#line 3306 "y.tab.c"
    break;

  case 131:
#line 911 "ass5_20CS10082_20CS30029.y"
                                                                                                  {//later
	int zero = 0;	
	int one = 1;
	}
#line 3315 "y.tab.c"
    break;

  case 132:
#line 915 "ass5_20CS10082_20CS30029.y"
                                                                                                  {//later
	int zero = 0;	
	int one = 1;
	}
#line 3324 "y.tab.c"
    break;

  case 133:
#line 919 "ass5_20CS10082_20CS30029.y"
                                                                              {//later
	int zero = 0;	
	int one = 1;
	}
#line 3333 "y.tab.c"
    break;

  case 134:
#line 923 "ass5_20CS10082_20CS30029.y"
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
#line 3354 "y.tab.c"
    break;

  case 135:
#line 939 "ass5_20CS10082_20CS30029.y"
                                                                                   {//later
	int zero = 0;	
	int one = 1;
	}
#line 3363 "y.tab.c"
    break;

  case 136:
#line 943 "ass5_20CS10082_20CS30029.y"
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
#line 3384 "y.tab.c"
    break;

  case 137:
#line 962 "ass5_20CS10082_20CS30029.y"
                 { 															// Used for changing to symbol currTable for a function
		if (currSymbol->nested==NULL) changeTable(new symtable(""));	// Function symbol currTable doesn't already exist
		else {
			changeTable (currSymbol ->nested);						// Function symbol currTable already exists
			emit ("LABEL", currTable->name);
		}
	}
#line 3396 "y.tab.c"
    break;

  case 138:
#line 972 "ass5_20CS10082_20CS30029.y"
                                      {//later
	}
#line 3403 "y.tab.c"
    break;

  case 139:
#line 974 "ass5_20CS10082_20CS30029.y"
                  {
		(yyval.symtp) = new symtype("PTR");
		int zero = 0;	
		int one = 1;
	}
#line 3413 "y.tab.c"
    break;

  case 140:
#line 979 "ass5_20CS10082_20CS30029.y"
                                              {//later
	int zero = 0;	
	int one = 1;
	}
#line 3422 "y.tab.c"
    break;

  case 141:
#line 983 "ass5_20CS10082_20CS30029.y"
                          {
		(yyval.symtp) = new symtype("PTR", (yyvsp[0].symtp));
		int zero = 0;	
		int one = 1;
	}
#line 3432 "y.tab.c"
    break;

  case 142:
#line 991 "ass5_20CS10082_20CS30029.y"
                        {//later
	int zero = 0;	
	int one = 1;
	}
#line 3441 "y.tab.c"
    break;

  case 143:
#line 995 "ass5_20CS10082_20CS30029.y"
                                            {//later
	int zero = 0;	
	int one = 1;
	}
#line 3450 "y.tab.c"
    break;

  case 144:
#line 1003 "ass5_20CS10082_20CS30029.y"
                               {
	emit ("PARAM", (yyvsp[0].E)->loc->name);
	int zero = 0;	
	int one = 1;
	(yyval.intval) = 1;
	}
#line 3461 "y.tab.c"
    break;

  case 145:
#line 1009 "ass5_20CS10082_20CS30029.y"
                                                              {
	emit ("PARAM", (yyvsp[0].E)->loc->name);
	(yyval.intval) = (yyvsp[-2].intval)+1;
	}
#line 3470 "y.tab.c"
    break;

  case 146:
#line 1016 "ass5_20CS10082_20CS30029.y"
                          {(yyval.E)=(yyvsp[0].E);}
#line 3476 "y.tab.c"
    break;

  case 147:
#line 1017 "ass5_20CS10082_20CS30029.y"
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
#line 3494 "y.tab.c"
    break;

  case 148:
#line 1030 "ass5_20CS10082_20CS30029.y"
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
#line 3513 "y.tab.c"
    break;

  case 149:
#line 1044 "ass5_20CS10082_20CS30029.y"
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
#line 3531 "y.tab.c"
    break;

  case 150:
#line 1057 "ass5_20CS10082_20CS30029.y"
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
#line 3549 "y.tab.c"
    break;

  case 151:
#line 1075 "ass5_20CS10082_20CS30029.y"
                            {
	int zero = 0;	
	int one = 1;	
	(yyval.A) = (yyvsp[0].A);
	}
#line 3559 "y.tab.c"
    break;

  case 152:
#line 1080 "ass5_20CS10082_20CS30029.y"
                                    {
		// Increment $2
		emit ("ADD", (yyvsp[0].A)->array1->name, (yyvsp[0].A)->array1->name, "1");
		int zero = 0;	
		int one = 1;
		// Use the same value as $2
		(yyval.A) = (yyvsp[0].A);
	}
#line 3572 "y.tab.c"
    break;

  case 153:
#line 1088 "ass5_20CS10082_20CS30029.y"
                                    {
		// Decrement $2
		emit ("SUBTRACT", (yyvsp[0].A)->array1->name, (yyvsp[0].A)->array1->name, "1");
		int zero = 0;	
		int one = 1;
		// Use the same value as $2
		(yyval.A) = (yyvsp[0].A);
	}
#line 3585 "y.tab.c"
    break;

  case 154:
#line 1096 "ass5_20CS10082_20CS30029.y"
                                        {
		(yyval.A) = new array1();
		int zero = 0;	
		int one = 1;
		switch ((yyvsp[-1].unary_operator)) {
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
#line 3627 "y.tab.c"
    break;

  case 155:
#line 1133 "ass5_20CS10082_20CS30029.y"
                                 {
	//later
	}
#line 3635 "y.tab.c"
    break;

  case 156:
#line 1136 "ass5_20CS10082_20CS30029.y"
                                                                 {
	//later
	}
#line 3643 "y.tab.c"
    break;

  case 157:
#line 1142 "ass5_20CS10082_20CS30029.y"
                        {//later
	int zero = 0;	
	int one = 1;
	}
#line 3652 "y.tab.c"
    break;

  case 158:
#line 1146 "ass5_20CS10082_20CS30029.y"
                                       {//later
	int zero = 0;	
	int one = 1;
	}
#line 3661 "y.tab.c"
    break;

  case 159:
#line 1153 "ass5_20CS10082_20CS30029.y"
                               {//later
	int zero = 0;	
	int one = 1;
	}
#line 3670 "y.tab.c"
    break;

  case 160:
#line 1157 "ass5_20CS10082_20CS30029.y"
                                                    {//later
	int zero = 0;	
	int one = 1;
	}
#line 3679 "y.tab.c"
    break;

  case 161:
#line 1164 "ass5_20CS10082_20CS30029.y"
                                           {//later
	int zero = 0;	
	int one = 1;
	}
#line 3688 "y.tab.c"
    break;

  case 162:
#line 1168 "ass5_20CS10082_20CS30029.y"
                                {//later
	int zero = 0;	
	int one = 1;
	}
#line 3697 "y.tab.c"
    break;

  case 163:
#line 1175 "ass5_20CS10082_20CS30029.y"
                    {//later
	int zero = 0;	
	int one = 1;
	}
#line 3706 "y.tab.c"
    break;

  case 164:
#line 1179 "ass5_20CS10082_20CS30029.y"
                                          {//later
	int zero = 0;	
	int one = 1;
	}
#line 3715 "y.tab.c"
    break;

  case 165:
#line 1186 "ass5_20CS10082_20CS30029.y"
                                  {//later
	int zero = 0;	
	int one = 1;
	}
#line 3724 "y.tab.c"
    break;

  case 166:
#line 1193 "ass5_20CS10082_20CS30029.y"
                               {
		(yyval.symp) = (yyvsp[0].E)->loc;
		int zero = 0;	
		int one = 1;
	}
#line 3734 "y.tab.c"
    break;

  case 167:
#line 1198 "ass5_20CS10082_20CS30029.y"
                                                                 {//later
	int zero = 0;	
	int one = 1;
	}
#line 3743 "y.tab.c"
    break;

  case 168:
#line 1202 "ass5_20CS10082_20CS30029.y"
                                                                       {//later
	int zero = 0;	
	int one = 1;
	}
#line 3752 "y.tab.c"
    break;

  case 169:
#line 1210 "ass5_20CS10082_20CS30029.y"
                                 {//later
	int zero = 0;	
	int one = 1;
	}
#line 3761 "y.tab.c"
    break;

  case 170:
#line 1214 "ass5_20CS10082_20CS30029.y"
                     {//later
	int zero = 0;	
	int one = 1;
	}
#line 3770 "y.tab.c"
    break;

  case 171:
#line 1218 "ass5_20CS10082_20CS30029.y"
                                                        {//later
	int zero = 0;	
	int one = 1;
	}
#line 3779 "y.tab.c"
    break;

  case 172:
#line 1222 "ass5_20CS10082_20CS30029.y"
                                            {//later
	int zero = 0;	
	int one = 1;
	}
#line 3788 "y.tab.c"
    break;

  case 173:
#line 1229 "ass5_20CS10082_20CS30029.y"
                                    {//later
	int zero = 0;	
	int one = 1;
	}
#line 3797 "y.tab.c"
    break;

  case 174:
#line 1236 "ass5_20CS10082_20CS30029.y"
                    {//later
	int zero = 0;	
	int one = 1;
	}
#line 3806 "y.tab.c"
    break;

  case 175:
#line 1240 "ass5_20CS10082_20CS30029.y"
                                    {//later
	int zero = 0;	
	int one = 1;
	}
#line 3815 "y.tab.c"
    break;

  case 176:
#line 1247 "ass5_20CS10082_20CS30029.y"
                                                                      {//later
	int zero = 0;	
	int one = 1;
	}
#line 3824 "y.tab.c"
    break;

  case 177:
#line 1251 "ass5_20CS10082_20CS30029.y"
                        {//later
	int zero = 0;	
	int one = 1;
	}
#line 3833 "y.tab.c"
    break;

  case 178:
#line 1258 "ass5_20CS10082_20CS30029.y"
                           {//later
	}
#line 3840 "y.tab.c"
    break;

  case 179:
#line 1260 "ass5_20CS10082_20CS30029.y"
                            {(yyval.S)=(yyvsp[0].S);}
#line 3846 "y.tab.c"
    break;

  case 180:
#line 1261 "ass5_20CS10082_20CS30029.y"
                              {
		int zero = 0;	
		int one = 1;
		(yyval.S) = new statement();
		(yyval.S)->nextlist = (yyvsp[0].E)->nextlist;
	}
#line 3857 "y.tab.c"
    break;

  case 181:
#line 1267 "ass5_20CS10082_20CS30029.y"
                             {(yyval.S)=(yyvsp[0].S);}
#line 3863 "y.tab.c"
    break;

  case 182:
#line 1268 "ass5_20CS10082_20CS30029.y"
                             {(yyval.S)=(yyvsp[0].S);}
#line 3869 "y.tab.c"
    break;

  case 183:
#line 1269 "ass5_20CS10082_20CS30029.y"
                        {(yyval.S)=(yyvsp[0].S);}
#line 3875 "y.tab.c"
    break;

  case 184:
#line 1273 "ass5_20CS10082_20CS30029.y"
                                    {(yyval.S) = new statement();}
#line 3881 "y.tab.c"
    break;

  case 185:
#line 1274 "ass5_20CS10082_20CS30029.y"
                                                  {(yyval.S) = new statement();}
#line 3887 "y.tab.c"
    break;

  case 186:
#line 1275 "ass5_20CS10082_20CS30029.y"
                                 {(yyval.S) = new statement();}
#line 3893 "y.tab.c"
    break;

  case 187:
#line 1279 "ass5_20CS10082_20CS30029.y"
                                                                {(yyval.S)=(yyvsp[-1].S);}
#line 3899 "y.tab.c"
    break;

  case 188:
#line 1280 "ass5_20CS10082_20CS30029.y"
                                                {(yyval.S) = new statement();}
#line 3905 "y.tab.c"
    break;

  case 189:
#line 1284 "ass5_20CS10082_20CS30029.y"
                    {(yyval.S)=(yyvsp[0].S);}
#line 3911 "y.tab.c"
    break;

  case 190:
#line 1285 "ass5_20CS10082_20CS30029.y"
                                      {
		int zero = 0;	
		int one = 1;
		(yyval.S)=(yyvsp[0].S);
		backpatch ((yyvsp[-2].S)->nextlist, (yyvsp[-1].instr));
	}
#line 3922 "y.tab.c"
    break;

  case 191:
#line 1294 "ass5_20CS10082_20CS30029.y"
                     {
		int zero = 0;	
		int one = 1;
		(yyval.S) = new statement();
	}
#line 3932 "y.tab.c"
    break;

  case 192:
#line 1299 "ass5_20CS10082_20CS30029.y"
                   {(yyval.S) = (yyvsp[0].S);}
#line 3938 "y.tab.c"
    break;

  case 193:
#line 1303 "ass5_20CS10082_20CS30029.y"
                              {(yyval.E)=(yyvsp[-1].E);}
#line 3944 "y.tab.c"
    break;

  case 194:
#line 1304 "ass5_20CS10082_20CS30029.y"
                   {(yyval.E) = new expr();}
#line 3950 "y.tab.c"
    break;

  case 195:
#line 1309 "ass5_20CS10082_20CS30029.y"
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
#line 3977 "y.tab.c"
    break;

  case 196:
#line 1331 "ass5_20CS10082_20CS30029.y"
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
#line 3995 "y.tab.c"
    break;

  case 197:
#line 1344 "ass5_20CS10082_20CS30029.y"
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
#line 4016 "y.tab.c"
    break;

  case 198:
#line 1360 "ass5_20CS10082_20CS30029.y"
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
#line 4039 "y.tab.c"
    break;

  case 199:
#line 1381 "ass5_20CS10082_20CS30029.y"
                                   {(yyval.S) = new statement();}
#line 4045 "y.tab.c"
    break;

  case 200:
#line 1382 "ass5_20CS10082_20CS30029.y"
                            {(yyval.S) = new statement();}
#line 4051 "y.tab.c"
    break;

  case 201:
#line 1383 "ass5_20CS10082_20CS30029.y"
                         {(yyval.S) = new statement();}
#line 4057 "y.tab.c"
    break;

  case 202:
#line 1384 "ass5_20CS10082_20CS30029.y"
                                     {
		(yyval.S) = new statement();
		int zero = 0;	
		int one = 1;
		emit("RETURN",(yyvsp[-1].E)->loc->name);
	}
#line 4068 "y.tab.c"
    break;

  case 203:
#line 1390 "ass5_20CS10082_20CS30029.y"
                          {
		(yyval.S) = new statement();
		int zero = 0;	
		int one = 1;
		emit("RETURN","");
	}
#line 4079 "y.tab.c"
    break;

  case 204:
#line 1399 "ass5_20CS10082_20CS30029.y"
                              {}
#line 4085 "y.tab.c"
    break;

  case 205:
#line 1400 "ass5_20CS10082_20CS30029.y"
                                               {}
#line 4091 "y.tab.c"
    break;

  case 206:
#line 1404 "ass5_20CS10082_20CS30029.y"
                             {}
#line 4097 "y.tab.c"
    break;

  case 207:
#line 1405 "ass5_20CS10082_20CS30029.y"
                     {}
#line 4103 "y.tab.c"
    break;

  case 208:
#line 1409 "ass5_20CS10082_20CS30029.y"
                                                                                  {}
#line 4109 "y.tab.c"
    break;

  case 209:
#line 1410 "ass5_20CS10082_20CS30029.y"
                                                                 {
		int zero = 0;	
		int one = 1;
		currTable->parent = globalTable;
		changeTable (globalTable);
	}
#line 4120 "y.tab.c"
    break;

  case 210:
#line 1419 "ass5_20CS10082_20CS30029.y"
                     {//later
	int zero = 0;	
	int one = 1;
	}
#line 4129 "y.tab.c"
    break;

  case 211:
#line 1423 "ass5_20CS10082_20CS30029.y"
                                      {//later
	}
#line 4136 "y.tab.c"
    break;


#line 4140 "y.tab.c"

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
#line 1429 "ass5_20CS10082_20CS30029.y"


void yyerror(string s) {
    cout<<s<<endl;
}
