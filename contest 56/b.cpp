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
	 	int val=5;
	   	for(i=0;i<n;i++)
	   	{
	   		cout<<val<<" ";
	   		if(i%2==0)
	   		{
	   			val+=2;	
	   		}
	   		else
	   		{
	   			val+=3;	
	   		}
	   	}
	   	cout<<"\n";
	}

}