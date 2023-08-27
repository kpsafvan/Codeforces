#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    int t,k;
   	cin>>t>>k;
   while(k--)
   {
   	if(t%10==0)
   	t=t/10;
   	else
   	t--;
   }
   cout<<t;
}	