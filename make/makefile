all: clear bison flex

bison:
	win_bison.exe -d -y ..\main\golang.y

flex:
	win_flex.exe ..\main\golang.l
	gcc y.tab.c lex.yy.c -o ..\golang -lm
clear:
	del ..\golang.exe
	del y.tab.c
	del y.tab.h
	del lex.yy.c