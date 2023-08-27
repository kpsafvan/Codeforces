#include<stdio.h>
#include<math.h>
int main()
{
	int n,count=0;
	scanf("%d",&n);
	int a[n][3];
	for(int i=0;i<n;i++)
	{
		scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
		if((a[i][0]+a[i][1]+a[i][2])>1)
		count++;	
	}
	printf("%d",count);
}	