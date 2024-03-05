#include "main.h"

/**
 * _puts_recursion - Function that prints a string,
 * followed by a new line.
 *
 * @s: le caractere a afficher
 *
 * Return: NOT NULL
 */
void _puts_recursion(char *s)
{
  int i;
  for (i = 0 ; s[i] != '\0'; i++)
    {
      _putchar(s[i]);
    }
  _putchar('\n');
}
