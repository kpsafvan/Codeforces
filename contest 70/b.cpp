#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
#include <unordered_set>
using namespace std; 
int main(){
	
	// the x-y is distance to each bar
	// need to have that value, also use the sliding thing for that point
	// all the distance after it is to be added and n times that house in to be subtrated
	// till that it is different the bnumber is smaller
	// sdf
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long i,t;
   	cin>>t;
   	for(i=0;i<t;i++)
   	{
   		int n,k;
   		cin>>n>>k;
   		int a[n];
   		int max=0;
   		for(int j=0;j<n;j++){
   			cin>>a[j];
   			if(a[j]>max)
   				max=a[j];
   		}
   		int val[max];
   		for(int j=0;j<max;j++){
   			int curr=0;
   			for(int h=0;h<n;h++){
   				curr+=math.abs(a[h])
   			}
   		}
   		cout<<a[0]<<"\n";
   		
   	}
}