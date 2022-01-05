#include<stdio.h>
int main()
{
	int quantity,bill;
	char c;
	printf("burger-B,french fries-F,pizza-P,sandwich-S	:");
	scanf("%c",&c);
	switch(c)
	{
		case 'B':
		printf("you ordered for burger");
		printf("enter the quantity :");
		scanf("%d",&quantity);
		bill=150*quantity;
		break;
		
		case 'F':
		printf("you ordered for french fries");
		printf("enter the quantity :");
		scanf("%d",&quantity);
		bill=80*quantity;
		break;
		
		case 'P':
			printf("you ordered for pizza");
			printf("enter the quantity :");
			scanf("%d",&quantity);
			bill=200*quantity;
			break;
			
			case'S':
				printf("you ordered for sandwich");
				printf("enter the quantity :");
				scanf("%d",&quantity);
				bill=100*quantity;
				break;
				default:
				printf("menu not available");
	}
	printf("total bill is %d",bill);
}
