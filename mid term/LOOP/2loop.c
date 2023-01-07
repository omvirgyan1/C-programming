//TO PRINT ALL NATURAL NUMBER FROM 1 TO n IN REVERSE ORDER
#include <stdio.h>
void main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int i = n;
    while (i >= 1)
    {
        printf("%d\n", i);
        i--;
    }
}
