#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    int i,t;
    char a[100000],b[1000000];
   	gets(a);
   	puts(a);
   	int k=0;
	for(i=strlen(a)-1;i>0;i--)
	{
		b[k]=a[i];
		k++;
	}
	strcat(b,a);
	puts(b);
}	