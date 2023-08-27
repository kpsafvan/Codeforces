#include<iostream>
#include<algorithm>
using namespace std; 
int check(int a[],int n,int k,int y)
{
	int flag=1,num=0;
	int j=0;
	while(flag)
	{
		if(a[j]==y)
		{
			j++;
		}
		else
		{
			num++;
			j=j+max(k,1);
		}
		if(j>=n)
		flag=0;
	}
	return num;
}
int main()
{
    int i,t;
   	cin>>t;
   	int n,k;
	for(i =0;i<t;i++)
	{
		cin>>n>>k;	
		int a[n],b[n];
		for(int y=0;y<n;y++)
		{
			cin>>a[y];
		}
		sort(b,b+n);
		int s,max=b[n-1],small=n;
		for(int y=1;y<101;y++)
		{
			s=check(a,n,k,y);
			if(s<small)
			small=s;
		}
		cout<<small<<"\n";
	}
}	