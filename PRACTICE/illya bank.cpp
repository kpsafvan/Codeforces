#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    int i,t;
   	cin>>t;
    if(t>=0)
    cout<<t;
    else
    {
    	if(t%10>(t%100)/10)
    	{
    		int y=t%(10);
			if(y==0)
			{
				y=t/10;
			}
			else
    		cout<<t/100;
    		cout<<y;
    	}
    	else
    	{
    		cout<<t/10;
    		
    	}
    }
}	