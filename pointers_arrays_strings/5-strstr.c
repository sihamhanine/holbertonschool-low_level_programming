#include "main.h"
#include <stddef.h>
/**
 * *_strstr - Function that locates a substring.
 *
 * @haystack: la chaine a verifier
 * @needle: les caracteres a verifier
 *
 * Return: pointer visant sa premiere occurence
 */

char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0' ; haystack++)
{
char *h = haystack;
char *n = needle;
while (*h == *n && *n != '\0')
{
h++;
n++;
}
if (*n == '\0')
return (haystack);
}
return (0);
}
