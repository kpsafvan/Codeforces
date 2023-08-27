#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,t,j;
   	cin>>t;
	for(i =0;i<t;i++)
	{
		int n;
		cin>>n;
		int a[n];
		for(j=0;j<n;j++)
		cin>>a[j];
		int c=0;
		for(j=0;j<n-1;j++)
		{
			if(max(a[j],a[j+1])/min(a[j],a[j+1])>2)
			{
				int h=0,flag=1,f=min(a[j],a[j+1]),g=max(a[j],a[j+1]);
				cout<<g;
				while(flag)
				{
					if(f<g)
					{
						g=g/2;
						h++;
					}
					else
					{
						break;
					}
				}
				//c+=log2(g-f);
				c+=h;	
			}
		}
	//	cout<<sqrt(c)<<"\n";		
		cout<<c<<"\n";		
	}	
}