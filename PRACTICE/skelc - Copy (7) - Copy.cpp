#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    int i,t,k;
   	cin>>t;
   	int n[t][t];
   	char a;
	for(i =0;i<t;i++)
	{
		for(k=0;k<t;k++)
			{
				cin>>a;
				if(a==".")
				n[i][k]=0;
				else
				n[i][k]=1;
			}	
	}
	for(i =0;i<t;i++)
	{
		for(k=0;k<t;k++)
			{
				cout<<n[i][k]<<" ";
			}	
		cout<<"\n";	
	}
}	