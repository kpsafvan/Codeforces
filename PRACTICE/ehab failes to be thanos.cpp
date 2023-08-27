#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    int i,j,n;
	cin>>n;
	int a[2*n];
	for(i=0;i<2*n;i++)
	cin>>a[i];
	int flag=1;
	for(i=1;i<2*n;i++)
	{
		if(a[i]!=a[0])
		{
			flag=0;
			break;
		}
	}	
	if(flag==1)
	cout<<"-1";
	else
	{
		int sum1=0,sum2=0;
		for(i=0;i<n;i++)
		sum1+=a[i];
		for(i=n;i<2*n;i++)
		sum2+=a[i];
		if(sum1==sum2)
		{
			int g=1,r=0,l=n;
			while(g)
			{
				if(a[r]!=a[l])
				{
					int temp=a[r];
					a[r]=a[l];
					a[l]=temp;
					break;
				}
				else
				{
					if(l==((2*n)-1))
					{
						r++;
						l=n;
					}
					else
					l++;
				}
			}
		}
		for(i=0;i<2*n;i++)
			cout<<a[i]<<" ";	
	}
	
}	