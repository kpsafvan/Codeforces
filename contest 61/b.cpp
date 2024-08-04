#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long i,n,t,j,p;
    cin>>t;
   	for(i=0;i<t;i++)
   	{
   		 cin>>n;
   		 int a[n]; 
   		 double largeOdd = 0,indexOdd=0,largeEven = 0,indexEven=0,flag1=1;;
   		 for(int k=0;k<n;k++){
   		 	cin>>a[k];
   		 }
   		 
   		 sort(a,a+n);
   		 
   		 for(int k=n-1;k>=0;k--){
   		 	if(a[k]%2!=0){
   		 		largeOdd=a[k]; 
   		 		break;
   		 	}
   		 	if(k==0){
   		 		flag1=0;
   		 	}
   		 }
   		 
   		 if(flag1==0){
   		 	cout<<"0"<<"\n";
   		 	continue;
   		 }
   		 
   		 // cout<<a[0];
   		 int operation =0,flag=0;
   		 
   		 for(int k=0;k<n;k++){ 
   		 	if(a[k] % 2 == 0)
   		 	{
   		 		if(a[k] < largeOdd){
   		 			operation++;
   		 			largeOdd = a[k] + largeOdd;
   		 		}
   		 		else{
   		 			if(flag==0){
   		 				operation++;
   		 				flag=1;
   		 			}
   		 			operation++;
   		 			largeOdd = a[k] + largeOdd;
   		 		}
   		 		
   		 	}
   		 }
   		 
   		 cout<<operation<<"\n";
   		 /*
   		 int operationEven =0,flagEven=0;
   		 for(int k=0;k<n;k++){
   		 	if(k==indexEven){
   		 		continue;
   		 	}
   		 	if(a[k] % 2 != 0)
   		 	{
   		 		if(a[k] < a[indexEven]){
   		 			operationEven++;
   		 		}
   		 		else{
   		 			if(flagEven==0){
   		 				operationEven++;
   		 				flagEven=1;
   		 			}
   		 			operationEven++;
   		 		}
   		 		
   		 	}
   		 }*/
	}
}