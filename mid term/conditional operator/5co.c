//To check alphabets using Conditional operator
 

#include <stdio.h>

void main()
{
    char ch;
    
    
    printf("Enter any character: ");
    scanf("%c", &ch);
    
    
    (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') 
        ? printf("It is ALPHABET")
        : printf("It is NOT ALPHABET");

    
}