#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,n,t,j,m,l,h,b,c;
   	cin>>t;
   	for(int i=0;i<t;i++){
   		cin>>n;
	 	int a[n][2];
	   	for(j=0;j<n;j++){
			cin>>a[j][0]>>a[j][1];
		}	
		//Solution
		int lift=1;
		for(j=1;j<n;j++){
			if(a[0][0]>a[j][0]){
				continue;
			}
			else{
				if(a[0][1]>a[j][1]){
					continue;
				}
				else{
					lift=-1;
					break;
				}
			}
		}
		if(lift==1){
			cout<<a[0][j]
		}
	cout<<a[0][0]<<"\n";
	}
}