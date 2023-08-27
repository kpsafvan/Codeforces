#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,t,j,k;
   	cin>>t;
   	int n;
	for(i =0;i<t;i++)
	{
		cin>>n>>k;
		int a[n];
		for(j=0;j<n;j++)
		cin>>a[j];	
		int s=k,flag=1,c=0;
		while(s--)
		{
			c=0;
			while(flag)
			{
				if(c+1>=n)
				{
					c=-1;
					break;
				}
				 if(a[c]<a[c+1])
				{
					a[c]=a[c]+1;
					break;
				}
				c++;
				
			}
			if(c==-1)
			break;
		}	
		if(c>=0)
		c++;
		cout<<c<<"\n";
	}
}	