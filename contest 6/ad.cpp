#include<iostream>
#include<string.h>
#include <bits/stdc++.h> 
using namespace std; 
int main()
{
	
    int i,t,k;
   	cin>>t;
   	int n[t],a[t][50000];
   	int flag=0;
	for(i =0;i<t;i++)
	{
			
			cin>>n[i];
			int b[n[i]];
			for(k=0;k<n[i];k++)
			{
				cin>>a[i][k];
				b[k]=a[i][k];
			}
							cout<<"sda";
			sort(b,b+n[i]);
			flag=0;
			for(k=0;k<n[i];k++)
			{

				if(a[i][k]!=b[n[i]-k-1])
				{
					cout<<"YES"<<"\n";
					flag=1;
					break;
				}
				if(b[0]==b[n[i]-1])
				{
					cout<<"YES"<<"\n";
					flag=1;
					break;
				}		
			}
			if(flag==0)
			cout<<"NO"<<"\n";	
			
			
	}
}