#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
    int i,n,q,j,m,t;
   	cin>>t;
   	for(q=0;q<t;q++)
	{
	 	cin>>n;
	 	int a[n];
	   	for(i=0;i<n;i++)
	   	{
	   		cin>>a[i];
	   	}
	   	int rep=-1;
	   	for(i=n-1;i>=0;i--)
	   	{
	   		if(rep>=i)
	   		break;
	   		for(j=i-1;j>=0;j--)
	   		{
	   			if(a[j]==a[i])
	   			{
	   				//cout<<i<<j;
	   				if(j>rep)
	   				rep=j;
	   				break;
	   			}
	   		}
	   	}
	   	rep++;
	   	cout<<rep<<"\n";
	}

}