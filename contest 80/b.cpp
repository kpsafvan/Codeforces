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
   		int n,k;
   		cin>>n;
   		int r[n],b[n];
   		
   		for(int j=0;j<n;j++){
	   		cin>>r[j];	
	   	}
	   	
	   	k = 0;
	   	int lk = 0;
   		for(int j=0;j<n;j++){
	   		cin>>b[j];	
	   		if(j == n-1)
	   			continue;
	   		//choosing the better option
	   		if( abs(k - r[j]) > abs(b[j] - k)) {
	   			k = abs(k - r[j]);
	   		}
	   		else{
	   			k = abs(b[j] - k);
	   		}
	   	}
	   	
		// if( (k - r[n-1]) > (b[n-1] - k)) {
   			// k = k - r[n-1];
   		// }
   		// else{
   			// k = b[n-1] - k;
   		// }

		for(int j=n-1;j>=0;j--){
			
		}

   		cout<<abs(k)<<"\n";
   	}
}