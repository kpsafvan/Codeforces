#include<iostream>
#include<cmath>
using namespace std; 
int main()
{
    long long h,i,k,t,g,j; 
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
	
	
 return 0;
	
}	
