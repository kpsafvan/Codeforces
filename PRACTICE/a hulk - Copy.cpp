#include<iostream>
#include<string.h>
#include<math.h>
using namespace std; 
int main()
{
    int i,t,j,k,n;
   	cin>>n;
   	int c=1;
		    while(n--)
		    {
		    	
		    	if(n==0)
		    	{
		    		if(c==1)
		    		{
		    			cout<<"I hate it";
		    		}
		    		else
		    		{
		    			cout<<"I love it";
		    		}	
		    	}
		    	else
		    	{
		    		if(c==1)
		    		{
		    			cout<<"I hate that ";
		    			c=0;
		    		}
		    		else
		    		{
		    			cout<<"I love that ";
		    			c=1;
		    		}
		    	}
		    	
		    }
		
}	