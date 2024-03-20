#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_numbers - Function that prints numbers,
 * followed by a new line
 *
 * @separator: the string a imprimer
 * @n: le nombre d'arguments
 *
 * Return: no thing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list argc;
va_start(argc, n);
if (separator == NULL)
{
separator = "";
}
for (i = 0; i < n; i++)
{
printf("%d", va_arg(argc, int));
if (i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(argc);
}
