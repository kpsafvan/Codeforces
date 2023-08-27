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
			int s=0,k=1;
			while(s<x)
			{
				
				s+=k;
				if(s<x)
				k++;
			}
		
			if(s-x<2)
			k+=s-x;
					
		
			
		cout<<k<<"\n";
	}
}	
