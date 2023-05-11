%{
    #include <iostream>
    #include <string.h>
    extern int yylex();
    void yyerror(char *);
%}

%union {
    int intval;
}

%token <intval> NUMBER

%type <intval> expression
%type <intval> term
%type <intval> factor

%%



%%