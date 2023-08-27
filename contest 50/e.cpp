#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,n,t,j,s;
   	cin>>t;
   	for(i=0;i<t;i++)
	{
		cin>>n>>s;
		int arr[n],a[n],sum=0;
		for(j=0;j<n;j++)
		{
			cin>>a[j];
			if(a[j]==1)
			sum++;
			arr[j]=a[j];
		}
		int f=sum-s;
		for(j=0;j<n;j++)
		{
			arr[j]=a[j];
		}
		if(f<0)
		{
			cout<<"-1\n";
			continue;
		}
		if(f==0)
		{
			cout<<"0\n";
			continue;
		}
		while(f)
		{
			int l=0,r=n,lv,rv;
			for(int k=l;k<r;k++)
			{
				if(a[k]==1)
				{
					lv=k;
					break;
				}
			}
			for(int k=r-1;k>=l;k--)
			{
				if(a[k]==1)
				{
					rv=r-1-k;
					break;
				}
				
			}
			cout<<lv<<" "<<rv<<"\n";
			break;
		}
		
		
		//cout<<a[n/2]<<"\n";
	}	
}

