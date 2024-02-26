#include "main.h"

/**
 * print_triangle - Function that prints a triangle,
 * followed by a new line.
 *
 *
 * @size: le nombre a verifier.
 *
 * Return: If size is 0 or less,
 */

void print_triangle(int size)
{
int i, j, k;
if (size <= 0)
{
_putchar('\n');
}
else
for (i = 0 ; i < size ; i++)
{
for ((j = size - i) ; j > 1 ; j--)
{
_putchar(' ');
}
for (k = 0 ; k <= i ; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
