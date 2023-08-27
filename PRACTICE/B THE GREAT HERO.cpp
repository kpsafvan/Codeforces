#include<iostream>
#include<string.h>
#include<cmath>
using namespace std; 
int main()
{
    int i,t,j,k;
   	cin>>t;
	for(i =0;i<t;i++)
	{
			int aa,bb,n;
			cin>>aa>>bb>>n;
			int a[n],b[n],s[n];
			for(j=0;j<n;j++)
			{
				cin>>a[j];
			}
			for(j=0;j<n;j++)
			{
				cin>>b[j];
				s[i]=(b[i]/aa)*a[i];
			}
			for(j=0;j<n;j++)
			{
				for(k=0;k<n-j-1;k++)
				{
					if((s[i]>s[i+1])||((s[i]==s[i+1])&&(a[i]>a[i+1])))
					{
						int temp;
						temp=s[i];s[i]=s[i+1];s[i+1]=temp;
						temp=a[i];a[i]=a[i+1];a[i+1]=temp;
						temp=b[i];b[i]=b[i+1];b[i+1]=temp;
					}

				}
			}
				for(j=0;j<n;j++)
			{
				cout<<a[j]<<" ";
				
				cout<<b[j]<<" ";
			}
			cout<<"\n";
	}
}	