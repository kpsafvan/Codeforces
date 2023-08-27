#include<iostream>
#include<cmath>
using namespace std; 
int main()
{
    unsigned long long int score=0,t,sa=1000000000,sb=1000000000; 
   	cin>>t;
   	int i,j,n[t],a[t][50],b[t][50];
   	for(i=0;i<t;i++)
	{
		cin>>n[i];
		for(j=0;j<n[i];j++)
		cin>>a[i][j];
		for(j=0;j<n[i];j++)
		cin>>b[i][j];
	}
	for(i =0;i<t;i++)
	{
		sa=1000000000;
		sb=1000000000;
		for(int k=0;k<n[i];k++)
		{
			if(sa>=a[i][k])
			sa=a[i][k];
			if(sb>=b[i][k])
			sb=b[i][k];
		}
		for(j=0;j<n[i];j++)
		{
			
			if((a[i][j]>sa)&&(b[i][j]>sb))
			{
				if((a[i][j]-sa)<=(b[i][j]-sb))
				{
					score=score+(a[i][j]-sa);
					b[i][j]=b[i][j]-(a[i][j]-sa);
					score=score+(b[i][j]-sb);			
				}
				else if((a[i][j]-sa)>=(b[i][j]-sb))
				{
					score=score+(b[i][j]-sb);
					a[i][j]=a[i][j]-(b[i][j]-sb);
					score=score+(a[i][j]-sa);		
				}
				
			}
			else if(a[i][j]>sa)
			{
				score=score+(a[i][j]-sa);
			}
			else if(b[i][j]>sb)
			{
				score=score+(b[i][j]-sb);
			}
		}
		cout<<score<<"\n";
		//cout<<sa<<" "<<sb<<"\n";
		score=0;
	}
	//cout<<sa<<sb;
   
	
}	
