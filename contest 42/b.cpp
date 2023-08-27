#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,n,t,j,m;
   	cin>>t;
   	string a,b;
   	for(i=0;i<t;i++)
	{
		cin>>a;
		int odd=0,num=(a.size())/2;
		if(a.size()%2==0)
		odd=0;
		else 
		odd=1;
		for(j=0;j<a.size()-1;j++)
		{
			int rep=0;
			for(int y=j+1;y<a.size();y++)
			{
				if(a[j]==a[y])
				{
					rep++;
					if(rep<3)
					continue;
					else if(rep==3)
					{
						if(odd)
						{
							odd=0;
							continue;
						}
						else
						num--;
					}
					
				}
			}
		}
		
		
	}		
}