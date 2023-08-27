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
		long long n;
		cin>>n;
		long long g=std::cbrt(n);
		//cout<<g<<"\n";
		int flag=0;
		for(int j=0;j<g;j++)
		{
			for(int k=0;k<g;k++)
			{
				if((j*j*j)+(k*k*k)==n)
				{
					flag=1;
				}
			}
		}
		if(flag)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}	
}