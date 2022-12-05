/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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

#line 163 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
