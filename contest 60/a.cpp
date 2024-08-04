#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>

using namespace std; 
int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long i,n,t,j;
   	cin>>t;
   	for(i=0;i<t;i++){
   		string x,y;
   		long long a,b;
   		cin>>a>>b;
   		cin>>x>>y;
   		int val=0;
   		bool status =false;
   		while(x.length()<=202){
   			status = x.find(y)!= string::npos;
   			if(status){
   				cout<<val;
   				break;
   			}
   			x=x+x;
   			val++;
   			
   			//cout<<x<<"\n";
   		}
   		if(!status)
   		{
   			cout<<"-1";
   		}
   		cout<<"\n";
   	//	cout<<x<<"\n"; 
	}
}