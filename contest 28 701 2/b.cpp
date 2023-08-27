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
		//cout<<a[r];
		/*if(l>0)
		s+=a[l]-a[l-1]-1;
		else*/
		s+=a[l]-1;
		s+=a[l+1]-a[l]-1;
	//	cout<<s;
		if(r-l>1)
		{//cout<<"AS";
			for(i=l+1;i<r;i++)
			{
				s+=a[i]-a[i-1]-1;
				s+=a[i+1]-a[i]-1;
			}
		}
		
		/*if(r+1<n)
		s+=a[r+1]-a[r]-1;
		else if(k>a[r])*/
		s+=(k-a[r]-1);
		//cout<<a[r]<<r<<a[r-1];
		s+=a[r]-a[r-1];
		cout<<s<<"\n";
		
	}
	
}	