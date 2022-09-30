%{
    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>
    #include "y.tab.h"
%}

%option noyywrap

%%

[ \t\r]         ; // whitespace
[0-9]+          { yylval.num = atoi(yytext); return NUMBER; }
"-"             { return SUB; }
"+"             { return ADD; }
"*"             { return MUL; }
"/"             { return DIV; }
"^"             { return POW; }
"="             { return EQUALS; }
"("             { return L_BKT; }
")"             { return R_BKT; }
"x"    		{ strcpy(yylval.letter, yytext); return LETTER; }
[\n]            { return EOL; }
.               { return *yytext; }

%%