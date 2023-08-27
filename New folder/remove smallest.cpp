#include<iostream>
using namespace std; 
int main()
{
    int t,i,j,flag;
	cin>>t;
	int n[t],a[t][50];
	
	for(i=0;i<t;i++)
	{
		cin>>n[i];
		for(j=0;j<n[i];j++)
		cin>>a[i][j];
	}
	for(i=0;i<t;i++)
	{
		flag=0;
		for(j=0;j<n[i];j++)
		{
			for(int k=j+1;k<n[i];k++)
			{
				if(a[i][j]>a[i][k])
				{
					int temp=a[i][k];
					a[i][k]=a[i][j];
					a[i][j]=temp;
				}
			}
		}
		for(j=0;j<n[i]-1;j++)
		{
			if((a[i][j+1]-a[i][j])>1)
			{
				cout<<"NO"<<"\n";
				flag=1;
				break;
			}
				
		}	
		if(flag==0)
		cout<<"YES"<<"\n";
		
	}
	
	
}	
