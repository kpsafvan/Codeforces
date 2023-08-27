#include<iostream>
#include<math.h>
#include<algorithm>
#include <functional>
using namespace std; 
int main()
{
	
    int i,n,t,j;
    long long a[100000],count=0;
   	cin>>t;
 	long long m=-1000000000,d=0; 
   	for(i =0;i<t;i++)
	{
		cin>>n;
		count=0;
		for(j=0;j<n;j++)
		{
			cin>>a[j];
		}
		m=-1000000000;
		d=0;
		maxx();
		while(ac())
		{
			m=-1000000000;
			d=0;
			maxx();
			count++;
			a[d]=0;
		}
		cout<<"\n"<<n-count<<"\n";
		for(j=0;j<n;j++)
		{
			cout<<a[j]<<" ";
		}
	}	
	 std::function<void()> maxx = [&]()
	 {
		for(j=0;j<n;j++)
		{
			if(a[j]>m)
			{
				m=a[j];
				d=j;
			}
		}
	}
	 std::function<int()> ac = [&]()
	 {
		int f=0;
		for(int y=0;y<n-1;y++)
			{
				for(int u=y+1;u<n;u++)
					{
						if(abs(a[y]-a[u])<m)
						{
							f=1;
							break;
						}
					}
					if(f==1)
					break;
			}
		return f;
	}
}