#include "main.h"

/**
 * reverse_array - Function that reverse a array of integer
 *
 *
 * @a: an array of integer
 * @n: le nombre d'elements
 *
 * Return: NOT NULL
 */

void reverse_array(int *a, int n)
{
int i , j;
int tmp;
for (i = 0, j = n - 1; i < j ; j-- , i++)
{
tmp = a[j];
a[j] = a[i];
a[i] = tmp;
}
}
