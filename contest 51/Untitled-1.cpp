	/*for(i=0;i<m;i++)
		{
			f=0;
			for(int k=s;k<n;k++)
			{
				if(a[k]==b[i])
				{
					
					s=k+1;
					f=1;
					break;
				}
			
				
			}
			if(f==0)
			{
				break;
			}
		}*/
		
		
		
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
	//	cout<<a[1]<<b[1];
		for(i=m-1;i>0;i--)
		{
			
			if(a[n-s]==b[i])
			{
				//cout<<a[n-s]<<b[i]<<n-s<<i;
				
				f=1;
			//	cout<<s;
			}
			else
			{
				//cout<<a[n-s]<<b[i]<<s<<i;
				f=0;
				break;
			}
			s++;
		}
	/*		if(f==0)
		{
			cout<<"NO\n";
		}
		else
		{
			cout<<"YES\n";
		}*/
		
		for(i=0;i<=n-m;i++)
		{
		//	cout<<"m";
			if(f==0)
			break;
			if(a[i]==b[0])
			{
				f=1;
				//cout<<i;
				break;
			}
			if((i==n-m)&&(a[i]!=b[0]))
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