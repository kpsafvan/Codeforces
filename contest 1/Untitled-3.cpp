#include<iostream>
using namespace std; 
int main()
{
    int t,i,k,b,c;
    unsigned long long int m=100000000000000000000; 
    
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
		
		m=a[i][0]*a[i][1]; 
		for(int j=n[i];j>=0;j--)
		{
			c=a[i][0]-j;
			b=a[i][1]+j-n[i];
			if((c>=a[i][2])&&(b>=a[i][3]))
			{
				if(m>(c*b))
				m=c*b;
			}
			if(b<a[i][3])
			break;
			
		}
		cout<<m<<"\n";
	}
	
	
	
}	


