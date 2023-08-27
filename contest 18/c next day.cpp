#include<iostream>
#include<algorithm>
using namespace std; 
int find(int a[],int n,int r)
{
	int num=0,p=-1;
	for(int y=0;y<n-1;y++)
	{
		if(y==0&&a[y]==r)
		{
			num=1;
			p=0;	
			continue;
		}
		else if(y==0)
		num++;
		if(a[y]==r)
		{
			if(y-p>1)
			num++;
			p=y;
		}
		else if(y==n-1)
		num++;
		
		
	}
	return num;
}
int main()
{
    int i,t;
   	cin>>t;
   	int  n,k;
	for(i =0;i<t;i++)
	{
			cin>>n;
			int a[n],b[n];
			for(k=0;k<n;k++)
			{
				cin>>a[k];
				b[k]=a[k];
			}
			sort(b,b+n);
			if(b[0]==b[n-1])
			{
				cout<<"0\n";
				continue;
			}
			int s=0,result=n,small;
			for(k=0;k<n;k++)
			{
				if(b[k]!=s)
				{
					small=find(a,n,b[k]);
					s=b[k];
					if(small<result)
					result=small;
				}
				
			}
			cout<<result<<"\n";
			
			
	}
}