#include<iostream>
#include<cmath>
using namespace std; 
int check(int a[][1000],int h, int i)
{
	int odd=0,even=0;
	for(int c=0;c<h;c++)
		{
			if(c%2!=0)
			{
				odd+=a[i][c];;		
			}
			else
			{
				even+=a[i][c];
			}
		}	
		if(even==odd)
		return 1;
		else if(even-odd==1)
		return 0;
		else
		return even-odd;
}
int main()
{
    int i,k,t,j; 
   	cin>>t;
   	int a[t][1000],b[t][1000],n[t],m[t];
	for(i =0;i<t;i++)
	{
		cin>>n[i];
		m[i]=n[i];
		for(k=0;k<n[i];k++)
			{
				cin>>a[i][k];
				b[i][k]=a[i][k];
				
			}
			if(n[i]==2)
			{
				if(a[i][0]==a[i][1])
				m[i]=2;
				else
				{
					b[i][0]=0;
					m[i]=1;
				}
			}	
			else if(check(a,n[i],i)==1)
				m[i]=n[i];
			else
			{
				int num =check(a,n[i],i);
				if(num==0)
				num =1;
					if(abs(num)<n[i]/2)
					{
					if(num>0)
						{
							for(int j=0;j<num;j++)
								{
									for(int p=0;p<m[i]-1;p++)
									{
										if(a[i][p]>a[i][p+1])
										{
											for(int o=0;o<p;o++)
											b[i][o]=a[i][o];
											for(int o=p+2;o<m[i];o++)
											b[i][o-2]=a[i][o];
											m[i]=m[i]-2;
										
										}
										
									}
								}
						}
						else 
						{
							for(int j=-num;j>0;j--)
								{
									for(int p=0;p<m[i]-1;p++)
									{
										if(a[i][p]<a[i][p+1])
										{
											for(int o=0;o<p;o++)
											b[i][o]=a[i][o];
											for(int o=p+2;o<m[i];o++)
											b[i][o-2]=a[i][o];
											m[i]=m[i]-2;
										
										}
										
									}
								}
						}
					}
					else
					{
						if(num>0)
						{
							for(int u=0;u<m[i];u++)
							{
								if(num==0)
								break;
								if((b[i][u]==1)&&(u%2==0))
								{
									for(int o=0;o<u;o++)
									b[i][o]=a[i][o];
									for(int o=u+1;o<m[i];o++)
									b[i][o-1]=a[i][o];
									m[i]--;
									num--;
								}
							}
							
						}
						if(num<0)
						{
							for(int u=0;u<m[i];u++)
							{
								if(num==0)
								break;
								if((b[i][u]==1)&&(u%2!=0))
								{
									for(int o=0;o<u;o++)
									b[i][o]=a[i][o];
									for(int o=u+1;o<m[i];o++)
									b[i][o-1]=a[i][o];
									m[i]--;
									num++;
								}
							}
							
						}						
						
					}
				
				
				
			}
			
			
	}
	for(i =0;i<t;i++)
	{
		cout<<m[i]<<"\n";
		for(k=0;k<m[i];k++)
			{
				cout<<b[i][k]<<" ";	
			}	
			cout<<"\n";
		}
 return 0;
}	
