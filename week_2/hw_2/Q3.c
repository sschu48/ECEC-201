/* Homework 2: Question 3
   Compile with: gcc -std=c89 -o Q3 Q3.c
   Then run your compiled program with: ./Q3
*/

#include <stdio.h>

int main()
{
  int days_of_month, day_of_week;
  int day_counter = 0;

  printf("Enter number of days in month: ");
  scanf("%d", &days_of_month);
  printf("Enter starting day of the week (1=Sun, 7=Sat): ");
  scanf("%d", &day_of_week);

  // run through calendar
  for (int i = 1; day_counter <= days_of_month; i++)
  {
    if (i % 7 != 0)
    {
      if (i < day_of_week)
        printf("    ");
      else if (i >= day_of_week)
      {
        if (day_counter < 10)
        {
          printf(" %d  ", day_counter);
          day_counter++;
        } else {
          printf(" %d ", day_counter);
          day_counter++;
        }
      }
    }
    else
    {
      printf("\n");
    }
  }

  return 0;
}