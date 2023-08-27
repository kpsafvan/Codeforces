
		for(i =0;i<t;i++)
	{
		for(k=0;k<2;k++)
		{
			cout<<a[i][k]<<' ';
		}
		cout<<"\n";
	}
	
	


		m=a[i][0]*a[i][1]; 
		for(int j=n[i];j>=0;j--)
		{
			c=a[i][0]-j;
			b=(a[i][1]+j)-n[i];
			if((c>=a[i][2])&&(b>=a[i][3]))
			{
				if(m>(c*b))
				m=c*b;
			}
			if(b<a[i][3])
			break;
			
		}
		
		
		else if(n[i]<a[i][0])
		{
			if(a[i][0]-n[i]>=a[i][2])
			v=(a[i][0]-n[i])*a[i][1];
			else
			{
				if((a[i][1]+(n[i]-a[i][2]))>=a[i][2])
				v=a[i][2]*(a[i][1]+(n[i]-a[i][2]));
				else
				v=a[i][2]*
		}	
		else if(n[i]<a[i][1])
		{
			if(a[i][1]-n[i]>=a[i][3])
			v=(a[i][0]-n[i])*a[i][1];
			else
			v=a[i][2]*(a[i][1]+(n[i]-a[i][2]));
			
		}	