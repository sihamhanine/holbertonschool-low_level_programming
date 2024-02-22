#include "main.h"

/**
 * Function that prints the alphabet, in lowercase, followed by a new line
 *
 *
 * Return: 0 NOT NULL.
 */

void print_alphabet(void)
{
  char c;

  for (c = 'a' ; c <= 'z' ; c++)
    {
      _putchar(c);
    }
  _putchar('\n');
    
}


