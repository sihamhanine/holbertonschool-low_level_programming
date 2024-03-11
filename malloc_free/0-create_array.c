#include "main.h"
#include <stdlib.h>
/**
 * *create_array - Function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: la taille de tableau.
 * @c: le contenu de tableau
 *
 * Return: Null if size=0 else return Pointer
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
  char *p = malloc(size * sizeof(char));
  if (size == 0)
    {
      return (NULL);
    }
  if (p == NULL)
    {
      return (NULL);
    }
  else
    for (i = 0; i < size ; i++)
      {
	p[i] = c;
      }
  
  return (p);
}
