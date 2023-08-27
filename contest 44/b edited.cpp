#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,n,t,j;
   	cin>>t;
   	for(i=0;i<t;i++)
	{
		cin>>n;
		int a[2*n];
		for(j=0;j<2*n;j++)
		{
			cin>>a[j];
		}
		
	}	
}



	for(int y=0;y<m;y++)
		{
			if(a[n]+a[2]==1)
			{
				a[1]=1;
			}
			for(j=2;j<n;j++)
			{
				if(a[j]=1)
				continue;
				if(a[j-1]+a[j+1]==1)
				{
					a[j]=1;
				}
			}
			if(a[n-1]+a[1]==1)
			{
				a[n]=1;
			}
		}
		
		
			
			/*
			if(a[n-1]==1||a[1]==1)
			{
				a[n]=1;
			}*/