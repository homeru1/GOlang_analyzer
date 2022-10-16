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
%token t_open_sq t_close_sq t_bool t_rune t_make t_append t_len t_copy t_colon
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
			| RETURN BODY_END
            ;

BODY_START:   t_open_br
            | BODY_START VAR
			| BODY_START OPERATORS
			| BODY_START ARRAY_BODY
			;

VAR:          t_var t_id ASSIGNMENT EXPR
			| t_var t_id ASSIGNMENT EXPR t_vtype
			| t_var t_id ASSIGNMENT BOOLEAN
			| t_id SHORT_ASSIGN EXPR
			| t_id SHORT_ASSIGN MULTI_AR t_vtype PLENTY // PLENTY
			| t_var t_id ASSIGNMENT MULTI_AR t_vtype PLENTY  // PLENTY
			| t_id SHORT_ASSIGN BOOLEAN
			| t_id MULTI_AR ASSIGNMENT EXPR
			| t_var t_id ASSIGNMENT MAKE // MAKE
			| t_id SHORT_ASSIGN MAKE // MAKE
			| t_id MULTI_AR ASSIGNMENT MAKE // MAKE
			| t_id SHORT_ASSIGN SLICE // SLICE
			| t_id ASSIGNMENT SLICE // SLICE
			| t_var t_id ASSIGNMENT SLICE // SLICE
			| t_var t_id MAPS // MAP
			| t_id SHORT_ASSIGN t_make t_open_paren MAPS t_close_paren //MAP
      		;
      
BOOLEAN:	  EXPR t_bool EXPR
			;

ASSIGNMENT:   t_vtype t_equality
			| t_equality
			| t_comma t_id ASSIGNMENT EXPR t_comma
			| t_comma t_id ASSIGNMENT BOOLEAN t_comma

SHORT_ASSIGN: t_short_dec
			| t_comma t_id SHORT_ASSIGN EXPR t_comma
			| t_comma t_id SHORT_ASSIGN BOOLEAN t_comma
			;

VALUE:        t_int_const
            | t_float_const
			| t_id
			| t_string
      		| t_rune
			;

OPERATORS:    RET_PARAM
			;
RETURN:		  t_return RET_PARAM
			| t_return
            ;
      
RET_PARAM:    RET_PARAM t_comma EXPR
			| EXPR
            ;

EXPR:         EXPR t_sign VALUE
			| EXPR_START EXPR EXPR_END
			| VALUE
			;

EXPR_START:   t_open_paren

			;
EXPR_END:     t_close_paren
            ;

ARRAY_BODY:   t_var t_id ARRAY_INDEX t_vtype
            | t_var t_id MULTI_AR t_vtype 
			| t_var t_id ARRAY_INDEX t_vtype ASSIGNMENT ARRAY_INDEX t_vtype PLENTY // bug fix (array)
			| t_var t_id ARRAY_INDEX t_vtype ASSIGNMENT MAKE
            ;
              
ARRAY_INDEX:  t_open_sq t_int_const t_close_sq
            | t_open_sq t_id t_close_sq
			| t_open_sq t_string t_close_sq
            | t_open_sq t_close_sq //Also need for slices
            ;

MULTI_AR:     ARRAY_INDEX MULTI_AR
			| ARRAY_INDEX 
            ;

PLENTY:       PLENTY_OLD 
            | PLENTY_OLD t_comma PLENTY 

PLENTY_OLD:   t_open_br ENUM t_close_br
            | t_open_br t_close_br 
			| t_open_br PLENTY t_close_br 
            ;

ENUM:         VALUE
            | ENUM t_comma VALUE
		    ;

MAKE:         t_make t_open_paren MULTI_AR t_vtype t_comma VALUE t_close_paren
            | t_make t_open_paren MULTI_AR t_vtype t_comma VALUE t_comma t_int_const VALUE
			;

SLICE:       t_id t_open_sq VALUE t_colon VALUE t_close_sq
           | t_id t_open_sq t_colon VALUE t_close_sq
		   | t_id t_open_sq VALUE t_colon t_close_sq
		   ;

MAPS:         t_map t_open_sq t_vtype t_close_sq t_vtype
           
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