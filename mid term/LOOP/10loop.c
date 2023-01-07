//TO COUNT THE NUMBER IN GIVEN DIGIT
#include <stdio.h>
void main()
 {
  int n, count = 0;
  printf("Enter a number: ");
  scanf("%d", &n);

  while (n != 0) {
    n /= 10;
    ++count;
  }
  printf("Number of digits: %d\n", count);

 }
