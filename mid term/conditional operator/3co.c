//To check even or odd number using conditional operator
 

#include <stdio.h>

void main()
{
    int num;

    
    printf("Enter any number to check even or odd: ");
    scanf("%d", &num);

    
    (num%2 == 0) 
        ? printf("The number is EVEN") 
        : printf("The number is ODD");

}