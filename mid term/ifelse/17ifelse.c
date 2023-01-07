#include <stdio.h>
#include <math.h>
int main() {
  float a, b, c;
  float root1, root2;
  float discriminant;
  printf("Enter coefficient a: ");
  scanf("%f", &a);
  printf("Enter coefficient b: ");
  scanf("%f", &b);
  printf("Enter coefficient c: ");
  scanf("%f", &c);
  discriminant = b*b - 4*a*c;
  if (discriminant > 0) {
    root1 = (-b + sqrt(discriminant)) / (2*a);
    root2 = (-b - sqrt(discriminant)) / (2*a);
    printf("Roots are %lf and %lf\n", root1, root2);
  } else if (discriminant == 0) {
    root1 = -b / (2*a);
    printf("Root is %lf\n", root1);
  } else {
    printf("No real roots\n");
  }
  return 0;
}
