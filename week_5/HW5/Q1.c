/* Homework 5: Question 1
   Compile with: gcc -std=c89 -o Q1 Q1.c
   Then run your compiled program with: ./Q1
*/

#include <stdio.h>


int g(int val)
{
  return val * val;
}


/* Your sum function goes here */
// Function params: one function * and two params
// Start and beginning
// g(i + 1) + .... + g(j)

int sum(int (*g)(int val), int i, int j)
{
  if (i < j)
  {
    int total = 0;
    for (int c = 0; (c + i) < j; c++)
    {
      total = total + g(c + i);
    }
    return total + g(j);
  }
  else if (i == j)
  {
   return g(i) + g(j);
  }

  return 0;
}


int main()
{
  printf("Result: %d\n", sum(g, 10, 20));

  return 0;
}