#include<iostream>
#include<string.h>
#include<math.h>
using namespace std; 
int main()
{
    int i,t;
   	cin>>t;
   	long long x;
	for(i =0;i<t;i++)
	{
			cin>>x;
			int num=0;
			while(x>0)
			{
				int b;
				if(x>100)
				b=x/100;
				else
				b=10;
				if(x>9)
				{
					num=num+b;
					x=x-b;
					x=x+b/10;		
				}
				else
				{
					num=num+x;
					x=x-x;
				}	
			}
			cout<<num<<"\n";
	}
}	