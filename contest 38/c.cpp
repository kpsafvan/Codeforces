#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,t,j;
	int n;
	cin>>n;
	int a[n];
	for(j=0;j<n;j++)
	{
		cin>>a[j];
	}
	long long h =0,num=0;
	for(j=0;j<n;j++)
	{
		if((a[j]+h)>=0)
		{
			h+=a[j];
			num++;
		}
	}
	cout<<num;
}
