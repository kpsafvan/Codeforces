#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    int i,t;
   	cin>>t;
    int k,j,n;
	for(i =0;i<t;i++)
	{
		cin>>n;
		char ch;
		int a[n][n];
		for(k=0;k<n;k++)
		{
			for(j=0;j<n;j++)
			{
				cin>>ch;
				if(ch=='X')
				a[k][j]=1;
				else
				a[k][j]=0;
			}
		}
		for(k=0;k<n;k++)
		{
			for(j=0;j<n-2;j++)
			{
				if(a[k][j]==1&&a[k][j+1]==1&&a[k][j+2]==1)
				a[k][j+1]=2;
			}
		}
		for(k=0;k<n;k++)
		{
			for(j=0;j<n-2;j++)
			{
				if(a[j+1][k]==1&&a[j][k]==1&&a[j+2][k]==1)
				a[j+1][k]=2;
			}
		}
		for(k=0;k<n;k++)
		{
			for(j=0;j<n;j++)
			{
				if(a[k][j]==1)
				cout<<"X";
				else if(a[k][j]==0)
				cout<<".";
				else
				cout<<"O";
			}
			cout<<"\n";
		}
		
		
	}
}	
