#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    int i,t;
   	cin>>t;
   	int n,k,m;
	for(i =0;i<t;i++)
	{
			cin>>n>>m;
			char ch;
			int a[n+1][m+1];
			for(int y=1;y<=n;y++)
			{
				for(k=1;k<=m;k++)
				{
					cin>>ch;
					if(ch=='0')
					a[y][k]=0;
					else
					a[y][k]=1;
				}
			}
			for(int y=1;y<=n;y++)
			{
				for(k=1;k<=m;k++)
				{
					if(a[y][k]==1)
					{				
						cout<<y<<" "<<k<<" "<<y+1<<" "<<k<<" "<<y+1<<" "<<k+1<<"\n";
						a[y][k]=0;
						if(a[y+1][k]==1)
						a[y+1][k]=0;
						else
						a[y+1][k]=1;
						if(a[y+1][k+1]==1)
						a[y+1][k+1]=0;
						else
						a[y+1][k+1]=1;
					}
				}
			}
			
	}
			
}	