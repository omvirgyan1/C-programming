#include <stdio.h>

int main ()
 {
  int num, result = 1,i;
  int exponent;

  printf("Enter num= ");
  scanf("%d", &num);

  printf("Enter exponent: ");
  scanf("%d", &exponent);

  for ( i = 0; i < exponent; i++) {
    result *= num;
  }

  printf("Result= %d", result);

  
}

