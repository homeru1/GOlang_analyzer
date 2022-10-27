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


%left t_sign
%left t_star

%%
START:        START GLOBAL END_SYMBOLS
            | TMP GLOBAL END_SYMBOLS
			|GLOBAL END_SYMBOLS
			| START END_SYMBOLS
	        ;

TMP: t_enter
	|TMP TMP 
	;

GLOBAL:       PACKAGE
            | IMPORT 
			| FUNC
			| STRUCT
			| INTERFACE
			| VAR
			|STRUCT_METHOD
			|BIG_VAR
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

FUNC_PARAM:	FUNC_PARAM_FULFILL 
			|FUNC_PARAM t_comma FUNC_PARAM_FULFILL 
			;	

FUNC_SECOND_PART:
			BODY
			| TYPE_AND_STRUCT BODY
			| MULTI_AR TYPE_AND_STRUCT BODY
			| FUNC_RETURN_VALUE TYPE_AND_STRUCT BODY
			| FUNC_PARAM_SECOND BODY
			;

FUNC_PARAM_SECOND: FUNC_PARAM_SECOND_START FUNC_PARAM_SECOND_END
			|t_open_paren t_close_paren
			;

FUNC_PARAM_SECOND_START: t_open_paren
			| FUNC_PARAM_SECOND_START FUNC_PARAM_FULFILL_SECOND
			;

FUNC_PARAM_SECOND_END:
			FUNC_PARAM_FULFILL_SECOND_END t_close_paren
			;

FUNC_PARAM_FULFILL:
			t_id TYPE_AND_STRUCT 
			|TYPE_AND_STRUCT
			| t_id INTERFACE
			| t_id t_param_const INTERFACE // [...]
			| t_id MULTI_AR t_vtype
			| t_id METHOD //
			|
			;

FUNC_PARAM_FULFILL_SECOND:
			t_id TYPE_AND_STRUCT t_comma
			| TYPE_AND_STRUCT t_comma
			| t_id METHOD t_comma
			| t_enter
			;

FUNC_PARAM_FULFILL_SECOND_END:
			t_id TYPE_AND_STRUCT
			| TYPE_AND_STRUCT
			|t_id METHOD
			| t_enter
			;
FUNC_RETURN_VALUE:
			 FUNC_RETURN_VALUE_FULFILL
			|FUNC_RETURN_VALUE FUNC_RETURN_VALUE_FULFILL
			;
FUNC_RETURN_VALUE_FULFILL:
			t_func t_open_paren FUNC_PARAM t_close_paren
			|t_id t_open_paren FUNC_PARAM t_close_paren
			;
TYPE_AND_STRUCT:
			t_vtype
			| t_param_const t_vtype //[...]
			| t_id
			| POINTER
			//|INTERFACE
		    //| MULTI_AR t_vtype
			//| METHOD
			;


STRUCT_METHOD:
			t_func t_open_paren t_id TYPE_AND_STRUCT t_close_paren STRUCT_METHOD_SECOND_PART 

STRUCT_METHOD_SECOND_PART:
			t_id FUNC_PARAM_SECOND BODY
			|t_id FUNC_PARAM_SECOND TYPE_AND_STRUCT BODY
			|t_id FUNC_PARAM_SECOND FUNC_PARAM_SECOND BODY
			;

SHORT_FUNC:
			t_func t_open_paren FUNC_PARAM t_close_paren FUNC_SECOND_PART
			;


BODY:        BODY_START BODY_END
	        ;

BODY_END:     t_close_br
			| BODY_FILLING t_close_br
            ;

BODY_START:   t_open_br
            | BODY_START BODY_FILLING END_SYMBOLS
			| BODY_START END_SYMBOLS
			;

BODY_FILLING:   FOR
			|  SWITCH
			|  GOTO
			|  LABEL
			|  IF
			//|  MULTI_AR
			|  FUNC_CALL
			|  SHORT_EXPR
			| VAR
			//|  ARRAY_BODY
			|  RETURN
			|  STRUCT
			|  SLICE
			|  DEFER
			|  METHOD
			|  INTERFACE
			|  FIELD_BODY
			|  BIG_VAR
			;

			|t_var IDS TYPE_AND_STRUCT
VAR:         IDS SHORT_ASSIGN VALUES
			|t_var IDS ASSIGNMENT VALUES
			|t_var t_id MAPS
			|IDS ASSIGNMENT VALUES  
			//|t_var IDS FULFILL_FOR_VAL//
			;

BIG_VAR:
	t_var BIG_VAR_START BIG_VAR_END
		;

BIG_VAR_START:
	t_open_paren
	|BIG_VAR_START t_enter
	|BIG_VAR_START IDS ASSIGNMENT VALUES
	;
	
BIG_VAR_END:
	t_close_paren
	|IDS ASSIGNMENT VALUES t_close_paren
	;
      /* t_var t_id ASSIGNMENT EXPR
			| t_var t_id ASSIGNMENT EXPR t_vtype
			| t_var t_id ASSIGNMENT BOOLEAN
			| t_id SHORT_ASSIGN EXPR
			| t_id ASSIGNMENT EXPR
			| t_var t_id t_id ASSIGNMENT VALUE
			| t_var t_id t_vtype
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
			| t_var t_id MULTI_AR t_vtype ASSIGNMENT SLICE // SLICE
			| t_var t_id MAPS // MAP
			| t_id SHORT_ASSIGN t_make t_open_paren MAPS t_close_paren //MAP
			| t_id SHORT_ASSIGN MAPS // MAP
			| t_var t_id t_id ASSIGNMENT ST_EMBEDDED //STRUCT
			| t_var t_id ASSIGNMENT ST_EMBEDDED //STRUCT
			| t_id SHORT_ASSIGN ST_EMBEDDED //STRUCT
			| METHOD ASSIGNMENT VALUE //STRUCT
			| POINTER ASSIGNMENT EXPR 
			| t_var t_id POINTER 
			| t_var t_id POINTER ASSIGNMENT EXPR
			| AMPERSAND ASSIGNMENT EXPR 
			| t_var t_id AMPERSAND 
			| t_var t_id AMPERSAND ASSIGNMENT EXPR
			| AMPERSAND SHORT_ASSIGN EXPR*/
      		;

IDS: FULFILL_FOR_IDS
	|FULFILL_FOR_IDS MANY_IDS
	;
VALUES:
	 FULFILL_FOR_VAL	
	| FULFILL_FOR_VAL MANY_VALUES
	;

 FULFILL_FOR_VAL:
			 EXPR
		   | BOOLEAN
		   | MULTI_AR t_vtype FIELD_BODY
		   | MAKE
		   | SLICE
		   | MULTI_AR SHORT_STRUCT
		   | t_make t_open_paren MAPS t_close_paren
		   | FIELD
		   | MAPS
		   | AMPERSAND FIELD_BODY
		   | FIELD_BODY
		  // | t_id PLENTY_BODY // 1 shift reduce
		  // | t_id METHOD
		   //| t_id PLENTY_BODY
		   ;

FULFILL_FOR_IDS:
			 METHOD
			| t_id POINTER
			//| t_id PLENTY_OLD //?
			|MAPS
			| t_blank_identifier
			|METHOD_START
			;


BOOLEAN:	  EXPR t_bool EXPR
			| BOOLEAN t_bool EXPR
			| t_not t_id
			;


DEFER:		  t_defer FUNC_CALL
            | t_defer METHOD
			;

ASSIGNMENT:   TYPE_AND_STRUCT t_equality
			| t_equality
			| INTERFACE t_equality
			|ASSIGNMENT t_enter
			;

;
SHORT_ASSIGN: t_short_dec
			;

MANY_IDS:	 MANY_IDS_START MANY_IDS_END
			;

MANY_IDS_START:
			  t_comma
			| MANY_IDS_START MANY_IDS_FULFILL
			;

MANY_IDS_FULFILL:
			  FULFILL_FOR_IDS t_comma
			| t_enter
			;

MANY_IDS_END: FULFILL_FOR_IDS //TMP
			;

//TMP: SHORT_ASSIGN|ASSIGNMENT|TYPE_AND_STRUCT

MANY_VALUES:  MANY_VALUES_START MANY_VALUES_END
			;

MANY_VALUES_START:
			  t_comma
			|MANY_VALUES_START FULFILL_FOR_VALS
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
	
PARAM:  	PARAM_START PARAM_END 
			| t_open_paren t_close_paren
     		;

PARAM_START: t_open_paren 
			| PARAM_START PARAM_FULFILL
			;

PARAM_END: PARAM_END_FULFILL t_close_paren
			;


PARAM_END_FULFILL:
			FULFILL_FOR_VAL
			| EXPR t_param_const // [...] 
			| t_id METHOD
			|t_vtype
			|t_enter
			;

PARAM_FULFILL:
			FULFILL_FOR_VAL t_comma
			|METHOD t_comma
			|t_id FIELD_BODY t_comma
			|t_enter
			|t_vtype t_comma
			|EXPR t_comma
			;

SHIFT:		 VALUE t_shift_const VALUE
			;

METHOD:		METHOD_START t_dot METHOD_FULFILL
           | METHOD t_dot METHOD_FULFILL
		   ;

METHOD_START: t_id
            | AMPERSAND
			| POINTER
			| t_id MULTI_AR
			;

METHOD_FULFILL:t_id
            | FUNC_CALL
			| POINTER
			| AMPERSAND
			| t_id MULTI_AR
			| SLICE
			| t_open_paren t_type t_close_paren
			|PARAM
			|t_vtype
			;

POINTER:      t_star VALUE
			//| t_star t_vtype
			//| t_star t_int_const
			;

AMPERSAND:    t_ampersand
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
			//| t_blank_identifier
			| SHORT_FUNC PARAM
			| FUNC_CALL
			| SHIFT
			| t_vtype t_open_paren VALUE t_close_paren
			| METHOD
			//| EXPR_START EXPR EXPR_END
			| t_open_paren BOOLEAN t_close_paren
			| t_hex 
			| t_ten_pow
			| t_true
			| t_false
			| METHOD_START
			;

GOTO:		  t_goto t_id
			;

LABEL:		  t_id t_colon
			;

SWITCH:		  t_switch INIT_STATE t_semicolon EXPR SWITCH_BODY
			| t_switch EXPR SWITCH_BODY
			| t_switch VAR SWITCH_BODY
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
			|BOOLEAN
			|t_vtype
			;

CASE_BODY:	t_colon
			|CASE_BODY LOOP_FILLING END_SYMBOLS
			|CASE_BODY t_enter
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
			|BODY_FOR_LOOP_START END_SYMBOLS
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

RETURN:		t_return RETURN_FULFILL
			|t_return SHORT_FUNC
      ;
      
RETURN_FULFILL:
	VALUES
	|
	;
EXPR:         VALUE 
            | EXPR SIGNED_VALUE
			| EXPR POINTER
			| t_id POINTER
			| t_open_paren EXPR t_close_paren
			| VALUE POINTER
			| SIGNED_VALUE SIGNED_VALUE
			//| t_int_const POINTER
			//| SIGNED_VALUE POINTER
			//| t_sign t_id POINTER
			//| METHOD t_star METHOD
			//|VALUE t_sign VALUE
			//|EXPR_START EXPR EXPR_END EXPR
			;

SIGNED_VALUE:
	t_sign VALUE
	;

SHORT_EXPR:	  t_id t_short_expr t_id
			;

INIT_STATE:  VAR
			| METHOD
			|
			;

CONDITION:	BOOLEAN
			|t_true
			|t_false
			|METHOD
			|FUNC_CALL
			|
			;

POST_STATE:  EXPR
			| t_id t_inc_const
			;

FOR:		  t_for INIT_STATE t_semicolon CONDITION t_semicolon POST_STATE BODY_FOR_LOOP
			| t_for CONDITION BODY_FOR_LOOP
			| t_for IDS SHORT_ASSIGN t_range VALUE BODY_FOR_LOOP
			//| t_for t_id t_comma t_id SHORT_ASSIGN t_range VALUE BODY_FOR_LOOP
			;

/*RANGE_BLANK:  FULFILL_FOR_IDS 
			|FULFILL_FOR_IDS t_comma FULFILL_FOR_IDS*/
			
			;
              
ARRAY_INDEX:  t_open_sq t_int_const t_close_sq
            | t_open_sq t_id t_close_sq
			| t_open_sq t_string t_close_sq
            | t_open_sq t_close_sq
            ;

MULTI_AR:     ARRAY_INDEX
			| ARRAY_INDEX MULTI_AR
			| t_open_sq t_param_const t_close_sq // [...]
            ;

ENUM:         VALUE
            | ENUM t_comma VALUE
			| ENUM t_comma END_SYMBOLS VALUE
		    ;

MAKE:         t_make t_open_paren MULTI_AR t_vtype t_comma VALUE t_close_paren
            | t_make t_open_paren MULTI_AR t_vtype t_comma VALUE t_comma VALUE t_close_paren
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

SHORT_STRUCT: STRUCT_START FIELD_BODY


STRUCT:      t_type t_id STRUCT_START 
			|t_type t_id TYPE_AND_STRUCT
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

STRUCT_START:  t_struct_const t_open_br STRUCT_END
           |   t_struct_const t_open_br STRUCT_BODY STRUCT_END
		   |   t_struct_const t_open_br END_SYMBOLS STRUCT_BODY STRUCT_END
           |   t_struct_const t_enter
           ;

STRUCT_END:   t_close_br
           |  t_enter t_close_br
           ;


FIELD: 		t_id FIELD_BODY
            //| METHOD FIELD_BODY
			;

FIELD_BODY: FIELD_START FIELD_END
			|t_open_br t_close_br
			;

FIELD_START: t_open_br
			|FIELD_START t_enter
			|FIELD_START FIELD_FULFILL
			;

FIELD_FULFILL:
			  FULFILL_FOR_VAL t_colon FULFILL_FOR_VAL t_comma
			| FULFILL_FOR_VAL t_comma
			;

FIELD_END:  FIELD_END_FULFILL t_close_br
			;

	
FIELD_END_FULFILL:
			FULFILL_FOR_VAL t_colon FULFILL_FOR_VAL
			|FULFILL_FOR_VAL
			|t_enter
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