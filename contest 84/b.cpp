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
   		// int l,a,b,n,k,count = 0,max = 0;
   		
   		int a,b,c;
   		cin>>a>>b>>c;		 
   		int ct =0;
   		while(ct <= c){
   			ct += b;
   			a = max(a - b,0);
   			
   		}
   		int val = a
   		cout<<a <<"\n";
   		
   	}
}