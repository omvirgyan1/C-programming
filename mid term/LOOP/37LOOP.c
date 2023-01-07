// TO FIND ONE'S COMPLEMENT OF A BINARY NUMBER.
#include <stdio.h>

 int ones_complement( int n)
 {
   int result = 0;
  int i;

  for (i = 0; i < 32; i++) {
    result += (n & (1 << i)) ? 0 : (1 << i);
  }

  return result;
}

int main(void) 
{
   int n;
  printf("Enter a binary number: ");
  scanf("%D", &n);
  printf("One's complement of %u is %u\n", n, ones_complement(n));
  return 0;
}

