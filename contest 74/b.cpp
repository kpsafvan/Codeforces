#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
#include <unordered_set>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long i,t;
   	cin>>t;
   	for(i=0;i<t;i++)
   	{
   		int n,k;
   		cin>>n>>k;
   		int a[n],b[k];
   		long long total = 0;
   		for(int j=0;j<n;j++){
   			cin>>a[j];
   			total += a[j];
   		}
   		for(int j=0;j<k;j++){
   			cin>>b[j];
   		}
   		
   		sort(a,a+n);
   		sort(b,b+k);
   		
   		int neg = 0;
   		
   		for(int j=0;j<k;j++){
   			neg += b[j];
   			if(neg <= n){
   				total -= a[n - (neg)];
   				// cout<<neg<<" ";
   			}
   			else{
   				break;
   			}
   		}
   		cout<<total<<"\n";
   		
   	}
}