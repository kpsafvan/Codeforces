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
		int max=0,d;
		for(int y=0;y<n;y++)
		{
			if(abs(a[y])>max)
			{
				max=abs(a[y]);
				d=y;
			}
		}
		if()
	}	
}
