#include "main.h"

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
int i = 0;
int j;
while (str[i] != '\0')
{
i++;
}
if (i % 2 == 1)
{
j = (i - 1) / 2;
j = j + 1;
}
else
{
j = i / 2;
}
 for (; j < i ; j++)
   {
     _putchar(str[j]);
   }
 
_putchar('\n');
}
