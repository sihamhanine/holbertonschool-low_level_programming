#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - Function that allocates memory using malloc.
 *
 * @b: la taille a alloue
 *
 * Return: pointer else return NULL
 */
void *malloc_checked(unsigned int b)
{
int *p;
p = malloc(b);
if (p == NULL)
{
exit(98);
}
return (p);
}
