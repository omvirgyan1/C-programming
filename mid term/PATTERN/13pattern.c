//To print hollow sqaure star pattern with diagonal 
#include <stdio.h>

void main() {
  int n;
  printf("Enter the size of the square: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (i == 1 || i == n || j == 1 || j == n || i == j || i == n - j + 1) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
}
