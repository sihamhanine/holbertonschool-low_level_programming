#include "main.h"

/**
 * *_strncat - Function Write a function that concatenates two strings.
 *
 *
 * @dest: chaine a verifier
 * @src: chaine a verifier
 * @n: le nombre a verifier
 *
 * Return: une caractere
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;
while (dest[i++])
{
j++;
}
for (i = 0 ; src[i] && i < n ; i++)
dest[j++] = src[i];
return (dest);
}