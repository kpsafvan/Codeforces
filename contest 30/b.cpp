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
		int n,k;
		cin>>n>>k;
		int b=1,a=n,j=1;
		while(j<k)
		{
			j++;
			if(b==a)
			{
				cout<<"--";
				if(b<n)
				b++;
				else
				b=1;
			}
			b++;
			a--;
			if(b>n)
			b=1;
			if(a==0)
			a=n;
			cout<<a<<b<<"\n";
		}
			if(b==a)
			{
				
				if(b<n)
				b++;
				else
				b=1;
			}
		cout<<b<<"\n";
	}	
}	