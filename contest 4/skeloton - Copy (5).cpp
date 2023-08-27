#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    int h,i,k,t; 
   	cin>>t;
   	int a[t][100],n[t];
	for(i =0;i<t;i++)
	{
		cin>>n[i];
		for(k=0;k<n[i];k++)
			cin>>a[i][k];	
	}
	for(i =0;i<t;i++)
	{
		for(h=0;h<n[i]-1;h++)
			{
				sum[h]=a[i][h]+a[i][h+1];
			}
		sort(sum,n[i]-1);
		for(h=0;h<n[i]-1;h++)
			{
				sum[h]=0;
			}
	}		
	
}