#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>

using namespace std; 
int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long i,n,t,j,m,k;
   	cin>>t;
   	for(k=0;k<t;k++)
   	{
   		 cin>>n>>m>>k;
   		 
   		 long long a[m],q[k],sumA=0,sumQ=0;
   		 
   		 for(j=0;j<m;j++)
   		 {
   		 	cin>>a[j];
   		 }
   		 
   		 for(j=0;j<k;j++)
   		 {
   		 	cin>>q[j];
   		 }
   		 for(j=0;j<m;j++)
   		 {
   		 	int val=1;
   		 	for(int y=0;y<k;y++)
   		 	{
   		 		if(a[j]==q[y])
   		 		{
   		 			continue;
   		 		}
   		 		if(a[j]!=q[y] && y== k-1)
   		 		{
   		 			val =0;
   		 		}
   		 	}
   		 	cout<<val;
   		}
   		 
   		 
   		cout<<"\n";
   	}
}