#include "main.h"
#include <stddef.h>
/**
 * *_strchr - Function that locates
 * a character in a string.
 *
 *
 * @s: le pointeur
 * @c: le caractere a verifier
 *
 * Return: s le pointeur
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0 ; s[i] >= '\0' ; i++)
{
if (s[i] == c)
return (s + i);
}
return NULL;
}
