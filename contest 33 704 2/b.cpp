#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,t,j,k;
   	cin>>t;
	for(i =0;i<t;i++)
	{
		int n;
		cin>>n;
		long long temp[n],c=0,b=0,a[n],s[n],flag=1;
		for(j=0;j<n;j++)
		{
			cin>>a[j];
		}
		for(j=n-1;j>0;j--)
		{
			if(a[j]>a[j-1])
			{
				if(flag)
				{	
					s[c]=a[j];
					c++;
				}
				else
				{
					int e=b;
					for(k=0;k<=e;k++)
					{
						b--;
						s[c]=temp[b];
						c++;
					}
					
				}flag=1;
			}
			else
			{
				temp[b]=a[j];
				b++;
				flag=0;
			}
		}
		for(j=0;j<=c;j++)
		{
			cout<<s[j]<<" ";
		}	
		cout<<"\n";
	
		
	}	
}