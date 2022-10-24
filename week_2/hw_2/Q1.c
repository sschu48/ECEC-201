/* Homework 2: Question 1
   Compile with: gcc -std=c89 -o Q1 Q1.c
   Then run your compiled program with: ./Q1
*/

#include <stdio.h>

int main()
{
  /*
   * Write a program in the file Q1.c that calculates how many digits
   * an integer value acquired via scanf() contains.
   * A correctly functioning program should produce the following output,
   * where the user entered the value 374:
   */
  int input_number;

  printf("Enter a number: ");
  scanf("%d", &input_number);

  if (input_number < 10)
    printf("The number %d has 1 digit\n", input_number);
  else if (input_number >= 10 && input_number < 100)
    printf("The number %d has 2 digits\n", input_number);
  else if (input_number >= 100 && input_number < 1000)
    printf("The number %d has 3 digits\n", input_number);
  else if (input_number >= 1000 && input_number < 10000)
    printf("The number %d has 4 digits\n", input_number);
  else
    printf("This number is big\n");

  return 0;
}