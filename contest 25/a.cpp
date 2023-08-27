#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,t,w,h;
    long long n;
   	cin>>t;
   	for(i =0;i<t;i++)
	{
		cin>>w>>h>>n;
		long long p=w*h+1,count=1,num=1,flag=0;
		while(p>1)
		{
			if(num>=n)
			{
				flag=1;
				break;
			}
			if((w%2!=0)&&(h%2!=0))
			{
				break;
			}
			if(w%2==0)
			{
				num+=count;
				count*=2;
				w/=2;
			}
			if(h%2==0)
			{
				num+=count;
				count*=2;
				h/=2;
			}
			if(num>=n)
			{
				flag=1;
				break;
			}
			p=w*h;
			
		}
		if(flag)
		cout<<"YES\n";
		else
		cout<<"NO\n";
		
		
	}
}	