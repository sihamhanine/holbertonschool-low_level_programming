#include "main.h"

/**
* print_sign - Function Write a function
* that prints the sign of a number.
*
* @n: L'entier a verifier.
*
* Return: 1 if int is greater than 0,
* and 0 it int is zero , and -1 if int is less than 0.
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
