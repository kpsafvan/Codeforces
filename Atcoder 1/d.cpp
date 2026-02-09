#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<unordered_set>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    std::unordered_set<int> hs;
 
    long i,t;
   	cin>>t;
   	//sort the number, as many digits as the largest
   	//start with largest, that count in the place, move so on
   	//handle if the value is 9 till next
   	for(i=0;i<t;i++)
   	{
   		long n,m,h;
   		cin>>n ;
   		int a[n]; 
   		for(int j=0;j<n;j++){
   			cin>>a[j]; 
   		}
   		char b[2*n];
   		for(int j=0;j<2*n;j++){
   			b[j] = '0';
   		} 
   		
   		sort(a,a+n);
   		
   		cout<<"\n";
   	}
}