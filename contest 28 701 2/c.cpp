#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,t,j,r;
   	cin>>t>>r;
	for(i =1;i<=t;i++)
	{
		for(j=1;j<=r;j++)
		{
			if(i-j==1)
			continue;
			if((i/j)==(i%j))
			cout<<i<<" "<<j<<"\n";
		}
	}
	cout<<"as";	
}	