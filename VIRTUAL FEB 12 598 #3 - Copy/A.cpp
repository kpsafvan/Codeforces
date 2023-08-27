#include<iostream>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std; 
int main()
{
    int i,t,j;
   	cin>>t;
	for(i =0;i<t;i++)
	{
		unsigned long long int a,b,n,s;
		cin>>a;
		
		b=tgamma(2*a+1)/2;
		b=b%1000000007;
		cout<<b<<"\n";
	}
}	