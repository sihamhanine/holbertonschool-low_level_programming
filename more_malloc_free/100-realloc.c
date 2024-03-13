#include "main.h"
#include <stdlib.h>
/**
 * *_realloc - Function that reallocates a memory
 * block using malloc and free
 *
 * @ptr: pointeur vers la memoire deja alloue
 * @old_size: la taille de memoire deja alloue
 * @new_size: la taille de la nouvelle memoire a allouee
 *
 * Return: pointer alloue else return NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p;
unsigned int i;
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
p = malloc(new_size);
if (p == NULL)
return (NULL);
return (p);
}
if (new_size > old_size)
{
p = malloc(new_size);
if (p == NULL)
return (NULL);
for (i = 0 ; i < old_size && i < new_size ; i++)
p[i] = ((char *) ptr)[i];
free(ptr);
}
return (p);
}
