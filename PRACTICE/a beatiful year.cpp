#include<iostream>
#include<string.h>
#include<math.h>
using namespace std; 
int main()
{
    int i,t,j,k,n;
   	cin>>n;
   	int d[4];
   	while(n++)
   	{
   		int x=n,c=0;
		while(x)
		{
			d[c]=x%10;
			c++;
			x=x/10;
		}
		if((d[0]!=d[1])&&(d[0]!=d[1])&&(d[0]!=d[2])&&(d[0]!=d[3]))
		{
			if((d[1]!=d[2])&&(d[1]!=d[3]))
			{
				if((d[2]!=d[3]))
				{
					cout<<n;
					break;
				}	
			}
		}
	}
}	