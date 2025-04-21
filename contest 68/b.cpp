#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
#include <unordered_set>
using namespace std; 
int main(){
	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long i,n,t,j,m;
   	cin>>t;
   	for(i=0;i<t;i++)
   	{
   		int n;
   		cin>>n;
   		char bin[n];
   		int count=n;
   		for(int j=0;j<n;j++){
   			cin>>bin[j];
   		}
   		
   		int current=0;
   		if(bin[0]=='1'){
   			current=1;
   		}
   		
   		if(n>1){
	   		for(int j=0;j<n;j++){
	   			if(bin[j]!=current+48)	{
	   				count++;
	   				// if(j==0)
	   					// count++;
	   				if(current==0){
	   					current=1;
	   				}
	   				else{
	   					current=0;
	   				}
	   			}
	   		}	
   		}
   		
   		bool countChanged = false;
   		
   		if(bin[0]=='1')
   			count++;
   			
   		//starting is from zero to be acounted for
   		if(n>0){
	   		if(bin[0]=='1'){
	   			for(int j=1;j<n-1;j++){
	   				if(bin[j]=='0'){
	   					for(int k=j+1;k<n;k++){
		   					if(bin[k]=='1'){
		   						count-=2;
		   						cout<<"1 -2 ";
		   						countChanged = true;
		   						break;
		   					}
		   				}
		   				if(countChanged){
		   					break;
		   				}
	   				}
	   			}
	   			if(!countChanged){
	   				for(int k=1;k<n;k++){
	   					if(bin[k]=='0'){
	   						count--;
	   						cout<<"1 -1 ";
	   						break;
	   					}
	   				}
	   			}
	   		}	
	   		else{
	   			for(int j=1;j<n-1;j++){
	   				if(bin[j]=='1'){
	   					for(int k=j+1;k<n;k++){
		   					if(bin[k]=='0'){
		   						count--;
		   						countChanged=true;
		   						cout<<"0 -1 ";
		   						break;
		   					}
		   					if(k==n-1){
		   						countChanged=true;
		   						break;
		   					}	
	   					}
	   					if(countChanged){
	   						break;
	   					}
	   				}
	   			}
	   		}
	   		
   		}
   		
   		//if there are two mis-matches in the string then reverse to reduce once ie fuse them
   		// if(count>n)
   			// count--;
   		cout<<count<<"\n";
   		
   	}
}