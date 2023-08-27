#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    int i,t,k;
   	cin>>t;
   	long n,m;
	for(i =0;i<t;i++)
	{
			int flag=0;
			cin>>n>>m;
			int a[n][4];
			for(k=0;k<n;k++)
			{	
				cin>>a[k][0]>>a[k][1]>>a[k][2]>>a[k][3];
				if((a[k][0]==a[k][3])&&(a[k][1]==a[k][2]))
				flag=2;				
			}	
			if((flag==2)&&(m%2==0)&&(m>=n))
			cout<<"YES\n";
			else
			cout<<"NO\n";
	}
}	