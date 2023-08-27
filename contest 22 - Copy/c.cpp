#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    int i,t;
   	cin>>t;
    int k,j,n,m;
	for(j =0;j<t;j++)
	{
		cin>>n>>m;
		int x[m],y[m];
		for(i=0;i<m;i++)
		cin>>x[i]>>y[i];
		int num=0;
		for(i=0;i<m;i++)	
		{
			if(x[i]!=y[i])
			num++;
			
		}
		cout<<num<<"\n";
	}
}	
