#include<iostream>
#include<string.h>
#include<cmath>
using namespace std; 
int main()
{
    int i,t,x;
   	cin>>t;
	for(i =0;i<t;i++)
	{
			int flag=1;
			cin>>x;
			int num=0;
			while(flag)
			{
				num++;
				for(int k=0;k<;k++)
				{
					if((num*(k*(k+1)))==x)
					{
						cout<<num<<"\n";
						flag=0;
						break;
					}	
				}
			}	
	}
}	