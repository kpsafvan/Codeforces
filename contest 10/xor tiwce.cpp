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
			int z=1;
			for(int k =0;k<x*y+1;k=k+z)
			{
				if(k>32)
				z=32;
				
				if(((x^k)+(y^k))<small)
				{
					small=(x^k)+(y^k);
					//cout<<k<<" "<<"\n";
					//cout<<small<<"\n";
					
				}
			}
			int s=x^y;
			cout<<small<<" "<<s<<"\n";
	}
}	