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
		long long a,b,n,s;
		cin>>a>>b>>n>>s;
	//	int e=33,r=7;
		//cout<<e%r<<r%e;
		if(((n*a)>=s-b)&&(s%n<=b))
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}	
}	