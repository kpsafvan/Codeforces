#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
#include <unordered_set>
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
   		
   		a[0] = abs(a[0]);
   		
   		int gCount =0;
   		int lCount =0;
   		
   		for(int i=1;i<n;i++){
   			if(a[0] <= abs(a[i]))
   				gCount++;	
   			if(-a[0] >= - abs(a[i]))
   				lCount++;
   		}
   		int reduce = n %2 == 0 ? 1 : 0;
   		if(gCount >= ((n)/2) -reduce)
   			cout<<"YES"<<"\n";
   		else if(lCount >= ((n)/2)-reduce)
   			cout<<"YES\n";
   		else
   			cout<<"NO\n";
   		//cout<<lCount<<" "<<gCount<<"\n";
   		
   		//cout<<"\n";
   		
   	}
}