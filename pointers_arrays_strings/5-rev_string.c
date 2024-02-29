#include "main.h"

/**
 * rev_string - Function that reverses a string.
 *
 *
 * @s: caractere a verifier
 *
 * Return: NOT NULL
 */

void rev_string(char *s)
{
int i = 0;
int l = 0;
int temp;

while (s[l] != '\0')
{
l++;
}
for (l = l - 1 ; l >= 0 && i < l ; l--, i++)
{
temp = s[l];
s[l] = s[i];
s[i] = temp;
}
}
