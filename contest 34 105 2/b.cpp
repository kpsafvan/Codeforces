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
		if((u<n-2)&&(r<n-2)&&(l<n-2)&&(d<n-2))
		{
			cout<<"YES\n";
		}
		else
		{
			int ll=0,rr=0;
			if(u==n-1)
			{
				if(r>l)
				ll++;
				else
				rr++;
			}
			else if(u==n)
			{
				rr++;
				ll++;
			}
			if(d==n-1)
			{
				if(r>l)
				ll++;
				else
				rr++;
			}
			else if(d==n)
			{
				rr++;
				ll++;
			}
			if(r==n-1)
			{
				if(d>u)
				u++;
				else
				d++;
			}
			else if(r==n)
			{
				u++;
				d++;
			}
			if(l==n-1)
			{
				if(d>u)
				u++;
				else
				d++;
			}
			else if(l==n)
			{
				u++;
				d++;
			}
			r+=rr;
			l+=ll;
			if((r<=n)&&(l<=n)&&(d<=n)&&(u<=n))
			{
				cout<<"YES\n";
			}
			else
			cout<<"NO\n";
			
		}
	
	}	
}