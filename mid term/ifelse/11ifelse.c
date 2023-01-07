//TO ENTER WEAK NUMBER AND PRINT WEAK DAY
#include <stdio.h>
int main() 
{
  int week_number;
  printf("Enter week number (1-7): ");
  scanf("%d", &week_number);
  if (week_number == 1) {
    printf("Weekday: Monday\n");
  } else if (week_number == 2) {
    printf("Weekday: Tuesday\n");
  } else if (week_number == 3) {
    printf("Weekday: Wednesday\n");
  } else if (week_number == 4) {
    printf("Weekday: Thursday\n");
  } else if (week_number == 5) {
    printf("Weekday: Friday\n");
  } else if (week_number == 6) {
    printf("Weekday: Saturday\n");
  } else if (week_number == 7) {
    printf("Weekday: Sunday\n");
  } else {
    printf("Invalid week number\n");
  }

  return 0;
}
