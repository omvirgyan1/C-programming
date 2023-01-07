//TO CHECK WHETHER  A NUMBER IS ARMSTRONG OR NOT.
#include <stdio.h>
#include <math.h>

int main()
{
    int num, originalNum, remainder, digits = 0;
    long long int sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;
    while (originalNum != 0) {
        originalNum /= 10;
        ++digits;
    }

    originalNum = num;
    while (originalNum != 0)
	 {
        remainder = originalNum % 10;
        sum += pow(remainder, digits);
        originalNum /= 10;
    }
    if (num == sum)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}

