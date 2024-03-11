#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - Function that returns a pointer to a
 * newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: la chaine de caractere a copier
 *
 * Return: Null if str is NULL else return pointer
 */

char *_strdup(char *str)
{
int i, j;
char *p;
if (str == NULL)
{
return (NULL);
}
else
for (i = 0 ; str[i] != '\0' ; i++)
{
p = malloc((i * sizeof(*str)) + 1);
if (p == NULL)
{
return (NULL);
}
for (j = 0 ; j < i ; j++)
{
p[j] = str[j];
}
}
p[j] = '\0';
return (p);
}
