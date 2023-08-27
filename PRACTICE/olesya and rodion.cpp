#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    int i,t,n;
   	cin>>n>>t;
   
   	if(t<10)
   	{	
	for(i =0;i<n;i++)
	{
			cout<<t;
			
	}
	}
	else if(t==10&&n>1)
	{
		for(i=0;i<n-1;i++)
		cout<<"1";
		cout<<"0";
	}
	else
	cout<<"-1";
}	