#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,n,t,j,k;
   	cin>>t;
   	for(i=0;i<t;i++)
	{
		cin>>n;
		int a[n][5];
		for(j=0;j<n;j++)
		{
			for(int y=0;y<5;y++)
			{
				cin>>a[j][y];
			}
		}
		int out=-1;
		for(j=0;j<n;j++)
		{
			int va=0;
			for(k=0;k<n;k++)
			{
				if(k==j)
				continue;
				int val=0;
				if(a[j][0]<a[k][0])
				val++;
				if(a[j][1]<a[k][1])
				val++;
				if(a[j][2]<a[k][2])
				val++;
				if(a[j][3]<a[k][3])
				val++;
				if(a[j][4]<a[k][4])
				val++;
				if(val>2)
				++va;
				if(va==n-1)
				{
					out=j;
					//cout<<j<<"asd";
					break;
				}
			}
			if(out>-1)
			break;
		}
		if(n==1)
		cout<<"1\n";
		else if(out==-1)
		cout<<"-1\n";
		else
		cout<<out+1<<"\n";
	//cout<<a[0][1]<<"\n";
	}		
}