#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    int i,n,v;
   	cin>>n>>v;
   	int j,l=0,m,a[50],size=0;
   	
   	for(i=0;i<n;i++)
   	{
   		cin>>m;
   		int k[m];
   		int flag=1;
   		for(j=0;j<m;j++)
   		{
   			cin>>k[j];
   			if(k[j]<v)
   			flag=0;
   		}
   		if(flag==0)
   		{
   			a[size]=i+1;
   			size++;
   		}
   		else
   		l++;
   		
   	}
   	if(l==n)
   	cout<<"0";
   	else
   	{
   		cout<<size<<"\n";
   		for(i=0;i<size;i++)
   		cout<<a[i]<<" ";
   	}
}	