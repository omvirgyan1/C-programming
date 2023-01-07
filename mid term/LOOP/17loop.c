//TO CHECK THE NUMBER IS PALINDROM OR NOT
#include <stdio.h>
int main(void) {
  int n, reversed = 0, remainder, original;

  printf("Enter a number: ");
  scanf("%d", &n);
  original = n;
  while (n != 0) {
    remainder = n % 10;
    reversed = reversed * 10 + remainder;
    n /= 10;
  }
  if (original == reversed) {
    printf("%d is a palindrome.\n", original);
  } else {
    printf("%d is not a palindrome.\n", original);
  }
}
