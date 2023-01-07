//TO CHECK WHEATHER THE TRIANLE IS ISOSCELES,EQUILATERAL,SCLENE
#include <stdio.h>
#include <math.h>
int main() {
  float side1, side2, side3;
  printf("Enter side 1: ");
  scanf("%f", &side1);
  printf("Enter side 2: ");
  scanf("%f", &side2);
  printf("Enter side 3: ");
  scanf("%f", &side3);

  if (side1 == side2 && side2 == side3) {
    printf("Triangle is equilateral\n");
  } else if (side1 == side2 || side1 == side3 || side2 == side3) {
    printf("Triangle is isosceles\n");
  } else {
    printf("Triangle is scalene\n");
  }

  return 0;
}
