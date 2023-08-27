#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,n,t,j;
   	cin>>t;
   	for(i=0;i<t;i++)
	{
		cin>>n;
		for(j=2;j<100;j++)
		{
			for(int k=j+1;k<102;k++)
			{
				if(n%j==n%k)
				{
					cout<<j<<" "<<k<<"\n";
					n=0;
					break;
				}
			}
			if(n==0)
			break;
		}
	}	
}