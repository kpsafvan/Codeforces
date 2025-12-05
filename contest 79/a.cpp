#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<unordered_set>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long i,t;
   	cin>>t;
   	for(i=0;i<t;i++)
   	{
   		int n;
   		cin>>n;
   		int a[n];
   		int fre[n + 1];
   		for(int k=0;k<=n;k++){
   			fre[k] =0;
   		}
   		for(int k=0;k<n;k++){
   			cin>>a[k];
   			fre[a[k]]++;
   		}
   		// for(int k=0;k<=n;k++){
   			// cout<<fre[k]<<" ";
   		// }
   		// cout<<"\n";
   		int count =0;
   		for(int k=0;k<=n;k++){
   			if(fre[k]>0){
   				if(fre[k] == k){
	   				continue;
	   			}	
	   			else{
	   				if(fre[k] > k){
	   					count += fre[k] -k;
	   				}
	   				else{
	   					count += fre[k];
	   				}
	   			}
   			}
   		}
   		cout<<count<<"\n";
   	}
}