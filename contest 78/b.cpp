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
   	//approach one - brute force
   	//calculate for each until it reaches b
   	for(i=0;i<t;i++)
   	{
   		float a,b,n;
   		cin>>a>>b>>n; 
   		int count =0,w=0;
   		while(a/(n-w)<b){
   			if((n-w)*b>a){
   				count++;
   				break;
   			}
   			w++;
   		}
		if(b >= a){
			count=0;
		}
		if(count>0){
			count=1;
		}
   		cout<<count+1<<"\n";

   	}
}