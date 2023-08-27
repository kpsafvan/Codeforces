#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,n,t,j,m,k;
   	cin>>n;
   	int a,b,c,d;
   	a=n/2;
   	b=1;
   	for(i=0;i<n;i++)
	{
		for(j=a+1;j>=0;j--)
		{
			cout<<" ";
		}
		a--;
		for(k=0;k<b;k++)
		{
			cout<<"* ";
		}
		b++;
		
		for(j=0;j<=a;j++)
		{
			cout<<" ";
		}
		cout<<"\n";
		
	}	
	 	a=0;
   	b=n-1;
    for(i=0;i<n;i++)
	{
		for(j=a;j>=0;j--)
		{
			cout<<" ";
		}
		a++;
		for(k=0;k<b;k++)
		{
			cout<<"* ";
		}
		b--;		
		for(j=0;j<=a;j++)
		{
			cout<<" ";
		}
		cout<<"\n";
		
	}	
}