#include<iostream>
#include<math.h>
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
		long long a[n],s[j],flag=1;
		for(j=0;j<n;j++)
		{
			cin>>a[j];
		//	s+=a[j];
		}
		s[0]=a[0];	
		for(j=1;j<n;j++)
		{
			s[j]=s[j-1]+a[j];
		//	cout<<s[j]<<" ";
		}
		for(j=0;j<n;j++)
		{
			int k=j;
			
			if(s[j]<((k*(k+1))/2))
			{
				flag=0;
				break;
			}
		}
		if(flag)
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
		
	}	
}