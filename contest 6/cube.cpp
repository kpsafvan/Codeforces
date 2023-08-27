#include<iostream>
#include<string.h>
#include <bits/stdc++.h> 
using namespace std; 
int main()
{
    long long i,t,k;
   	cin>>t;
   	long n[t],a[t][50000],b[t][50000];
   	//long long sot=0;
   	int flag=0;
	for(i =0;i<t;i++)
	{
			
			cin>>n[i];
			//long long b[t][n[i]];
			for(k=0;k<n[i];k++)
			{
				cin>>a[i][k];
				b[i][k]=a[i][k];
			}
			
			
	}
	for(i =0;i<t;i++)
	{
			sort(b[i],b[i]+n[i]);
			flag=0;
			for(k=0;k<n[i];k++)
			{
				if(a[i][k]!=b[i][n[i]-k-1])
				{
					cout<<"YES"<<"\n";
					flag=1;
					break;
				}
				if(b[i][0]==b[i][n[i]-1])
				{
					cout<<"YES"<<"\n";
					flag=1;
					break;
				}
				
			}
			if(flag==0)
			cout<<"NO"<<"\n";	
			
			
	}
	//cout<<a[1][4];
}	