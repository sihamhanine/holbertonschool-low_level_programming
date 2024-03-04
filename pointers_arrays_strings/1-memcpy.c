#include "main.h"

/**
 * *_memcpy - Function that copies memory area.
 *
 * @dest: adresse de destination
 * @src: adresse source
 * @n: le nombre a dupliquer
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n ; i++)
{
dest[i] = src[i];
}
return (dest);
}
