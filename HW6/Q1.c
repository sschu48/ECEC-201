/* Homework 6: Question 1
   Compile with: gcc -std=c89 -o Q1 Q1.c
   Then run your compiled program with: ./Q1
*/
#include <stdio.h>

/* Your code goes here */

int main()
{
  char *dst;

  char *test = "Simplicity is the ultimate sophistication.";

  dst = duplicate(test);

  printf("%s", dst);

  free(dst);

  return 0;
}