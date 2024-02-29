#include "main.h"

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

  for (i = 0 ; i < n && src[i] != '\0' ; i++)

    dest[i] = src[i];

  dest[i] ='\0';

  return (dest);
}

