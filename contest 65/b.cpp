#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>

using namespace std; 
int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long i,t,j,m;
   	cin>>t;
   	for(i=0;i<t;i++)
   	{
   		 float n;
   		 float a,b,c;
   		 cin>>n>>a>>b>>c;
		 long long val =0,Sum=a+b+c;
		 // if(n/Sum>3){}
		 val+= 3*(n/(Sum));
		 long long val2 = val,Sum2=(val/3*a)+(val/3*b)+(val/3*c);
		 if(Sum2<n)
		 {
		 	cout<<n-Sum2<<"sd"<<val<<" ";
		 	if((n-Sum2)>=a){
		 		val2+=1;
		 	}		 
		 	else if((n-Sum2)>=a+b) {
		 		val2+=2;
		 	}
		 }
   		 cout<<val2<<"\n";
   	}
}