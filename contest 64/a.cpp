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
   		 cin>>n>>m;
   		 string word;
   		 int val=0,length=0;
   		 for(int y=0;y<n;y++)
   		 {
   		 	cin>>word;
   		 	//cout<<word<<word.length()<<"\n";
   		 	length+=word.length();
   		 	if(length<=m)
   		 	{
   		 		val++;
   		 	}
   		 }
   		 cout<<val<<"\n";
   	}
}