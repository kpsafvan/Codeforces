#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long i,n,t,j,p;
   	cin>>t;
   	for(i=0;i<t;i++){
   		cin>>n>>p;
   		int a[n],b[n];
   		for(j=0;j<n;j++){
   			cin>>a[j];
   		}
   		for(j=0;j<n;j++){
   			cin>>b[j];
   		}
   		long long val =p,p_left=n-1;
   		
   		for(j=0;j<n;j++){
   			/*for(int u=0;u<n;u++){
   			cout<<a[u]<<" ";
   			}
			cout<<"\n";

			cout<<"\n";*/
   			int small=b[j];
   			int loc=j;
   			for(int y=j;y<n;y++){
   				if(small>=b[y]){
   					small=b[y];
   					loc=y;
   				}
   			}
   			if(b[loc]>=p){
   				val+=p*p_left;
   				p_left=0;
   			}
   			else{
   				if(a[loc]<=p_left){
   					val+=a[loc]*b[loc];
   					p_left-=a[loc];
   				}
   				else{
   					val+=p_left*b[loc];
   					p_left=0;
   				}
   			}
   			if(p_left==0){
   				break;
   			}
   			b[loc]=1000000000;
   		}
   		
   	/*	for(j=0;j<n;j++){
   			cout<<a[j]<<" ";
   		}
		cout<<"\n";
   		for(j=0;j<n;j++){
   			cout<<b[j]<<" ";
   		}
   		cout<<"\n";*/
		cout<<val<<"\n";
		
	}
}