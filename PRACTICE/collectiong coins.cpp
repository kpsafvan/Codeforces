#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    int t,n,a,b,c;
    cin>>t;
    while(t--)
    {
		cin>>a>>b>>c>>n;
		if((a+b+c+n)%3!=0)
		{
			cout<<"NO\n";
		}
		else
		{
			int max;
			if((a>=b)&&(a>=c))
			max=a;
			else if((b>=a)&&(b>=c))
			max=b;
			else
			max=c;
			if(max<=((a+b+c+n)/3))
			cout<<"YES\n";
			else
			cout<<"NO\n";
			
		}
		
	}
}	