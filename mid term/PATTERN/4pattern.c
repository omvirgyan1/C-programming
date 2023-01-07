//To print inverted pyramid star pattern
#include <stdio.h>

void main()
{
    int rows, i, j, k;

    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    
    for (i = rows; i >= 1; i--)
    {
        
        for (j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }

        
        for (k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }

        
        printf("\n");
    }

    
}
