#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>

using namespace std; 
int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long i,n,t,j,m;
   	cin>>t;
   	for(i=0;i<t;i++)
   	{
   		 int k;
   		 cin>>n;
   		 int a[n],b[n];
   		 for(int y=0;y<n;y++)
   		 {
   		 	cin>>a[y];
   		 }
   		 int val =0;
   		 for(int y=0;y<n;y++)
   		 {
   		 	cin>>b[y];
   		 	if(y>0)
   		 	{
   		 		if(a[y-1]-b[y]>0)
   		 		{
   		 			val+=a[y-1]-b[y];
   		 		}
   		 	}
   		 }
   		 val+=a[n-1];
   		 
   		 cout<<val<<"\n";
   	}
}