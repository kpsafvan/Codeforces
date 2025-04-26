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
   		char a;
   		int count =0;
   		for(int j=0;j<n;j++){
   			cin>>a;
   			if(a=='0'){
   				count++;
   			}
   			else{
   				count+=(n-1);
   			}
   		}
   		cout<<count<<"\n";
   	}
}