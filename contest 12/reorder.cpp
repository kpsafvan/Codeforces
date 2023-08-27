#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    int i,t,k,j,n,m;
    cin>>t;
    while(t--)
    {
		cin>>n>>m;
		int a[n],sum=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			sum=sum+a[i];
		}
		if(sum==m)
		cout<<"YES"<<"\n";
		else
		cout<<"NO\n";
	}
}	
