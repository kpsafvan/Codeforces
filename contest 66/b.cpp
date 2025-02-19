#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>

using namespace std; 

int main(){
	int check(int** a,int n, int m)
	{
		cout<<"\na";
		int val = a[0][0];
		for(int p=0;p<n;p++)
	   		{
	   			for(int q=0;q<m;q++)
	   			{
	   				if(val != a[p][q])
	   				{
	   					return 0;
	   				}
	   			}	
	   		}
		return 1;
	}
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long i,t,j;
   	cin>>t;
   	for(int y=0;y<t;y++)
   	{
   		int n,m;
   		cin>>n>>m;
   		int** a = new int*[m];
   		for(i=0;i<n;i++)
   		{
   			for(j=0;j<m;j++)
   			{
   				cin>>a[i][j];
   			}	
   		}
   		int iter =0;
   		while(check(a,n,m))
   		{
   			cout<<"check";
   			break;
   		}
   		for(i=0;i<n;i++)
   		{
   			for(j=0;j<m;j++)
   			{
   				cout<<a[i][j]<<" ";
   			}
   			cout<<"\n";	
   		}		
   		
   	}
   	
}