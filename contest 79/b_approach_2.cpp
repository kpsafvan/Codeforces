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
   		int n,x,y;
   		cin>>n>>x>>y; 
   		char a[n];
   		int count =0;
   		x = std::abs(x);
   		y = std::abs(y);
   		for(int j=0;j<n;j++){
   			cin>>a[j];
   			if(a[j] == '4'){
   				if(x>y)
   					x--;
   				else
   					y--;
   			}
   			if(a[j] == '8'){
   				x--;
   				y--;
   			}
   		}
		if(x > 0 || y > 0){
			cout<<"NO\n";
		}
		else{
			cout<<"YES\n";
		}
   	}
}