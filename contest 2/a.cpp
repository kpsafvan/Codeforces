#include<iostream>
using namespace std; 
void sort(int s[],int f)
{
	for(int g=0;g<f;g++)
	{
		for(int y=0;y<f;y++)
		{
			if(s[g]<s[y])
			{
				int temp=s[y];
				s[y]=s[g];
				s[g]=temp;
			}
		}
	}
	for(int i =0;i<f;i++)
	{
		
		cout<<s[i]<<"\n";
	}

}
int main()
{
    int h,i,k,t; 
   	cin>>t;
   	int sum[101],a[t][100],n[t];
	for(i =0;i<t;i++)
	{
		cin>>n[i];
		for(k=0;k<n[i];k++)
			cin>>a[i][k];	
	}
	for(i =0;i<t;i++)
	{
		for(h=0;h<n[i]-1;h++)
			{
				sum[h]=a[i][h]+a[i][h+1];
			}
		sort(sum,n[i]-1);
		for(h=0;h<n[i]-1;h++)
			{
				sum[h]=0;
			}
	}		
	
}	



for(j=n[i]-1;j>h;j--)