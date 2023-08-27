	while(flag)
		{
			if(a[j]==0)
			{
				time+=x;
			}
			j=j+k;
			if(j>n)
			break;
		}
		
		
		int check(int a[],int n,int p,int x,int k,int s)
{
	int j=p+s,num=0,flag=1;
	while(flag)
	{
		if(a[j]==0)
		{
			num+=x;
		}
		j=j+k;
		if(j>=n)
		break;
	}
	return num;
}

//small=check(a,n,p,x,k,s)+(s*y);