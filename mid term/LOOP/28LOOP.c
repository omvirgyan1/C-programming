//TO FIND SUM OF ALL PRIME NUMBER BETWEEN 1 TO N.
#include <stdio.h>

int is_prime(int num)
 {
    if (num < 2) return 0;
    for (int i = 2; i < num; i++)
	 {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main()
 {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) 
	{
        if (is_prime(i)) sum += i;
    }
    printf("Sum of all prime numbers between 1 and %d: %d\n", n, sum);
    return 0;
}


