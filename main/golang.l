%option yylineno

%{
	#include<stdio.h>
	#include"y.tab.h"
	#include<math.h>
%}
%%
"func"|"char"|"short"|"int"|"long"|"float"|"double"|"signed"|"unsigned"							 {return type_const;}	
"const"         																				 {return CONST;}
"case"																							 {return CASE;}	
"default"																						 {return DEFAULT;}
"import"                                                                                         {return IMPORT;}
"fmt"                                                                                            {return PACKAGE;}
"var"                                                                                            {return VAR;}
"range"                                                                                          {return RANGE;}
"map"                                                                                            {return MAP;}
"delete"                                                                                         {return DELETE;}
"Println"                                                                                        {return PRINT;}
"make"                                                                                           {return MAKE;}
"append"                                                                                         {return APPEND;}
"copy"                                                                                           {return COPY;}
"if"																							 {return IF;}
"switch"																						 {return SWITCH;}
"fallthrough"                                                                                    {return FALLTHROUGH;}
"else"																							 {return ELSE;}
"type"                                                                                           {return TYPE;}
"for"																							 {return FOR;}
"do"																						     {return DO;}
"while"																							 {return WHILE;}
"goto"																							 {return GOTO;}
"continue"																						 {return CONTINUE;}
"break"																							 {return BREAK;}
"struct"|"union"																				 {return struct_const;}
"return"																						 {return RETURN;}
"||" 																							 {return or_const;}
"&&"																							 {return and_const;}
"..."																							 {return param_const;}
"=="|"!="																						 {return eq_const;}
"<="|">="																						 {return rel_const;}
">>"|"<<"																						 {return shift_const;}
"++"|"--"																						 {return inc_const;}
"<-"																							 {return point_const;}
";"|"="|","|"{"|"}"|"("|")"|"["|"]"|"*"|"+"|"-"|"/"|"?"|":"|"&"|"|"|"^"|"!"|"~"|"%"|"<"|">"		 {return yytext[0];}
"*="|"/="|"+="|"%="|">>="|"-="|"<<="|"&="|"^="|"|="|"&^"|"&^="									 {return PUNC;}
[0-9]+																							 {return int_const;}
[0-9]+"."[0-9]+																					 {return float_const;}	
"'"."'"																							 {return char_const;}
[a-zA-z_][a-zA-z_0-9]*			 																 {return id;}
\"(\\.|[^\"])*\"																				 {return string;}
"//"(\\.|[^\n])*[\n]																						;
[/][*]([^*]|[*]*[^*/])*[*]+[/]                                                                              ;
[ \t\n]																										;
%%

int yywrap(void)
{
    return 1;
}