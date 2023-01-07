//TO FIND LCM OF TWO NUMBERS.
#include <stdio.h>

int main() 
{
  int num1, num2, min, lcm;

  printf("Enter two positive integers: ");
  scanf("%d%d", &num1, &num2);

  min = (num1 > num2) ? num1 : num2;

  while (1)
   {
    if (min % num1 == 0 && min % num2 == 0)
	 {
      lcm = min;
      break;
    }
    ++min;
  }

  printf("The LCM of %d and %d is %d.\n", num1, num2, lcm);

  return 0;
}

