//  to print all ASCII character with their values.
#include <stdio.h>
void main() {
   int i;
   for (i = 0; i < 256; i++) {
      printf("ASCII value of character %c = %d\n", i, i);
   }
}
