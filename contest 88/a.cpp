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
 	
    long long i,t,w;
   	cin>>t;
   	for(i=0;i<t;i++)
   	{
   		int n;
   		cin>>n>>w;
   		long num = n/w;
   		num = num*(w-1);
   		num += n%w;
   		cout<<num<<"\n";
   	}
}
