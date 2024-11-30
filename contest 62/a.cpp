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
   		 int a,b;
   		 cin>>a>>b;
   		 int small = min(a,b);
   		 for(j=small;j<=1000001;j++)
   		 {
   		 	if(j%a==j%b)
   		 	{
   		 		cout<<j<<"\n";
   		 		break;
   		 	}
   		 }
   	}
}