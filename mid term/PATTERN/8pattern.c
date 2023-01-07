//To print hollow pyramid star pattern
#include <stdio.h>
void main()
{
    int i, j, k, n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        
        if (i == 1 || i == n)
        {
            for (j = 1; j <= 2 * i - 1; j++)
            {
                printf("*");
            }
        }
        else
        {
            
            printf("*");
            for (j = 1; j <= 2 * i - 3; j++)
            {
                printf(" ");
            }
            printf("*");
        }

        printf("\n");
    }

    
}
