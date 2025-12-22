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
   		int l,a,b,n,k,count = 0,max = 0;
   		cin>>l>>a>>b;
   		int c[l]; 
   		for(int j=0;j<l;j++){
   			c[j] = j;
   		}
   		while(true){
   			if(c[(a+(count*b)) % l] > max){
   				max = c[(a+(count*b)) % l];
   			}
   			if(c[(a+(count*b)) % l] == -1){
   				break;
   			}
   			c[(a+(count*b)) % l] = -1;
   			count++;
   		}
   		 
   		 
   		cout<<max<<"\n";
   	}
}