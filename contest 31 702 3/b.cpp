#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,t,j;
   	cin>>t;
	for(i =0;i<t;i++)
	{
		int n;
		cin>>n;
		int a[n],q=0,w=0,e=0;
		for(j=0;j<n;j++)
		{
			cin>>a[j];
			if(a[j]%3==0)
			q++;
			else if(a[j]%3==1)
			w++;
			else
			e++;
		}
		int k=n/3,ans=0;
		if(q!=k)
		{
			if(q<k)
			{
				int s=k-q;
				ans+=s;
				
			}
		}
		int ans=abs(k-q)+abs(k-w)+abs(k-e);
		cout<<ans<<"\n";	
		
	}	
}