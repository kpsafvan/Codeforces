#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    int i,t;
   	cin>>t;
    int k,j,n;
	for(i =0;i<t;i++)
	{
		cin>>n;	
		int a[n];
		for(j=0;j<n;j++)
		{
			cin>>a[j];
		}
		int score=0,cur=0;
		for(j=n-1;j>=0;j--)
		{
			if(j+a[j]<n)
			a[j]+=a[a[j]+j];
			if(a[j]>score)
			score=a[j];
		}
		cout<<score<<"\n";
	}
}	
