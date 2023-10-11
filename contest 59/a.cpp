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
	 	if(n<7||n==9){
	 		cout<<"NO\n";
	 	}
	 	else if(n%3!=0){
	 		cout<<"YES\n1 2 "<<n-3<<"\n";
	 	}
	 	else{
	 		cout<<"YES\n1 4 "<<n-5<<"\n";
	 	} 
	}
}