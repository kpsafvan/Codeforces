#include<iostream>
#include<math.h>
using namespace std; 
int main()
{
    int t;
   	cin>>t;
   	while(t--)
  		{
  			int n,k;
   			cin>>n>>k;
   				int num=n-(n%k);
   				num+=min(k/2,n%k);
   				cout<<num<<"\n";
   				
   			
		}
}	