#include<iostream>
#include<math.h>
using namespace std; 
int main()
{
    int i,t;
   	cin>>t;
   	int n,k,p,x,y;
	for(i =0;i<t;i++)
	{
		cin>>n>>p>>k;	
		char a[n+1];
		for(int y=1;y<=n;y++)
		{
			cin>>a[y];
		}
		cin>>x>>y;
		int time=0; 
		int j=p,num=0;
		while(j<=n)
		{
			if(a[j]=='0')
			{
				time+=x;
			}
			j=j+k;
		}
		int m=(time/y)+1,s=0;
		for(int u =0;u<=m;u++)
		{			 
			j=p+s;
			num=0;
			while(j<=n)
			{
				if(a[j]=='0')
				{
					num+=x;
				}
				j=j+k;
			}
			num+=(s*y);
			if(num<time)
			time=num;
			s++;
			
		}	
		cout<<time<<"\n";
	}
}	