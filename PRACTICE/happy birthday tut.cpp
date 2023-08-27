#include<iostream>
#include<string.h>
#include<math.h>
using namespace std; 
int main()
{
    int i,t,j,k,n;
   	cin>>t;
    while(t--)
    {
    	cin>>n;
    	int a=0,count=0;
    	for(i=0;i<10;i++)
    	{
    		a=a*10 +1;
    		for(k=1;k<10;k++)
    		{
    			if(a*k<=n)
    			count++;
    			else
    			break;
    			//cout<<a*k<<"\n";
    			
    		}
    		if(a>n)
    		break;
    	}
    	
    	cout<<count<<"\n";
    }
}	