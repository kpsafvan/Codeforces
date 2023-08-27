#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,t,j,k,l;
   	cin>>t;
   	int a,b,c;
	for(i =0;i<t;i++)
	{
		int n,m;
		cin>>n;
		int r[n];
		for( j=0;j<n;j++)
		cin>>r[j];
		cin>>m;
		int b[m];
		for(j=0;j<m;j++)
		cin>>b[j];
		int num=0,sum=0;
		for(j=0;j<n+1;j++)
		{
			for(k=0;k<m+1;k++)
			{
				for(int y=0;y<j;y++)
				sum+=r[y];
				for(int e=0;e<k;e++)
				sum+=b[e];
				
				if(sum>num)
				num=sum;
				sum=0;
			}
		}
	cout<<num<<"\n"	;
	}
}	