#include "main.h"
#include <stddef.h>

/**
 * *_strncpy - Function Write a function that copies a string.
 *
 *
 * @dest: le caractere a verifier
 * @src: le caractere a verifier
 * @n: le nombre a verifier
 *
 * Return: une caractere
 */

char *_strncpy(char *dest, char *src, int n)
{
  int i = 0;
  int len_src = 0;
  while (src[i++])
    len_src++;
  
for (i = 0 ; src[i] && i < n ; i++)
dest[i] = src[i];
 for (i = len_src ; i < n ; i++)
{
dest[i] = '\0';
i++;
}
return (dest);
}
