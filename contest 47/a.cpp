#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,n,t,j,m;
   	cin>>t;
   	for(i=0;i<t;i++)
	{
		cin>>n>>m;
		int a[n],sum=0;
		for(j=0;j<n;j++)
		{
			cin>>a[j];
			sum+=a[j];
		}
		if(sum>m)
		cout<<sum-m<<"\n";
		else
		cout<<"0\n";
	}	
}