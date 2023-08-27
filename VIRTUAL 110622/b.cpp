#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,n,t,j,m,k;
    cin>>t;
   	for(i=0;i<t;i++)
   	{
   		cin>>n;
   		int a[n],b[n],flag=1,val1,val2;
   		for(j=0;j<n;j++)
   		cin>>a[j];
   		for(j=0;j<n;j++)
   		cin>>b[j];
   		val1=1000000000;
   		for(j=0;j<n;j++)
   		{
   			val2=a[j]-b[j];
   			if((val2<val1)&&(b[j]!=0))
   			{
   				val1=val2;
   			}
   		}//val1 chas smallerst value
   		//cout<<val1;
   		if(val1<0)
   		flag=0;
   		for(j=0;j<n;j++)
   		{
   			val2=a[j]-b[j];
   			if(val2!=val1)
   			{
   				if((val2<val1)&&(b[j]==0))
   				continue;
   				flag=0;
   				break;
   			}
   		}
   		
   		
   		if(flag)
   		cout<<"YES\n";
   		else
   		cout<<"NO\n";
   		
   	}
}