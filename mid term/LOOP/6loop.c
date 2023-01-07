//TO FIND SUM OF 1 to n NATURAL NUMBER
#include <stdio.h>
void main()
{
    int n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("The sum of all natural numbers between 1 and %d is %d\n", n, sum);
}
