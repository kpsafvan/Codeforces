#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long i,n,t,j,p;
   	cin>>t;
   	float px,py,ax,ay,bx,by;
   	for(i=0;i<t;i++){
   		cin>>px>>py;
   		cin>>ax>>ay;
   		cin>>bx>>by;
   		cout<<ax/px<<"\n";
	}
}