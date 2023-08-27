#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std; 
int main()
{
    int i,t,k;
   	cin>>t;
   	long long x,y,n;
	for(k =0;k<t;k++)
	{
			cin>>n>>x;
			int a[n],b[n];
			for(i=0;i<n;i++)
			cin>>a[i];
			for(i=0;i<n;i++)
			cin>>b[i];
			sort(b,b+n);
			sort(a,a+n);
			int flag=1;
			for(i=0;i<n;i++)
			{
				if(a[i]+b[n-i-1]>x)
				{
					flag=0;
					break;
				}

			}
			if(flag)
			cout<<"YES\n";
			else
			cout<<"NO\n";
			
			
				
			
	}
}	