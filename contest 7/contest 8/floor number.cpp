#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    int i,t;
   	cin>>t;
   	long n[t],x[t];
	for(i =0;i<t;i++)
	{
			cin>>n[i]>>x[i];
			int num =0;
			if(n[i]<3)
			{
				cout<<"1\n";
			}
			else
			{
			
			int k=0;
			while(num==0)
			{
				
				if(n[i]<=((k*x[i])+2))
				{num=k+1;
				break;}
				k++;
			}
			cout<<num<<"\n";
			}
			
			
	}
}	