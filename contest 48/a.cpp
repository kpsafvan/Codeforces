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
		cin>>n>>m>>j>>l;
		int sum=0;
		if(n<m)
		sum++;
		if(n<j)
		sum++;
		if(n<l)
		sum++;
		cout<<sum<<"\n";
	}	
}