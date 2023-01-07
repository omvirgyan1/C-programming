//To convert binary to hexadecimal number 
#include <stdio.h>
#include <string.h>

void main()
{
    
    char binary[17];
    scanf("%s", binary);

    
    char hexadecimal[5];
    int i = 0, j = 0, decimal = 0;

    
    for(i = strlen(binary) - 1; i >= 0; i--)
    {
        if(binary[i] == '1')
        {
            decimal += 1 << j;
        }
        j++;
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

    printf("Hexadecimal equivalent of binary number %s is: ", binary);
    for(i = strlen(hexadecimal) - 1; i >= 0; i--)
    {
        printf("%c", hexadecimal[i]);
    }
}
