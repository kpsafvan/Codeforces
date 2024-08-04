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
   		long long x[3];
   		cin>>x[0]>>x[1]>>x[2];
   		sort(x,x+3);
   		bool status = false;
   		//already set
   		if(x[0]==x[1]){
   			if(x[1]==x[2]){
   				status=true;
   			}
   			//case of one cut
   			if(x[2]==(2*x[1])){
   				status=true;
   			}
   		}
   		if(!status){
   			//case of two cut
   			if(x[2])
   		}
   		//three cases
   		//One cut two cut three cut
   		
   		//case one cut
   		
   		
   		cout<<x[0]<<" "<<x[1]<<" "<<x[2]<<"\n";
	}
}