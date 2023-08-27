#include<iostream>
#include<math.h>
using namespace std; 
int main()
{
    long long sum=0,i,t;
   	cin>>t;
   	
   	for(i=1;i<=t;i++)
   	{
   		sum+=pow(2,i);
   	}
   	cout<<sum;
}	