%{
	#include<stdio.h>
	int yylex(void);
	int yyerror(const char *s);
	int yyparse();
	int success = 1;
	extern FILE *yyin;
	#define YYDEBUG 1
%}
%token t_vtype t_constant t_case t_func t_import t_chan t_defer t_go t_interface t_default t_var t_range t_map t_package t_if t_select t_switch t_fallthrough t_else
%token t_type t_for t_goto t_continue t_break t_return t_struct_const t_or_const t_and_const t_param_const t_eq_const t_rel_const t_shift_const t_inc_const
%token t_point_const t_punc t_int_const t_float_const t_char_const t_id t_string t_short_dec t_open_br t_close_br t_sign t_comma t_equality t_open_paren t_close_paren
%token t_open_sq t_close_sq t_bool t_rune t_semicolon t_blank_identifier t_dot t_colon t_true t_false t_short_expr t_make t_enter t_eof t_star t_ampersand t_hex t_ten_pow t_not


%left t_star
%right t_sign
%right t_dot

%%
START:        START GLOBAL END_SYMBOLS
            | CLEAN GLOBAL END_SYMBOLS
			| GLOBAL END_SYMBOLS
			| START END_SYMBOLS
	        ;

CLEAN: 		  t_enter
			| CLEAN CLEAN 
			;

GLOBAL:       PACKAGE
            | IMPORT 
			| FUNC
			| STRUCT
			| INTERFACE
			| VAR
			| STRUCT_METHOD
			| TYPE
			;

PACKAGE:      t_package t_id
             ;
			 
IMPORT:       t_import t_string 
            | t_import t_open_paren PARAM_IMPORT t_close_paren
			| t_import t_open_paren t_enter PARAM_IMPORT t_close_paren
			| t_import t_id t_string
            ;

FUNC:         t_func t_id t_open_paren FUNC_PARAM t_close_paren FUNC_SECOND_PART
			;

FUNC_PARAM:	  FUNC_PARAM_FULFILL 
			| FUNC_PARAM t_comma FUNC_PARAM_FULFILL 
			;	

FUNC_SECOND_PART:
			  BODY
			| TYPE_AND_STRUCT BODY
			| POINTER BODY
			| t_star t_vtype BODY
			| MULTI_AR TYPE_AND_STRUCT BODY
			| FUNC_RETURN_VALUE TYPE_AND_STRUCT BODY
			| FUNC_RETURN_VALUE METHOD BODY
			| FUNC_RETURN_VALUE MULTI_AR t_string BODY
			| FUNC_PARAM_SECOND BODY
			| FUNC_PARAM_SECOND
			| TYPE_AND_STRUCT
			;

FUNC_PARAM_SECOND: 
			  FUNC_PARAM_SECOND_START FUNC_PARAM_SECOND_END
			| t_open_paren t_close_paren
			;

FUNC_PARAM_SECOND_START: 
			  t_open_paren
			| FUNC_PARAM_SECOND_START FUNC_PARAM_FULFILL_SECOND
			;

FUNC_PARAM_SECOND_END:
			  FUNC_PARAM_FULFILL_SECOND_END t_close_paren
			;

FUNC_PARAM_FULFILL:
			  t_id TYPE_AND_STRUCT 
			| t_id t_star t_vtype
			| TYPE_AND_STRUCT
			| t_id INTERFACE
			| t_id MULTI_AR t_vtype
			| t_id t_param_const INTERFACE // [...]
			| t_id METHOD
			|
			;

FUNC_PARAM_FULFILL_SECOND:
			  t_id TYPE_AND_STRUCT t_comma
			| TYPE_AND_STRUCT t_comma
			| t_id METHOD t_comma
			| VALUE t_comma
			//| MULTI_AR t_vtype t_comma
			| t_enter
			| POINTER t_comma
			| t_star t_vtype t_comma
			;

FUNC_PARAM_FULFILL_SECOND_END:
			  t_id TYPE_AND_STRUCT
			| TYPE_AND_STRUCT
			| t_id METHOD
			| METHOD
			| MULTI_AR t_vtype t_comma
			| t_enter
			| POINTER
			| t_star t_vtype
			;

FUNC_RETURN_VALUE:
			  FUNC_RETURN_VALUE_FULFILL
			| FUNC_RETURN_VALUE FUNC_RETURN_VALUE_FULFILL
			;

FUNC_RETURN_VALUE_FULFILL:
			  t_func t_open_paren FUNC_PARAM t_close_paren
			| t_id t_open_paren FUNC_PARAM t_close_paren
			;
			
TYPE_AND_STRUCT:
			  t_vtype
			| t_param_const t_vtype //[...]
			//| t_string
			| METHOD_START
			;


FIRST_PART_FOR_FUNC : 
			  t_func t_open_paren FUNC_PARAM t_close_paren
			;

STRUCT_METHOD:
			  FIRST_PART_FOR_FUNC t_id FUNC_PARAM_SECOND STRUCT_METHOD_SECOND_PART
			;

STRUCT_METHOD_SECOND_PART:
			  BODY
			| TYPE_AND_STRUCT BODY
			| METHOD BODY 
			| FUNC_PARAM_SECOND BODY
			;

SHORT_FUNC:   FIRST_PART_FOR_FUNC FUNC_SECOND_PART
			;

TYPE:		 t_type t_id MAPS

BODY:        BODY_START BODY_END
	        ;

BODY_END:     t_close_br
			| BODY_FILLING t_close_br
            ;

BODY_START:   t_open_br
            | BODY_START BODY_FILLING END_SYMBOLS
			| BODY_START END_SYMBOLS
			;

GO:			  t_go SHORT_FUNC PARAM
			| t_go FUNC_CALL
			;

SELECT:		  t_select CASE
			;

BODY_FILLING: FOR
			| SWITCH
			| GOTO
			| LABEL
			| IF
			| FUNC_CALL
			| SHORT_EXPR
			| VAR
			| RETURN
			| STRUCT
			| SLICE
			| DEFER
			| METHOD
			| INTERFACE
			| FIELD_BODY
			| GO
			| SELECT
			| VALUE t_inc_const
			| TYPE
			;

VAR:          IDS SHORT_ASSIGN VALUES
			| t_var IDS TYPE_AND_STRUCT
			| t_var IDS METHOD
			| t_var IDS ASSIGNMENT VALUES
			| t_var t_id STRUCT_START
			| t_var t_id MAPS
			| t_var t_id SHORT_STRUCT
			| t_var IDS SHORT_FUNC
			| t_constant IDS ASSIGNMENT VALUES
			| t_constant BIG_CONST
			| IDS ASSIGNMENT VALUES  
			| t_var BIG_VAR
			;

BIG_CONST:   CONST_START CONST_END
			;

CONST_START:  t_open_paren
			| CONST_START FULFILL_FOR_IDS ASSIGNMENT FULFILL_FOR_VAL
			| CONST_START END_SYMBOLS
			;
	
CONST_END:    t_close_paren
			| FULFILL_FOR_IDS ASSIGNMENT FULFILL_FOR_VAL CONST_END


BIG_VAR:	  BIG_VAR_START BIG_VAR_END
			;

BIG_VAR_START:
			  t_open_paren
			| BIG_VAR_START t_enter
			| BIG_VAR_START IDS ASSIGNMENT VALUES t_enter
			| BIG_VAR_START IDS VALUES t_enter
			;
	
BIG_VAR_END:  t_close_paren
			| IDS ASSIGNMENT VALUES t_close_paren
			| BIG_VAR_START IDS VALUES
			;

IDS: 		  FULFILL_FOR_IDS
			| FULFILL_FOR_IDS MANY_IDS
			;
VALUES: 	  FULFILL_FOR_VAL	
			| FULFILL_FOR_VAL MANY_VALUES
			;

 FULFILL_FOR_VAL:
			 EXPR
			| BOOLEAN
			| MULTI_AR t_vtype FIELD_BODY
			| MAKE
			| SLICE
			| MULTI_AR SHORT_STRUCT
			| MULTI_AR FIELD
			| t_make t_open_paren MAPS t_close_paren
			| FIELD
			| MAPS
			| AMPERSAND FIELD_BODY
			| FIELD_BODY
			| SHORT_FUNC
		   ;

FULFILL_FOR_IDS:
			  METHOD
			| t_blank_identifier
			| METHOD_START
			;


BOOLEAN:	  EXPR t_bool EXPR
			| BOOLEAN t_bool EXPR
			| BOOLEAN t_bool t_not EXPR
			| t_not t_id
			| t_not t_true
			| t_not t_false
			;


DEFER:		  t_defer FUNC_CALL
            | t_defer METHOD
			| t_defer SHORT_FUNC PARAM
			;

ASSIGNMENT:   TYPE_AND_STRUCT t_equality
			| t_equality
			| INTERFACE t_equality
			| ASSIGNMENT t_enter
			;

SHORT_ASSIGN: t_short_dec
			;

MANY_IDS:	  MANY_IDS_START MANY_IDS_END
			;

MANY_IDS_START:
			  t_comma
			| MANY_IDS_START MANY_IDS_FULFILL
			;

MANY_IDS_FULFILL:
			  FULFILL_FOR_IDS t_comma
			| t_enter
			;

MANY_IDS_END: FULFILL_FOR_IDS
			;

MANY_VALUES:  MANY_VALUES_START MANY_VALUES_END
			;

MANY_VALUES_START:
			  t_comma
			| MANY_VALUES_START FULFILL_FOR_VALS
			;

FULFILL_FOR_VALS:
			  FULFILL_FOR_VAL t_comma
			| t_enter
			;

MANY_VALUES_END:
			  FULFILL_FOR_VAL
			;

FUNC_CALL:    t_id PARAM 
			;
	
PARAM:  	  PARAM_START PARAM_END 
			| t_open_paren t_close_paren
     		;

PARAM_START:  t_open_paren 
			| PARAM_START PARAM_FULFILL
			;

PARAM_END: PARAM_END_FULFILL t_close_paren
			;


PARAM_END_FULFILL:
			  FULFILL_FOR_VAL
			| EXPR t_param_const
			| t_id METHOD
			| t_vtype
			| t_enter
			| t_id POINTER
			| SHORT_STRUCT
			;

PARAM_FULFILL:
			  FULFILL_FOR_VAL t_comma
			| METHOD t_comma
			| t_id FIELD_BODY t_comma
			| t_enter
			| SHORT_STRUCT t_comma
			| t_vtype t_comma
			| EXPR t_comma
			| SHORT_FUNC t_comma
			| t_id POINTER t_comma
			;

SHIFT:		  VALUE t_shift_const VALUE
			;

METHOD:		 METHOD_START t_dot METHOD_FULFILL
           | METHOD t_dot METHOD_FULFILL
		   ;

METHOD_START: t_id
            | AMPERSAND
			| POINTER
			| t_id MULTI_AR
			;

METHOD_FULFILL:
			  t_id
            | FUNC_CALL
			| POINTER
			| STRUCT
			| AMPERSAND
			| t_id MULTI_AR
			| SLICE
			| t_open_paren t_type t_close_paren
			| PARAM
			| t_vtype
			;

POINTER:      t_star VALUE
			;

AMPERSAND:    t_ampersand VALUE
            ;

PARAM_IMPORT: t_string END_SYMBOLS
			| t_id t_string END_SYMBOLS
            | PARAM_IMPORT t_string END_SYMBOLS
			| PARAM_IMPORT t_id t_string END_SYMBOLS
			| PARAM_IMPORT t_enter
			;  
 
VALUE:        t_int_const
			| t_float_const
			| SIGNED_VALUE
			| t_string
      		| t_rune
			| SHORT_FUNC PARAM
			| FUNC_CALL
			| SHIFT
			| t_vtype t_open_paren VALUE t_close_paren
			| t_open_paren BOOLEAN t_close_paren
			| t_hex 
			| t_ten_pow
			| MULTI_AR t_vtype EXPR
			| FULFILL_FOR_IDS
			| t_true
			| t_id t_open_sq EXPR t_close_sq
			| t_false
			;

GOTO:		  t_goto t_id
			;

LABEL:		  t_id t_colon
			;

SWITCH:		  t_switch INIT_STATE t_semicolon EXPR CASE
			| t_switch EXPR CASE
			| t_switch VAR CASE
			| t_switch CASE
			;

CASE_START:   t_open_br
			| CASE_START END_SYMBOLS
			;

CASE:		  CASE_START t_case CASE_STATEMENT CASE_BODY t_close_br
			;

CASE_HEADER:  t_case CASE_STATEMENT t_colon
			;

MULTIPLE_ARG: FIRST_PART SECOND_PART
			;

FIRST_PART:   EXPR t_comma
			| FIRST_PART EXPR t_comma
			| METHOD t_comma
			| FIRST_PART METHOD t_comma
			;

SECOND_PART:  EXPR
			;

 CASE_STATEMENT:
			  MULTIPLE_ARG
			| t_vtype
			| SECOND_PART
			| BOOLEAN
			| VAR
			;

CASE_BODY:	  t_colon
			| CASE_BODY LOOP_FILLING END_SYMBOLS
			| CASE_BODY t_enter
			;

IF:			  IF_FIRST MULTY_ELSEIF_SECOND MULTY_ELSE_THIRD
			| IF_FIRST MULTY_ELSEIF_SECOND
			| IF_FIRST MULTY_ELSE_THIRD
			| IF_FIRST
			;

IF_FIRST:	  t_if CONDITION BODY_FOR_LOOP
			| t_if INIT_STATE t_semicolon CONDITION BODY_FOR_LOOP
			;

BODY_FOR_LOOP:
			  BODY_FOR_LOOP_START BODY_FOR_LOOP_END
			;

BODY_FOR_LOOP_START:
			  t_open_br
			| BODY_FOR_LOOP_START END_SYMBOLS
            | BODY_FOR_LOOP_START LOOP_FILLING END_SYMBOLS
			;

BODY_FOR_LOOP_END:     
			  t_close_br
            ;

LOOP_FILLING:  
			  BODY_FILLING
			| CASE_HEADER
			| t_fallthrough
			| t_default t_colon
			| t_break
			| t_break t_id
			| t_continue
			;

MULTY_ELSEIF_SECOND:
			  ELSEIF_SECOND
			| MULTY_ELSEIF_SECOND ELSEIF_SECOND
			;

ELSEIF_SECOND:
			  t_else t_if CONDITION BODY_FOR_LOOP
			;

MULTY_ELSE_THIRD:
			  ELSE_THIRD
			| MULTY_ELSE_THIRD ELSE_THIRD
			;

ELSE_THIRD:   t_else BODY_FOR_LOOP
			;

RETURN:		  t_return RETURN_FULFILL
      		;
      
RETURN_FULFILL:
			  VALUES
			|
			;

EXPR:         VALUE 
            | EXPR SIGNED_VALUE
			| EXPR POINTER
			| t_open_paren EXPR t_close_paren
			| VALUE POINTER
			| SIGNED_VALUE SIGNED_VALUE
			;

SIGNED_VALUE:
			  t_sign VALUE
			;

SHORT_EXPR:	  VALUE t_short_expr VALUE
			;

INIT_STATE:   VAR
			| METHOD
			|
			;

CONDITION:	  CONDITION_FULFILL
			| t_not CONDITION_FULFILL
			| t_id
			| POINTER
			|
			;

CONDITION_FULFILL:
			  BOOLEAN
			| METHOD
			| FUNC_CALL
			;

POST_STATE:   EXPR
			| t_id t_inc_const
			| SHORT_EXPR
			;

FOR:		  t_for INIT_STATE t_semicolon CONDITION t_semicolon POST_STATE BODY_FOR_LOOP
			| t_for CONDITION BODY_FOR_LOOP
			| t_for IDS SHORT_ASSIGN RANGE BODY_FOR_LOOP
			;

RANGE:
	t_range VALUE
	|t_range MULTI_AR TYPE_AND_STRUCT FIELD_BODY
              
ARRAY_INDEX:  t_open_sq t_int_const t_close_sq
            | t_open_sq t_id t_close_sq
			| t_open_sq t_string t_close_sq
            | t_open_sq t_close_sq
            ;

MULTI_AR:     ARRAY_INDEX
			| ARRAY_INDEX MULTI_AR
			| t_open_sq t_param_const t_close_sq // [...]
            ;

MAKE:         t_make t_open_paren MULTI_AR TYPE_AND_STRUCT t_comma VALUE t_close_paren
            | t_make t_open_paren MULTI_AR TYPE_AND_STRUCT t_comma VALUE t_comma VALUE t_close_paren
			//|t_make t_open_paren t_id t_id t_close_paren

			;

SLICE:       t_id t_open_sq VALUE t_colon VALUE t_close_sq
           | t_id t_open_sq t_colon VALUE t_close_sq
		   | t_id t_open_sq VALUE t_colon t_close_sq
		   ;

MAPS:        t_map t_open_sq t_vtype t_close_sq t_vtype
           | t_map t_open_sq t_vtype t_close_sq t_vtype FIELD_BODY
		   | t_map t_open_sq t_vtype t_close_sq t_id  FIELD_BODY
		   | t_map t_open_sq t_vtype t_close_sq t_id 
           ;

SHORT_STRUCT: 
			  STRUCT_START FIELD_BODY
			;

STRUCT:       t_type t_id STRUCT_START 
			| t_type t_id TYPE_AND_STRUCT
            ;

STRUCT_BODY:  STRUCT_BODY_START STRUCT_BODY_END
			;
STRUCT_BODY_START: 
			  t_open_br
			| STRUCT_BODY_START STRUCT_BODY_FULFILL
			| STRUCT_BODY_START END_SYMBOLS
			;

STRUCT_BODY_END: 
			  t_close_br
			| STRUCT_BODY_FULFILL t_close_br
			;

STRUCT_BODY_FULFILL:
			  IDS t_vtype 
			| t_id t_id
			| t_id
			| t_id METHOD
			| t_id MULTI_AR t_vtype
			| t_id MAPS
			| t_id t_star METHOD
			;

STRUCT_START: t_struct_const STRUCT_BODY
			| t_struct_const t_enter
			;



FIELD: 		  t_id FIELD_BODY
			;

FIELD_BODY:   FIELD_START FIELD_END
			| t_open_br t_close_br
			;

FIELD_START:  t_open_br
			| FIELD_START t_enter
			| FIELD_START FIELD_FULFILL
			;

FIELD_FULFILL:
			  FULFILL_FOR_VAL t_colon FULFILL_FOR_VAL t_comma
			| FULFILL_FOR_VAL t_comma
			;

FIELD_END:    FIELD_END_FULFILL t_close_br
			;

FIELD_END_FULFILL:
			  FULFILL_FOR_VAL t_colon FULFILL_FOR_VAL
			| FULFILL_FOR_VAL
			| t_enter
			;

END_SYMBOLS:  t_semicolon
			| t_enter
			| t_eof
			;

INTERFACE:    INT_START 
            ;

INT_START:    t_type t_id t_interface t_open_br INT_BODY INT_END
            | t_type t_id t_interface t_open_br END_SYMBOLS INT_BODY INT_END
			| t_type t_id t_interface t_enter t_open_br END_SYMBOLS INT_BODY INT_END
			| t_interface t_open_br INT_END
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
	yydebug = 0;
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