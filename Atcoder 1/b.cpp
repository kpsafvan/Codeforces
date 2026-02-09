#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<unordered_set>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     std::unordered_set<int> h;

    
    long long i,t,k;
   	cin>>t>>k;
   	int sum = 0,count =0;
    for(int i = 1;i<=t;i++){
    	if(i%10 ==0){
    		sum -= 9;
    	}
    	
    	if(i > 9 && (i%100) ==0){
    		sum -= 9;	
    	}
    	
    	if( i > 99 && ((i %1000)  == 0) ){
    		sum -= 9;
    	}
    	
    	if( i > 999  && (i%10000) == 0){
    		sum -= 9;
    	}
    	
    	if( i > 9999 && (i%100000) == 0){
    		sum -= 9;
    	}
    	
    	sum++;
    	if(sum ==k){
    		count++;
    	}
    } 
   		cout<<count<<"\n"; 
}