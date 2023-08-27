#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
    int i,t,k;
   	cin>>t;
   	int n[t][t];
   	char a;
	for(i =0;i<t;i++)
	{
		for(k=0;k<t;k++)
			{
				cin>>a;
				if(a=='.')
				n[i][k]=0;
				else
				n[i][k]=1;
			}	
	}
	int tot=0;
	for(i =0;i<t;i++)
	{
		int row=0,col=0;
		for(k=0;k<t;k++)
			{
				row+=n[i][k];
				col+=n[k][i];
			}
			if(row>1)
				tot+=(row*(row-1))/2;
			if(col>1)
				tot+=(col*(col-1))/2;
				
	}
	cout<<tot;
}	