#include<iostream>
#include<string.h>
#include<math.h>
using namespace std; 
int main()
{
    int i,t;
   	cin>>t;
   	int s=0,x1,x2,y1,y2;
	for(i =0;i<t;i++)
	{
			cin>>x1>>y1>>x2>>y2;
			if((x1==x2)||(y1==y2))
			{
				s=abs(x1-x2)+abs(y1-y1);
			}
			else
			{
				s=abs(x1-x2)+abs(y1-y2)+2;
			}
	 cout<<s<<"\n"	;		
	}
}	