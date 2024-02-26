#include "main.h"

/**
 * _isdigi - Function that checks for a digit (0 through 9).
 *
 * @c: le caractere a verifier.
 *
 * Return: 1 if c is a digit and 0 otherwise.
 */

int _isdigit(char c)
{
if (c <= '0' && c <= '9')
return (1);
else
return (0);
}
