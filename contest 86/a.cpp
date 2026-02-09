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
 
    long long i,t;
   	cin>>t;
   	for(i=0;i<t;i++)
   	{
   		int n,l,h;
   		cin>>n>>l>>h;
   		int a[n],countX=0,countY=0,countB=0;
   		for(int j=0;j<n;j++){
   			cin>>a[j];
   			if(a[j] <=l && a[j]<=h){
   				countB++;
   			}
   			else{
   				if(a[j]<=h ){
   					countX++;
	   			}
	   			if(a[j]<=l ){
	   				countY++;
	   			}
   			}
   		}
   		int val;
   		val = min(countX+countY,countB);
   		if(countX+countY<countB){
   			val += (countB - (countX+countY))/2;
   		}
		// if(countX != countY && countB%2!=0){
			// val++;
		// }
   		// for(int j=0;j<n;j++){
   			// cin>>a[j];
   			// if(a[j]<=h ){
   				// countX++;
   			// }
   			// else if(a[j] <=l){
   				// countY++;
   			// }
   		// }
   		cout<<val<<"\n";
   	}
}