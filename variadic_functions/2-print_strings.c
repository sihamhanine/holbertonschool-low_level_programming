#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * print_strings - Function that prints strings,
 * followed by a new line.
 *
 * @separator: le separateur entre les chaines
 * @n: le nombre des arguments
 *
 * Return: no thing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
  char *str;
  unsigned int i;
  va_list argc;
  va_start(argc, n);
  if (separator == NULL)
    separator = "";
  for (i = 0 ; i < n ; i++)
    {
      str = va_arg(argc, char *);
      if (str == NULL)
	printf("(nil)");
    printf("%s", str);
  if (i < n - 1)
    printf("%s", separator);
    }
  printf("\n");
  va_end(argc);
}
