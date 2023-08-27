#include<iostream>
#include<cmath>
using namespace std; 
int main()
{
    long long minus,h,i,k,t,g,j; 
   	cin>>t;
   	long long a[t][100],b[t][100],n[t];
	for(i =0;i<t;i++)
	{
		cin>>n[i];
		for(k=0;k<n[i];k++)
			{
				cin>>a[i][k];	
				b[i][k]=a[i][k];
			}	
			
	}
	for(i =0;i<t;i++)
	{
		for(h=0;h<n[i]-1;h++)
			{
				
				for(j=h+1;j<n[i];j++)
				{
					if((a[i][j]<0)&&(a[i][h]>0))
					{
						minus=min(abs(a[i][j]),a[i][h]);
						a[i][h]-=minus;
						a[i][j]+=minus;
					}
				}
			}
			for(h=0;h<n[i]-1;h++)
			{
				
				for(j=n[i]-1;j<h;j--)
				{
					if(b[i][h]==0)
				    break;
				    if(b[i][j]==0)
				    continue;
					if((b[i][j]<0)&&(b[i][h]>0))
					{
						minus=min(abs(b[i][j]),b[i][h]);
						b[i][h]-=minus;
						b[i][j]+=minus;
					}
				}
			}
			long long sum1=0,sum2=0;
			for(k=0;k<n[i];k++)
			{
				if(a[i][k]>0)
				sum1=sum1+a[i][k];
				if(b[i][k]>0)
				sum2=sum2+b[i][k];
			}	
			cout<<min(sum1,sum2)<<"\n";
	}
	
 return 0;
	
}	
