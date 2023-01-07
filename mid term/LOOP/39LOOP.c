//TO CONVERT A BINARY INTO OCTAL NUMBER SYSTEM.
#include <stdio.h>
#include <math.h>

int main()
{
    long long binary, octal;
    int i = 0, remainder;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary != 0)
    {
        remainder = binary % 10;
        octal += remainder * pow(2, i);
        ++i;
        binary /= 10;
    }

    printf("Octal equivalent: %d", octal);

    return 0;
}

