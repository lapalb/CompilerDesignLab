#include <bits/stdc++.h>
using namespace std;

void keyw(char *p);
int i=0,id=0,kw=0,num=0,op=0;
char keys[32][10]={"auto","break","case","char","const","continue","default",
"do","double","else","enum","extern","float","for","goto",
"if","int","long","register","return","short","signed",
"sizeof","static","struct","switch","typedef","union",
"unsigned","void","volatile","while"};
int returncode(string s)
{
if (s=="begin")
return 1;
else if (s=="end")
return 2;
else if (s=="if")
return 3;
else if (s=="else")
return 4;
else if(s=="then")
return 5;
else if (s=="==" || s=="!="||s==">="||s=="<="||s=="<"||s==">")
return 8;
else{
char inputstr[50];
for (int i=0;i<s.length();i++)
inputstr[i]=s[i];
char nextSymbol,state[10]="START";
int i;
for(i=0;inputstr[i]!=NULL;i++)
    {
        nextSymbol = inputstr[i];

        if(strcmp(state,"INVALID")==0)
            break;

        //initially state of inputstr is in start.
        if(strcmp(state,"START")==0){
            if(isdigit(nextSymbol))
                strcpy(state,"INT");
            else if(isalpha(nextSymbol))
                strcpy(state,"ID");
            else if(nextSymbol=='.')
                strcpy(state,"S1");
            else
                strcpy(state,"INVALID");
        }
        else if(strcmp(state,"ID")==0){
            if(isdigit(nextSymbol))
                strcpy(state,"ID");
            else if(isalpha(nextSymbol))
                strcpy(state,"ID");
            else
                strcpy(state,"INVALID");
        }
        else if(strcmp(state,"INT")==0){
            if(isdigit(nextSymbol))
                strcpy(state,"INT");
            else if(nextSymbol=='.')
                strcpy(state,"REAL");
            else
                strcpy(state,"INVALID");
        }
        else if(strcmp(state,"REAL")==0){
            if(isdigit(nextSymbol))
                strcpy(state,"REAL");
            else
                strcpy(state,"INVALID");
        }
        else if(strcmp(state,"S1")==0){
            if(isdigit(nextSymbol))
                strcpy(state,"REAL");
            else
                strcpy(state,"INVALID");
        }
    }

    if(strcmp(state,"S1")==0 || strcmp(state,"INVALID")==0)
        return -1;
    else
      {if(strcmp(state,"REAL")==0 || strcmp(state,"INT")==0)
        return 7;
       if(strcmp(state,"ID")==0)
       return  6; 
      }
}
return -1;
}

int main()
{
	char ch,str[25],seps[]=" \t\n,;(){}[]#\"<>",oper[]="!%^&*-+=~|.<>/?";
	int j;
	char fname[50];
	FILE *f1;
	//clrscr();
printf("enter file path (drive:\\fold\\filename)\n");
scanf("%s",fname);
f1 = fopen(fname,"r");
//f1 = fopen("Input","r");
	if(f1==NULL)
	{
	 printf("file not found");
	 exit(0);
	}
	while((ch=fgetc(f1))!=EOF)
	{
for(j=0;j<=14;j++)
{
if(ch==oper[j])
{
printf("%c is an operator\n",ch);
printf("Code is 8\n");
op++;
str[i]='\0';
keyw(str);
}
}
for(j=0;j<=14;j++)
{
if(i==-1)
break;
if(ch==seps[j])
{
if(ch=='#')
{
while(ch!='>')
{
printf("%c",ch);
ch=fgetc(f1);
}
printf("%c is a header file\n",ch);
i=-1;
break;
}
if(ch=='"')
{
do
{
ch=fgetc(f1);
printf("%c",ch);
}while(ch!='"');
printf("\b is an argument\n");
i=-1;
break;
}
str[i]='\0';
keyw(str);
}
}
if(i!=-1)
{
str[i]=ch;
i++;
}
else
i=0;
	}
printf("Keywords: %d\nIdentifiers: %d\nOperators: %d\nNumbers: %d\n",kw,id,op,num);
//getch();
}
void keyw(char *p)
{
int k,flag=0;
for(k=0;k<=31;k++)
{
if(strcmp(keys[k],p)==0)
{
printf("%s is a keyword\n",p);

if (strcmp(p,"begin")==0)
printf("Code is 1\n");
else if (strcmp(p,"end")==0)
printf("Code is 2\n");
else if (strcmp(p,"if")==0)
printf("Code is 3\n");
else if (strcmp(p,"else")==0)
printf("Code is 4\n");
else if(strcmp(p,"then")==0)
printf("Code is 5\n");
kw++;
flag=1;
break;
}
}
if(flag==0)
{
if(isdigit(p[0]))
{
printf("%s is a number\n Code is 7 \n",p);
num++;
}
else
{
//if(p[0]!=13&&p[0]!=10)
if(p[0]!='\0')
{
//printf("%d",returncode(p));
printf("%s is an identifier\n Code is 6 \n ",p);
id++;
}
}
}
i=-1;
}

