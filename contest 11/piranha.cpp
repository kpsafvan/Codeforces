#include<iostream>
#include<string.h>
using namespace std; 
int calc(int b[],int k,int size)
{
	
	int flag=1,eat=0,f=size,d=k,check=b[k]+(size-1);
	while(flag)
	{
		if(k==0)
		{
			if(b[k+1]<b[k])
			{
				size--;
				b[k]++;
				if(b[k]==check)
				return 0;
				//cout<<b[k]<<" ";
				for(int y=k+1;y<size;y++)
				{
					b[y]=b[y+1];
				}
			}	
			else
			{
				return -1;
			}
		}
		else if(k==(size-1))
		{
			if(b[k-1]<b[k])
			{
				
				size--;
				b[k]++;
				//cout<<b[k]<<" ";
				if(b[k]==check)
				return 0;
				for(int y=k-1;y<size;y++)
				{
					b[y]=b[y+1];
				}
				k--;
		
			}	
			else
			{
				return -1;
			}
			
		}
		else
		{
			if(b[k+1]<b[k])
			{
				//cout<<b[k]<<" ";
				size--;
				b[k]++;
				if(b[k]==check)
				return 0;
				for(int y=k+1;y<size;y++)
				{
					b[y]=b[y+1];
				}
			}
			else if(b[k-1]<b[k])
			{
				//cout<<b[k]<<" ";
				size--;
				b[k]++;
				if(b[k]==check)
				return 0;
				for(int y=k-1;y<size;y++)
				{
					b[y]=b[y+1];
				}
				k--;
	
			}
			else
			{
				return -1;
			}
			
		}	
		if(b[d]==check)
		return 0;
		//cout<<eat<<" ";
	}
	
}
int main()
{
    int i,t,n,k;
   	cin>>t;
   	
	for(i =0;i<t;i++)
	{
			int flag2=2;
			cin>>n;
			int a[n];
			for(k=0;k<n;k++)
			{
				cin>>a[k];
			}
			int o;
			for(k=0;k<n;k++)
			{
				o=calc(a,k,n);
				if(o==0)
				{
				cout<<k+1<<"\n";
				flag2=1;
				break;
				}
				else if(o==-1)
				{
					flag2=0;
				}
				
			}
			if(flag2==0)
			cout<<"-1"<<"\n";
		//cout<<num<<"\n";	
	}
	return 0;
	
}
	