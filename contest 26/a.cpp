#include<iostream>
#include<string.h>
#include<algorithm>
#include<cmath>
using namespace std; 
int main()
{
    int i,t,x,j;
    long long n;
   	cin>>t;
   	for(i =0;i<t;i++)
	{
		cin>>n>>x;
		float a[n];double sum=0,num=0;
		for(j=0;j<n;j++)
		{
			cin>>a[j];
			sum+=a[j];
			num+=ceil(a[j]/x);
		}
	
		sum=ceil(sum/x);
		/*	for(j=0;j<n-1;j++)
		{
			if((a[j]%x>0&&a[j]%x<x/2)&&(a[j+1]%x>0&&a[j+1]%x<x/2))
			{
			sum++;	
			}
			

		}*/
		cout<<sum<<" "<<num<<"\n";
		
		
	}
}	