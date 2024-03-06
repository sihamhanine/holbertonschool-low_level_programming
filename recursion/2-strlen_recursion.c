#include "main.h"
/**
 * _strlen_recursion - Function that returns
 * the length of a string.
 *
 * @s: la chaine de caractere
 *
 * Return: longuer du chaine
 */
int _strlen_recursion(char *s)
{
int l = 0;
if (*s == '\0')
{
return (0);
}
l = 1 + _strlen_recursion(s + 1);
return (l);
}
