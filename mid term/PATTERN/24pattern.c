// pattern
#include <stdio.h>
int main()
{
    int i, j, N, colCount, value;
    colCount = 1;
    value = 1;
    printf("Enter rows: ");
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        for(j=1; j<=colCount; j++)
        {
            if(value == 10)
                value = 1;
            printf("%d ", value);
           value++;
        }
        printf("\n");
        colCount *= 2;
    }

    return 0;
}