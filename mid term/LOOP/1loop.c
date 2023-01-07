//TO PRINT ALL NATURAL NUMBER FROM 1 TO n
#include <stdio.h>
void main()
{
    int n;
    int i = 1;
    
    printf("Enter the value of n: ");
    scanf("%d",&n);
     
    while (i<=n)
    {
        printf("%d\n",i);
        i++;
    }

}
