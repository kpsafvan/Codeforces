#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    char a[100000];
   	gets(a);
   	int flag=1;
   	for(int i=0;i<strlen(a);i++)
   	{
   		if(a[i]==a[strlen(a)-i-1])
   		continue;
   		else
   		{
   			flag=0;
   			break;
   		}
   	}
   	if(flag==1)
   	cout<<"0";
   	else 
	cout<<"1\n"<<"L "<<strlen(a);
}	