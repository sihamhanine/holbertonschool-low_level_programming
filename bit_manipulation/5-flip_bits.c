#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Function that returns the number of bits you
 * would need to flip to get from one number to another.
 * @n: number 1
 * @m: number 2
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int result = n ^ m;
int count = 0;
while (result)
{
count = count + (result & 1);
result = result >> 1;
}
return (count);
}
