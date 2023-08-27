#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,n,t,j,m,l;
   	cin>>t;
   	for(i=0;i<t;i++)
	{
		cin>>n>>m;
		while(m+n)
		{
			if(n)
			{
				n--;
				cout<<"0";
			}
			if(m)
			{
				m--;
				cout<<"1";
			}
			
		}
		cout<<"\n";
	}	
}