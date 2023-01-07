//To convert hexadecimal to octal number 
#include <stdio.h>
#include <string.h>
#include <math.h>

void main()
{
    char hex[17];
    char octal[25];
    long long decimal, place;
    int i = 0, val, len;

    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);

    len = strlen(hex);
    decimal = 0;
    place = 1;

    
    for (i = len - 1; i >= 0; i--)
    {
        if (hex[i] >='0' && hex[i] <= '9')
        {
            val = hex[i] - 48;
        }
        else if (hex[i] >= 'a' && hex[i] <= 'f')
        {
            val = hex[i] - 97 + 10;
        }
        else if (hex[i] >= 'A' && hex[i] <= 'F')
        {
            val = hex[i] - 65 + 10;
        }

        decimal += val * place;
        place = place * 16;
    }

    
    i = 0;
    while (decimal != 0)
    {
        octal[i] = decimal % 8 + '0';
        decimal /= 8;
        i++;
    }


    len = strlen(octal);
    for (i = 0; i < len / 2; i++)
    {
        char temp = octal[i];
        octal[i] = octal[len - i - 1];
        octal[len - i - 1] = temp;
    }

    printf("Hexadecimal number = %s\n", hex);
    printf("Octal number = %s\n", octal);

}
