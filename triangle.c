#include<stdio.h>
int main()
{
	float angle_1,angle_2,angle_3,angle;
	printf("enter an angle :");
	scanf("%f",&angle_1);
	printf("enter an angle :");
	scanf("%f",&angle_2);
	printf("enter an angle :");
	scanf("%f",angle_3);
	angle= angle_1+angle_2+angle_3;
	if (angle_1<=180 && angle_2<=180 && angle_3<=180 && angle==180)
	printf("it is a triangle");
	else
	{
	printf("it is not an scalen triangle");	
	}
}
