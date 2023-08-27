#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,t,j,r;
   	cin>>t;
	for(i =0;i<t;i++)
	{
		int n;
		cin>>n;
		int a[n];
		for(j=0;j<n;j++)
		{
			cin>>a[j];
		}
		sort(a,a+n);
		int min=1000000;
		for(j=0;j<n-1;j++)
		{
			if(a[j+1]-a[j]<min)
			min=a[j+1]-a[j];
		}
		cout<<min<<"\n";
	}
}	