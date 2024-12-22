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
   		 long long a[n],oddSum=0,evenSum=0;
   		 int evenCount=((n+1)/2),oddCount=n/2;
   		 for(int y=0;y<n;y++)
   		 {
   		 	cin>>a[y];
   		 	if(y%2==0)
   		 	{
   		 		evenSum+=a[y];
   		 	}
   		 	else
   		 	{
   		 		oddSum+=a[y];
   		 	}
   		 }
   		 
   		 float even = evenSum/evenCount,odd = oddSum/oddCount;
   		 if((even==odd)&&(evenSum%evenCount==0&&oddSum%oddCount==0)
   		 	&&(evenSum>=evenCount&&oddSum>=oddCount))
   		 {
   		 	cout<<"YES"<<"\n";	
   		 }
   		 else
   		 {
   		 	cout<<"NO"<<"\n";	
   		 }
   		 
   	}
}