#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - Function that allocates memory
 * for an array, using malloc.
 *
 * @nmemb: nombre d'element de tableau
 * @size: la taille en octet de tableau
 *
 * Return: pointer alloue else return NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
int i, l = 0;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
l = nmemb * size;
p = malloc(l);
if (p == NULL)
{
return (NULL);
}
for (i = 0 ; i < l ; i++)
{
p[i] = 0;
}
return (p);
}
