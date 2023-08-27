#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main()
{
    int j,i,t;
   	cin>>t;
   	for(i=0;i<t;i++)
   	{
   		int n;
   		cin>>n;
   		int a[n];
   		for(j=0;j<n;j++)
   		{
   			cin>>a[j];
   		}
   		//cout<<n;
   		sort(a,a+n);
   		if(a[0]!=a[n-1])
   		n=1;
   		
   		cout<<n<<"\n" ;
   	}
   
}	