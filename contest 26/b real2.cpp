#include<iostream>
#include<string>
using namespace std; 
int main()
{
    int j,i,t,n,x;
   	cin>>t;

	for(i =0;i<t;i++)
	{
		cin>>n>>x;
		int *a;
		a = (int*) malloc(1000*sizeof(int));
		for(j=0;j<n;j++)
		{
			cin>>a[j];
		}
		int flag=1,s=0,flagg=0;;
		while((flag)&&(s<n))
		{
			if(a[s]%x!=0)
			{
				break;
				flag=0;
			}
			else
			{
				if((n+x>1000)||(flagg))
				{
					a = (int *)realloc (a,(n+x)*sizeof(int));
					flagg=1;
					cout<<"A";
				}	
				for(j=n;j<n+x;j++)
				{
					a[j]=a[s]/x;
				}
				n+=x;
			}
			s++;
		}
		int sum=0;
		for(j=0;j<n;j++)
		{
			sum+=a[j];
		}
		cout<<sum<<"\n";
	}
}	
