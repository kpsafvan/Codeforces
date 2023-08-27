#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
   int n,flag=0;
	cin>>n;
	int lucky[13]={4,7,44,47,74,77,444,447,474,477,744,747,777};
	for(int i=0;i<12;i++)
	{
		if(n%lucky[i]==0)
		{
			cout<<"YES";
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"NO";
	}

}	
