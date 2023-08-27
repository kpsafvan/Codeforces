#include<iostream>
using namespace std; 
int main()
{
    int t,i,k,c,b;
    
   	cin>>t;
   	int a[t][4],n[t];
	for(i =0;i<t;i++)
	{
		for(k=0;k<4;k++)
		{
			cin>>a[i][k];
		}
		cin>>n[i];
	}
	
	for(i=0;i<t;i++)
	{
		unsigned long long int v=a[i][0]*a[i][1];
		if((n[i]<a[i][0])&&(n[i]<a[i][1]))
			{
				if(a[i][0]-n[i]>=a[i][2])
				v=(a[i][0]-n[i])*a[i][1];
				if(a[i][1]-n[i]>=a[i][3])
				{
					if(((a[i][1]-n[i])*a[i][0])<v)
						v=((a[i][1]-n[i])*a[i][0]);
				}
			}
		
		for(int j=0;j<=n[i];j++)
		{
			c=a[i][0]-j;
			b=a[i][1]+(j-n[i]);
			if((c>=a[i][2])&&(b>=a[i][3]))
			{
				if(v>(c*b))
				v=c*b;
			}
			if(c<a[i][2])
			break;
			
			
		
		}
		for(int j=0;j<=n[i];j++)
		{
			c=a[i][0]+(j-n[i]);
			b=a[i][1]-j;
			if((c>=a[i][2])&&(b>=a[i][3]))
			{
				if(v>(c*b))
				v=c*b;
			}
			if(b<a[i][3])
			break;
			
			
		
		}
		cout<<v<<"\n";
	}
}	
