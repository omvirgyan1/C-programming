//TO COUNT TOTAL NOTES IN INDIAN CURRENCY
#include <stdio.h>
int main() {
  int amount;
  int num_2000 = 0;
  int num_500 = 0;
  int num_200 = 0;
  int num_100 = 0;
  int num_50 = 0;
  int num_20 = 0;
  int num_10 = 0;
  int num_5 = 0;
  int num_2 = 0;
  int num_1 = 0;
  printf("Enter amount in Indian Rupees: ");
  scanf("%d", &amount);
  while (amount > 0) {
    if (amount >= 2000) {
      amount -= 2000;
      num_2000++;
    } else if (amount >= 500) {
      amount -= 500;
      num_500++;
    } else if (amount >= 200) {
      amount -= 200;
      num_200++;
    } else if (amount >= 100) {
      amount -= 100;
      num_100++;
    } else if (amount >= 50) {
      amount -= 50;
      num_50++;
    } else if (amount >= 20) {
      amount -= 20;
      num_20++;
    } else if (amount >= 10) {
      amount -= 10;
      num_10++;
    } else if (amount >= 5) {
      amount -= 5;
      num_5++;
    } else if (amount >= 2) {
      amount -= 2;
      num_2++;
    } else if (amount >= 1) {
      amount -= 1;
      num_1++;
    }
  }
  printf("Number of 2000 Rupee notes: %d\n", num_2000);
  printf("Number of 500 Rupee notes: %d\n", num_500);
  printf("Number of 200 Rupee notes: %d\n", num_200);
  printf("Number of 100 Rupee notes: %d\n", num_100);
  printf("Number of 50 Rupee notes: %d\n", num_50);
  printf("Number of 20 Rupee notes: %d\n", num_20);
  printf("Number of 10 Rupee notes: %d\n", num_10);
  printf("Number of 5 Rupee notes: %d\n", num_5);
  printf("Number of 2 Rupee notes: %d\n", num_2);
  printf("Number of 1 Rupee notes: %d\n", num_1);

  return 0;
}
