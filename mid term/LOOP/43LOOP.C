//To convert octal to decimal number
#include <stdio.h>
#include <string.h>

void main()
{

    char octal[10];
    scanf("%s", octal);

    
    int decimal = 0;
    int i, j;

    
    for(i = strlen(octal) - 1, j = 0; i >= 0; i--, j++)
    {
        decimal += (octal[i] - '0') * (1 << (3 * j));
    }


    printf("Decimal equivalent of octal number %s is: %d", octal, decimal);

}
