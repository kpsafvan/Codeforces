#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    int i,t,j,k,n;
   	cin>>t;
    while(t--)
    {
    	cin>>n;
    	int flag=1;
    	for(i=0;i<=n/3;i++)
    	{
    		for(k=0;k<=n/5;k++)
    		{
    			for(j=0;j<=n/7;j++)
    			{
    				if(((3*i)+(5*k)+(7*j))==n)
    				{
    					cout<<i<<" "<<k<<" "<<j<<"\n";
    					flag=0;
    					k=n;
    					i=n;
    					break;
    				}
    			}
    		}
    	}
    	if(flag)
    	cout<<"-1\n";
    }
}	