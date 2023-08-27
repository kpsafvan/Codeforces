#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,t,j,k;
   	cin>>t;
	for(i =0;i<t;i++)
	{
		int u,r,l,d,n;
		cin>>n>>u>>r>>d>>l;
		if(u==n||d==n)
		{
			if((l<min(n+1,2))||(r<min(n+1,2)))
			{
				cout<<"NO\n";
				continue;
			}
		}
		if(r==n||l==n)
		{
			if((d<min(n+1,2))||(u<min(n+1,2)))
			{
				cout<<"NO\n";
				continue;
			}
		}
		if(u==n&&d==n)
		{
			if((l<=min(n,2))&&(r<=min(n,2)))
			{
				cout<<"NO\n";
				continue;
			}
		}
		if(l==n&&r==n)
		{
			if((u<=min(n,2))&&(d<=min(n,2)))
			{
				cout<<"NO\n";
				continue;
			}
		}
		if(r==n-1||l==n)
		{
			if((d<min(n+1,2))||(u<min(n+1,2)))
			{
				cout<<"NO\n";
				continue;
			}
		}
		cout<<"YES\n";
	
	}	
}