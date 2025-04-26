#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
#include <unordered_set>
using namespace std; 
int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long i,n,t,j,m;
   	cin>>t;
   	for(i=0;i<t;i++)
   	{
   		int n,k,ans=0;
   		cin>>n>>k;
   		int a[n],b[n];
   		for(int j=0;j<n;j++)
   			cin>>a[j];
   		int sum =-1;
   		for(int j=0;j<n;j++)
   			{
   				cin>>b[j];
   				if(b[j]!=-1)
   					sum=a[j]+b[j];
   				
   			}
   		if(sum==-1){
   			int min=1000000000,max=0;
   			for(int j=0;j<n;j++){
   				if(min>a[j])
   					min=a[j];
   				if(max<a[j])
   					max=a[j];
   			}
   			int val = (min+k)-max;
   			
   			// cout<<val<<" ";
   			if(val>=0){
   				ans=++val;
   			}
   				
   			// cout<<ans<<" ";
   		}
   		else{
   			ans=1;
   			// cout<<sum<<" ";
	   		for(int j=0;j<n;j++){
	   			if(b[j]==-1){
	   				if((a[j]+k)>=sum&&a[j]<=sum){
	   					// cout<<j<<" ";
	   					continue;
	   				}
	   				else{
	   					ans=0;
	   					break;
	   				}
	   			}
	   			else{
	   				if(a[j]+b[j]!=sum){
	   					ans=0;
	   					break;
	   					}
	   			}
	   		}	
   		}
   		 
   		 
   		cout<<ans<<"\n";
   	}
}