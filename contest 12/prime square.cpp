#include<iostream>
#include<string.h>
using namespace std; 
int checkprime(int a)
{
	if(a<3)
	return 1;
	
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
		diag=2;
		ele=1;
		int flag=1,num=n+1;
		if(checkprime(n)==1)
			{
				
				diag=1;
				flag=0;
			}
		while(flag)
		{
			if(checkprime(num)==1)
			{
				diag=num-(n-1);
				//cout<<diag;
				
				flag=0;
				if(checkprime(diag))
				flag=1;
			
			}
			num++;
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
