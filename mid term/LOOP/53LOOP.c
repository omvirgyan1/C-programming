//To Print teh given number patterns 
#include <stdio.h>
void main()
{
  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j < i; j++) {
      printf(" ");
    }
    for (int j = i; j <= 5; j++) {
      printf("%d", j);
    }
    printf("\n");
  }
}
