#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - Function that concatenates two strings.
 *
 * @s1: la premiere chaine de caractere
 * @s2: la chaine de caractere a concatener
 *
 * Return: NULL if s is NULL else return s1 + s2
 */
char *str_concat(char *s1, char *s2)
{
int i, j, k, size;
char *p;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[i] != '\0')
{
i++;
}
while (s2[j] != '\0')
{
j++;
}
size = i + j;
p = malloc((sizeof(char) * size) +1);
if (p == NULL)
{
return (NULL);
}
else
j = 0;
for (k = 0 ; k < size ; k++)
{
if (k <= i)
p[k] = s1[k];
if (k >= i)
{
p[k] = s2[j];
j++;
}
}
p[k] = '\0';
return (p);
}
