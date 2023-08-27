#include<iostream>
using namespace std; 
int main()
{
	int i,t,flag=0;
	cin>>t;
	int a[t][4];
	for(i=0;i<t;i++)
	cin>>a[i][0]>>a[i][1]>>a[i][2]>>a[i][3];
	for(i=0;i<t;i++)
	{
		for(int k=a[i][1];k>=a[i][0];k--)
		{
			for(int s=a[i][2];s>=a[i][1];s--)
			{
				if(s+k>a[i][3]){	
					for(int d=a[i][3];d>=a[i][2];d--)
					{
						if(((s+d)>k)&&((k+d)>s)&&((k+s)>d))
						{
							cout<<k<<" "<<s<<" "<<d<<"\n";
							flag=1;
						}
						if(flag==1)
						break;
					}
				}	
				if(flag==1)
					break;
			}
			if(flag==1)
			break;
		}
		flag=0;
	}
}	
