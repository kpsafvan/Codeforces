#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a,i,n,t,j,b;
   	cin>>t;
   	for(i=0;i<t;i++){
   		cin>>a>>b>>n; 
	 	long long x[n]; 
		for(j=0;j<n;j++){
			cin>>x[j];
		}
		sort(x,x+n);
		long long time=b;
		for(j=0;j<n;j++){
			if(x[j]>(a-1)){
				time+=(a-1);
			}
			else{
				time+=x[j];
			}
		}
		cout<<time<<"\n";
	}
}