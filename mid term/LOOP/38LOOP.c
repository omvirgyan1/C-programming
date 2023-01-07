//TO FIND TWO'S COMPLEMEN OF A BINARY NUMBER.
#include <stdio.h>
#include <string.h>

int main() {
  
  char binary[100];
  printf("Enter a binary number: ");
  scanf("%s", binary);


  int len = strlen(binary);
  for (int i = 0; i < len; i++) {
    if (binary[i] == '0') {
      binary[i] = '1';
    } else {
      binary[i] = '0';
    }
  }

  
  int carry = 1;
  for (int i = len - 1; i >= 0; i--) {
    if (binary[i] == '1' && carry == 1) {
      binary[i] = '0';
      carry = 1;
    } else if (binary[i] == '0' && carry == 1) {
      binary[i] = '1';
      carry = 0;
    } else {
      break;
    }
  }


  printf("Two's complement: %s\n", binary);

  return 0;
}

