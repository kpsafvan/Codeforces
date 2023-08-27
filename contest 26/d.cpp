#include<iostream>
#include<algorithm>
using namespace std; 

int main()
{
    int i,t;
   	cin>>t;
    int k,j,n;
	for(i =0;i<t;i++)
	{
		cin>>n;	
		int a[n];
		for(j=0;j<n;j++)
		{
			cin>>a[j];
		}
		long long w=0,al=0,bb=0;
		sort(a,a+n);
		for(j=n-1;j>=0;j--)
		{
			if(w==0)
			{
				if(a[j]%2==0)
				{
					al+=a[j];
				}
				w=1;
			}
			else
			{
				if(a[j]%2!=0)
				{
					bb+=a[j];
				}
				w=0;
			}
		}
		if(al>bb)
		cout<<"Alice\n";
		else if(bb>al)
		cout<<"Bob\n";
		else
		cout<<"Tie\n";
	
	}
}	
