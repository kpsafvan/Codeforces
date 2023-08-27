#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    long long  j,x,v,n,s,t;
   	cin>>t;
   	for(int i=0;i<t;i++)
   	{
   		cin>>x>>n;
   		long long num=n%4;
   		for(j=n-num+1;j<=n;j++)
   		{
   			if(x%2!=0)
   			{
   				x+=j; 
   				//cout<<"a";
   			}
   			else
   			{
   				//cout<<"b";
   				x-=j;
   			}
   		//	cout<<x <<" "<<j<<"\n";
   		}	
   		cout<<x<<"\n";
   	}
   
}	