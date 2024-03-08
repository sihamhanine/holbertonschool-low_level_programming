#include "main.h"
int _check_palindrome(char *s, int left, int right);

/**
 * is_palindrome - Function  that returns 1 if
 * a string is a palindrome and 0 if not.
 *
 *
 * @s: la chaine a verifier
 * Return: 1 si la chaine est palindrome sinon return 0
 */
int is_palindrome(char *s)
{
while(*s != '\0')
{
return _check_palindrome(s, 0, *s - 1);
}
s++
}
/**
 * _check_palindrome - Function that returns 1
 * if a string is a palindrome and 0 if not.
 *
 * @s: la chaine a verifier
 * @left: l'indice d'iteration droite
 * @right: l'indice d'iteration gauche
 *
 * Return: 1 si la chaine est palindrome sinon 0
 */
int _check_palindrome(char *s, int left, int right)
{
if (left >= right)
{
return (1);
}
else
if (s[left] == s[right])
{
return _check_palindrome(s, left + 1, right - 1);
}
}

