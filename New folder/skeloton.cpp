#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
   int n,i,d;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			d=(a[i]+2)/2;
		}
		else
		{
			d=(a[i]+1)/2;
		}
		cout<<d<<"\n";
	}
	
}	
