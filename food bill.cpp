#include<stdio.h>
main()
{
	char a;
	int bill,q;
	Printf("MenuIn(6) Burger-200In(f)french fries-50In(p)PizzaIn(5)Sandwich-150In");
	Scanf("%c",&a);
	switch(a);
	{ case"6":
		bill=200;
		printf("ordered burgerIn");
		printf("enter quantity");
		scanf("%d",&q);
		bill=q*bill;
		break;
		case"f":
			bill=50;
			printf("ordered fries");
			printf("enter quantity");
			scanf("%d",&q);
			bill=q*bill;
			break;
			case"p":
			bill=500;
			printf("ordered pizza");
			printf("enter quantity");
			scanf("%d",&q);
			Bill=q*bill;
			break;
			Case"s"
			bill=150;
			printf("ordered sandwich");
			printf("enter quantity");
			scanf("%d",&q);
			bill=q*bill;
			break;
			default;
			printf("enter a valid menu item");
		}
		printf("told bill is %d",bill);
	}
		
	}

