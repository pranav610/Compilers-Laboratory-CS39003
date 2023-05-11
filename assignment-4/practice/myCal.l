%{
    #include "y.tab.h"
    #include <math.h>
%}



%%

[1-9]+[0-9]*          {
                            yylval.intval = atoi(yytext);
                            return NUMBER;
                      }          

[ \t]        ;

"$" {return 0;}

/n|.     {return yytext[0]};

%%

