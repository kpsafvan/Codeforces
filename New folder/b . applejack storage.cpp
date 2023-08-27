#include<iostream>
#include<string.h>
using namespace std; 
int check(int a[],int size)
{

     for(int c=0;c<size;c++)
     {
     	for(int k=0;k<size;k++)
     	{
     		if(a[c]<a[k])
     		{
     			int temp=a[c];
     			a[c]=a[k];
     			a[k]=temp;
     		}
     	}
     }
     for(int c=0;c<size;c++)
    cout<<a[c];
	for(int c=0;c<(size-4);c++)
	{
		if(a[c]==a[c+3])
		{
			for(int k=1;k<size-1;k++)
			{
				if((k<(c-1))||(k>(c+3)))
				{
					if(a[k]==a[k-1])
					{
						for(int l=0;l<size-2;l++)
						{
							if(((l<(c-1))||(l>(c+3)))&&(l!=k)&&(l!=(k-1)))
							 {int y=l+1;
							  if(((y<(c-1))||(y>(c+3)))&&(y!=k)&&(y!=(k-1)))
								    {
								  	if(a[l]==a[y])
							 			return 1;
								 	}	 
							}
						}
					}
				}
			}
		}
	}			
	return 0;
}

int main()
{
      int n,i,q,size;
	cin>>n;
	int a[100000];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	size=n;
	cin>>q;
	float d[q];
	char  w[q];
	for(i=0;i<q;i++)
	{
		cin>>w[i];
		cin>>d[i];
	}
	for(i=0;i<q;i++)
	{
		if(w[i]=='+')
		{
		a[size]=d[i];
		size=size+1;
		}
		else
		{
			for(int c=0;c<size;c++)
			{
				if(a[c]==d[c])
				{
					for(int k=c;k<size-1;k++)
					a[k]=a[k+1];
					size=size-1;
					break;
				}
			}
		}
	
		   for(int c=0;c<size;c++)
    cout<<a[c];
    	cout<<"\n";
			//cout<<check(a,size)<<"\n";
			if(check(a,size)==1)
				{
					cout<<"YES"<<"\n";
				}
			else
				{
					cout<<"NO"<<"\n";
				}	
		
	}	
	
	
}	
