//TO PRINT ALL ARMSTRONG NUMBER BETWEEN 1 TO n.
#include <stdio.h>
#include <math.h>

int main()
 {
    int n, i, num, last_digit, digits, sum;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("All Armstrong numbers between 1 and %d:\n", n);

    for (i = 1; i <= n; i++)
	 {
        sum = 0;
        num = i;
        digits = (int) log10(num) + 1;

        while (num > 0)
		 {
            last_digit = num % 10;
            sum += pow(last_digit, digits);
            num /= 10;
        }

        if (i == sum)
		 {
            printf("%d\n", i);
        }
    }

    return 0;
}

