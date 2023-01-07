//To print hollow mirrored rhombus star pattern
#include <stdio.h>
void main()
{
    int i, j, rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }

        if (i == 1 || i == rows)
        {
            for (j = 1; j <= rows; j++)
            {
                printf("*");
            }
        }
        else
        {
            printf("*");
            for (j = 1; j <= rows - 2; j++)
            {
                printf(" ");
            }
            printf("*");
        }

        printf("\n");
    }


}
