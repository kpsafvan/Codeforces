#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    int i,t;
   	cin>>t;
   	long n[t],k[t],a[t][10000],j;
	for(i =0;i<t;i++)
	{
		cin>>n[i]>>k[i];
		for(j=0;j<n[i];j++)
		{
			cin>>a[i][j];	
		}
		int s=k[i],pos =0;
		for(j=0;j<n[i];j++)
		{
			if(a[i][j]<s)
			{
				//seconds=s;
				//secondpos=pos;
				s=a[i][j];
				pos=j;
			}
		}	
		long long num=0;
		for(j=0;j<n[i];j++)
		{
			if(pos!=j)
			num=num +((k[i]-a[i][j])/s);
		}
		cout<<num<<"\n";
	}
	
	
}	