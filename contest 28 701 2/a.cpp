#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,t,j;
   	cin>>t;
	for(i =0;i<t;i++)
	{
		long long flag=1,x,y,r=10000,n=0;
		cin>>x>>y;
		while(flag)
		{
			if(y==1)
			{
				y++;
				n++;
			}
			int s=x,d=n;
			while(s>0)
			{
				s=s/y;
				d++;
			}
			if(d<r)
			{
				r=d;
			}
			else
			{
				y++;
			    n++;
				d=n;s=x;
				
				while(s>0)
				{
					s=s/y;
					d++;
				}
				if(d<r)
				{
					r=d;
				}
				break;
			}
			y++;
			n++;
		}
		cout<<r<<"\n";
	}	
}	