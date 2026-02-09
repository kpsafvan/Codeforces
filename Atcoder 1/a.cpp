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
	int n;
	cin>>n;	
   	if((n/100) == ((n%100)/10) && ((n%100)/10) == (n%10)){
   		cout<<"YES\n";
   	}
   	else{
   		cout<<"NO\n";
   	}
   	
}
