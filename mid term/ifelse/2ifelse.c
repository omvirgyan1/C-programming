// TO FIND MAXIMUM BETWEEN THREE NUMBERS.
#include <stdio.h>

int main()
 {
  int num1, num2, num3;
  printf("Enter three numbers: ");
  scanf("%d %d %d", &num1, &num2, &num3);

  int max = num1;
  if (num2 > max)
   {
    max = num2;
  }
  if (num3 > max)
   {
    max = num3;
  }

  printf("Maximum of the three numbers is: %d\n", max);

  return 0;
}


