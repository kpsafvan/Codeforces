#include<iostream>
#include<algorithm>
using namespace std; 
int main()
{
    int i,t;
   	cin>>t;
   	int  n,k;
	for(i =0;i<t;i++)
	{
			cin>>n;
			int a[n];
			for(k=0;k<n;k++)
			cin>>a[k];
			sort(a,a+n);
			int flag=0;
			for(k =0;k<n;k++)
			{
				//cout<<a[k]<<" ";
			}
		//	cout<<"\n";
			for(k=0;k<n;k++)
			{
				if(k==0)
				{
					if(a[k]!=a[k+1])
					{
						cout<<a[k]<<"\n";
						flag=1;
						break;
					}
					else if(k==n-1)
					{
						if(a[k]!=a[k-1])
						{
						cout<<a[k]<<"\n";
						flag=1;
						break;
						}
						
					}
					else 
					{
						if((a[k]!=a[k+1])&&(a[k]!=a[k-1]))
						{
							cout<<a[k]<<"\n";
							flag=1;
							break;
						}
					}
				}
			}
			if(flag==0)
			cout<<"-1\n";
	}
}	