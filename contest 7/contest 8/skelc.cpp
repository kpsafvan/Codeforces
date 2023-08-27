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
			int a[4];
			for(k=0;k<n;k++)
			{
				
				cin>>a[0]>>a[1]>>a[2]>>a[3];
				if(a[0]==a[3])
				flag++;
				if(a[1]==a[2])
				flag++;
				
			}	
			if((flag>=2)&&(m%2==0))
			cout<<"YES\n";
			else
			cout<<"NO\n";
	}
}	