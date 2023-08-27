#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,t;
   	cin>>t;
   	int a;
	for(i =0;i<t;i++)
	{
		cin>>a;
		char n[a];
		for(int y=0;y<a;y++)
		{
			cin>>n[y];
		}
		int num=0;

		for(int y=a-1;y>=0;y--)
		{
			if(n[y]==')')
			num++;
			else
			break;
		}
		if(2*num>a)
		cout<<"Yes\n";
		else
		cout<<"No\n";
		
	}
}	