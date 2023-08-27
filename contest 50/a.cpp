#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,n,t,j,m,l;
   	cin>>t;
   	for(j=0;j<t;j++)
	{
		cin>>n>>m;
		int a[n];
		char b[m];
		for(i=0;i<n;i++)
		cin>>a[i];
		for(i=0;i<m;i++)
		b[i]='B';
		for(i=0;i<n;i++)
		{
			if(a[i]-1<(m-a[i]+1))
			{
				if(b[a[i]-1]=='A')
				{
					b[(m-a[i])]='A';
					
				}
				b[a[i]-1]='A';
				//cout<<i<<"\n";
			}
			else
			{
				if(b[(m-a[i])]=='A')
				{
					b[a[i]-1]='A';
					
				}
				
				b[(m-a[i])]='A';
			}
		/*	for(l=0;l<m;l++)
			cout<<b[l];
			cout<<"\nz";*/
		}
		for(i=0;i<m;i++)
		cout<<b[i];
		cout<<"\n";
	}	
}