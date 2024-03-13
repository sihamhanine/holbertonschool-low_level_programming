#include "main.h"
#include <stdlib.h>
/**
 * *array_range - Function that creates
 * an array of integers.
 *
 * @min: le nombre minimal du tableau
 * @max: le nombre maximal du tableau
 *
 * Return: pointer alloue else return NULL
 */

int *array_range(int min, int max)
{
int *p;
int i, size;
if (min > max)
{
return (NULL);
}
size = max - min + 1;
p = malloc(sizeof(int) * size);
if (p == NULL)
{
return (NULL);
}
for (i = 0 ; i < size ; i++)
{
p[i] = min;
min++;
}
return (p);
}
