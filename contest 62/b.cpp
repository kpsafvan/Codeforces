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
   	for(i=0;i<t;i++)
   	{
   		 cin>>n>>m>>k;
   		 char s[n];
   		 cin>>s;
   		 long long Zlen=0,PU=0;
   		 for(j=0;j<n;j++)
   		 {
   		 	if(s[j]=='0')
   		 	{
   		 		Zlen++;
   		 		if(Zlen>=m)
   		 		{
   		 			PU++;
   		 			j=j+k-1;
   		 			Zlen=0;
   		 		}
   		 	}
   		 	else
   		 	{
   		 		Zlen=0;
   		 	}
   		 }
   		 cout<<PU<<"\n";
   	}
}