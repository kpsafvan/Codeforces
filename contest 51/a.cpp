#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main()
{
	
	/*ios_base::sync_with_stdio(false);
    cin.tie(NULL);*/
    int i,n,t,j,m,l;
   	cin>>t;
   	for(j=0;j<t;j++)
	{
		cin>>n>>m;
		char a[n],b[m];
		int s=1,f=0;
		for(i=0;i<n;i++)
		{
		cin>>a[i];
		}
		for(i=0;i<m;i++)
		{
		cin>>b[i];
		}
		for(i=m-1;i>0;i--)
		{
			
			if(a[n-s]==b[i])
			{
				f=1;
			}
			else
			{
				f=0;
				break;
			}
			s++;
		}
		for(i=0;i<=n-m;i++)
		{
			if(f==0)
			break;
			if(a[i]==b[0])
			{
				f=1;
				break;
			}
			else if(i==n-m)
			{
				f=0;
			}
		}
		if(f==0)
		{
			cout<<"NO\n";
		}
		else
		{
			cout<<"YES\n";
		}
	}	
}