#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - Function that prints anything.
 *
 * @format: list of types of arguments
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
  int i, etat;
  char *str;
  va_list argc;
  va_start(argc, format);
  i = 0;
  while (format != NULL && format[i] != '\0')
    {
      switch (format[i])
	{
      case 'c':
	printf("%c", va_arg(argc, int));
	etat = 0;
	break;
	case 'i':
	  printf("%d", va_arg(argc, int));
	  etat = 0;
	  break;
	case 'f':
	  printf("%f", va_arg(argc, double));
	  etat = 0;
	  break;
	case 's':
	  str = va_arg(argc, char *);
	  if (str == NULL)
	    str = "(nil)";
	  printf("%s", str);
	  break;
	default:
	  etat = 1;
	  break;
	}
      if (format[i + 1] != '\0' && etat == 0)
	printf(", ");
      i++;
    }
  printf("\n");
  va_end(argc);
}
