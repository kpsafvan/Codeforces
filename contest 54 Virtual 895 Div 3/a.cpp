#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,n,t,j,m,l,h,a,b,c;
   	cin>>t;
 float sol;
   	string s ;
   	for(j=0;j<t;j++){
		cin>>a>>b>>c;
		sol=ceil(ceil((abs(a-b))/(2*c)));
		cout<<sol;
		cout<<"\n";
		
	}	
}