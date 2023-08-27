#include<iostream>
#include<math.h>
using namespace std; 
int main()
{
    int i,t,j,k,n,c,d,h;
   	cin>>t;
  	for(i =0;i<t;i++)
		{
			cin>>n>>c>>d>>h;
			int z=0,o=0;
			char ch;
			for(k=0;k<n;k++)
			{
				cin>>ch;
				if(ch=='1')
				o++;
				else
				z++;
			}
			int num=0;
			num+=min(d+h,c)*z;
			num+=min(c+h,d)*o;
			cout<<num<<"\n";	
		}
}	