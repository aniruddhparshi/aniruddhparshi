#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value of a :");
	scanf("%d",&a);
	printf("enter the value of b :");
	scanf("%d",&b);
	printf("enter the value of c :");
	scanf("%d",&c);
	switch(a>b && a>c)
	{
		case 1:
			printf("the maximum number is %d",a);
			break;
		case 0:
			switch(b>c)
			{
            case 1:
	     	printf("the maximum number is %d",b);
			break;
			case 0:
				printf("the greatest number is %d",c);
				break;
		 
			}
	}
}
