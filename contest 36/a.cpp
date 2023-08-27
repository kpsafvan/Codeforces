#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,t,j;
   	cin>>t;
	for(i =0;i<t;i++)
	{
		int n,k1,k2,w,b;
		cin>>n>>k1>>k2>>w>>b;
		int x=abs(k2-k1);
		int y=min(k2,k1);
		if(((2*y)+x>=(2*w))&&((2*n-(2*y)+x)>=2*b))
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}/*
		if(x%2==0)
		{
			
		}
		else
		{
			
		}*/
	}	
}