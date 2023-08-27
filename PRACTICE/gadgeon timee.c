#include<iostream>
#include<string.h>
#include<math.h>
using namespace std; 
int main()
{
	int num=0,a,s=0;
	long long n;
	cin>>n;
	while(n)
	{
		a=n%10;
		if(a==0)
		{
			s++;
		}
		else
		{
			num+=pow(2,s);
			s++;
		}
	//	cout<<num<<" s= "<<s<<" a= "<<a<<"\n";
		n=n/10;
	}
	cout<<num;
}