%option yylineno

%{
	#include<stdio.h>
	#include"y.tab.h"
	#include<math.h>
	extern int yyerror(const char *);
%}
%%
"string"|"int"|"float32"|"bool"|"rune"|"int8"|"int16"|"int64"|"uint8"|"uint16"|"uint32"|"uint64"|"uint"|"byte"|"uintptr"|"float64"|"complex64"|"complex128"|"uintptr"				 {printf("Vtype ");return VTYPE;}	
"func"																							 {printf("func "); return FUNC;}
"const"         																				 {printf("const "); return CONST;}
"case"																							 {printf("case "); return CASE;}
"chan"																							 {printf("chan "); return CHAN;}
"defer"																							 {printf("defer "); return DEFER;}		
"go"																							 {printf("go "); return GO;}	
"interface"																						 {printf("interface "); return INTERFACE;}			
"default"																						 {printf("default "); return DEFAULT;}
"import"                                                                                         {printf("import "); return IMPORT;}
"var"                                                                                            {printf("var "); return VAR;}
"range"                                                                                          {printf("range "); return RANGE;}
"map"                                                                                            {printf("map "); return MAP;}
"package"                                                                                        {printf("package "); return PACKAGE;}
"if"																							 {printf("if ");return IF;}
"select"																						 {printf("select ");return SELECT;}
"switch"																						 {printf("switch "); return SWITCH;}
"fallthrough"                                                                                    {printf("fallthrough "); return FALLTHROUGH;}
"else"																							 {printf("else "); return ELSE;}
"type"                                                                                           {printf("type "); return TYPE;}
"for"																							 {printf("for "); return FOR;}
"goto"																							 {printf("goto "); return GOTO;}
"continue"																						 {printf("continue "); return CONTINUE;}
"break"																							 {printf("break "); return BREAK;}
"struct"|"union"																				 {printf("struct_const"); return struct_const;}
"return"																						 {printf("return"); return RETURN;}
"||" 																							 {printf("||"); return or_const;}
":=" 																							 {printf(":="); return short_dec;}
"&&"																							 {printf("&&"); return and_const;}
"..."																							 {printf("..."); return param_const;}
"=="|"!="																						 {printf("eq_const"); return eq_const;}
"<="|">="																						 {printf("rel_const"); return rel_const;}
">>"|"<<"																						 {printf("shift_const"); return shift_const;}
"++"|"--"																						 {printf("inc_const"); return inc_const;}
"<-"																							 {printf("<-"); return point_const;}
";"|"="|","|"{"|"}"|"("|")"|"["|"]"|"*"|"+"|"-"|"/"|"?"|":"|"&"|"|"|"^"|"!"|"~"|"%"|"<"|">"		 {printf("%c",yytext[0]);return yytext[0];}
"*="|"/="|"+="|"%="|">>="|"-="|"<<="|"&="|"^="|"|="|"&^"|"&^="									 {printf("punc"); return punc;}
[0-9]+																							 {printf("int"); return int_const;}
[0-9]+"."[0-9]+																					 {printf("float"); return float_const;}	
"'"."'"																							 {printf("\' ");return char_const;}
[a-zA-z_][a-zA-z_0-9]*			 																 {printf("id ");return id;}
\"(\\.|[^\"])*\"																				 {printf("String ");return string;}
"." {printf("DOT ");}
"//"(\\.|[^\n])*[\n]																						;
[/][*]([^*]|[*]*[^*/])*[*]+[/]                                                                              ;
[ \t\n]																										;
%%

int yywrap(void)
{
    return 1;
}