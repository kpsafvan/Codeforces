#include<iostream>
#include<math.h>
using namespace std; 
int main()
{
    int i,t,n,m;
   	cin>>t;
	for(i =0;i<t;i++)
	{
			cin>>n>>m;
			int a[n][m];
			long long sum=0;
			int flag=1,flag1=0,small=111;
			for(int y=0;y<n;y++)
			{
				for(int k=0;k<m;k++)
				{
					cin>>a[y][k];
					if(a[y][k]!=0)
					{
						if(a[y][k]<0)
						flag=flag*(-1);
					}
					if(a[y][k]==0)
					flag1=1;
					if(small>abs(a[y][k]))
					small=abs(a[y][k]);
					sum+=abs(a[y][k]);
				}	
			}
			//			cout<<flag1<<"\n";
		//	cout<<flag<<"\n";

			if(flag1)
			{
				cout<<sum<<"\n";
			}
			else if(flag>0)
			{
				cout<<sum<<"\n";
			}
			else
			cout<<sum-abs(2*small)<<"\n";
			
			
	}
}	