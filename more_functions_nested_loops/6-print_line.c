#include "main.h"

/**
 * print_line - Function that draws a straight
 * line in the terminal.
 *
 *@n: le nombre a verifier.
 *
 * Return: If n is 0 or less, print \n
 */
void print_line(int n)
{

int i;

for (i = 0 ; i < n ; i++)
{
if (n > 0)
{
_putchar('-');
}
if (n <= 0)
{
_putchar('\n');
}


}
_putchar('\n');
}
