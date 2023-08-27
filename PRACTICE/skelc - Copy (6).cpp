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
    	if(t%10>((t%100)/10))
    	{
    		cout<<t/10;
    	}
    	else
    	{
    		int y=t%10;
    		y=y+(t/100);
    		cout<<y;
    	}
    }
}	