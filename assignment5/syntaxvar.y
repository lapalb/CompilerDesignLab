%{
#include <stdio.h>
#include<stdlib.h>
extern int yylex();
extern void yyerror(char*);
%}
/* declare tokens */
%token ID COM EOL SPACE EL KW
%%
S: E EL EOL { printf(" \nThe given expression is correct. \n"); return 0;}
;
E: KW SPACE F
;
F: F COM F
|ID
;
%%
