//To print pascal triangle upto n rows
#include <stdio.h>
void main()
{
    int rows, cal = 1, space, i, j;

    printf("Enter number of rows: ");
    scanf("%d",&rows);

    for(i=0; i<rows; i++)            
    {
        for(space=1; space <= rows-i; space++) 
            printf("  ");

        for(j=0; j <= i; j++)     
        {
            if (j==0 || i==0)     
                cal = 1;
            else
                cal = cal*(i-j+1)/j;  

            printf("%4d", cal);
        }
        printf("\n");
    }

}