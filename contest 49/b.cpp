#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main()
{
	int i,n,t,j,m,l;
   	cin>>t;
   	for(i=0;i<t;i++)
	{
		cin>>n;
		char a[n];
		for(j=0;j<n;j++)
		{
			cin>>a[j];
		}
		int sum=0;
		for(j=0;j<n;j++)
		{
			if(a[j]=='1')
			{
				int g=j;
				while(1)
				{
					if(a[++g]=='0')
					{
						sum++;
						break;
					}
					else
					break;
				}
			}
		}
		for(j=n-1;j>=0;j--)
		{
			if(a[j]=='1')
			{
				int g=j;
				while(1)
				{
					if(a[--g]=='0')
					{
						sum++;
					}
					else
					break;
				}
			}
		}
		
		cout<<sum+n<<"\n";
	}	
    
}