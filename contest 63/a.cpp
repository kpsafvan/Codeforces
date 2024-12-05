#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>

using namespace std; 
int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long i,n,t,j;
   	cin>>t;
   	for(i=0;i<t;i++)
   	{
   		 int k;
   		 cin>>n>>k;
   		 int a[n];
   		 for(j=0;j<n;j++)
   		 {
   		 	cin>>a[j];
   		 }
   		 sort(a,a+n);
   		 int count =0,val=0;
   		 for(j=n-1;j>=0;j--)
   		 {
   		 	val+=a[j];
   		 	// cout<<"j "<<j<<" val "<<val<<" count "<<count<<"\n";
   		 	if(val==k)
   		 	{
   		 		break;
   		 	}	
   		 	else if(val>k)
   		 	{
   		 		count+=k-(val-a[j]);
   		 		break;
   		 	}
   		 }
   		 if(val<k)
   		 {
   		 	count+= k-val;
   		 }
   		 cout<<count<<"\n";
   	}
}