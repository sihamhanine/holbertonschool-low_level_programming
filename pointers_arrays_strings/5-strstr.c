#include "main.h"

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
int i, j;
for (i = 0; haystack[i] != '\0' ; i++)
{
for (j = 0 ; needle[j] != '\0' ; j++)
{
if (haystack[i] == needle[j])
{
return (needle);
break;
}
}
}
return (needle);
}
