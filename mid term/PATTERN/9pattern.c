//TO PRINT THE GIVEN PATTERN
                 // 11111
                //  2222
               //   333
              //    44
              //    5
                 
#include<stdio.h>
int main()
 {
for (int i = 1; i <= 5; i++) {
for (int j = 1; j <= 5 - i + 1; j++) {
printf("%d", i);
}
printf("\n");
}
return 0;
}
