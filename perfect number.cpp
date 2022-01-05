#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	printf("enter the number\t:");
	scanf("%d",&n);
	while(i<n)
	{
		if (n%i==0)
		{
			sum=sum+i;
			i++;
		}
		else i++;
	}
	 if (sum==n)
	{
		printf("%d is a perfect number",n);
	}
	else
	{
		printf("%d is not a perfect number",n);
	}
  }
