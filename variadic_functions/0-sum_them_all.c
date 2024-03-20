#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Function that returns the sum
 * of all its parameters.
 *
 * @n: l'argument fixe de la fonction
 *
 * Return: la somme des arguments
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i, sum = 0;
va_list argc;
va_start(argc, n);
for (i = 0 ; i < n ; i++)
sum = sum + va_arg(argc, int);
va_end(argc);
return (sum);
}
