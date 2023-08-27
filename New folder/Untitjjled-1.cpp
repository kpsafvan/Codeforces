int findele(s[],f)
{
	int c;
	for(c=0;c<arraysize(s);c++)
	{
		if(s[c]==f)
		return c;
	}
}

int arraysize(int s[])
{ int k=0;
	while(s[k]!='0')
	{
		k++;
	}
	//cout<<k<<"\n";
	return k-1;
}


	for(int t=0;t<size;t++)
	{
		for(int y=t;y<size;y++)
			{
					for(int u=y;u<size;u++)
						{
							for(int o=u;o<size;o++)
									{
										if((a[t]==a[y])&&(a[t]==a[u])&&(a[t]==a[o]))
										{
											
										}
									}						
						}	
			}
	}	
	
	
	
	   for(int y=0;y<size;y++)
   {
   		for(int u=0;u<size;u++)
   		{
   			if(a[y]==a[u])
   			s++;
   			if(s>=4)
   			break;
   		}
   		if(s>=4)
   		{
   			s=0;
   			for(int o=0;o<size;o++)
   			{
   				for(int u=0;u<size;u++)
	   				{	
		   				if(a[o]!=a[y])
			   				{
			   					if(a[u]==a[o])
			   					{
			   						s++;		
			   					}
			   				}
			   			if(s==4)
			   			return 1;
			   			else if(s>=2)
			   			{
			   				for(int r=0;r<size;r++)
			   				{
			   					if(r!=o)
			   					s=0;
			   						for(int t=0;t<size;t++)
			   						{
			   							if(a[t]==a[r])
			   							s++;
			   						}
			   						if(s==2)
			   						return 1;
			   						else
			   						return 0;
			   				}
			   			}	
			   			else
			   			return 0;	
	   				}
	   		}						
   		}
   		s=0;
   }
	return 0;
	
	
	
					if((k!=c)&&(k!=(c+1))&&(k!=(c+2))&&(k!=(c+3)))