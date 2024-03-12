#include "main.h"
#include <stdlib.h>
/**
 * *argstostr - Function that concatenates all
 * the arguments of your program.
 *
 * @ac: le premier argument
 * @av: le deuxieme argument
 *
 * Return: pointer to a new string else return NULL
 */
char *argstostr(int ac, char **av)
{
  int i, n;
  char *p;
  if ((ac == 0) || (av == 0))
    {
      return (NULL);
    }
  n = atoi(av[1]);
  p = malloc(n * sizeof(char));
  if (p == NULL)
    {
      return (NULL);
    }
  for ( i = 0 ; i < n ; i++)
    {
      p[i] = i;
    }
  free(p);
  return (p);
  
}
