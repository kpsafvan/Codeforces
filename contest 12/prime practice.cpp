#include<iostream>
#include<string.h>
using namespace std; 
int checkprime(int a)
{
	for(int y=2;y<=a/2;y++)
	{
		if(a%y==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
    int i,t,k,j,n;
    cin>>t;
    while(t--)
    {
		cin>>n;
		int diag,ele;
		diag=1;
		ele=0;
		int flag=1,num=n;
		if(checkprime(n))
			{
				diag=1;
				flag=0;
			}
		while(flag)
		{
			num++;
			if(checkprime(num))
			{
				diag=num-();
				
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i==j)
				cout<<diag<<" ";
				else
				cout<<ele<<" ";
			}
			cout<<"\n";
		}
	}
}	
