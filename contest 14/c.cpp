#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    int i,t;
   	cin>>t;
   	long long a,b,c,d;

	for(int k =0;k<t;k++)
	{
		cin>>a>>b>>c>>d;
		if(a-d>=c-b)
		cout<<a+b<<"\n";
		else
		cout<<c+d<<"\n";
		
	}
}	