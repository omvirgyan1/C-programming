//TO PRINT ALL STRONG NUMBER BETWEEN 1 TO n.
#include <stdio.h>

int factorial(int n) 
{
  
  int result = 1;
  for (int i = 2; i <= n; i++)
   {
    result *= i;
  }
  return result;
}

int main() 
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  printf("Strong numbers between 1 and %d: ", n);
  for (int i = 1; i <= n; i++)
   {
    int sum = 0;
    int temp = i;
    while (temp > 0)
	 {
      int digit = temp % 10;
      sum += factorial(digit);
      temp /= 10;
    }


    if (sum == i) 
	{
      printf("%d ", i);
    }
  }
  printf("\n");
  return 0;
}

