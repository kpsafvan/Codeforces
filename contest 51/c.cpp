#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
int main()
{
    int i,t,j,k;
	int n;
	cin>>t;
	for(i=0;i<t;i++)
	{
		char a[8][8];
		for(j=0;j<8;j++)
		{
			for(k=0;k<8;k++)
			{
				cin>>a[j][k];
			}
		}
		int val1,val2;
		for(j=0;j<8;j++)
		{
			int sum=0;
			for(k=0;k<8;k++)
			{
				if(a[j][k]=='#')
				{
					sum++;
					val1=k;
				}
			}
			if(sum==1&&((j>0)&&(j<7)))
			{
				if(a[j+1][val1+1]=='#'&&(a[j-1][val1-1]=='#')&&(a[j+1][val1-1]=='#')&&(a[j-1][val1+1]=='#'))
				{
					cout<<j+1<<" "<<val1+1<<"\n";
					//val1=j;
					break;
				}
				
			}
		}/*
		for(j=0;j<8;j++)
		{
			int sum=0;
			for(k=0;k<8;k++)
			{
				if(a[k][j]=='#')
				{
					sum++;
					val1=k;
				}
			}
			if(sum==1&&((j>0)&&(j<7)))
			{
				val2=j;
				break;
			}
		}*/
	//	cout<<++val1<<" "<<++val2<<"\n";
	}
}	
