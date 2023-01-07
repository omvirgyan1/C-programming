//TO FIND PRODUCT OF DIGITS
#include <stdio.h>
void main() {
  int n, product = 1;
  printf("Enter a number: ");
  scanf("%d", &n);
  while (n > 0) {
    product *= n % 10;
    n /= 10;
  }
  printf("Product of digits: %d\n", product);
}
