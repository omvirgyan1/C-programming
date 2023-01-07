//print 1
//21
//321
//4321
//54321
#include <stdio.h>
void main()
{
int i, j;
for(i=1;i<=5;i++)
{
for(j=i;j>=1;j--)
{
printf("%d",j);
}
printf("\n");
}
}

