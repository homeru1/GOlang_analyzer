%{
	#include<stdio.h>
	int yylex(void);
	int yyerror(const char *s);
	int yyparse();
	int success = 1;
	char *gofile;
	extern FILE *yyin;
    extern FILE *yyout;
%}
%token type_const CONST CASE DEFAULT IMPORT PACKAGE VAR RANGE MAP DELETE PRINT MAKE APPEND COPY IF SWITCH FALLTHROUGH ELSE TYPE FOR DO WHILE GOTO CONTINUE BREAK struct_const RETURN or_const and_const param_const eq_const rel_const shift_const inc_const point_const PUNC int_const float_const char_const id string
%token enumeration_const storage_const qual_const enum_const DEFINE 
%token SIZEOF
%token START
%left '+' '-'
%left '*' '/'
%%

			

%%

int main(int argc, char **argv)
{
	if (argc > 1) {
    if(!(yyin = fopen(argv[1], "r")))
    {
      perror(argv[1]);
      return (1);
    }
  }
    gofile = argv[1];
    yyparse();
    if(success)
    	printf("Parsing Successful\n");
    return 0;
}

int yyerror(const char *msg)
{
	extern int yylineno;
	printf("Parsing Failed\nLine Number: %d %s\n",yylineno,msg);
	success = 0;
	return 0;
}
