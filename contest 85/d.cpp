#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<unordered_set>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    std::unordered_set<int> hs;
 
    long i,t;
   	cin>>t;
   	for(i=0;i<t;i++)
   	{
   		long n,m,h;
   		cin>>n>>m>>h;
   		int a[n];
   		int aa[n];
   		for(int j=0;j<n;j++){
   			cin>>a[j];
   			aa[j] = a[j];
   		}
   		int b,c;
   		hs.clear();//Forgot to put this during contest
   		for(int k=0;k<m;k++){
	   		cin>>b>>c;
	   		--b;  
	   		a[b] = a[b] + c; 
	   		hs.insert(b); 
	   		if(a[b] > h){
	   			for (int value : hs) {
			        a[value] = aa[value];
			        // cout<<value<<"-\n";
			    }
			    hs.clear();
	   		}
   		}
	   		
   		for(int j=0;j<n;j++){
   			cout<<a[j]<<" ";
   		}
   		cout<<"\n";
   	}
}