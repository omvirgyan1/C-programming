//TO IMPUT ANY APHABET AND CHECK WHETHER IT IS VOVEL OR CONSONANT.
#include <stdio.h>

int main()
{
char c;
printf("Enter an alphabet: ");
scanf("%c", &c);

if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
{
printf("%c is a vowel.\n", c);
}
else
{
printf("%c is a consonant.\n", c);
}

return 0;
}
