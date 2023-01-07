#include <stdio.h>

int main() {
  int units;
  float charges;

  printf("Enter number of units: ");
  scanf("%d", &units);

  if (units <= 50) {
    charges = 0.50 * units;
  } else if (units <= 150) {
    charges = 50 * 0.50 + (units - 50) * 0.75;
  } else if (units <= 250) {
    charges = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
  } else {
    charges = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
  }

  charges += 0.20 * charges;

  printf("Total electricity bill: %f\n", charges);

  return 0;
}
