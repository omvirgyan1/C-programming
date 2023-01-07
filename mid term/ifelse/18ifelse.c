// TO CALCULATE PROFIT AND LOSS
#include <stdio.h>
int main() {
  int costprice, sellingprice;
  printf("Enter cost price: ");
  scanf("%d", &costprice);
  printf("Enter selling price: ");
  scanf("%d", &sellingprice);
  if (sellingprice > costprice) {
    printf("Profit: %d\n", sellingprice - costprice);
  } else if (sellingprice < costprice) {
    printf("Loss: %d\n", costprice - sellingprice);
  } else {
    printf("No profit or loss\n");
  }
  return 0;
}
