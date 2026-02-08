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
   		int n,x,y;
   		cin>>n>>x>>y;
   		int a[n];
   		long max = 0,index=0;
   		for(int j=0;j<n;j++){
   			cin>>a[j];
   			//calc waste and minimise that
   			long w = (a[j] % x);
   			if(x!=y) {
   				w += (a[j]/(x-y));
   			}
   			if(w > max){
   				max = w;
   				index = j;
   			}  
   		}
   		long val = 0;
   		for(int j=0;j<n;j++){
   			if(j!=index){
   				long tra = a[j]/x;
   				val += tra*y;
   			}
   			else{
   				val += a[j];
   			}
   		}
   		cout<<val<<"\n"; 
   	}
}
