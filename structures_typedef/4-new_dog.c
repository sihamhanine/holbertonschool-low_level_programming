#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *new_dog - Function that creates a new dog.
 *
 *
 * @name: le membre name de struct new_dog
 * @age: le membre age de struct new_dog
 * @owner: le membre owner de struct new_dog
 *
 * Return: struct dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
  dog_t *dog;
  dog = malloc(sizeof(dog_t));
  if (dog == NULL)
    return (NULL);
  dog->name = name;
  dog->age = age;
  dog->owner = owner;
  return (dog);
}

