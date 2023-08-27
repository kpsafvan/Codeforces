#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,n,t,j;
   	cin>>t;
   	for(i=0;i<t;i++)
	{
		cin>>n;
		int a[n];
		for(j=0;j<n;j++)
		{
			cin>>a[j];
		}
		int small=101;		
		for(j=0;j<n;j++)
		{
			if(a[j]<small)
			{
				small=a[j];
			}
		}
		int count=0;
		for(j=0;j<n;j++)
		{
			if(a[j]>small)
			count++;
		}
		cout<<count<<"\n";
	}	
}