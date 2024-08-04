#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>

using namespace std; 
int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long i,n,t,j;
   	cin>>t;
   	for(i=0;i<t;i++)
   	{
   		 cin>>n;
   		 char a[4*n];
   		 int countA=0,countB=0,countC=0,countD=0;
   		 for(int k=0;k<4*n;k++)
   		 { 
   		 	cin>>a[k];
   		 	if(a[k]=='A'){
   		 		countA++;
   		 	}
   		 	else if(a[k]=='B'){
   		 		countB++;
   		 	}
   		 	else if(a[k]=='C'){
   		 		countC++;
   		 	}
   		 	else if(a[k]=='D'){
   		 		countD++;
   		 	}
   		 }
   		 int maxMark =0;
   		 int div = n;
   		 if(countA>div){
   		 	maxMark+=div;
   		 }
   		 else{
   		 	maxMark+=countA;
   		 }
   		 
   		 if(countB>div){
   		 	maxMark+=div;
   		 }
   		 else{
   		 	maxMark+=countB;
   		 }
   		 
   		 if(countC>div){
   		 	maxMark+=div;
   		 }
   		 else{
   		 	maxMark+=countC;
   		 }
   		 
   		 if(countD>div){
   		 	maxMark+=div;
   		 }
   		 else{
   		 	maxMark+=countD;
   		 }
   		 /*
   		 maxMark+= min(countA,div);
   		 
   		 maxMark+= min(countB,div);
   		 
   		 maxMark+= min(countC,div);
   		 
   		 maxMark+= min(countD,div);
   		 */
   		 cout<<maxMark<<"\n";
   		 
   	} 
   	
}