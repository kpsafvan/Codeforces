#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
#include <unordered_set>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    std::unordered_set<int> hash;
    long long i,t;
   	cin>>t;
   	for(i=0;i<t;i++)
   	{
   		hash.clear();
   		int n,m;
   		cin>>n>>m;
   		char a[n];
   		int b[m];
   		long long total = 0;
   		for(int j=0;j<n;j++){
   			cin>>a[j];
   		}
   		for(int j=0;j<m;j++){
   			cin>>b[j];
   			hash.insert(b[j]);
   		}
   		// for (int num : hash) {
   			// cout<<num<<" ";
   			// }
   			// cout<<"\n";
   		// sort(b,b+m);
   		//hashset to store the white cells
   		//sort the white cells array and check if we crossed in operation
   		int cur =1;
   		for(int j =0;j<n;j++){
   			cur = 1;
   			if(a[j] == 'B'){
   				// cout<<a[j];
   				while(++cur){
   					if(hash.count(cur) ==0){
   						hash.insert(cur);
   						break;
   					}
   				}
   			}
   			else{
   				// cout<<a[j];
   				cur++; 
   				hash.insert(cur);
   			}
   		}
   		int size = hash.size();
   		cout<<size<<"\n";
   		int c[size],l=0;
   		for (int num : hash) {
   			c[l++] = num;
        	// cout<<num<<" ";
    	}
    	sort(c,c+size);
    	for (int j=0;j<size;j++) {
   			cout<<c[j]<<" ";
    	}
    	cout<<"\n";
    	// cout<<"\n\n";
    	hash.clear();
   		// cout<<a[0]<<" "<<b[0]<<"\n";
   		
   	}
}