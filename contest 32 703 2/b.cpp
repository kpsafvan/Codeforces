#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,t,j;
   	cin>>t;
	for(i =0;i<t;i++)
	{
		int n;
		cin>>n;
		int x[n],y[n];
		for(j=0;j<n;j++)
		{
			cin>>x[j]>>y[j];
		}
		int sumx=0,sumy=0;
		for(j=0;j<n;j++)
		{
			sumx+=x[j];
			sumy+=y[j];
		}
		int posx=sumx/n,posy=sumy/n;
		cout<<posx<<" "<<posy<<"\n";
	}	
}