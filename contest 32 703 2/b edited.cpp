#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,t;
   	cin>>t;
	for(i =0;i<t;i++)
	{
		int j;
		int n,k;
		cin>>n>>k;
		int a,b;		
		j=((k)/n);
		b=(2*j+k)%n;
		if(b==0)
		b=n;
		cout<<b<<"\n";
	}	
}	
