#include<iostream>
#include<string.h>
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
		int a[n];
		for(j=0;j<n;j++)
		cin>>a[j];
		sort(a,a+n);
		int m=0;
		for(j=0;j<n-1;j++)
		{
			if(a[j]<a[j+1])
			{
				m=n-(j+1);
				break;
			}
		}
		cout<<m<<"\n";
	}	
}