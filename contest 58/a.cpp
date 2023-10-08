#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long i,n,t,j;
   	cin>>t;
   	for(i=0;i<t;i++){
   		cin>>n; 
	 	long long x[n];
	 	long long sum=0; 
		for(j=0;j<n-1;j++){
			cin>>x[j];
			sum+=x[j];
		}
		cout<<(sum*(-1))<<"\n";
	}
}