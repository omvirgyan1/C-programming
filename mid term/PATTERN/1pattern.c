//To print hollow square pattern
#include <stdio.h>

void main(void) {
  
  for (int i = 0; i < 5; i++) {
    printf("*");
  }
  printf("\n");


  for (int i = 0; i < 3; i++) {
    printf("*");
    for (int j = 0; j < 3; j++) {
      printf(" ");
    }
    printf("*\n");
  }


  for (int i = 0; i < 5; i++) {
    printf("*");
  }
  printf("\n");
}
