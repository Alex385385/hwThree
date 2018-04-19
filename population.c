/*
 * population.c
 *
 *  Created on: Apr 19, 2018
 *      Author: amillan1
 */
#include <stdio.h>

int main()
{
	int population, birthRate, deathRate, years;

	do
	{
	printf("Please enter the starting population: ");
	fflush(stdout);
	scanf("%d", &population);
	} while(population < 2);

   do
   {
      printf("Please enter the annual birth rate: ");
      fflush(stdout);
      scanf("%d", &birthRate);
   } while(birthRate < 0);

   do
   {
      printf("Please enter the annual death rate: ");
      fflush(stdout);
      scanf("%d", &deathRate);
   } while(deathRate < 0);

   do
   {
      printf("Please enter the number of years to display: ");
      fflush(stdout);
      scanf("%d", &years);
   } while(years < 1);
   
	return 0;
}
