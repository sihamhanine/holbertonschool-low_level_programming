#include "main.h"

/**
 * _atoi - Function that convert a string to an integer.
 *
 *
 * @s: le caractere a convertir
 *
 * Return: le nombre n.
 */

int _atoi(char *s)
{
int signe = 1;
int result = 0;
int i = 0;
int j; 
while ((s[i] < '0' || s[i] > '9') && (s[i] != '\0'))
{
if (s[i] == '-')
signe *= -1;
i++;
}
j = i;
while ((s[j] >= '0' ) && (s[j] <= '9'))
{
result = (result * 10) + signe * (s[j] - '0');
j++;
}
return (result);
}
