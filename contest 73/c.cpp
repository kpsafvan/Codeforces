#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
#include <unordered_map>
using namespace std; 
void prints(unordered_map<int, int> um){
    for (auto i : um)
        cout << i.first << " " << i.second 
        << endl;
	}
int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long i,n,t,j,m;
   	cin>>t;
   	for(i=0;i<t;i++)
   	{
   		int n,k,ans=0;
   		cin>>n;
   		int a[n];
   		unordered_map<int, int> um1;
   		for(int j=0;j<n;j++){
   			cin>>a[j];
   			if(um1.find(a[j]) != um1.end()){
   				um1[a[j]]=um1[a[j]] + 1;
   			}
   			else{
   				um1.insert({a[j],1});
   			}
   			// if(um1.find(a[j]+2) != um1.end()){
   				// um1[a[j]+2]=um1[a[j]+2] + 1;
   			// }
   			// else{
   				// um1.insert({a[j]+2,1});
   			// }
   		}
   		// unordered_map<int, int> um = {{1, 1}, {2, 1}, {3, 1}};;
   		
   		prints(um1);
   		 
   		cout<<"--"<<"\n";
   	}
}