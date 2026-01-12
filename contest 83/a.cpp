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

    // Inserting elements
    // hashSet.insert(10);
    //Check if 2025 is therre, indel it is 1
    //else it is 0
    long long i,t;
   	cin>>t;
   	for(i=0;i<t;i++)
   	{
   		int l,a,b,n,k,count = 0,max = 0;
   		cin>>l;
   		char c[l]; 
   		for(int j=0;j<l;j++){
   			cin>>c[j];
   		}
   		int val = 0;
   		for(int j = 3;j<l;j++){
   			// cout<<c[j]<<" ";
   			if(c[j] == '5' && c[j-1] == '2' && c[j-2] == '0' &&c[j-3] == '2'){
   				val = 1;
   			}
   			else if(c[j] == '6' && c[j-1] == '2' && c[j-2] == '0' &&c[j-3] == '2'){
   				val = 0;
   				break;
   			}
   		}
   		cout<<val<<"\n";
   	}
}