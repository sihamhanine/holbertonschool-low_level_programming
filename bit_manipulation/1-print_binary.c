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
unsigned long int mask = 1;
int i = 0;
while (mask <= n)
{
mask = mask << 1;
i++;
}
if (i != 0)
{
mask = mask >> 1;
}
while (mask)
{
if (n & mask)
putchar('1');
else
putchar('0');
mask = mask >> 1;
}
}
