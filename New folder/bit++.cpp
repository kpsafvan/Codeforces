#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
   int n,count=0;
   char s[3];
	cin>>n;
	for(int i =0;i<n;i++)
	{
		cin>>s[0]>>s[1]>>s[2];
		if(s[1]=='+')
		{
			count++;
		}
		else
		{
			count--;
		}
		
	}
	cout<<count;

}	
