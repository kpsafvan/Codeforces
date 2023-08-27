#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
   int a,b,c=0,d=0;
	cin>>a>>b;
	while(a!=0)
	{
		a--;
		c++;
		if(c==b)
		{
			a++;
			c=0;
		}
	d++;		
	}
	cout<<d;
}	
