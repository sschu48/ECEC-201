/* Homework 2: Question 4
   Compile with: gcc -std=c89 -o Q4 Q4.c
   Then run your compiled program with: ./Q4
*/
#include <stdio.h>

int main()
{
  int input_number, input_number_original, amount_of_digits;

  printf("Enter a number: ");
  scanf("%d", &input_number);

  amount_of_digits = 0;
  input_number_original = input_number;

  do {
    amount_of_digits++;
    input_number = input_number / 10;

  } while (input_number > 1);

  printf("This number %d has %d digits\n", input_number_original, amount_of_digits + 1);


  return 0;
}