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
		cin>>n;
		char a[n],b[n];
		for(j=0;j<n;j++)
		{
			cin>>a[j];	
		}
		for(j=0;j<n;j++)
		{
			cin>>b[j];	
		}
		//for(j=0;j<n;j++)
	//	{
			for(int k=0;k<n;k++)
			{
				if(k==0)
				{
					if(b[k]=='1')
					{
						if(a[k+1)
					}
				}
				if(k>0&&k<n-1)
				{
					if(b[k]=='1')
					{
						if(a[k-1]=='1')
						{
							count++;
						}
						else if(a[k]=='0')
						{
							count++;
							a[k]='1';						
						}
						else if(a[k+1]=='1')
						{
							count++;
						}
					}
				}
				
			}
	//	}
	}	
}