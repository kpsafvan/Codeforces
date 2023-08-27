#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,t,j;
   	cin>>t;
   	int n;
	for(i =0;i<t;i++)
	{
		int x ,y;
		cin>>x>>y;
		string a;
		cin>>a;
		//int e=strlen(a);
		int u=0,d=0,r=0,l=0;
		for(j=0;j<a.size();j++)
		{
			if(a[j]=='U')
			u++;
			else if(a[j]=='D')
			d++;
			else if(a[j]=='R')
			r++;
			else
			l++;
		}
		int flag=1;
		if(x>0)
		{
			if(x>r)
			flag=0;
		}
		else
		{
			if(-x>l)
			flag=0;
		}
		if(y>0)
		{
			if(y>u)
			flag=0;
		}
		else
		{
			if(-y>d)
			flag=0;
		}
		if(flag)
		cout<<"YES\n";
		else
		cout<<"NO\n";
		
	
	}
}	