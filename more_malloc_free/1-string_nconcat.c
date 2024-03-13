#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - Function that concatenates two strings.
 *
 * @s1: la chaine s1 a concatener
 * @s2: la partie de chaine a concatener
 * @n: le nombre de caractere a concatener de s2
 *
 * Return: pointer concatene s1 + s2  sinon return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, lent1, lent2;
char *p;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[lent1] != '\0')
lent1++;
lent2 = 0;
if (n >= lent2)
{
while (s2[lent2] != '\0')
lent2++;
}
p = malloc(sizeof(char) * (lent1 + n + 1));
if (p == NULL)
return (NULL);
else
for (i = 0 ; s1[i] != '\0' ; i++)
p[i] = s1[i];
for (j = 0 ; j < n ; j++)
{
p[i] = s2[j];
i++;
}
p[i] = '\0';
return (p);
}
