#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    int i,t;
   	cin>>t;
   	int n,k1,k2;
	for(i =0;i<t;i++)
	{
			cin>>n>>k1>>k2;
			int a[k1],b[k2];	
			for(int k=0;k<k1;k++)
			{
				cin>>a[k];
			}
			for(int k=0;k<k2;k++)
			{
				cin>>b[k];
			}
			int flag=0;
			for(int k=0;k<k1;k++)
			{
				if(a[k]==n)
				{
					flag=1;
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