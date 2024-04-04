#include "main.h"
#include <stdio.h>

/**
 * print_binary - Function that prints the binary
 * representation of a number.
 * @n: number to print here binary
 * Return: no thing
 */
void print_binary(unsigned long int n)
{
if (n > 1)
{
print_binary(n >> 1);
}
if (n & 1)
{
_putchar('1');
}
else
{
_putchar('0');
}
}
