#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,n,t,j,m;
   	cin>>t;
   	for(i=0;i<t;i++)
	{
		cin>>n>>m;
		char a[n],b[n];
		for(j=0;j<n;j++)
		{
			cin>>a[j];
		}
		for(j=0;j<n;j++)
			{
				b[j]='0';
			}
		if(a[n-1]=='1')
			{
				b[0]='1';
			}
		if(a[n-2]=='1')
			{
				b[n-1]='1';
			}
		for(int y=0;y<m;y++)
		{
			/*for(j=0;j<n;j++)
			{
				cout<<a[j];
			}
			cout<<"\n";*/
			
			for(j=1;j<n-1;j++)
			{
				if(a[j]=='1')
				continue;
				if((a[j-1]=='1')&&(a[j+1]=='0')||(a[j-1]=='0')&&(a[j+1]=='1'))
				{
					b[j]='1';
				}
			}
			for(j=0;j<n;j++)
			{
				if(b[j]=='1')
				{
					a[j]='1';
				}
			}	
			for(j=0;j<n;j++)
			{
				b[j]='0';
			}
		}
		for(j=0;j<n;j++)
		{
			cout<<a[j];
		}
		cout<<"\n";
	}	
}