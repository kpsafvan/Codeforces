#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    int i,k,t,num;
   	cin>>t;
   	long a[t][1001];
	for(i =0;i<t;i++)
	{
			
			for(k=0;k<t;k++)
			{
				cin>>num;
				cin>>a;
				int flag=0;
				if(num==1)
				{
					if(a[i][k]%2==0)
					cout<<"2"<<"\n";
					else
					cout<<"1"<<"\n";
				}
				else if(num%2==0)
				{
					while(a[i][k]>0)
					{
						if(a[i][k]%2==0)
						{
							cout<<"2"<<"\n";
							flag=1;
							break;
						}
						a[i][k]/=100;
					}
					if(flag==0)
					cout<<"1"<<"\n";
				}
				else
				{
					while(a[i][k]>0)
					{
						if(a[i][k]%2!=0)
						{
							cout<<"1"<<"\n";
							flag=1;
							break;
						}
						a[i][k]/=100;
					}
					if(flag==0)
					cout<<"2"<<"\n";
					//cout<<"1"<<"\n";
				}
			}
			
				
	}
}	