//TO CHECK THE VALID OF TRIANGLE BY GIVEN ANGLES
#include <stdio.h>

int main() 
{
  int angle1, angle2, angle3;

  printf("Enter angle 1: ");
  scanf("%d", &angle1);
  printf("Enter angle 2: ");
  scanf("%d", &angle2);
  printf("Enter angle 3: ");
  scanf("%d", &angle3);

  if (angle1 + angle2 + angle3 == 180) {
    printf("Triangle is valid\n");
  } else {
    printf("Triangle is not valid\n");
  }
  return 0;
}
