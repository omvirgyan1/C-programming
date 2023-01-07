//TO PRINT REVERSE OF NUMBER
#include <stdio.h>
void main() {
  int n, reverse = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  while (n != 0) {
    reverse = reverse * 10 + n % 10;
    n /= 10;
  }
  printf("Reverse of the number is: %d\n", reverse);
}
