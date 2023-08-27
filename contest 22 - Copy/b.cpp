#include<iostream>
#include<math.h>
using namespace std; 
int main()
{
	int t,i;
   	cin>>t;
	for(i =0;i<t;i++)
	{
		long long n,m;
		cin>>n;
		int flag=1,y=1;
		n--;
		while(y)
		{
			n++;
			m=n;
			while(m>0)
			{
				if(m%10>0)
				{
					if(n%(m%10)==0)
					{
						m=m/10;
					}
					else
					{
						flag=0;
						break;
					}	
				}
				else
					m=m/10;	
			}
			if(flag)
			{
				cout<<n<<"\n";
				
				break;
			}
			else
			flag=1;
			
		}
		
	}
}	
