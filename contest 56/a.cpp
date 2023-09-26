#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,n,t,j,m,l,h,b,c,k;
   	cin>>t;
   	for(int i=0;i<t;i++){
   		cin>>n;
	 	cin>>k;
	 	int a[n];
	 	int flag=0;
		for(j=0;j<n;j++){
			cin>>a[j];
			if(a[j]==k){
				flag=1;
			}
		}
		if(flag){
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
		cout<<"\n";
	}
}