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
   		cin>>n>>m>>k;
   		int a[n],b[m];
   		for(j=0;j<n;j++){
   			cin>>a[j];
   		}
   		for(j=0;j<m;j++){
   			cin>>b[j];
   		}
   		sort(a,a+n);
   		sort(b,b+m);
   		if(a[0]<=b[0]){
		 	if(k%2==0){
		 			
		 	}
		 	else{
		 		
		 	}
		}
		else{
		 	if(k%2==0){
		 		
		 	}
		 	else{
		 		
		 	}			
		}
		cout<<time<<"\n";
	}
}