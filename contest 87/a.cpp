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
 	// 2 3 1 
    // 2 3 1 4
    // 3 2 4 1
    // 3 2 4 1 5
    // 3 4 2 5 1
    // 3 4 2 5 1 6
    // 4 5 3 6 2 7 1 8
    
    long long i,t;
   	cin>>t;
   	for(i=0;i<t;i++)
   	{
   		int n;
   		cin>>n;
   		int val = (n+1)/2;
   		int valL = val++;
   		for(int j=0;j<n/2;j++){
   			cout<<valL--<<" "<<val++<<" "; 
   		}
   		if(n%2!=0){
   			cout<<1<<" ";
   		}
   		cout<<"\n";
   	}
}
