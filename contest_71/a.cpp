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
   		cin>>n;
   		int a[n];
   		
   		for(int j=0;j<n;j++){
   			cin>>a[j];
   			
   		}
   		
   		int oddCount=0,evenCount=0;
   		for(int j=0;j<n;j++){
   			if(a[j]%2!=0){
   				oddCount++;
   			}
   			else{
   				evenCount++;
   			}
   			if(oddCount>0&&evenCount>0){
   				cout<<"YES"<<"\n";
   				for(int j=0;j<n;j++){
	   				if(a[j]%2==0){
	   					cout<<1<<" ";
	   				}
	   				else{
	   					cout<<2<<" ";
	   				}
   				}
   				cout<<"\n";
   				break;
   			}
   		}
   		if(oddCount==0||evenCount==0){
   			cout<<"NO"<<"\n";
   		}
   	}
}