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
			int s=x^y;
			cout<<s<<"\n";
	}
}	