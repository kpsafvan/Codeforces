#include<iostream>
#include<string.h>
#include<math.h>
using namespace std; 
int main()
{
    int i,t,k;
   	cin>>t;
   	long l,r;
	for(i =0;i<t;i++)
	{
			cin>>l>>r;
			int m=r*3,flag=0,flag2=0;
			m=m/4;
			for(k=l/2+1;k<=m+1 ;k++){
				{
					//cout<<k<<"\n";
					if((k%l>=ceil(l/2)+1)&&(k%r>=(r/2)))
					{
						//cout<<k<<"\n";
						flag=1;
						break;
					}	
				}
				
			}
			if(flag)
				cout<<"YES\n";
			else 
				cout<<"NO\n";
	
						
					
						
	}
}	