/* Homework 3: Question 1
   Compile with: gcc -std=c89 -o Q1 Q1.c
   Then run your compiled program with: ./Q1
*/

#include <stdio.h>

void swap (int *a, int *b)
{
  /* Your code goes here */
  int temp_var = *b;
  *b = *a;
  *a = temp_var;
}


int main ()
{
  int x = 27;
  int y = 99;
  
  printf("Before swap:\n");
  printf("  x: %d\n", x);
  printf("  y: %d\n", y);
  
  swap(&x, &y);
  
  printf("After swap:\n");
  printf("  x: %d\n", x);
  printf("  y: %d\n", y);
  
  return 0;
}