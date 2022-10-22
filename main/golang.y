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
%token t_open_sq t_close_sq t_bool t_rune t_semicolon t_blank_identifier t_dot t_colon t_true t_false t_short_expr t_make t_enter t_eof t_pointer t_ampersand
%left '+' '-'
%left '*' '/'
%%
START:        START GLOBAL END_SYMBOLS
            | GLOBAL END_SYMBOLS
			| START END_SYMBOLS
	        ;

GLOBAL:       PACKAGE
            | IMPORT 
			| FUNC
			| STRUCT
			| INTERFACE
			;

PACKAGE:     t_package t_id
             ;
			 
IMPORT:       t_import t_string 
            | t_import t_open_paren PARAM_IMPORT t_close_paren
			| t_import t_open_paren t_enter PARAM_IMPORT t_close_paren
			| t_import t_id t_string
            ;

FUNC:        t_func t_id t_open_paren FUNC_PARAM t_close_paren FUNC_SECOND_PART
			;

FUNC_SECOND_PART:
			BODY
			| FUNC_RETURN_VALUE BODY
			| t_open_paren FUNC_PARAM_SECOND t_close_paren BODY
			;

FUNC_PARAM:	FUNC_PARAM_FULFILL
			|FUNC_PARAM t_comma FUNC_PARAM_FULFILL
			;	

FUNC_PARAM_FULFILL:
			t_id TYPE_AND_STRUCT
			| t_id
			|
			;

FUNC_PARAM_SECOND:
			 FUNC_PARAM_FULFILL_SECOND
			|FUNC_PARAM_SECOND t_comma FUNC_PARAM_FULFILL_SECOND
			;

FUNC_PARAM_FULFILL_SECOND:
			t_id TYPE_AND_STRUCT
			| TYPE_AND_STRUCT
			;

FUNC_RETURN_VALUE:
			 FUNC_RETURN_VALUE_FULFILL
			|FUNC_RETURN_VALUE FUNC_RETURN_VALUE_FULFILL
			;
FUNC_RETURN_VALUE_FULFILL:
			 TYPE_AND_STRUCT
			|t_func t_open_paren TYPE_AND_STRUCT t_close_paren
			|t_func t_open_paren t_close_paren
			;
TYPE_AND_STRUCT:
			t_vtype
			|t_id
			;


BODY:        BODY_START BODY_END
	        ;

BODY_END:     t_close_br
            ;

BODY_START:   t_open_br
            | BODY_START BODY_FILLING END_SYMBOLS
			| BODY_START END_SYMBOLS
			;

BODY_FILLING:  VAR 
			|  FOR
			|  SWITCH
			|  GOTO
			|  LABEL
			|  IF
			|  MULTI_AR
			|  FUNC_CALL
			|  SHORT_EXPR
			|  ARRAY_BODY
			|  RETURN
			|  STRUCT
			|  SLICE
			|  DEFER
			|  METHOD
			;

VAR:          t_var t_id ASSIGNMENT EXPR
			| t_var t_id ASSIGNMENT EXPR t_vtype
			| t_var t_id ASSIGNMENT BOOLEAN
			| t_id SHORT_ASSIGN EXPR
			| t_id ASSIGNMENT EXPR
			| t_id SHORT_ASSIGN MULTI_AR t_vtype PLENTY 
			| t_var t_id ASSIGNMENT MULTI_AR t_vtype PLENTY  
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
			| t_var t_id t_id ASSIGNMENT ST_EMBEDDED //STRUCT
			| t_var t_id ASSIGNMENT ST_EMBEDDED //STRUCT
			| t_id SHORT_ASSIGN ST_EMBEDDED //STRUCT
			| METHOD ASSIGNMENT VALUE //STRUCT
			| POINTER ASSIGNMENT EXPR //Илья посмотри указатели
			| t_var t_id POINTER 
			| t_var t_id POINTER ASSIGNMENT EXPR
      		;

BOOLEAN:	  EXPR t_bool EXPR
			;

DEFER:		t_defer FUNC_CALL
			;

ASSIGNMENT:   t_vtype t_equality
			| t_equality
			| t_comma t_id ASSIGNMENT EXPR t_comma
			| t_comma t_id ASSIGNMENT BOOLEAN t_comma

SHORT_ASSIGN: t_short_dec
			| t_comma t_id SHORT_ASSIGN EXPR t_comma
			| t_comma t_id SHORT_ASSIGN BOOLEAN t_comma
			;

FUNC_CALL:    t_id PARAM
			;
			
PARAM:  	PARAM_START PARAM_END
			| t_open_paren t_close_paren
     		;

PARAM_START: t_open_paren 
			| PARAM_START PARAM_FULFILL
			;

PARAM_END: PARAM_END_FULFILL t_close_paren
			;


PARAM_END_FULFILL:
			EXPR
			|t_enter
			;

PARAM_FULFILL:
			EXPR t_comma
			|t_enter
			;

SHIFT:		 SHIFT_AC t_shift_const SHIFT_AC
			;

SHIFT_AC:	  t_id
			| t_int_const
			;

METHOD:		METHOD_FULFILL t_dot METHOD_FULFILL
           | METHOD t_dot METHOD_FULFILL
		   ;

METHOD_FULFILL:
			t_id
			| FUNC_CALL
			;

POINTER:      t_pointer  
			| t_pointer t_vtype
			;

PARAM_IMPORT: t_string END_SYMBOLS
			| t_id t_string END_SYMBOLS
            | PARAM_IMPORT t_string END_SYMBOLS
			| PARAM_IMPORT t_id t_string END_SYMBOLS
			;  

VALUE:        t_int_const
            | t_float_const
			| t_id
			| t_string
      		| t_rune
			| t_blank_identifier
			| FUNC_CALL
			| SHIFT
			| POINTER
			| METHOD
			| EXPR_START EXPR EXPR_END
			;

GOTO:		  t_goto t_id
			;

LABEL:		  t_id t_colon
			;

SWITCH:		  t_switch INIT_STATE t_semicolon EXPR SWITCH_BODY
			| t_switch EXPR SWITCH_BODY
			| t_switch SWITCH_BODY
			;

SWITCH_BODY:   SWITCH_BODY_START SWITCH_BODY_END
			| SWITCH_BODY_START_WITH_DEFAULT SWITCH_BODY_END
			;

SWITCH_BODY_START: 
			t_open_br
			|SWITCH_BODY_START END_SYMBOLS
			|SWITCH_BODY_START CASE
			;

SWITCH_BODY_START_WITH_DEFAULT: 
			   SWITCH_BODY_START DEFAULT
			| SWITCH_BODY_START_WITH_DEFAULT CASE
			;

CASE:		 t_case CASE_STATEMENT CASE_BODY
			;

DEFAULT:	t_default CASE_BODY
			;

MULTIPLE_ARG:
			FIRST_PART SECOND_PART
			;

FIRST_PART: EXPR t_comma
			|FIRST_PART EXPR t_comma
			;

SECOND_PART: EXPR
			;

CASE_STATEMENT:
			MULTIPLE_ARG
			|EXPR
			;

CASE_BODY:	t_colon
			|CASE_BODY LOOP_FILLING END_SYMBOLS
			;


SWITCH_BODY_END:
			t_close_br
			;


IF:			IF_FIRST MULTY_ELSEIF_SECOND MULTY_ELSE_THIRD
			|IF_FIRST MULTY_ELSEIF_SECOND
			|IF_FIRST MULTY_ELSE_THIRD
			|IF_FIRST
			;

IF_FIRST:	t_if CONDITION BODY_FOR_LOOP
			|t_if INIT_STATE t_semicolon CONDITION BODY_FOR_LOOP
			;

BODY_FOR_LOOP: BODY_FOR_LOOP_START BODY_FOR_LOOP_END
			;

BODY_FOR_LOOP_START:
			t_open_br
			|t_open_br END_SYMBOLS
            | BODY_FOR_LOOP_START LOOP_FILLING END_SYMBOLS
			;


BODY_FOR_LOOP_END:     t_close_br
            ;


LOOP_FILLING:  
			 BODY_FILLING
			|t_break
			|t_continue
			;

MULTY_ELSEIF_SECOND:
			 ELSEIF_SECOND
			|MULTY_ELSEIF_SECOND ELSEIF_SECOND
			;

ELSEIF_SECOND:
			t_else t_if CONDITION BODY_FOR_LOOP
			;

MULTY_ELSE_THIRD:
			 ELSE_THIRD
			|MULTY_ELSE_THIRD ELSE_THIRD
			;

ELSE_THIRD: t_else BODY_FOR_LOOP
			;

RETURN:		t_return EXPR
			|t_return EXPR MANY_RETURN_START MANY_RETURN_START_END
      ;
      

MANY_RETURN_START:
		t_comma
		|MANY_RETURN_START EXPR t_comma
		;

MANY_RETURN_START_END:
		EXPR

EXPR:         VALUE 
            | EXPR t_sign VALUE 
			;

SHORT_EXPR:	  t_id t_short_expr t_id
			;

INIT_STATE:  VAR
			| FUNC_CALL
			|
			;

CONDITION:	BOOLEAN
			|t_true
			|t_false
			|
			;

POST_STATE:  EXPR
			| t_id t_inc_const
			;

FOR:		  t_for INIT_STATE t_semicolon CONDITION t_semicolon POST_STATE BODY_FOR_LOOP
			| t_for CONDITION BODY_FOR_LOOP
			;

EXPR_START:   t_open_paren

			;
EXPR_END:     t_close_paren
            ;

ARRAY_BODY: t_var t_id MULTI_AR t_vtype 
			| t_var t_id MULTI_AR t_vtype ASSIGNMENT MULTI_AR t_vtype PLENTY
			| t_var t_id MULTI_AR t_vtype ASSIGNMENT MAKE
            ;
              
ARRAY_INDEX:  t_open_sq t_int_const t_close_sq
            | t_open_sq t_id t_close_sq
			| t_open_sq t_string t_close_sq
            | t_open_sq t_close_sq //Also need for slices
            ;

MULTI_AR:     ARRAY_INDEX
			| ARRAY_INDEX MULTI_AR
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

MAPS:        t_map t_open_sq t_vtype t_close_sq t_vtype
           ;

STRUCT:      STRUCT_START 
           ;

STRUCT_BODY:  ENUM t_vtype 
           |  t_id t_id
		   |  t_id
		   |  t_id METHOD
		   |  STRUCT_BODY END_SYMBOLS t_id METHOD
           |  STRUCT_BODY END_SYMBOLS t_id t_vtype 
           |  STRUCT_BODY END_SYMBOLS t_id t_id //embedded struct
		   |  STRUCT_BODY END_SYMBOLS t_id //short definition
		   ;

STRUCT_START: t_type t_id t_struct_const t_open_br STRUCT_END
           |  t_type t_id t_struct_const t_open_br STRUCT_BODY STRUCT_END
		   |  t_type t_id t_struct_const t_open_br END_SYMBOLS STRUCT_BODY STRUCT_END
           |  t_type t_id t_struct_const t_enter
           ;

STRUCT_END:   t_close_br
           |  t_enter t_close_br
           ;

STRUCT_FIELD: FIELD_START
              ;

FIELD_START:  t_id t_open_br END_SYMBOLS FIELD_BODY t_comma END_SYMBOLS FIELD_END 
           |  t_id t_open_br END_SYMBOLS FIELD_BODY FIELD_END
           |  t_id t_open_br FIELD_BODY FIELD_END
		   ;

FIELD_BODY:   t_id t_colon VALUE t_comma END_SYMBOLS 
		   |  t_id t_colon FIELD_START t_comma END_SYMBOLS
		   |  t_id t_colon FIELD_START 
		   |  t_id t_colon VALUE 
		   |  t_id t_colon VALUE t_comma END_SYMBOLS FIELD_BODY
		   |  t_id t_colon FIELD_START t_comma END_SYMBOLS FIELD_BODY
		   |  t_id t_colon VALUE t_comma FIELD_BODY
		   |  t_id t_colon FIELD_START t_comma FIELD_BODY
		   ;

FIELD_END:    t_close_br
           ;

ST_EMBEDDED:  STRUCT_FIELD 
		   ;
           
END_SYMBOLS: t_semicolon
			|t_enter
			|t_eof
			;

INTERFACE:    INT_START 
            ;

INT_START:    t_type t_id t_interface t_open_br INT_BODY INT_END
            | t_type t_id t_interface t_open_br END_SYMBOLS INT_BODY INT_END
			| t_type t_id t_interface t_enter t_open_br END_SYMBOLS INT_BODY INT_END
			;

INT_BODY:     FUNC_CALL 
            | FUNC_CALL t_vtype
			| t_id t_open_paren t_vtype t_close_paren
			| INT_BODY END_SYMBOLS t_id t_open_paren t_vtype t_close_paren
			| INT_BODY END_SYMBOLS FUNC_CALL t_vtype 
            | INT_BODY END_SYMBOLS FUNC_CALL 

INT_END:      t_close_br
            | t_enter t_close_br
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