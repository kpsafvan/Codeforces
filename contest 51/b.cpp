#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
    int i,n,q,j,m,t;
   	cin>>t;
   	for(q=0;q<t;q++)
	{
	 	cin>>n;
	 	int a[n];
	   	for(i=0;i<n;i++)
	   	{
	   		cin>>a[i];
	   	}
	   	for(i=1;i<=n;i++)
	   	{
	   		int mval =0 ,val = 0 , ival =0;
		 	for(j=0;j<n;j++)
		   	{
		   		if(a[j]!=i)
		   		{
		   			if(val >0)
		   			ival++;
		   		}
		   		else
		   		{
		   			if(ival%2==0)
		   			{
		   				val++;
		   				if(val>mval)
		   				mval=val;
		   			}
		   			else
		   			{
		   				ival++;
		   			}
		   		}
		   		
		   	}
		   	cout<<mval<<" ";
	   	}
	   	cout<<"\n";
	 
	}

}