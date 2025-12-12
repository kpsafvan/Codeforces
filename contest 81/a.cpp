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
   		int n,k,count = 0;
   		cin>>n;
   		int a[n];
   		
   		for(int j=0;j<n;j++){
	   		cin>>a[j];	
	   	}
   		 
   		 
   		for(int j=0;j<n-1;j++){
   			for(int k = j+1;k<n;k++){
   				if(a[k] != 0 && a[k] < a[j]){
   					count++;
   					a[k] = 0;
   				}
   			}
   		}
   		cout<<count<<"\n";
   	}
}