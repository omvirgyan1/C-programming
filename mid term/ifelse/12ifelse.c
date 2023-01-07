//TO INPUT MONTH NUMBER AND PRINT NUMBER OF DAY IN THAT MONTH
#include <stdio.h>
int main() 
{
  int month_number;
  printf("Enter month number (1-12): ");
  scanf("%d", &month_number);
  if (month_number == 1 || month_number == 3 || month_number == 5 || month_number == 7 || month_number == 8 || month_number == 10 || month_number == 12) {
    printf("Number of days: 31\n");
  } else if (month_number == 4 || month_number == 6 || month_number == 9 || month_number == 11) {
    printf("Number of days: 30\n");
  } else if (month_number == 2) {
    printf("Number of days: 28\n");
  } else {
    printf("Invalid month number\n");
  }
  return 0;
}
