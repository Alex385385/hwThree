/*
 * tictactoe.c
 *
 *  Created on: Apr 19, 2018
 *      Author: Alejandro Millan
 */
#include <stdio.h>

const int size = 3;
char ticTac[3][3] = {{'*','*','*'},{'*','*','*'},{'*','*','*'}};

char b = '0';

void draw()
{
   for(int i = 0; i < size; i++)
   {
      for(int j = 0; j < size; j++)
      {
         printf("%d" ticTac[i][j]);
      }
      printf("\n");
   }
}

bool player1()
{
   printf("Enter your move");
   scanf()
}

int main()
{

}
