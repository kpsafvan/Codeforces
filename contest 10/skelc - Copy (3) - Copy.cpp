#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    int i,t;
   	cin>>t;
   	int x,y;
	for(i =0;i<t;i++)
	{
			cin>>x>>y;
			int small=x*y;
			for(int k =0;k<x*y+1;k++)
			{
				if(((x^k)+(y^k))<small)
				{
					small=(x^k)+(y^k);
				}
			}
			cout<<small<<"\n";
	}
}	