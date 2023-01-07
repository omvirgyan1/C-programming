//TO CHECK WHETHER A CHARACTER IS UPPER CASE OR LOWER CASE
#include<stdio.h>
 
int main() {
   char ch;
 
   printf("\nEnter The Character : ");
   scanf("%c", &ch);
 
   if (ch >= 'A' && ch <= 'Z')
      printf("Character is Upper Case Letters");
   else
      printf("Character is Not Upper Case Letters");
 
   return (0);
}