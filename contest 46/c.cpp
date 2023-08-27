#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,t,j;
	int n;
	cin>>t;
	for(i=0;i<t;i++)
	{
		
		cin>>n;
		int a[n+100000],b[n+100000];
		for(j=0;j<n;j++)
		cin>>a[j];
		for(j=0;j<n;j++)
		cin>>b[j];
		int num=0;
		while(10)
		{
			int k=n-(n/4),suma=0,sumb=0;
			sort(a,a+n,greater<int>());
			sort(b,b+n,greater<int>());
			for(j=0;j<k;j++)
			{
				suma=suma+a[j];
				sumb=sumb+b[j];
			}
			
			//cout<<suma<<" "<<sumb<<"\n";
			if(suma>=sumb)
			{
				break;
			}
			a[n]=100;
			b[n]=0;
			num++;
			n++;	
		}	
		cout<<num<<"\n";
	}
}

	if(k%2==0)
				{
					if(a[k]=='1')
					{
						if(b[k]=='1')
						{
							if()
						}
					}
				}
