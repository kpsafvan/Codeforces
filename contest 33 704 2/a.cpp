#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,t;
   	cin>>t;
	for(i =0;i<t;i++)
	{
		long long a,b,c,n,s;
		cin>>n>>a>>b>>c;
		if(n%a==0||n%b==0||n%c==0)
		s=0;
		s=a-(n-(n/a)*a);
		if(b-(n-(n/b)*b)<s)
		s=b-(n-(n/b)*b);
		if(c-(n-(n/c)*c)<s)
		s=c-(n-(n/c)*c);
		if(n%a==0||n%b==0||n%c==0)
		s=0;
		cout<<s<<"\n";
		
	
		
	}	
}