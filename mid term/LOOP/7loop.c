//TO FIND THE SUM OF ALL EVEN NATURAL NUMBER BETWEEN 1 TO n
#include <stdio.h>
void main()
{
    int n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i += 2)
    {
        sum += i;
    }
    printf("The sum of all even numbers between 1 and %d is %d\n", n, sum);
}
