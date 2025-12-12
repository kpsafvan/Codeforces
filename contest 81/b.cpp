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
   		int n;
   		cin>>n;
   		char a[n];
   		
   		for(int j=0;j<n;j++){
	   		cin>>a[j];	
	   	}
	   	
	   	int cur = 0,num  =0;
	   	for(int j = 0;j<n;j++){
	   		if(a[j] == '0'){
	   			cur++;
		   		if(cur>num){
		   			num = cur;
		   		}
	   		}
	   		else{
	   			cur=0;
	   		}
	   	}
	   	for(int j = 0;j< n;j++){
	   		if(a[j] == '1'){
	   			cur = j + 1;
	   			break;
	   		}
	   	}
	   	for(int j = n-1;j>=0;j--){
	   		if(a[j] == '1'){
	   			cur += (n-1)-j-1;
	   			break;
	   		}
	   	}
	   	if(cur>num){
		   			num = cur;
		   		}
   		cout<<num<<"\n";
   	}
}