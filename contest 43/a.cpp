#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,n,t,j,m;
   	cin>>t;
   	for(i=0;i<t;i++)
	{
		cin>>n;
		char a[n];
		for(j=0;j<n;j++)
		{
			cin>>a[j];	
		}
		int num,max=0;
		for(int y=0;y<n-1;y++)
		{
			num=0;
			for(int u=y+1;u<n;u++)
			{
				
				if(int(a[y])<=int(a[u]))
				{
					num++;
					//cout<<int(a[y])<<a[y];
				}
			}
			//num=n-num;
			if(num>max)
			max=num;
		}
		cout<<n-max<<"\n";
	}		
}