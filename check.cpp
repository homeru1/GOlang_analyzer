
	#include<stdio.h>
    #include <string>
    #include <iostream>
    using namespace std;
    int yylex(void);
	int yyerror(const char *s);
	int yyparse();
int main(int argc, char **argv)
{
    string a = "C:\\Users\\User\\Desktop\\go_compilers\\GOlang_analyzer\\golang.exe tests\\test";
    string b;
    for (int i = 1; i <= 35; i++) {
        b = a + to_string(i) + ".txt";
        cout << b << endl;
        system(b.c_str());
    }
   //a = "C:\\Users\\User\\Desktop\\go_compilers\\GOlang_analyzer\\golang.exe tests\\test1.txt";
   return 0;
}
