#include<iostream>
#include<string.h>
#include<math.h>
using namespace std; 
int main()
{
	int n,i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if((i%3!=0)&&(i%5!=0))
		{
			cout<<i;
		}
		if(i%3==0)
		{
			cout<<"Fizz";
		}
		if(i%5==0)
		{
			cout<<"Buzz";
		}
		cout<<"\n";
	}
}