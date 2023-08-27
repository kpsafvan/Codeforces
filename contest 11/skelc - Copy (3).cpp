#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std; 
int main()
{
    int i,t,n,k,j;
   	cin>>t;
	char ch;
	char a[200][200];
	for(i =0;i<t;i++)
	{
			cin>>n;
			for(k=0;k<n;k++)
			{
				for(j=0;j<n;j++)
				{
					cin>>a[k][j];
				}
			}
			for(k=0;k<n;k++)
				{
					for(j=0;j<n;j++)
						{
							cout<<a[k][j]<<"  ";
						}
					cout<<"\n";
				}	
				
	}
}	