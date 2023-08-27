#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,t;
   	cin>>t;
   	int n;
   	
	for(i =0;i<t;i++)
	{
		cin>>n;
		char a[n];
		
		for(int k=0;k<n;k++)
			{
				cin>>a[k];	
				
			}sort(a,a+n);
	
			for(int k=0;k<n;k++)
			{
				cout<<a[k];	
				
			}
			cout<<"\n";
	}
}	