#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    int a,b;
	cin>>a>>b;
	int flag=1;
	int c=a,num=1;
	while(flag)
	{
		if((a%10==0)||(a%10==b))
		{
			cout<<num;
			flag=0;
		}
		num++;
		a=a+c;
	}
			
	
}	