#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Function that initialize a variable
 * of type struct dog
 *
 * @d: le pointeur qui pointe vers la structure dog
 * @name: le membre name of the dog
 * @age: le membre age de dog
 * @owner: le membre owner de dog
 *
 * initialiser la variable de type struct
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
