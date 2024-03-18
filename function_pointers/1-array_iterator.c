#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - Function that executes a function given
 * as a parameter on each element of an array.
 *
 * @array: le tableau d'element
 * @size: la taille en octet du tableau
 * @action: le pointeur de la fonction
 *
 * Return: NULL
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array != NULL && action != NULL && size > 0)
{
for (i = 0 ; i < size ; i++)
action(array[i]);
}
}
