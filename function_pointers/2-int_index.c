#include "function_pointers.h"
/**
 * int_index - Function Write that searches for an integer.
 *
 * @array: le tableau d'elements
 * @size: la taille en octet du tableau
 * @cmp: le pointeur de la fonction
 *
 * Return: index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size > 0)
{
if (array != NULL && cmp != NULL)
{
for ( i = 0 ; i < size ; i++)
{
if (cmp(array[i]))
return (i);
}
}
}
return (-1);
}
