//TO CONVERT A BINARY INTO DECIMAL NUMBER SYSTEM.
#include <stdio.h>
#include <math.h>

int main()
{
    long long binary, decimal = 0, base = 1, rem;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary > 0)
    {
        rem = binary % 10;
        decimal = decimal + rem * base;
        binary = binary / 10;
        base = base * 2;
    }

    
    printf("The decimal equivalent of the binary number is: %d", decimal);

    return 0;
}

