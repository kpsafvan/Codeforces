#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,n,t,j,m;
   	cin>>t;
   	string a,b;
   	for(i=0;i<t;i++)
	{
		cin>>a>>b;
		int num,val;
		//val=min(a.size(),b.size());
		for(j=0;j<a.size();j++)
		{
			num=0;
			if(b[0]==a[j])
			{
				num++;
				for(int y=j+1;y<a.size();y++)
				{
					if(a[y]!=b[y-j])
					{
						val=y;
						break;
					}
					else
					{
						num++;
					}
				}
				int r=val++;
				for(int u=val-1;u>=0;u--)
				{
					if(a[u]!=b[r])
					{
						break;
					}
					else
					{
						num++;
					}
					r++;
				}
				if(num==b.size())
				break;
				
				
			}
			
			
		}
		if(num==b.size())
		cout<<"YES\n";
		else
		cout<<"NO\n";
		
	}		
}