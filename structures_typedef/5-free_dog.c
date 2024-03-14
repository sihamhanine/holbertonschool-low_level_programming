#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - Function that frees dogs.
 *
 * @d: le pointeur de type dog_t
 *
 */
void free_dog(dog_t *d)
{
  if (d != NULL)
    {
      free(d->name);
      free(d->owner);
      free(d);
    }
}
