#include "main.h"
#include <string.h>

/**
 * puts_half - Function that prints half of a string,
 * followed by a new line.
 *
 * @str: caractere a verifier
 *
 * Return: NOT NULL.
 */

void puts_half(char *str)
{
int lent = strlen(str);

if ((lent % 2) == 0)
lent = lent / 2;
else
lent = (lent - 1) / 2;
while(str[lent] != '\0')
{
_putchar(str[lent]);
lent++;
}
_putchar('\n');
}
