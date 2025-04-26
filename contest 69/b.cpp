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
   		int n,x;
   		cin>>n>>x;
   		int a[n];
   		// if(x>0)
   			 // x--;
   		for(int j=0;j<n;j++){
   			a[j]=j;
   		}
    	// if(x<n)
    	// {	a[x]=n-1;
    		// for(int j=x+1;j<n;j++){
    			// a[j]=j-1;
    		// }
    	// }	
   		 // if(x>0)
   			 // x--;
   			 if(x==n)
   			 	x--;
   			 n--;
   			 
   		int temp=a[x];
   		a[x] = a[n];
   		a[n]= temp;
   		n++;
   		// if(x>0)
   			// x++; 
   		// temp=a[x];
   		// a[x] = a[(n-1)];
   		// a[(n-1)]= temp;
   		
   		for(int j=0;j<n;j++){
   			cout<<a[j]<<" ";
   		}
   		
   		cout<<"\n";
   		
   	}
}