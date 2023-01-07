//TO PRINT MULTIPICATTION OF ANY NUMBER
#include <stdio.h>
void main()
{
  int n, i;
  printf("Enter a number: ");
  scanf("%d", &n);
  for (i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", n, i, n * i);
  }
}
