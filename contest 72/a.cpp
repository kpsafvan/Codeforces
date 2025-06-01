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
   		int n,m,p,q;
   		cin>>n>>m>>p>>q;
   		// int a[n];
   		//cout<<(n/p)*q<<" "<<n%p<<"\n";
   		if((n/p)*q <= m && (n/p)*q >= m -q)
   			cout<<"YES\n";
   		else
   			cout<<"NO\n";
   		// for(int j=0;j<n;j++){
   			// cin>>a[j];
//    			
   		// }
   		
   	}
}