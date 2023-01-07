//TO FIND FIRST AND LAST DIGIT OF A NUMBER
#include <stdio.h>

void main()
 {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  while (n >= 10) {
    n /= 10;
  }
  printf("First digit: %d\n", n);
  printf("Last digit: %d\n", n % 10);
}
