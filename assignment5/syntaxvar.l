%{
#include<stdio.h>
#include "syntaxvar.tab.h"

%}
%%
"int" {printf("keyword\n"); return KW; }
"float" {printf("keyword\n"); return KW; }
"char" {printf("keyword\n"); return KW; }
[a-zA-Z][a-zA-Z0-9]* {printf("identifier\n"); return ID; }
"," { printf("separator\n"); return COM; }
";" {printf("separator\n"); return EL; }
" " {return SPACE;}
\n { return EOL; }
%%
int main(int argc, char **argv)
{
    yyparse();
return 0;
}
int yywrap(){};
void yyerror(const char *s) {

        

printf("\nError!! %s \n", s);
}
