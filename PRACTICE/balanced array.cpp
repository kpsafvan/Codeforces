#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
		cin>>n;
		if((n/2)%2==1)
		{
			cout<<"NO"<<"\n";
		}
		else
		{
			cout<<"YES\n";
			int sum=0;
			for(int i=2;i<=n;i=i+2)
			{
				cout<<i<<" ";
				sum+=i;
			}
			for(int i=1;i<=n;i=i+2)
			{
				if(i==(n-1))
				cout<<sum<<" ";
				else
				{
					sum=sum-i;;
					cout<<i<<" ";
				}
			}
			cout<<"\n";
		}
	}
}	