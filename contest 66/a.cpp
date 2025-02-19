#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>

using namespace std; 
int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long i,n,t,j,m;
   	cin>>t;
   	for(i=0;i<t;i++)
   	{
   		int k;
   		 cin>>k;
   		 n=k-2;
   		 int a[n],b[n];
   		 for(int j=0;j<n;j++)
   		 {
   		 	cin>>b[j];
   		 }
   		 int val =0;
   		 if(n>1)
   		 {
   		 	for(int j=1;j<n-1;j++)
   		 	{	
	   		 	if(b[j]==0)
	   		 	{
	   		 		//cout<<b[j-1] + b[j+1]<<"\n";
	   		 		if(b[j-1] + b[j+1] == 2)
	   		 		{
	   		 			val =1;
	   		 			break;
	   		 		}
	   		 	}
	   		 }	
   		 }
   		 
		if(val==0)
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
   	}
}