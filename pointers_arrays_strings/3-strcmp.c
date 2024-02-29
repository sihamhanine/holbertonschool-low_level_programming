#include "main.h"

/**
 * _strcmp - Function that compares two strings.
 *
 *
 * @s1: chaine a comparer
 * @s2: chaine a comparer
 *
 * Return: un entier si positif
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 == *s2 && *s1)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
