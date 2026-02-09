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
 
 	//Sort the array, find one that is not there
 	//check if its half is there twice
 	//if yes contnue, if not return the value
 	
 	//find the longest continous set, neg or postive
 	//length of that can be made to start with zero and hence the answer
 	//put all into hashset and see if the number is there, from
    long long i,t;
   	cin>>t;
   	for(i=0;i<t;i++)
   	{
   		int n,val;
   		cin>>n;
   		int a[n];
   		for(int j=0;j<n;j++){
   			cin>>a[j];
   		}
   		
   		sort(a,a+n);
   		int start=0;
   		// for(int j=0;j<n;j++){
   			// cout<<a[j]<<" ";
   		// }
   		
   		int cur=a[0],count=1,max=1;
   		for(int j=1;j<n;j++){
   			if(a[j] == cur +1){
   				count++;
   				cur++;
   				if(max < count){
   					max = count;
   				}
   			}
   			else if(a[j] == cur){
   				continue;
   			}
   			else{
   				count = 1;
   				cur = a[j];
   			}
   		}
   		
   		
   		cout<<max<<"\n";
   	}
}