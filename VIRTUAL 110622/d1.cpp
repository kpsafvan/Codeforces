#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,t,j,k;
	int n;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n>>k;
   		char a[n];
   		for(j=0;j<n;j++)
   		cin>>a[j];
   		int count,min=1000000000;
   		for(j=0;j<n;j++)
   		{
   			
   			if(j<=n-k)
   			{
   				count=0;
   				for(int l=j;l<j+k;l++)
   				{
   					if(a[l]=='W')
   					count++;
   					//coutMM
   				}
   				if(count<min)
   				min=count;
   			}
   		}
   		cout<<min<<"\n";
   		
	}
}	