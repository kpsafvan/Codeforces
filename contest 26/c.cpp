#include<iostream>
#include<string.h>
#include<algorithm>
#include<cmath>
using namespace std; 
int main()
{
    int i,t,m;
   	cin>>t;
    int k,j,n;
	for(i =0;i<t;i++)
	{
		cin>>n>>m;	
		int a[n],b[m];
		for(j=0;j<n;j++)
		{
			cin>>a[j];
		}
		for(j=0;j<m;j++)
		{
			cin>>b[j];
		}
		int p=0,cost=0;
		sort(a,a+n);
		sort(b,b+m);
		for(j=0;j<n;j++)
		{
		//	if(a[j]<b[p])
			//{
		//		cost+=a[j];
			//}
			//else
			//{
				for(int y=p;y<m;y++)
				{
					if(a[j]<=b[y])
					{
						cost+=b[y];
						for(int u=y;u<m-1;u++)
						b[u]=b[u+1];
						m--;
					}
				}

		//	}
			
		}cout<<cost<<"\n";		
	}
}	
