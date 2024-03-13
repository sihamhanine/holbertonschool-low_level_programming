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
  int *p;
  unsigned int i;
  if (nmemb == 0 || size == 0)
    {
      return (NULL);
    }
  p = malloc(sizeof(int) * nmemb);
  if (p == NULL)
    {
      free(p);
      return (NULL);
    }
  else
    for (i = 0 ; i < size ; i++)
      {
	p[i] = i + 1;
      }
  return (p);
}
