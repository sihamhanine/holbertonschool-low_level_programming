#include "main.h"
#include <stdio.h>

/**
 * get_bit - Function that returns the value of
 * a bit at a given index.
 * @n: number to print here binary
 * @index: index of the bit you want to get
 * Return: the value of the bit at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int get;
if (index > sizeof(n) * 8)
{
return (-1);
}
get = n >> index;
return (get & 1);
}
