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
   		int b,n,bi=0,sm=0,eq=0;
   		cin>>n>>b;
   		int a[n];
   		for(int j=0;j<n;j++){
   			cin>>a[j];
   			if(a[j]>b){
   				bi++;
   			}
   			else if(a[j]<b){
   				sm++;
   			}
   			else{
   				eq++;
   			}
   		}
   		int choice = 0;
   		if(bi>sm){
   			choice = b+1;
   		}
   		else{
   			choice = b-1;
   		}
   		if(choice < 0){
   			choice++;
   		}
   		cout<<choice<<"\n";
   	}
}