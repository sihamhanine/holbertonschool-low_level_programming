#include "main.h"

/**
 * _strspn that gets the length of a prefix substring.
 *
 * @s: la chaine a verifier
 * @accept: le caractere a verifier
 *
 * Return: number of byte
 */

unsigned int _strspn(char *s, char *accept)
{
int i, j;
int len = 0;
for (i = 0; s[i] != '\0' ; i++)
{
for (j = 0 ; accept[j] != '\0' ; j++)
{
if (s[i] == accept[j])
{
len ++;
break;
}
else
if (accept[j + 1] == '\0')
{
return (len);
}
}
}
return (len);
}
