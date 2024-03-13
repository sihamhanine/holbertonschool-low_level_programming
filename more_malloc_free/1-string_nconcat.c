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
unsigned int i, j, k, size;
char *p;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
i = 0;
while (s1[i] != '\0')
i++;
j = 0;
while (s2[j] != '\0')
j++;
if (n >= j)
size = i + j;
else
size = i + n;
p = malloc(sizeof(char) * (size + 1));
if (p == NULL)
{
free(p);
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
