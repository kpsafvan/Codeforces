#include<iostream>
#include<cmath>
using namespace std; 
int main()
{
    int t,i,k,v; 
   	cin>>t;
   	int a[t][2];
	for(i =0;i<t;i++)
	{
		for(k=0;k<2;k++)
		{
			cin>>a[i][k];
		}
	}
	for(i =0;i<t;i++)
	{
		if(a[i][0]==a[i][1])
		{
			v=0;
			cout<<v<<"\n";
		}
		else if((abs(a[i][0]-a[i][1])<11))
		{
			v=1;
			cout<<v<<"\n";
		}
		else
		{
			int j=abs(a[i][0]-a[i][1]);
			v=j/10;
			if(j%10!=0)
			v++;
			cout<<v<<"\n";
		}
	}
}	
