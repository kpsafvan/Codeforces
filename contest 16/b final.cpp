#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    int i,t;
   	cin>>t;
   	int n,k;
	for(i =0;i<t;i++)
	{
			cin>>n>>k;
			int s=(n)*(k);	
			int a[s];
			long long m=0;
			for(int y=1;y<=s;y++)
			{
				cin>>a[y];
			}		
			int x=0;
			n=n/2;
			n++;
					int y=s+1;
					while(x<k)
					{
						y=y-(n);
						m+=a[y];			
						x++;
					}
			cout<<m<<"\n";
	}
}