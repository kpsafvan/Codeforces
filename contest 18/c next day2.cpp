#include<iostream>
#include<algorithm>
using namespace std; 
int find(int a[],int n,int r)
{
	int num=1;
	for(int y=0;y<n;y++)
	{
		if((a[y]==r)&&(y==n-1))
		{
		num--;
		}
		if((a[y]==r)&&(y==0))
		{
		num--;
		}
		 if(a[y]==r)
		{
			num++;
		}	
		
	}
	return num;
}
int main()
{
    int i,t;
   	cin>>t;
   	int  n,k,j;
	for(i =0;i<t;i++)
	{
			cin>>n;
			int a[n],b[n];
			for(k=0;k<n;k++)
			{
				cin>>a[k];
				b[k]=a[k];
			}
			int flag=1,k=0,size=n;
			while(flag)
			{
				if(a[k]==a[k+1])
				{
					size--;
					for(j=k+1;j<size;j++)
					a[j]=a[j+1];
				}
				else 
				k++;
				if(k==size-1)
				break;
				
			}
		
			int small,result=n;
			for(k=0;k<size;k++)
			{
				small=find(a,size,a[k]);
				
				if(small<result)
				result=small;
				
			}
			cout<<result<<"\n";
		
			
	}
}