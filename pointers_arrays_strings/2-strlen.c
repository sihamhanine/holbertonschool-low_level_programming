#include "main.h"
/**
 * _strlen - Function that returns the length of a string.
 *
 *
 * @s: le nombre a verifier.
 *
 * Return: Longueur chaine de caractere.
 */

int _strlen(char *s)
{
int l = 0;
while (s[l] != '\0')
{
l++;
}
return (l);
}
