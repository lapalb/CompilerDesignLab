#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[]="desik sucks at parsers";
	char *p=strtok(s," ");
	while(p!=NULL)
	{
		cout<<p<<"\t"<<*p<<endl;
		p=strtok(NULL," ");
	}
}
