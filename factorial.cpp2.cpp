#include<stdio.h>
int main()
{
	int i=1,n,fact=1;
	printf("enter the number to get the factorial:\t");
	scanf("%d",&n);
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("factorial : %d",fact);
	
}
