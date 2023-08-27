#include<stdio.h>
#include<conio.h>
int main()
{

	int s,k,i,a[100][3];
	printf("sdsds");
		scanf("%d",&s);
	    for(i=0;i<s;i++)
	    {
	    	for(k =0;k<3;k++)
	    	{
	    		scanf("%d",&a[i][k]);
	    	}
	    }
	    for(i=0;i<s;i++)
	        {
	        	for(k =0;k<3;k++)
	        	{
	        		printf("%d",a[i][k]);
	        		printf(" ");
	        	}
	        }
	    getch();
	    return 0;
	}
