#include "main.h"

/**
 * _atoi - Function that convert a string to an integer.
 *
 *
 * @s: le caractere a convertir
 *
 * Return: le nombre n.
 */

int _atoi(char *s)
{
  int signe = 1;
  int result = 0;
  int i = 0;
  if (s[0] == '-')
    {
      signe = -1;
      i++;
    }
  if (s[0] == '+')
    {
      i++;
    }
  while (s[i] != '\0')
    {
	if (s[i] >= '0' && s[i] <= '9')
	{
	  result = result * 10 + (s[i] - '0');
	}
      i++;
    }
  result = result * signe;
  return (result);
}
