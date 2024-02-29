#include "main.h"

/**
 * *_strcat - Function that concatenates two strings.
 *
 *
 * @dest: le caractere a verifier
 * @src: le caractere a verifier
 *
 * Return: une caractere
 */

char *_strcat(char *dest, char *src)
{
  int i = 0, j = 0;
  while (dest[i] != '\0')
    {
      i++;
    }
  while (src[j] != '\0')
    {
      dest[i] = src[j];
      i++;
      j++;
    }
  dest[i] = '\0';
  return (dest);  
}

