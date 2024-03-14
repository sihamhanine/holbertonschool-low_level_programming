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
{ int i, j, lent1 = 0, lent2 = 0;
  
  dog_t *dog;
  if (name == NULL || age < 0 || owner == NULL)
    return (NULL);
  
  dog = malloc(sizeof(dog_t));
  if (dog == NULL)
    return (NULL);

  while (name[lent1] != '\0')
    lent1++;
  while (owner[lent2] != '\0')
    lent2++;
  dog->name = malloc(sizeof(char) * (lent1 + 1));
  if (dog->name == NULL)
    {
      free(dog);
  return (NULL);
    }
  dog->owner = malloc(sizeof(char) * (lent2 + 1));
  if (dog->owner == NULL)
    {
      free(dog->name);
      free(dog);
      return (NULL);
    }
  
  for (i = 0 ; name[i] != '\0' ; i++)
    {
    dog->name[i] = name[i];
  dog->name[i] = '\0';
    }
  for (j = 0 ; owner[j] != '\0' ; j++)
    {
      dog->owner[i] = owner[j];
      dog->owner[i] = '\0';
    }
  dog->age = age;
  return (dog);
}
