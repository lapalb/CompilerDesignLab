%{
int one =0;
int zero =0;
%}

%%
"0" {zero++;}
"1" {one++;}

%%

main(int argc, char **argv)
{

yylex();
if(zero%2==1 && one%2==0)
{
printf("Accepted\n");
}
else 
{
printf("Not Accepted\n");
}
}
