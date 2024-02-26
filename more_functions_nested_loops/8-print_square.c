#include "main.h"

/**
 * print_square - Function that prints a square,
 * followed by a new line.
 * 
 *
 *@size: le nombre a verifier.
 *
 * Return: If n is 0 or less, print \n
 */
void print_square(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
}
else
for (i = 0 ; i < size ; i++)
{
for (j = 0 ; j < size ; j++)
{
  _putchar('#');
}
_putchar('\n');


}
}
