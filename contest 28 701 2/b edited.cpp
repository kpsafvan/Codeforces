#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,t,j;	
	int n,q,k,x,y;
	cin>>n>>q>>k;
	int a[n];
	for(j=0;j<n;j++)
	cin>>a[j];
	for(j=0;j<q;j++)
	{
		int l,r,s=0;
		cin>>l>>r;
		l--;
		r--;
		s+=a[l+1]-2;
		if(r-l>1)
		{
			for(i=l+1;i<r;i++)
			{
				s+=a[i+1]-a[i-1]-2;
			}
		}
		s+=k-a[r-1]-1;
		cout<<s<<"\n";		
	}
}	