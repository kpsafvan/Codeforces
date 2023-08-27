#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int s[1000000],top=-1;
int pop()
{
	int y=s[top];
	top--;
	return y;
}
void push(int q)
{
	top++;
	s[top]=q;
}
int main()
{
    int i,t,j,n;
   	cin>>t;
   	s[0]=0;
	for(i =0;i<t;i++)
	{
		cin>>n;
		int a[n],x;
		for(j=0;j<n;j++)
		{
			a[j]=0;
			cin>>x;
			push(1);
			if(x==0)
			continue;
			else
			{
				int r=0;
				while(top>=0&&x--)
				{
					int p=pop();
					if(p==0)
					break;
					else
					{
						a[j-r]=1;
					}
					r++;
				}
			}
		}
		for(j=0;j<n;j++)
		{
			cout<<a[j]<<" ";
		}
		cout<<"\n";	
		
	}	
}