#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    int i,t,j,k,n;
   	cin>>t;
    while(t--)
    {
    	cin>>n;
    	int s=n;
    	int count=0;
    	if(n>10)
    	{
    		n=n/10;
	    	while(n)
	    	{	
	    		count=count+9;
	    		n=n/10;
	    	}
	    	int m,dig=0,g=n%10;
	    	n=s/10;
	    	
	    	while(n)
	    	{
	    		m=n;
	    		if(n/10==g)
	    		{
	    			
	    			dig++;
	    		}
	    			n=n/10;
	    	}
	    	//cout<<m<<" ";
	    	if(dig*9==count)
	    	{
	    		count=count+m;
	    	}
	    	else
	    	{
	    		count=count+(m-1);
	    	}
	    	
	    }
	    else if(n==10)
	    count=9;
	    else
	    count=n;	
    	cout<<count<<"\n";
    }
}	