#include<iostream>
#include<string>
#include<math.h>
using namespace std; 
int main()
{
    int i,t,k,n,j;
   	cin>>t;
	for(i =0;i<t;i++)
	{
		string s;
		int flag;
		cin>>s;
		if(s.size()%2!=0)
		{
			flag=1;
		}
		else
		{
			
			for(k=0;k<s.size();k++)
			{
			if(s[k]=='(')
			{
				flag=0;
				if(k==s.size()-1)
				flag=1;
			}
			if(s[k]==')')
			{
				if(k==0)
				{flag=1;
				break;}
				else
				flag=0;
			
			}
			}
		}
		if(flag==1)
		cout<<"NO\n";
		else
		cout<<"YES\n";
		
	}
}	
