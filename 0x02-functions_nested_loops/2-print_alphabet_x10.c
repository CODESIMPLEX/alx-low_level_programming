#include "main.h"

/**
*print_alphabet -> prints the lowercase alphabets
*Return: Always 0.
*/

void print_alphabet(void);
{
int j;

for (j = 'a'; j <= 'z'; j++)
{
_putchchar(j);
}
_putchar('\n');
}
