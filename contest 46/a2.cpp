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
			b[j]='0';
		}
		for(j=0;j<n;j++)
		{
			if(a[j]=='1')
			{
				if(j-m>=0)
				{
					for(int y=j-1;y>=j-m;y--)
					{
						b[y]='1';
					}
				}
				else
				{
					for(int y=0;y<j;y++)
					{
						b[y]='1';
					}	
				}
				if(j+m<n)
				{
					for(int y=j+1;y<=j+m;y++)
					{
						b[y]='1';
					}
				}
				else
				{
					for(int y=j;y<n;y++)
					{
						b[y]='1';
					}	
				}
				
			}
		}
		for(j=0;j<n;j++)
		{
			cout<<b[j];
		}
		cout<<"\n";
	}	
}