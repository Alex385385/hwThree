/*
 * reverseArray.c
 *
 *  Created on: Apr 19, 2018
 *      Author: Alejandro Millan
 */

#include <stdio.h>

int* reverse(int *x)
{
   int start = 0;
   int end = 5;
   int pntr[5];
   while(start < end)
   {
      int temp = x[start];
      pntr[start] = x[end];
      pntr[end] = temp;
      start++;
      end--;
   }
   int *out = pntr;
   return out;
}

int main()
{
   int size = 6;
   int array[] = {10, 4, 6, 1, 9, 13};

   printf("Original array:\n");
   for(int i = 0; i < size; i++)
   {
      printf("%d ", array[i]);
   }
   printf("\n");
   int *copyArray = reverse(array);

   printf("Reverse array");
   for(int i = 0; i < size; i++)
   {
      printf("%d ", copyArray[i]);
   }
   printf("\n");
}
