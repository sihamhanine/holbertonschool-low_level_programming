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
  int c = 0;

  
  if (s[0] == 45)
    {
      signe *= -1;
    }
  
  while (s[i] != '\0')
    {
	while (s[i] >= '0' && s[i] <= '9')
	{
	  c = 1;
	  result = (result * 10) + (s[i] - '0');
	  i++;
	}
	if ( c == 1)
	  {
	    break;
	  }
      i++;
    }
    
  result = result * signe;
  return (result);
}
