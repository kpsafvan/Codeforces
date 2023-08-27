#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,n,t,j,m;
   	cin>>t;
   	string a;
   	for(i=0;i<t;i++)
	{
		cin>>a;
		int n=a.size(),num=0;
		string b;
		string c;
		for(j=0;j<n;j++)
		{
			int bn=b.size();
			int cn=c.size();
			int ins=0;
			for(int y=0;y<bn;y++)
			{
				if(b[y]==a[j])
				{
					ins=1;
					break;
				}
			}
			if(ins==1)
			{
				for(int y=0;y<cn;y++)
				{
					if(c[y]==a[j])
					{
						ins=2;
						break;
					}
				}
				if(ins==1)
				c.append(a,j,1);
			}
			else
			{
				b.append(a,j,1);
			}
		}
		cout<<(b.size()+c.size())/2<<"\n";
	}
}		