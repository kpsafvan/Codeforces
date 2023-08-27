#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std; 
int main()
{
    int j;
   	
		int n;
		cin>>n;
		int a[n];
		for(j=0;j<n;j++)
		{
			cin>>a[j];
		}
		int s=0,q[n],w[n],x=0,y=0;
		while(s<n)
		{
			if(q[x]!=a[s])
			{
				x++;
				q[x]=a[s];
			}
			else if(w[y]!=a[s])
			{
				y++;
				w[y]=a[s];
			}
			s++;
		}
		cout<<x+y<<"\n";
		
}	