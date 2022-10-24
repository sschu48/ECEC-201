/* Homework 3: Question 2
   Compile with: gcc -std=c89 -o Q2 Q2.c
   Then run your compiled program with: ./Q2
*/

#include <stdio.h>

int *find_largest (int *a, int n)
{
  /* Your code goes here */
  // Pointer to an array of ints
  // The number of elements in the array

  // Your function should return the address of the largest element in the array passed to it.
  int *max = *a;

  for (int i = 0; i < n; i++)
  {
    if (*(a + i) > *(a + (i - 1)))
      max = *(a + i);
  }

  return &max;
}


int main ()
{
  int *largest;
  
  int numbers[] = {10,  1, 54,  8, 78, 13,  4,
                   32, 72, 13, 43, 66, 42, 21,
                   41, 87, 23, 11, 52,  7,  2,
                    3, 33,  5,  9, 67, 12, 17};

  int n = sizeof(numbers)/sizeof(int);
  
  largest = find_largest(numbers, n);
  
  printf("Of the %d numbers passed,\n", n);
  printf("%d was the largest\n", *largest);
  
  return 0;
}