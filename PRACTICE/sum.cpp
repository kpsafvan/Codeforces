#include<iostream>
#include<string.h>
#include<math.h>
using namespace std; 
int  sum(int  n)
{
	if(n==1)
	return 1;
	else
	return n+sum(n-1);
}
int main()
{
    int n;
   	cin>>n;
	cout<<sum(n)<<"\n"<<(n*(n+1))/2;
}	