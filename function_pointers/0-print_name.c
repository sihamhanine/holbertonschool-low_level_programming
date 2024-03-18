#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - Function that prints a name
 *
 * @name: le nom a imprimer
 * @f: le pointeur de la fonction 
 *
 * Return: NULL
 */
void print_name(char *name, void (*f)(char *))
{
  if (name != NULL && f != NULL)
    {
      f(name);
    }
}
