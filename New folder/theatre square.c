#include<stdio.h>
#include<math.h>
int main()
{
   long long n,m,a,width,height;
   long long dth;
	scanf("%lf%lf%lf",&n,&m,&a);
	width=ceil((n/a));
	height=ceil((m/a));
	//printf("%lf%lf",width,height);
	dth=width*height;
	printf("%.0lf",dth);
}	