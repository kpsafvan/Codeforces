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
 	//3 15 14
 	//34 43 52
 	/*
 	34 85
 	new 
 	61 52
 	108
 	129 - 113 = 16
 	//the largest remainder of x will be where money goes
 	//find that, for the rest add the remainder and reduce the fine from total
 	create a hashmap with the remainder and index
 	then if difference * transactaion >  remainder go there
 	?? what if there is more than one index of the dsame remainder
 	
 	construcut an array
 	34 > -11 43 > -2
 	34 > 2   43 > 2
 	*/
    long long i,t;
   	cin>>t;
   	for(i=0;i<t;i++)
   	{
   		int n,x,y;
   		cin>>n>>x>>y;
   		int a[n],b[n],c[n];
   		int max = 0,index=0;
   		for(int j=0;j<n;j++){
   			cin>>a[j];
   			if(a[j] % x > max){
   				index = j;
   				max = a[j] % x;
   			}
   			b[j] = (a[j]%x);
   			c[j] = (a[j]/x) * (x-y);
   			// c[j] = (a[j]/x) * (x-y);
   		}
   		
   		cout<<x<<"\n";
   		for(int j=0;j<n;j++){
   			cout<<b[j]<<" ";
   		}
   		cout<<"\n";
   		for(int j=0;j<n;j++){
   			cout<<c[j]<<" ";
   		}
   		cout<<"\n";
   		cout<<"\n";
   		// long val = 0;
   		// for(int j=0;j<n;j++){
   			// if(j!=index){
   				// int tra = a[j]/x;
   				// val += tra*y;
   				// val += a[j]%x;
   			// }
   			// else{
   				// val += a[j];
   			// }
   		// }
   		// cout<<val<<"\n"; 
   	}
}
