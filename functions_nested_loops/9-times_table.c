#include "main.h"

/**
 * times_table - Function Write a function that
 * prints the 9 times table, starting with 0.
 *
 *
 */
void times_table(void)
{
int i, j, n, p, x;
for (i = 0 ; i <= 9 ; i++)
{
for (j = 0 ; j <= 9 ; j++)
{
n = i * j;
if (n > 9)
{
p = n % 10;
x = (n - p) / 10;
_putchar(',');
_putchar(' ');
_putchar(p + '0');
_putchar(x + '0');
}
else
{
if (j != 0)
{
_putchar(',');
_putchar(' ');
}
_putchar(n + '0');
}
}
_putchar('\n');
}
}

