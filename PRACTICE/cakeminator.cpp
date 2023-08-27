#include<iostream>
#include<math.h>
using namespace std; 
int main()
{
    int r,c,count=0;
    char ch;
   	cin>>r>>c;
   	int a[r][c];
   	for(int i=0;i<r;i++)
   	{
   		for(int j=0;j<c;j++)
   		{
   			cin>>ch;
   			if(ch=='.')
   			a[i][j]=0;
   			else
   			a[i][j]=1;
   		}
   	}
   	for(int i=0;i<r;i++)
   	{
   		int flag=1;
   		for(int y=0;y<c;y++)
   		{
   			if(a[i][y]==1)
   			flag=0;
   			if(a[i][y]==2)
   			continue;
   		}
   		if(flag)
   		{
   			count+=c;
   			for(int y=0;y<c;y++)
   				{
   					if(a[i][y]==2)
   					count--;
   					a[i][y]=2;
   				}
   		}
   	}
   	for(int i=0;i<c;i++)
   	{
   		int flag=1;
   		for(int y=0;y<r;y++)
   		{
   			if(a[y][i]==1)
   			flag=0;
   			if(a[y][i]==2)
   			continue;
   		}
   		if(flag)
   		{
   			count+=r;
   			for(int y=0;y<r;y++)
   				{
   					if(a[y][i]==2)
   					count--;
   					a[y][i]=2;
   				}
   		}
   	}
   	cout<<count<<"\n";
 
   	
}	