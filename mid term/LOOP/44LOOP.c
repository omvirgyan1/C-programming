//To convert octal to hexadecimal number 
#include <stdio.h>
#include <string.h>

void main()
{
    
    char octal[10];
    scanf("%s", octal);


    char hexadecimal[5];
    int i, j;

    
    int decimal = 0;
    for(i = strlen(octal) - 1, j = 0; i >= 0; i--, j++)
    {
        decimal += (octal[i] - '0') * (1 << (3 * j));
    }

    
    i = 0;
    while(decimal != 0)
    {
        int hex = decimal % 16;
        if(hex < 10)
        {
            hexadecimal[i] = hex + 48;
            i++;
        }
        else
        {
            hexadecimal[i] = hex + 55;
            i++;
        }

        decimal /= 16;
    }


    printf("Hexadecimal equivalent of octal number %s is: ", octal);
    for(i = strlen(hexadecimal) - 1; i >= 0; i--)
    {
        printf("%c", hexadecimal[i]);
    }


}

