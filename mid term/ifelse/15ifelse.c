// TO CHECK THE VALIDITY OF TRIANGLE BY THEIR THREE SIDE
#include <stdio.h>
#include <math.h>
int main() {
  double side1, side2, side3;
  printf("Enter side 1: ");
  scanf("%lf", &side1);
  printf("Enter side 2: ");
  scanf("%lf", &side2);
  printf("Enter side 3: ");
  scanf("%lf", &side3);
  if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
    printf("Triangle is valid\n");
  } else {
    printf("Triangle is not valid\n");
  }
  return 0;
}
