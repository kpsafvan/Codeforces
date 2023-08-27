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
		int a[2*n];
		for(j=0;j<2*n;j++)
		{
			cin>>a[j];
		}
		sort(a,a+2*n);
			
		for(j=0;j<2*n;j++)
		{
			if((a[j%(2*n)]+a[(j+2)%(2*n)])/2==a[(j+1)%(2*n)])
			{
				int temp =a[(j+1)%(2*n)];
				a[(j+1)%(2*n)]=a[j%(2*n)];
				a[j%(2*n)]=temp;
			}	
		}
	
		for(j=0;j<2*n;j++)
		{
			cout<<a[j]<<" ";
		}
		cout<<"\n";
	}	
}