#include<iostream>
#include<math.h>
using namespace std; 
int main()
{
    int j,i,t;
   	cin>>t;
   	for(i=0;i<t;i++)
   	{
   		int n;
   		cin>>n;
   		int a[n];
   		for(j=0;j<n;j++)
   		{
   			cin>>a[j];
   		}
   		//cout<<n;
   		int flag=1,s=0;
   		while(flag)
   		{
   			if(a[s]!=a[s+1])
   			{
   				a[s]+=a[s+1];
   				n--;
   				for(int y=s+1;y<n;y++)
   				{
   					a[y]=a[y+1];
   				}
  			}
  			s++;
  			if(s==(n-1))
   			s=0;
   		
   			for(int y=0;y<n-1;y++)
   			{
   				if(a[y]==a[y+1])
   				{
   					flag=0;
   				}
   				else 
   				{
   					flag=1;
   					break;
   				}			
   			}
   			if(n==1)
   			flag=0;
   		}
   	//	for(j=0;j<n;j++)
   	//	cout<<a[j]<<" ";
   	//	cout<<"\n";
   		cout<<n<<"\n" ;
   	}
   
}	