%{
	#include<stdio.h>
	int yylex(void);
	int yyerror(const char *s);
	int yyparse();
	int success = 1;
	extern FILE *yyin;
%}
%token VTYPE CONST CASE FUNC IMPORT CHAN DEFER GO INTERFACE DEFAULT VAR RANGE MAP PACKAGE IF SELECT SWITCH FALLTHROUGH ELSE
%token TYPE FOR GOTO CONTINUE BREAK RETURN struct_const or_const and_const param_const eq_const rel_const shift_const inc_const
%token point_const punc int_const float_const char_const id string short_dec open_br close_br
%left '+' '-'
%left '*' '/'
%%
START:        START GLOBAL
            | GLOBAL
	        ;

GLOBAL:       PACKAGEE
            | IMPORTT
			| FUNCC
			;

PACKAGEE:     PACKAGE id
             ;
			 
IMPORTT:      IMPORT string
             ;

FUNCC:        FUNC id
            | BODY
			;

BODY:         open_br 
            | VARR
            | OPERATORS
			| CALL 
			| close_br
			;
	
VARR:         VAR id TYPE eq_const VALUE
            ;

VALUE:        int_const
            | float_const
			| id
			| string
			;

OPERATORS:    IFF
            ;

CALL:         RETURN
            ;

IFF:          IF BODY
            ;

%%

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
