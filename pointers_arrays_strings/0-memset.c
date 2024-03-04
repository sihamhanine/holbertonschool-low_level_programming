#include "main.h"

/**
 * char *_memset  that fills memory with a constant byte
 *
 *
 * @s: le caractere a verifier
 * @b: la valeur a ajouter
 * @n: le nombre d'octet
 *
 * Return: le pointeur sur la zone m moire s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0 ; i < n ; i++)
{
s[i] = b;
}
return (s);
}
