#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
#include <unordered_set>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    std::unordered_set<int> hash;
    long long i,t;
   	cin>>t;
   	//start from each point and execute, if end max value checker
   	//put visited in hash, if it comes infinite -1 and exit loop
   	for(i=0;i<t;i++)
   	{
   		hash.clear();
   		int n,m;
   		string s;
   		cin>>s; 	
   		int len = s.length();	
   		for(int j=0;j< len; j++){
   			cout<<s[j];
   			int max = 1, p =j,curr = 0;
   			
   			while(max > 0){
   				if(s[p] == '>' && p < len){
   					p++;
   					
   				}
   			}
   		}
   		
   		cout<<"\n"; 
   	}
}