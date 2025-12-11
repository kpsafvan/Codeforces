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
   		long long l,r;
   		cin>>l>>r;
   		long long count = 0;
   		
   		for(long long j=l;j<=r;j++){
	   		if(j % 2 !=0  && j % 3 !=0  && j % 5 !=0  && j % 7 !=0){
	   			count++;
	   		}
	   	}
   		cout<<count<<"\n";
   	}
}