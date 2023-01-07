//TO PRINT ALL PERFECT NUMBER BETWEEN 1 TO n.
#include <stdio.h>

int main()
 {
  int n;

  printf("Enter a number: ");
  scanf("%d", &n);

  printf("The perfect numbers between 1 and %d are: \n", n);
  for (int i = 2; i <= n; i++)
   {
    int sum = 0;
    for (int j = 1; j < i; j++) 
	{
      if (i % j == 0)
	   {
        sum += j;
      }
    }
    if (sum == i) 
	{
      printf("%d\n", i);
    }
  }

  return 0;
}

