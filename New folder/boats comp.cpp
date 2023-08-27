#include<iostream>
using namespace std; 
int main()
{
    int t,i,k,num; 
   	cin>>t;
   	int n[t],a[t][50],d[t][50];
	for(i =0;i<t;i++)
	{
		cin>>n[i];
		for(k=0;k<n[i];k++)
		{
			cin>>a[i][k];
			d[i][k]=a[i][k];
		}
	}
	for(i =0;i<t;i++)
	{
		num=0;
		int numo=0;
		for(int j=0;j<n[i];j++)
		{
			for(int f=0;f<n[i];f++)
			{
				if(j==f)
				continue;
				int sum[50],flag=0;
				sum[f]=a[i][j]+a[i][f];
				for(int y=0;y<=f;y++)
				{
					if((y!=f)&&(sum[y]==sum[f]))
						flag=1;
				}
				if(flag==1)
				break;
				for(int h=0;h<n[i];h++)
					{
					for(int g=0;g<n[i];g++)
						{
							if(h==g)
							continue;
							if(((d[i][h]+d[i][g])==sum[i])&&(d[i][g]!=0)&&(d[i][h]!=0))
								{
									d[i][g]=0;
									d[i][h]=0;
									num++;
								}
						}		
					}

					for(int q=0;q<n[i];q++)
					{
						if(d[i][q]==0)
						d[i][q]=a[i][q];
					}

				if(num>numo)
				{
				numo=num;
				}num=0;	
				
			}		
		}
		cout<<numo<<"\n";
		
	}

}	
