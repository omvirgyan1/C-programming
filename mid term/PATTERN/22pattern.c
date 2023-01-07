// print
//1
//23
//345
//4567
//56789
#include <stdio.h>
void main()
{
    int i, j, k, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        k = i;
        for(j=1; j<=i; j++, k++)
        {
            printf("%d", k);
        }

        printf("\n");
    }

    
}
