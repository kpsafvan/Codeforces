#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
   int a,b,c,num=0;
	cin>>a>>b>>c;
		if((a+(b*c))>=num)
		{
			num=a+(b*c);
		}
		if((a+(b+c))>=num)
		{
			num=a+(b+c);
		}
		if((a*(b*c))>=num)
		{
			num=a*(b*c);
		}
		if(((a*b)+c)>=num)
		{
			num=(a*b)+c;
		}
		if((a*(b+c))>=num)
		{
			num=a*(b+c);
		}
		if(((a+b)*c)>=num)
		{
			num=(a+b)*c;
		}
cout<<num;

}	
