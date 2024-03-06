#include "main.h"
/**
 * factorial - Function that returns the
 * factorial of a given number.
 *
 * @n: le nombre a faire le factorial
 *
 * Return: -1 si n less than 0 sinon
 * return f
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 1)
{
return (1);
}
else
return (n * factorial(n - 1));
}

