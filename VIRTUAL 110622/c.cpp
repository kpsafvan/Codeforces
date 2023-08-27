#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,t,j;
	int n;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
   		int a[n],b[n];
   		for(j=0;j<n;j++)
   		cin>>a[j];
   		for(j=0;j<n;j++)
   		cin>>b[j];	
   		int d,val=a[0];
   		for(j=0;j<n;j++)
   		{
			  d=b[j]-val;
			  cout<<d<<" ";
			  val=b[j];
			  if(j<n-1)
			  {
			  	if(val<a[j+1])
			  	val=a[j+1];
			  } 			
   			
   			
   			
   		}
   		cout<<"\n";
   		
		
	}
}	