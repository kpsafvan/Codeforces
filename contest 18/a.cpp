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
			cin>>x;
			int s=1,a[x];
			for(num=x;num>0;num--)
			{
			a[num]=s;
			s++;
			}
			if(x%2!=0)
			{
				a[x/2]--;
				a[x/2+1]++;
			}
			for(num=1;num<=x;num++)
			{
			cout<<a[num]<<" ";
			}
			cout<<"\n";
	}
}	