#include "main.h"
#include <stdio.h>

/**
 * set_bit - Function that sets the value of
 * a bit to 1 at a given index.
 * @n: number to print here binary
 * @index: index of the bit you want to get
 * Return: 1 if it worked or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(n) * 8)
{
return (-1);
}
*n = *n | (1 << index);
return (1);
}
