#include<iostream>
#include<math.h>
using namespace std; 
int main()
{
    int i,t;
   	cin>>t;
   	int  x,y,num=0;
	for(i =0;i<t;i++)
	{
			cin>>x>>y;
			num=(2*max(x,y));
			if(x!=y)
			num--;
		//	num+=abs(x-y);
			cout<<num<<"\n";
	}
}	