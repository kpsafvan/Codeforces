void brute(int a[][4],int n)
{
	int d[4];
	int flag =0;
	for(int i=0;i<n;i++)
	{
		flag=0;
		d[0]=a[i][0];
		d[1]=a[i][1];
		d[2]=a[i][2];
		d[3]=a[i][3];
		for(int j=0;j<=a[i][0];j++)
		{
			d[0]=d[0]-j;
			d[1]=a[i][1];
			d[2]=a[i][2];
			d[3]=a[i][3]+j;
			if(flag==1)
			break;
			for(int m=0;m<=a[i][1];m++)
			{
				d[1]=d[1]-m;
				d[2]=a[i][2];
				d[3]=a[i][3]+m;
				if(flag==1)
				break;
				for(int b=0;b<=a[i][2];b++)
				{
					d[2]=d[2]-b;
					d[3]=d[3]+b;
					if(flag==1)
					break;
					if(checkcase(d,n,i)==1)
					{
						flag =1;
						cout<<"Yes"<<"\n";
						break;		
					}			
				}
			}
		}
		if(flag==0)
		cout<<"No"<<"\n";	
	}
	
}


int checkcase(float e[],int n,int i)
{
	int s=0;
	float u=2;
 	for(int k=0;k<4;k++)
 	{
 		if(remainder(e[k],u)==1)
 		s++;
 	}
 	if((s==1)||(s==4)||(s==0))
		{
			//cout<<e[0]<<e[1]<<e[2]<<e[3];
			return 1;
			}
	return 0;
	
}