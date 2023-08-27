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
			int num =1;
			if(n[i]<3)
			num=1;
			else
			{
				num=num+((n[i]-2)/x[i]);
				if((num*x[i]-2)<n[i])
				num++;
			}	
			cout<<num<<"\n";
	}
}	