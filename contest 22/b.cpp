#include<iostream>
#include<math.h>
using namespace std; 
int main()
{
    int i,t,k,n;
   	cin>>t;
	for(i =0;i<t;i++)
	{
		int n;
		cin>>n;
		int a[n],sum=0;
		for(int y =0;y<n;y++)
		{
			cin>>a[y];
			sum+=a[y];
		}
		int x,small=1000000000;
		for(int y =0;y<n;y++)
		{
			if(a[y]<small)
			small=a[y];
		}
		x=sum/2-small+1;
		for(int y =0;y<n;y++)
		{
			cout<<x<<" ";
		}
		cout<<"\n";
		
	}
}	
