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
   		int n,x,y;
   		cin>>n>>x>>y; 
   		char a[n];
   		int count =0;
   		for(int j=0;j<n;j++){
   			cin>>a[j];
   			if(a[j] == '4'){
   				count++;
   			}
   			if(a[j] == '8'){
   				count += 2;
   			}
   		}
		if(count < std::abs(x) + std::abs(y)){
			cout<<"NO\n";
		}
		else{
			cout<<"YES\n";
		}
   	}
}