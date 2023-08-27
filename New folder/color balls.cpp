#include<iostream>
#include<cmath>
using namespace std; 
int checkcase(float e[],int n,int i)
{
	int s=0;
	float u=2;
	
 	for(int k=0;k<4;k++)
 	{
 		if(remainder(e[k],u)==1)
 		s++;
 	}
 	if((s<=1))
		{
			//cout<<e[0]<<e[1]<<e[2]<<e[3];
			return 1;
		}	
	return 0;
}
void brute(float a[][4],int n)
{
	float d[4];
	int flag =0;
	for(int i=0;i<n;i++)
	{
		flag=0;
		d[0]=a[i][0];
		d[1]=a[i][1];
		d[2]=a[i][2];
		d[3]=a[i][3];
			if(checkcase(d,n,i)==1)
			{
				flag=1;
				cout<<"Yes"<<"\n";
			}
			if(flag==0)
			{
			d[0]--;
			d[1]--;
			d[2]--;
			d[3]=d[3]+3;
			if((d[0]>=0)&&(d[1]>=0)&&(d[2]>=0))	
				{	if(checkcase(d,n,i)==1)
					{
						flag=1;
						cout<<"Yes"<<"\n";
					}
				}	
			}
		
		if(flag==0)
		cout<<"No"<<"\n";	
	}
	
}
int main()
{
    int n; 
   	cin>>n;
   	float r[n][4];
	for(int i =0;i<n;i++)
	{
		for(int k=0;k<4;k++)
		{
			cin>>r[i][k];
		}
	}
	 brute(r,n);
	
/*		for(int i =0;i<n;i++)
	{
		for(int k=0;k<4;k++)
		{
			cout<<a[i][k];
		}
		cout<<"\n";
	}*/

}	
