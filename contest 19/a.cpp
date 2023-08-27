#include<iostream>
#include<math.h>
using namespace std; 
int main()
{
    int i,t;
   	cin>>t;
   	int n,m,r,c;
	for(i =0;i<t;i++)
	{
		cin>>n>>m>>r>>c;	
		int num=0;
		num=r+c-2;
		if((r-1)+(m-c)>num)
		num=r-1+(m-c);
		if(((n-r)+(c-1))>num)
		num=((n-r)+(c-1));
		if(((n-r)+(m-c))>num)
		num=((n-r)+(m-c));
		//num=max((r+abs(m-c)),(abs(n-r)+(m-c)),((n-r)+(m-c)));
		cout<<num<<"\n";
		
	}
}	