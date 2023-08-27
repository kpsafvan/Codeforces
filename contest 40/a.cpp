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
		int a=n,b[10],c=0;
		while(a)
		{
			b[c]=a%10;
			a=a/10;
			c++;
		}
		int sum=0;
		for(j=0;j<c;j++)
		{
			if(b[j]>0)
			{
				sum=sum+b[j];
				for(int y=j+1;y<c;y++)
				{
					if(b[y]>b[j])
					{
						b[y]=b[y]-b[j];
					}
					else
					{
						b[y]=0;
					}
				}
			}
		}
		cout<<sum<<"\n";
	}		
}