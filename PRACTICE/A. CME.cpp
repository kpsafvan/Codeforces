#include<iostream>
#include<string.h>
#include<cmath>
using namespace std; 
int main()
{
    int i,t,n;
   	cin>>t;
	for(i =0;i<t;i++)
	{
			cin>>n;
			if(n>=4)
			{
				if(n%2==0)
				cout<<"0\n";
				else
				cout<<"1\n";
			}
			else
			{
				cout<<4-n<<"\n";
			}
	}
}	