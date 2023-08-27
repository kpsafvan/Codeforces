#include<iostream>
#include<math.h>
#include<string.h>
using namespace std; 
int main()
{
    int i,t,k;
   	cin>>t;
   	int num=0;
   	char ch;
   	getchar();
	for(i =0;i<t;i++)
	{
			string str;		
			
			getline(cin,str);
		
			int len=str.length();
			for(k=0;k<len-1;k++)
			{
				if(str[k]=='[')
				ch=']';
				else if(str[k]=='(')
				ch=')';
				else
				continue;
				for(int y=k+1;y<len;y++)
				{
					if(str[y]==ch)
					{
						str[y]='/';
						num++;
						break;	
					}				
				}
				
				
			}
		
			cout<<num<<"\n";
			num=0;
	}
}	