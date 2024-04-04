#include "main.h"
#include <stdio.h>

/**
 * clear_bit - Function that sets the value of
 * a bit to 0 at a given index.
 * @n: number to print here binary
 * @index: index of the bit you want to clear
 * Return: 1 if it worked or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(n) * 8)
{
return (-1);
}
*n = *n & (~(1 << index));
return (1);
}
