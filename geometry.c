/*
 * geometry.c
 *
 *  Created on: Apr 15, 2018
 *      Author: amillan1
 */
#include <stdio.h>

int main()
{
	int input;
	double area;

	printf("1. Calculate the Area of a Circle\n");
	printf("2. Calculate the Area of a Rectangle\n");
	printf("3. Calculate the Area of a Triangle\n");
	printf("4. Quit\n");
	printf("Enter your choice (1-4): ");

	fflush(stdout);
	scanf("%d", &input);

	if(input == 1)
	{
		double radius;
		printf("\nPlease enter the radius: ");
		scanf("%lf", &radius);

		area = 3.14159 * radius;
		printf("\n%lf\n", area);
	}
	else if(input == 2)
	{
		double length, width;
		printf("Please enter length: ");
		scanf("%lf", &length);
		printf("Please enter width: ");
		scanf("%lf", &width);

		area = width * length;
		printf("\n%lf\n", area);
	}
	else if(input == 3)
	{
		double base, height;
		printf("Please enter base: ");
		scanf("%lf", &base);
		printf("\nPlease enter height: ");
		scanf("%lf", &height);

		area = base * height * 0.5;
		printf("\n%lf\n", area);
	}
	else if(input == 4)
	{
		printf("End/n");
	}
}

