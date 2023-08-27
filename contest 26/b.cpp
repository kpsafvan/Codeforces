#include<iostream>
#include<string>
using namespace std; 
int main()
{
    int j,i,t,n,x;
   	cin>>t;
   	//long long g=1000000000;
	for(i =0;i<t;i++)
	{
		cin>>n>>x;
		int a[n];
		for(j=0;j<n;j++)
		{
			cin>>a[j];
		}
		int flag=1;
		
		int sum=0;
		for(j=0;j<n;j++)
		{
			sum+=a[j];
		}
		j=0;
		while((flag)&&(j<n))
		{
			if(a[j]%x!=0)
			{
				flag=0;
				cout<<j;
			}
			else
			{
				int flagg=1,pro=0,num=a[j];
				while(flagg)
				{
					pro++;
					num=num/x;
					if((num%x!=0)||(num<x))
					{
						flagg=0;
						
					}
				}
				sum+=a[j]*pro;
			}
			j++;
		}
		cout<<sum<<"\n";
	}
}	
