#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    int i,t;
   	cin>>t;
   	int a;
	for(i =0;i<t;i++)
	{
			cin>>a;	
			cout<<a<<"\n";
			for(int y=1;y<=a;y++)
			cout<<y<<" ";
			cout<<"\n";
	}
}	