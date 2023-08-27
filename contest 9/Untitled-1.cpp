#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
	char s[10000];
    int i,t,n,k;
   	cin>>t;
   	//long x[t],y[t],k[t];
	for(i =0;i<t;i++)
	{
		int count=0;
		cin>>n;
		for(k =0;k<n;k++)
		cin>>s[k];	
		//puts(s);
		for(k=0;k<n;k++)
		{
			int d=k;
			if(k==0)
			{
				if((s[k]=='-')||(s[n-1]=='-'))
				{
					count++;
					continue;
				}
			}
			if((s[k]=='-')||(s[k-1]=='-'))
			{
				count++;
				continue;
			}
			else if(s[k]=='>')
			{
				int f=0;
				//if(s[k+1]=='>')||(s[k+1]=='-')
				for(int y=0;y<n;y++)
				{
					
					d=(d+1)%n;
					if(d==k)
					{
						count++;
						break;
					}	
					if(s[d]=='<')
					{
						break;
					}
				}
			}
			else if(s[k]=='<')
			{
				int f=0;
				//if(s[k+1]=='>')||(s[k+1]=='-')
				for(int y=0;y<n;y++)
				{
					
					d=((d+1)%n)-2;
					if(d==k)
					{
						count++;
						break;

					}	
					if(s[d]=='>')
					{
						break;
					}
				}
			}
		}
		cout<<count<<"\n";		
	}
}	