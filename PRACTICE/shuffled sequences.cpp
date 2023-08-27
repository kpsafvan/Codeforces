#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,t;
   	cin>>t;
   	int x[t];
	for(i =0;i<t;i++)
	{
			cin>>x[i];
	}
	sort(x,x+t);

	int flag=1;
	for(i =0;i<t-2;i++)
	{
		if(x[i]==x[i+2])
		{
			flag=0;
			cout<<"NO";
			break;
		}
	}
	if(flag)
		{
			int a[t],b[t],n=0,m=0;
			for(i=0;i<t-1;i++)
			{
				if(x[i]==x[i+1])
				{
					a[n]=x[i];
					b[m]=x[i+1];
					i++;
					n++;
					m++;
				}
				else
				{
					a[n]=x[i];
					n++;
				}
			}
			if(n+m<t)
			{
				a[n]=x[t-1];
				n++;
			}		
			cout<<"YES"<<"\n"<<n<<"\n";
			for(i=0;i<n;i++)
			cout<<a[i]<<" ";
			cout<<"\n"<<m<<"\n";
			for(i=m-1;i>=0;i--)
			cout<<b[i]<<" ";
		}
}	