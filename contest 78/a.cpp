#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<unordered_set>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long i,t;
   	cin>>t;
   	for(i=0;i<t;i++)
   	{
   		int b,n,bi=0,sm=0,eq=0;
   		cin>>n;
   		char a[n];
   		int fre[26];
   		for(int k=0;k<26;k++){
   			fre[k] =0;
   		}
   		int count =0,max =0;
   		for(int j=0;j<n;j++){
   			cin>>a[j];
   			fre[a[j] - 'a']++;
   			if(j==(n-1)){
   				count = fre[a[j] - 'a'];
   			}
   		}
//    		
   		// for(int k=0;k<26;k++){
   			// if(fre[k]>max){
   				// max=fre[k];
   			// }
   		// }
   		cout<<n-count<<"\n";
   	}
}