#include<stdio.h>
void main()
{
	int a,y,d,m;
	scanf("%d",&a,&y,&d,&m);
	y=a/365;
	printf("%d year",y);
	d=a%365;
	m=d/30;
	printf("%d months",m);
	d=d%30;
	printf("%d days",d);
	
	
	
	
	
	
}
