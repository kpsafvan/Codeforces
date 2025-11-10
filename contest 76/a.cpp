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
   		int n;
   		cin>>n;
   		int a[n];
   		for(int j=0;j<n;j++){
   			cin>>a[j];
   		}
   		
   		sort(a,a+n);
   		bool flag = true;
   		for(int j=0;j<n;j++){
   			if( (j%2) != 0 && j < (n-1) ){
   				if(a[j] != a[j + 1]){
   					flag = false;
   				}
   			}
   		}
   		if(flag == true){
   			cout<<"YES";
   		}
   		else{
   			cout<<"NO";
   		}
   		cout<<"\n";
   	}
}