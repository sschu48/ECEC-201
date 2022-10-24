/* Homework 5: Question 2
   Compile with: gcc -std=c89 -o Q2 Q2.c
   Then run your compiled program with: ./Q2
*/

#include <stdio.h>


struct fraction {
  int numerator;
  int denominator;
};

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

void reduce(struct fraction *f)
{
  /* Your code goes here */
  /* Reduce fraction to lower terms */
  /* Compute GCD */
  /* Divide num and den by GCD */

  int GCD = gcd(f->numerator, f->denominator);

  f->numerator = f->numerator / GCD;
  f->denominator = f->denominator / GCD;
}


void add(struct fraction *result, const struct fraction *f1, const struct fraction *f2)
{
  /* Your code goes here */
  /* Add fractions pointed to by f1 and f2 */
  /* Stored in struct fraction */
  /* Reduced to lowest terms */

  /* multiply f1 by f2 denominator */
  int f1_num = (f1->numerator * f2->denominator);
  int f1_den = (f1->denominator * f2->denominator);

  /* multiply f2 by f1 denominator */
  int f2_num = (f2->numerator * f1->denominator);
  int f2_den = (f2->denominator * f1->denominator);

  int result_num = f1_num + f2_num;
  int result_den = f1_den;

  struct fraction temp_fraction = {result_num, result_den};
  reduce(&temp_fraction);

  result->numerator = temp_fraction.numerator;
  result->denominator = temp_fraction.denominator;
}


void subtract(struct fraction *result, const struct fraction *f1, const struct fraction *f2)
{
  /* Your code goes here */
  /* multiply f1 by f2 denominator */
  int f1_num = (f1->numerator * f2->denominator);
  int f1_den = (f1->denominator * f2->denominator);

  /* multiply f2 by f1 denominator */
  int f2_num = (f2->numerator * f1->denominator);
  int f2_den = (f2->denominator * f1->denominator);

  int result_num = f1_num - f2_num;
  int result_den = f1_den;

  struct fraction temp_fraction = {result_num, result_den};
  reduce(&temp_fraction);

  result->numerator = temp_fraction.numerator;
  result->denominator = temp_fraction.denominator;
}


void multiply(struct fraction *result, const struct fraction *f1, const struct fraction *f2)
{
  /* Your code goes here */
  struct fraction f_multiply = {f1->numerator*f2->numerator, f1->denominator*f2->denominator};
  reduce(&f_multiply);

  result->numerator = f_multiply.numerator;
  result->denominator = f_multiply.denominator;
} 


void divide(struct fraction *result, const struct fraction *f1, const struct fraction *f2)
{
  /* Your code goes here */
  struct fraction f_divide = {f1->numerator * f2->denominator, f1->denominator * f2->numerator};
  reduce(&f_divide);

  result->numerator = f_divide.numerator;
  result->denominator = f_divide.denominator;
}


int main()
{
  struct fraction result; 
  
  struct fraction f1 = {20, 15}; 
  struct fraction f2 = {22, 12}; 
  struct fraction f3 = { 4, 12}; 

  reduce(&f1);
  printf("Reduce f1: %d/%d\n", f1.numerator, f1.denominator);

  add(&result, &f2, &f3);
  printf("  f2 + f3: %d/%d\n", result.numerator, result.denominator);

  subtract(&result, &f2, &f3);
  printf("  f2 - f3: %d/%d\n", result.numerator, result.denominator);

  multiply(&result, &f2, &f3);
  printf("  f2 * f3: %d/%d\n", result.numerator, result.denominator);

  divide(&result, &f2, &f3);
  printf("  f2 / f3: %d/%d\n", result.numerator, result.denominator);

  return 0;
}