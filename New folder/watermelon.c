#include<stdio.h>
int main()
{
	int a,i=0;
	scanf("%d",&a);
	if(a==2)
	{
		printf("NO");
	}
	else if((a%2==0)&&(a>2))
	{
		for(i=2;i<(a/2)+1;i=i+2)
		{
			//printf("%d%d",i,a)	;
			if((a-i)%2==0)
			  {		
			   printf("YES");
			 	break;
			  }
		}
	}
	else 
	{
		printf("NO");
	}
}