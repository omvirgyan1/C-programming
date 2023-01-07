//TO FIND ALL PRIMEC FACTOR  OF A NUMBER.
#include <stdio.h>
#include <math.h>

int main() 
{
    int n, i;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Prime factors of %d are: ", n);
    while (n % 2 == 0) {
        printf("%d ", 2);
        n = n / 2;
    }

    for (i = 3; i <= sqrt(n); i = i + 2)
	 {
        while (n % i == 0) 
		{
            printf("%d ", i);
            n = n / i;
        }
    }

    if (n > 2)
	 {
        printf("%d ", n);
    }

    return 0;
}

