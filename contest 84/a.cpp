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
   		int l,val;
   		cin>>l;
   		
   		if(l == 1){
   			val = 0;
   		}
   		else if(l < 4){
   			val = min(l,2);
   		}
   		else if(l%2 ==0){
   			val = 0;
   		}
   		else{
   			val =1;
   		}
   		cout<<val<<"\n";
   	}
}