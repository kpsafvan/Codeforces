#include<iostream>
#include<string.h>
#include<math.h>
using namespace std; 
int main()
{
    int i,t,n;
   	cin>>t;
	for(i =0;i<t;i++)
	{
			cin>>n;
			for(int k=2;k<30;k++)
			{
				int nu=(pow(2,k)-1);
				if(n%nu==0)
				{
					int num=n/nu;
					cout<<num<<"\n";
					break;
				}	
			}
			
	}
}	