#include "main.h"
#include <stddef.h>
/**
 * *_strpbrk - Function that searches
 * a string for any of a set of bytes.
 *
 *
 * @s: le pointeur
 * @accept: le caractere a verifier
 *
 * Return: s le pointeur
 */
char *_strpbrk(char *s, char *accept)
{
int j;
while (*s)
{
for (j = 0 ; accept[j] ; j++)
{
if (*s == accept[j])
return (s);
}
s++;
}
return ('\0');
}

