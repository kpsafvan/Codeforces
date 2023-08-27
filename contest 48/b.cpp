#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,n,q,j,m,k;
   	cin>>n>>q;
   	int p[n],a,b,c,d,x,y;
   	
	for(i=0;i<n;i++)
	{
		cin>>p[i];
	}
	sort(p,p+n);
	for(i=0;i<q;i++)
	{
		cin>>x>>y;
		//cout<<p[0];
		int sum=0;
		//cout<<p[n-1]<<" ";
		for(j=n-x;j<(n-x)+y;j++)
		{
			sum+=p[j];
			//cout<<p[j]<<" ";
		}
		cout<<sum<<"\n";
	}
}