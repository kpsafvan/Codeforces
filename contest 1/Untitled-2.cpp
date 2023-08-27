#include<iostream>
using namespace std; 
int main()
{
    int t,i,k;
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
		m=100000000000000000000; 
		int s=(a[i][0]+a[i][1])-n[i];
		for(int j=a[i][2];j<=a[i][0];j++)
		{
			for(unsigned int f=a[i][3];f<=a[i][1];f++)
				{
					if((f+j)==s)
					{
						if((f*j)<m)
						m=f*j;
					}
				}
		}
		cout<<m<<"\n";
	}
	
	
	
}	


