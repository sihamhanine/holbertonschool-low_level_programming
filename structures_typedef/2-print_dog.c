#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - Function that prints a struct dog
 * 
 *
 * @d: le pointeur qui pointe vers la structure dog
 *
 * imprimer la structure dog
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
  if (d->name == NULL || d->owner == NULL)
    printf("nil");
  else
    {
      printf("Name: %s\n", d->name);
    printf("Age: %f\n", d->age);
    printf("Owner: %s\n", d->owner);}
 }
}
