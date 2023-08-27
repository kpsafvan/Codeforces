#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,n,t,j,w,h;
   	cin>>t;
   	for(i=0;i<t;i++)
	{
		cin>>w>>h;
		int s=0,a[w][h];
		for(j=0;j<w;j++)
		{
			s=0;
			for(int k=0;k<h;k++)
			{
				if(j==0)
				{
					if(k%2==0)
					{
						cout<<"1";
					}
					else
					{
						cout<<"0";
					}
				}
				else if(j==w-1)
				{
					if(j%2==0)
					{
						if(k%2==0)
						cout<<"1";
						else
						cout<<"0";
					}
					else
					cout<<"0";
				}
				else if((k==0)||(k==h-1))
				{
					if(j%2==0)
					cout<<"1";
					else
					cout<<"0";
				}
				else
				{
					cout<<"0";
				}
			}
			cout<<"\n";
		}
		cout<<"\n";
	}		
}