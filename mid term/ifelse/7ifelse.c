// TO CHECK WHETHER CHARACTER IS ALPHABET OR NOT.
#include <stdio.h>

int main() 
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if ((c))
	 {
        printf("%c is an alphabet.\n", c);
    } else
	 {
        printf("%c is not an alphabet.\n", c);
    }

    return 0;
}

