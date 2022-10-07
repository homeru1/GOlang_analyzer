all: bison flex start

bison:
	win_bison.exe -d -y -v ..\main\golang.y

flex:
	win_flex.exe ..\main\golang.l
	gcc y.tab.c lex.yy.c -o ..\golang -lm
clear:
	del ../golang.exe
	del y.tab.c
	del y.tab.h
	del lex.yy.c
start:
	../golang.exe ../test.txt