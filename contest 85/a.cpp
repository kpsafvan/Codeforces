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
   		int l,val;
   		cin>>l;
   		for(int j=2;j<l+2;j++){
   			cout<<j*j<<" ";
   		}
   		cout<<"\n";
   	}
}