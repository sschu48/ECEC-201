/* Homework 2: Question 2
   Compile with: gcc -std=c89 -o Q2 Q2.c
   Then run your compiled program with: ./Q2
*/

#include <stdio.h>

int main()
{
  // Not over $750	  1% of income
  // $750--$2,250	    $7.50	plus 2% of amount over $750
  // $3,750--$5,250	  $82.50	plus 4% of amount over $3,750
  // $5,250--$7,000	  $142.50	plus 5% of amount over $5,250
  // Over $7,000	    $230.00	plus 6% of amount over $7,000

  float income;
  
  printf("What is your income: ");
  scanf("%f", &income);

  if (income < 750)
    printf("Your total amount of tax is: %f", income + (income * 0.01));
  else if (income >= 750 && income < 2250)
    printf("Your total amount of tax is: %f", 7.50 + income + ((income - 2250) * 0.02));
  else if (income >= 2250 && income < 3750)
    printf("Your total amount of tax is: %f", 37.50 + income + ((income - 3750) * 0.03));
  else if (income >= 3750 && income < 5250)
    printf("Your total amount of tax is: %f", 87.50 + income + ((income - 5250) * 0.04));
  else if (income >= 5250 && income < 7000)
    printf("Your total amount of tax is: %f", 142.50 + income + ((income - 5250) * 0.05));
  else
    printf("Your total amount of tax is: %f", 230 + income + ((income - 7000) * 0.06));

  return 0;
}