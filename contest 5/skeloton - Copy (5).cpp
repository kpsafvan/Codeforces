#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    int i,t;
   	cin>>t;
   	long x[t],y[t],k[t];
	for(i =0;i<t;i++)
	{
			cin>>x[i]>>y[i]>>k[i];	
	}
	long long num;
	
	for(i =0;i<t;i++)
	{
		num=0;
		//cout<<x[i]<<" "<<y[i]<<" "<<k[i]<<"\n";
		//if(x[i]<k[i])
		num = (k[i]/(x[i]-1));
		//if(y[i]<k[i])
		num=num+(k[i]*y[i]);
		cout<<num<<"\n";	
	}
	
	
}	