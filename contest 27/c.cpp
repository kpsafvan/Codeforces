#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,t,j,k;
   	cin>>t;
   	int n,m;
	for(i =0;i<t;i++)
	{
		cin>>n>>m;
		int a[n],b[n],c[m],ind[m];
		for(j=0;j<n;j++)
		cin>>a[j];
		for(j=0;j<n;j++)
		cin>>b[j];
		for(j=0;j<m;j++)
		cin>>c[j];
		for(j=0;j<m;j++)
		ind[j]=0;
		for(j=0;j<m;j++)
		{
			for(k=0;k<n;k++)
			{
				if(a[k]==b[k])
				continue;
				else
				{
					if(c[j]==b[k])
					{
						ind[j]=k+1;
						a[k]=b[k];
						break;
					}
				}
				
			}
		}
		for(j=0;j<m;j++)
		{
			if(ind[j]==0)
			{
				for(k=0;k<n;k++)
				{
					if(c[j]==b[k])
					{
						ind[j]=k+1;
						break;
					}
				}
						
			}
		
		}
		
		for(j=0;j<m;j++)
		cout<<ind[j]<<" ";
		cout<<"\n";
	}
}	