#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    int i,t,k;
   	cin>>t;
   	long n[t],a[t][50000];
   	long long sot=0;
   	int flag=1;
	for(i =0;i<t;i++)
	{
			cin>>n[i];
			for(k=0;k<n[i];k++)
			{
				cin>>a[i][k];
			}
			sot=0;
			int e=((n[i]*(n[i]-1))/2)-1;
			for(k=0;k<n[i];k++)
			{
				
				for(int y=0;y<(n[i]-1)-k;y++)
				{
					
					if(a[i][y]>a[i][y+1])
					{
						int temp=a[i][y];
						a[i][y]=a[i][y+1];
						a[i][y+1]=temp;
						sot++;
						if(sot==e)
						{
							flag=0;
							break;
						}
					}
				if(flag==0)
				break;	
				}	
			}
			if(sot>e)
			cout<<"NO"<<"\n";
			else
			cout<<"YES"<<"\n";	
			
	}
	//cout<<a[1][4];
}	