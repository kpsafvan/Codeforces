#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    int i,t;
   	cin>>t;
   	int x;
	for(i =0;i<t;i++)
	{
			cin>>x;
			int num =0;
			num=((x%10)-1)*4;
			while(x>0)
			{
				x=x/10;
				num++;
			}
		cout<<num<<"\n";	
	}
}	