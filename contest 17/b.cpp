#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    int i,t;
   	cin>>t;
   	int  n,k;
   	long long p=0;
	for(i =0;i<t;i++)
	{
			cin>>n;
			int a[n],s1=0,s2=0,pos;
			for(k=0;k<n;k++)
			{
				cin>>a[k];
				if(s1<=a[k])
				{
					s1=a[k];
					pos=k;
				}	
			}
			for(k=0;k<n;k++)
			{
				if((pos!=k)&&(s2<=a[k]))
				{
					s2=a[k];
				}	
			}
			cout<<s1<<" "<<s2<<"\n";
			for(k=0;k<n;k++)
			{
				if(a[k]<s1)
				{
					p+=s2-a[k];
				cout<<s2-a[k]<<" ";
				}
			}
			cout<<p;
			while(1)
			{
				if(s1%(n-1)==0)
				{
					p+=s1-a[pos];
					break;
				}
				else
				s1++;
			}
			cout<<p<<"\n";
	}
}	