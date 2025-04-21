#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
#include <unordered_set>
using namespace std; 
int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long i,n,t,j,m;
   	cin>>t;
   	for(i=0;i<t;i++)
   	{
   		int n;
   		cin>>n;
   		int num;
   		unordered_set<int> us;
   		int count=0;
   		for(int j=0;j<n;j++){
   			cin>>num;
   			if(us.find(num)!= us.end()){
   				continue;
   			}
   			us.insert(num);
   			count++;
   		}
   		cout<<count<<"\n";
   		
   	}
}