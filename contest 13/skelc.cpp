#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    int i,t,k;
   	cin>>t;
   	long l,r;
	for(i =0;i<t;i++)
	{
			cin>>l>>r;
			int m=r*3,flag=0;
			m=m/4;
			
			for(k=r/2;k<m;k++)
			{
				float a=k*(0.75);
				if(k>=a)
				{
				//	cout<<k;
					flag=1;
					break;
				}	
			}
			if(flag==0)
			cout<<"NO\n";
			else
			cout<<"YES\n";
	}
}	