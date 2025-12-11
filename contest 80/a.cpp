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
   		int n,k;
   		cin>>n>>k;
   		char a[n];
   		
   		for(int j=0;j<n;j++){
	   		cin>>a[j];	
	   	}
   		 
   		int awake = 0,slept =0;
   		for(int i=0;i<n;i++){
   			if(a[i] == '0'){
   				if(awake == 0){
   					slept++;
   				}
   				else{
   					awake--;
   				}
   			}
   			else{
   				awake = k;
   			}
   		} 
   		cout<<slept<<"\n";
   	}
}