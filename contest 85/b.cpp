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
   		long max = 0;
   		long a[l];
   		for(int j=0;j<l;j++){
   			cin>>a[j];
   			if(a[j] > max){
   				max=a[j];
   			}
   		}
   		cout<<(long)(max*l)<<"\n";
   	}
}