#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,t,j;
   	cin>>t;
   	int q=0,w=0,e=0,flage=0,flagq=0,flagw=0;
	for(i =0;i<t;i++)
	{
		string a;
		cin>>a;
		int n=a.size();
		if(a[0]=='A')
		{
			q=0;w=0;e=0;flage=1;flagq=1;flagw=1;
			for(j=0;j<n;j++)
			{
				if(a[j]=='A')
				{
					q++;
					w++;
					e++;
				}
				else if(a[j]=='B')
				{
					q++;
					w--;
					e--;
				}	
				else
				{
					q--;
					w++;
					e--;
				}
				if(q<0)
				flagq=0;
				if(w<0)
				flagw=0;
				if(e<0)
				flage=0;
			}
		}
		else if(a[0]=='B')
		{
			q=0;w=0;e=0;flage=1;flagq=1;flagw=1;
			for(j=0;j<n;j++)
			{
				if(a[j]=='B')
				{
					q++;
					w++;
					e++;
				}
				else if(a[j]=='A')
				{
					q++;
					w--;
					e--;
				}	
				else
				{
					q--;
					w++;
					e--;
				}
				if(q<0)
				flagq=0;
				if(w<0)
				flagw=0;
				if(e<0)
				flage=0;
			}
			
		}
		else if(a[0]=='C')
		{
			q=0;w=0;e=0;flage=1;flagq=1;flagw=1;
			for(j=0;j<n;j++)
			{
				if(a[j]=='C')
				{
					q++;
					w++;
					e++;
				}
				else if(a[j]=='B')
				{
					q++;
					w--;
					e--;
				}	
				else
				{
					q--;
					w++;
					e--;
				}
				if(q<0)
				flagq=0;
				if(w<0)
				flagw=0;
				if(e<0)
				flage=0;
			}
			
		}
		if((q==0&&flagq)||(w==0&&flagw)||(e==0&&flage))
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}	
}