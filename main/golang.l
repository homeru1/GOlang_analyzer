%option yylineno

%{
	#include<stdio.h>
	#include"y.tab.h"
	#include<math.h>
	extern int yyerror(const char *);
%}
%%
"string"|"int"|"float32"|"bool"|"rune"|"int8"|"int16"|"int64"|"uint8"|"uint16"|"uint32" 		 {printf("vtype ");return t_vtype;}	
"uint64"|"uint"|"byte"|"uintptr"|"float64"|"complex64"|"complex128"|"uintptr"				     {printf("vtype ");return t_vtype;}	
"func"																							 {printf("func "); return t_func;}
"const"         																				 {printf("const "); return t_constant;}
"case"																							 {printf("case "); return t_case;}
"chan"																							 {printf("chan "); return t_chan;}
"defer"																							 {printf("defer "); return t_defer;}		
"go"																							 {printf("go "); return t_go;}	
"interface"																						 {printf("interface "); return t_interface;}			
"default"																						 {printf("default "); return t_default;}
"import"                                                                                         {printf("import "); return t_import;}
"var"                                                                                            {printf("var "); return t_var;}
"range"                                                                                          {printf("range "); return t_range;}
"map"                                                                                            {printf("map "); return t_map;}
"package"                                                                                        {printf("package "); return t_package;}
"if"																							 {printf("if ");return t_if;}
"select"																						 {printf("select ");return t_select;}
"switch"																						 {printf("switch "); return t_switch;}
"fallthrough"                                                                                    {printf("fallthrough "); return t_fallthrough;}
"else"																							 {printf("else "); return t_else;}
"type"                                                                                           {printf("type "); return t_type;}
"for"																							 {printf("for "); return t_for;}
"goto"																							 {printf("goto "); return t_goto;}
"continue"																						 {printf("continue "); return t_continue;}
"break"																							 {printf("break "); return t_break;}
"struct"|"union"																				 {printf("struct_const "); return t_struct_const;}
"return"																						 {printf("return "); return t_return;}
"make"																						     {printf("make "); return t_make;}
"append"																						 {printf("append "); return t_append;}
"len"																							 {printf("len "); return t_len;}
"copy"																							 {printf("copy "); return t_copy;}
"{"																								 {printf("{ "); return t_open_br;}
"}"																								 {printf("} "); return t_close_br;}
"||" 																							 {printf("|| "); return t_or_const;}
":=" 																							 {printf(":= "); return t_short_dec;}
"&&"																							 {printf("&& "); return t_and_const;}
"..."																							 {printf("... "); return t_param_const;}																						 {printf("eq_const "); return t_eq_const;}																					 {printf("rel_const "); return t_rel_const;}
">>"|"<<"																						 {printf("shift_const "); return t_shift_const;}
"++"|"--"																						 {printf("inc_const "); return t_inc_const;}
"<-"																							 {printf("<- "); return t_point_const;}
","																						 		 {printf(", "); return t_comma;}
"("																						 		 {printf("( "); return t_open_paren;}
")"																						 		 {printf(") "); return t_close_paren;}
"="																						 		 {printf("= "); return t_equality;}
"=="|">"|"<"|"<="|">="|"!="																		 {printf("bool ");return t_bool;}
"["																								 {printf("[ "); return t_open_sq;}
"]"																								 {printf("] "); return t_close_sq;}
";"																								 {printf("; "); return t_semicolon;}
":"																								 {printf(": "); return t_colon;}
"true"																							 {printf("true "); return t_true;}
"false"																							 {printf("false "); return t_false;}
"_"																								 {printf("_ "); return  t_blank_identifier;}
"="|"*"|"+"|"-"|"/"|"?"|":"|"&"|"|"|"^"|"!"|"~"|"%"|"<"|">"		 		 	         			 {printf("sign ");return t_sign;}
"*="|"/="|"+="|"%="|">>="|"-="|"<<="|"&="|"^="|"|="|"&^"|"&^="									 {printf("punc "); return t_short_expr;}
[0-9]+																							 {printf("int "); return t_int_const;}
[0-9]+"."[0-9]+																					 {printf("float "); return t_float_const;}
"."																								 {printf(". "); return  t_dot;}	
"'"."'"																							 {printf("\' ");return t_char_const;}
[_a-zA-Z][_a-zA-Z0-9]*			 																 {printf("id ");return t_id;}
\'[a-zA-z]\'																					 {printf("rune ");return t_rune;}
\"(\\.|[^\"])*\"																				 {printf("String ");return t_string;}
"//"(\\.|[^\n])*[\n]																						;
[/][*]([^*]|[*]*[^*/])*[*]+[/]                                                                              ;
[ \t\n]																										;
%%

int yywrap(void)
{
    return 1;
}