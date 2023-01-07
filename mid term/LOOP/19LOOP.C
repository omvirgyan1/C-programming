//TO PRINT NUMBER IN WORD
#include <stdio.h>
int main() 
{
   int num;
   char *ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
   char *tens[] = {"", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
   char *teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
   printf("Enter a number: ");
   scanf("%d", &num);
   if (num < 0) {
      printf("Error: Invalid input. Number must be positive.\n");
      return 1;
   } else if (num == 0) {
      printf("zero\n");
      return 0;
   }
   if (num >= 1000) {
      printf("%s thousand ", ones[num / 1000]);
      num %= 1000;
   }
   if (num >= 100) {
      printf("%s hundred ", ones[num / 100]);
      num %= 100;
   }
   if (num >= 20) {
      printf("%s ", tens[num / 10]);
      num %= 10;
   } else if (num >= 10) {
      printf("%s ", teens[num - 10]);
      return 0;
   }
   printf("%s\n", ones[num]);
   return 0;
}
