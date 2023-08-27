#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,n,t,j,m;
   	cin>>t;
   	for(i=0;i<t;i++)
	{
		cin>>n;
		int c1=n/3+(n%3);
		int c2=(n/3);
		if(c1-c2>1)
		{
			c1--;
			c1--;
			c2++;
		}
		cout<<c1<<" "<<c2;
		cout<<"\n";
	}		
}