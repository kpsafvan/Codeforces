#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,t;
   	cin>>t;
   	int a,b,c;
	for(i =0;i<t;i++)
	{
		cin>>a>>b>>c;
		int x=a+b+c,flag=0;
		
		for(int y=0;y<x/7;y++)
		{
			if(((a-1)+(b-1)+(c-1)-(2*y))%6==0)
			{
				cout<<"YES\n";
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			cout<<"NO\n";
		}
		
	}
}	