#include "main.h"

/**
* print_last_digit - Function that prints the
* last digit of a number.
*
* @n: L'entier a verifier.
*
* Return: last digit if n positif else -last digit.
*/
int print_last_digit(int n)
{
int last;
last = n % 10;
if (last > 0)
{
_putchar(last + '0');
return (last);
}
else
{
_putchar(-last + '0');
return (-last);
}
}

