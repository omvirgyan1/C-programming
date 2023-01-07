//TO FIND ALL FACTORS OF A  NUMBER
#include <stdio.h>
int main() 
{
    
    int num ,i;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factors of %d: ", num);
    for (int i = 1; i <= num; i++)
	 {
        if (num % i == 0)
		 {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

