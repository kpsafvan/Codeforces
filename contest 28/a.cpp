#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,t,j;
   	cin>>t;
	for(i =0;i<t;i++)
	{
		int a,b,n,s;
		cin>>a>>b>>n>>s;
		if(((n*a)+b>=s)&&(s%n<=b))
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}	
}	