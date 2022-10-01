%{
	#include<stdio.h>
	int yylex(void);
	int yyerror(const char *s);
	int success = 1;
	extern FILE *yyin;
%}
%token VTYPE FUNC CONST CASE CHAN DEFER GO INTERFACE DEFAULT IMPORT VAR RANGE MAP PACKAGE IF SELECT SWITCH FALLTHROUGH ELSE
%token TYPE FOR GOTO CONTINUE BREAK RETURN struct_const or_const and_const param_const eq_const rel_const shift_const inc_const
%token point_const punc int_const float_const char_const id string short_dec
%left '+' '-'
%left '*' '/'
%start GLOBAL

%%
GLOBAL:
	string;
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
	//do{
    yyparse();
	//}while(!feof(yyin));
    if(success)
    	printf("Parsing Successful\n");
	else 
		printf("Parsing not successful\n");
    return 0;
}

int yyerror(const char *msg)
{
  yyparse();
  printf("\nProgram finished analysis\n");
  return 0;
	extern int yylineno;
	printf("Parsing Failed\nLine Number: %d %s\n",yylineno,msg);
	success = 0;
	return 0;
}
