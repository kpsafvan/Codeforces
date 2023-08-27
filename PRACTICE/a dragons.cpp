#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    int i,n,s,j;
   	cin>>s>>n;
   	int x[n],y[n];
	for(i =0;i<n;i++)
	{
			cin>>x[i]>>y[i];	
	}
	for(i =0;i<n;i++)
	{
			for(j =0;j<n-1-i;j++)
				{	
					if(x[j]>x[j+1])
					{
						int temp=x[j],temp2=y[j];
						x[j]=x[j+1];
						y[j]=y[j+1];
						x[j+1]=temp;
						y[j+1]=temp2;
					}	
				}	
	}
	
	int flag=1;
	for(i=0;i<n;i++)
	{
		if(s>x[i])
		{
			s+=y[i];
			
		}
		else
		{
			cout<<"NO";
			flag=0;
			break;
			
		}
	}
	if(flag)
	cout<<"YES";
}	