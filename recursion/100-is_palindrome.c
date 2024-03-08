#include "main.h"
int comparer(char *s, int n1, int n2);
int _strlen_recursion(char *s);
/**
 * _strlen_recursion - return the lenght of a string
 *
 *
 * @s: la chaine a verifier
 * Return: la longueur de la chaine
 */
int _strlen_recursion(char *s)
{
if(*s == '\0')
{
return (0);
}
else
return (1 + _strlen_recursion(s + 1));
}
/**
 * comparer - Function that comparer chaque caractere
 * de la chaine
 * @s: la chaine a verifier
 * @n1: l'indice d'iteration droite
 * @n2: l'indice d'iteration gauche
 *
 * Return: 0
 */
int comparer(char *s, int n1, int n2)
{
if (*(s + n1) == *(s + n2))
{
if (n1 == n2 || n1 == n2 + 1)
return (1);
return (0 + comparer(s, n1 + 1, n2 - 1));
}
return (0);
}
/**
 * is_palindrome - Function  that returns 1 if
 * a string is a palindrome and 0 if not.
 * @s: la chaine a verifier
 * Return: 1 si la chaine est palindrome sinon 0
 */
int is_palindrome(char *s)
{
if(*s == '\0')
{
return (1);
}
return (comparer(s, 0, _strlen_recursion(s) - 1));
}
