%{
	#include<stdio.h>
	int yylex(void);
	int yyerror(const char *s);
	int yyparse();
	int success = 1;
	extern FILE *yyin;
%}
%token t_vtype t_constant t_case t_func t_import t_chan t_defer t_go t_interface t_default t_var t_range t_map t_package t_if t_select t_switch t_fallthrough t_else
%token t_type t_for t_goto t_continue t_break t_return t_struct_const t_or_const t_and_const t_param_const t_eq_const t_rel_const t_shift_const t_inc_const
%token t_point_const t_punc t_int_const t_float_const t_char_const t_id t_string t_short_dec t_open_br t_close_br t_sign t_comma t_equality t_open_paren t_close_paren
%token t_open_sq t_close_sq
%left '+' '-'
%left '*' '/'
%%
START:        START GLOBAL
            | GLOBAL
	        ;

GLOBAL:       PACKAGE
            | IMPORT
			| FUNC
			;

PACKAGE:     t_package t_id
             ;
			 
IMPORT:      t_import t_string
             ;

FUNC:        t_func t_id BODY
			;

BODY:         BODY_START BODY_END
	        ;

BODY_END:     t_close_br
            ;

BODY_START:   t_open_br
            | BODY_START VAR
			| BODY_START OPERATORS
			| BODY_START CALL
			| BODY_START ARRAY_BODY
			;

VAR:         t_var t_id ASSIGNMENT VALUE
			|t_id SHORT_ASSIGN VALUE
			| t_id ARRAY_LEN ASSIGNMENT VALUE //new
            ;

ASSIGNMENT: 	t_vtype t_equality
			| t_equality
			| t_comma t_id ASSIGNMENT VALUE t_comma


SHORT_ASSIGN:  t_short_dec
			| t_comma t_id SHORT_ASSIGN VALUE t_comma
			;


VALUE:        t_int_const
            | t_float_const
			| t_id
			| t_string
			| EXPR_BR
			;

OPERATORS:    IF
            | RET_PARAM
			| FOR
			;
FOR:          t_for BODY
            ;

CALL:         t_return
            ;

IF:           t_if BODY
            ;
RET_PARAM:    t_return EXPR
			| t_return VALUE 
			;
EXPR:         VALUE t_sign VALUE
            | EXPR t_sign VALUE
			;

EXPR_BR:      EXPR_START EXPR EXPR_END
			| EXPR_START VALUE EXPR_END
            ;

EXPR_START:   t_open_paren

			;
EXPR_END:     t_close_paren
            ;

ARRAY_BODY:   t_var t_id ARRAY_LEN t_vtype
              

ARRAY_LEN:    t_open_sq t_int_const t_close_sq
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