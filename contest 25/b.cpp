#include<iostream>
#include<string>
using namespace std; 
int main()
{
    int j,i,t,n;
   	cin>>t;
	for(i =0;i<t;i++)
	{
		cin>>n;
		int a[n],even=0,odd=0;
		for(j=0;j<n;j++)
		{
			cin>>a[j];
			if(a[j]%2==0)
			even++;
			else
			odd++;
		}
		if(((odd>0)||(even%2==0))&&((odd+(2*even))%2==0))
		cout<<"YES\n";
		else
		cout<<"NO\n";
		
	}
}	
