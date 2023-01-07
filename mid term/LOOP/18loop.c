//TO PRINT FREQUENCY OF EACH DIGIT IN GIVER INTERGER
#include <stdio.h>
void main() {
  int n, digit, frequency[10] = {0};
  printf("Enter a number: ");
  scanf("%d", &n);
  while (n > 0) {
    digit = n % 10;
    ++frequency[digit];
    n /= 10;
  }
  printf("Digit\tFrequency\n");
  for (int i = 0; i < 10; i++) {
    printf("%d\t%d\n", i, frequency[i]);
  }
}
