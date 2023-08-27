#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,n,t,j;
   	cin>>t;
  
   	for(i =0;i<t;i++)
	{
		cin>>n;
		long long a[n],b[n],c[n],aa[n],ab[n];
		for(j=0;j<n;j++)
		{
			cin>>a[j]>>b[j];
		}
		
		for(j=0;j<n;j++)
		{
			cin>>c[j];
		}
		aa[0]=a[0]+c[0];
		ab[0]=max(b[0],(aa[0]+((b[0]-a[0]+1)/2)));
		for(j=1;j<n;j++)
		{
			aa[j]=ab[j-1]+(a[j]-b[j-1]+c[j]);
			ab[j]=max(b[j],(aa[j]+(((b[j]-a[j]+1)/2))));
			//cout<<aa[j]<<" "<<ab[j]<<"\n";
		}
		cout<<aa[n-1]<<"\n";
		//cout<<aa[n-1]<<" "<<ab[n-1]<<"\n";
	}	
}