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
   		for(int j=0;j<n;j++){
   			if(a[j]<0){
   				start++;
   			}
   			else{
   				break;
   			}
   		}
   		int cur =0,oper=0;
   		for(int j=start;j<n;j++){
   			if(a[j] == cur){
   				cur++;
   			}
   			else{
   				if(oper==0 && a[j]%2 ==0){
   					int count =0;
   					for(int k=start;k<j;k++){
   						if(a[k] == a[j]/2){
   							count++;
   							if(count==2){
   								break;
   							}
   						}
   					}
   					if(count !=2){
   						break;
   					}
   					cur++;
   					oper++;
   				}
   				else{
   					break;
   				}
   			}
   		}
   		cout<<cur<<"\n";
   	}
}