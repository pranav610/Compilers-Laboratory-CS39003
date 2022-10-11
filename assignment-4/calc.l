%{
#include "y.tab.h" // Generated from Bison
#include <math.h>
%}

%%
[1-9]+[0-9]* {
                return NUMBER;
             }


[ \t] ;     /* ignore white space */
"$"         {
                return 0; /* end of input */
            }
\n|.        return yytext[0];

%%