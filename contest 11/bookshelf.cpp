#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    int i,t,k,n;
   	cin>>t;
	for(i =0;i<t;i++)
	{
			cin>>n;
			int a[n],left,right;
			for(k=0;k<n;k++)
			{
				cin>>a[k];
			}
			for(k=0;k<n;k++)
			{
				if(a[k]==1)
				{
					left=k;
					break;
				}
			}
			for(k=n-1;k>=0;k--)
			{
				if(a[k]==1)
				{
					right=k;
					break;
				}
			}
			int count=0;
			for(int j=left+1;j<right;j++)
			{
				if(a[j]==0)
				count++;
			}
			
		cout<<count<<"\n";	
	}
}	