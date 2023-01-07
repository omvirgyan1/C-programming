//To convert octal to binary number
#include <stdio.h>
#include <string.h>

void main()
{
    
    char octal[10];
    scanf("%s", octal);


    char binary[40];
    int i, j;

    
    int decimal = 0;
    for(i = strlen(octal) - 1, j = 0; i >= 0; i--, j++)
    {
        decimal += (octal[i] - '0') * (1 << (3 * j));
    }

    
    i = 0;
    while(decimal != 0)
    {
        binary[i] = decimal % 2 + '0';
        i++;
        decimal /= 2;
    }

    printf("Binary equivalent of octal number %s is: ", octal);
    for(i = strlen(binary) - 1; i >= 0; i--)
    {
        printf("%c", binary[i]);
    }

}


