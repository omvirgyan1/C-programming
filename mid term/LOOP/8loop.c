//TO FIND THE SUM OF ALL ODD NUMBER BETWEEN 1-n
#include <stdio.h>
void main() {
  int n, i, sum = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i += 2) {
    sum += i;
  }
  printf("Sum of all odd numbers between 1 and %d is: %d\n", n, sum);
}
