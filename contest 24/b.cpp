#include<iostream>
#include<string>
using namespace std; 
int main()
{
    int i,t,k,n;
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
				break;
			}
			if(s[k]==')')
			{
			flag=1;
			break;
			}
			}
		}
		if(flag)
		cout<<"NO\n";
		else
		cout<<"YES\n";
		
	}
}	
