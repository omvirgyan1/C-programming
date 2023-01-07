//To convert decimal to binary number 
#include <stdio.h>
void main()
{
    int decimal, quotient;
    int binary[100], i=1, j;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    quotient = decimal;
    while(quotient!=0)
    {
         binary[i++]= quotient % 2;
         quotient = quotient / 2;
    }

    printf("Equivalent binary value of decimal number %d: ", decimal);
    for(j = i -1 ;j> 0;j--)
    {
        printf("%d",binary[j]);
    }
}
