#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    int i,t;
   	cin>>t;
   	long long p,q;

	for(int k =0;k<t;k++)
	{
			cin>>p>>q;
			for(i=p;i>=0;i--)
			{
				if((i%p==0)&&(q%i!=0))
				{
					cout<<i<<"\n";
					break;
				}
			}
	}
}	