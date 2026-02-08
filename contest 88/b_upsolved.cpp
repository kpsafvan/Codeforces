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
   		int a[n];
   		long max = 0,index=0;
   		for(int j=0;j<n;j++){
   			cin>>a[j];
   			if(a[j] - (floor(a[j] / x) * y) > max){
   				index = j;
   				max =a[j] - (floor(a[j] / x) * y);
   			}
   			// else if(a[j] % x == max && (a[index] > a[j])){
   				// index = j;
   			// }
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
