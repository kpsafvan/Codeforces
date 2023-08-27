#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t,i,j;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],flag=1;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		for(i=0;i<n-1;i++)
		{
			if((a[i+1]-a[i])>1)
			{
				cout<<"NO\n";
				flag=0;
				break;
			}
		}
		if(flag)
		cout<<"YES\n";
	}
}