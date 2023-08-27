#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    int t;
   	cin>>t;
   	float a[t],sum=0;
	for(int i =0;i<t;i++)
	{
			cin>>a[i];
			sum+=a[i];	
	}
	float p;
	p=sum/t;
	cout<<p;
}	