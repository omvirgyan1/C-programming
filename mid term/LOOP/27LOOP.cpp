//TO PRINT ALL PRIME NUMBER BETWEEN 1 TO N.
#include <stdio.h>

int main(void)
 {
  int n;
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  for (int i = 2; i <= n; i++)
   {
    int is_prime = 1;  
    for (int j = 2; j < i; j++)
	 {
      if (i % j == 0)
	   {
        is_prime = 0; 
        break;
      }
    }

    if (is_prime) {
      printf("%d is prime\n", i);
    }
  }

  return 0;
}

