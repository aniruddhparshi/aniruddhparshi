#include<stdio.h>
int main()
{
	int n,sum=0,k;
	printf("enter the value of n :");
	scanf("%d",&n);
	while(n>0)
	{
		k=n%10;
		sum=sum+k;
		n=n/10;
	}
	printf("%d",sum);
}
