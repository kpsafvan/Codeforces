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
	   	for(i=2;i<n;i++)
	   	{
	   		if((a[i-2]+a[i-1])*3%(a[i])==0){
	   			cout<<"bad"<<"\n";
	   		}
	   		else{
	   			cout<<i<<"\n";
	   		}
	   	}
	   	cout<<"case"<<"\n";
	}

}