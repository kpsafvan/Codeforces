#include<iostream>
#include<math.h>
#include<algorithm>

using namespace std; 
int main()
{
    int i,n,t,j,m;
   	cin>>t;
   	string a;
   	for(i=0;i<t;i++)
	{
		cin>>a;
		int n=a.size(),num=0;
		sort(a.begin(),a.end());
		j=0;
		
		for(j=0;j<n-2;j++)
		{
			if(a[j]==a[j+1]&&a[j+1]==a[j+2])
			num++;
		}
		if(n%2!=0&&num>0)
		{
			num--;
		}
		if(num>n/2)
		num=(n/2)-1;
		cout<<(n/2)-(max(0,num))<<"\n";
	}
}		