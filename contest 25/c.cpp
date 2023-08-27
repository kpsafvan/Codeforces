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
		for(j=0;j<n;j++)
		{
			k=j;
			cur=0;
			while(k<n)
			{
				cur+=a[k];
				k+=a[k];
			}
			if(cur>score)
			score=cur;
		}
		cout<<score<<"\n";
	}
}	
