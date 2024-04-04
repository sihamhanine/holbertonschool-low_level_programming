#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * binary_to_uint - Function that converts a binary number
 * to an unsigned int.
 * @b: the string pointe to
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int num;
num = 0;
if (b == NULL)
{
return (0);
}
for (i = 0; b[i] != '\0' ; i++)
{
if (b[i] != '0' && b[i] != '1')
{
return (0);
}
}
for (i = 0; b[i] != '\0'; i++)
{
num = (num << 1) + (b[i] - '0');
}
return (num);
}
