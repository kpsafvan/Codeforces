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
			for(int y=0;y<s;y++)
			{
				cin>>a[y];
			}
			
			int x=0;
		//	if((n%2!=0)||(k%2!=0))
			
			
			/*if((n%2==0)&&(k%2==0))
			n++;
			else if(n<3)
			n++;*/
			//if(n<3)
			//n++;
			
			n=n/2+1;
			
					int y=s;
					while(x<k)
					{
						y=y-(n);
						m+=a[y];
					//	cout<<a[y]<<" ";
						
						x++;
					}
				
			//cout<<"\n";
			cout<<m<<"\n";
	}
}	