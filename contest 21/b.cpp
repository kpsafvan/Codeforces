#include<iostream>
#include<math.h>
using namespace std; 
int main()
{
    int i,t,k,n;
   	cin>>t;

	for(i =0;i<t;i++)
	{
		int c;
		cin>>n>>c;
		int x[n],y[n];
		for(k=0;k<n;k++)
		cin>>x[k]>>y[k];
		int flag=0;
		for(k=0;k<n;k++)
		{
			for(int j=0;j<n;j++)
			{
				if((abs(x[k]-x[j])+abs(y[k]-y[j]))<=c)
				{
					flag=0;
				}
				else
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			break;
		}
		if(flag)
		cout<<"-1\n";
		else
		cout<<"1\n";
	}
}	
