#include<stdio.h>
#include<string.h>
int main()
{
   int n;
   char a[100][100],s[100];
	scanf("%d",&n);
	for(int i =0;i<n;i++)
	{
		gets(s);
		if(strlen(s)>10)
		{
			strcpy(a[i][0],s);
			strcpy(a[i][1],strlen(s));
			strcpy(a[i][3],s);
		}
		else
		{
			strcat(a[i],s);
		}
		
	}
	for(int k=0;k<n;k++)
	puts(a[][]);

}	
