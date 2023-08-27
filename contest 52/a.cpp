#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main()
{
	
	/*ios_base::sync_with_stdio(false);
    cin.tie(NULL);*/
    int i,n,t,j,m,l,h;
   	cin>>t;
   	for(j=0;j<t;j++)
	{
		cin>>n>>h>>m;
		int a[n],b[n];
		for(i=0;i<n;i++)
		{
		cin>>a[i]>>b[i];
		}
		int th=25,tm=61;
		for(i=0;i<n;i++)
		{
			
			int ch,cm;
			if(h<=a[i])
			{
				ch=a[i]-h;
				if(m<=b[i])
				{
					cm=b[i]-m;
				}
				else
				{
					ch--;
					cm=60-(m-b[i]);
				}
				
			}
			else
			{
				ch=24-h+a[i];
				if(m<b[i])
				{
					cm=m-b[i];
				}
				else
				{
			
					ch--;
					cm=60-(m-b[i]);
				}
			}
			if(ch<=th)
			{
				th=ch;
				if(ch==th)
				{
					if(cm<tm)
					{	
					tm=cm;
					}
				}	
				else
				tm=cm;
				
				
			}
		}
		cout<<th<<" "<<tm<<"\n";
	}	
}