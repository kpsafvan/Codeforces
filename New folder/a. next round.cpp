#include<iostream>
using namespace std; 
int main()
{
	int n,k,s;
	cin>>n>>k;
	int a[n],count=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	s=a[k-1];
	for(int j =0;j<n;j++)
	{
		if((a[j]>=s)&&(a[j]>0))
		count++;	
		else
		break;
	}
	cout<<count;
}	