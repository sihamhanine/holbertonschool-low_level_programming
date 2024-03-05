#include "main.h"

/**
 * _print_rev_recursion - Function that prints a string in reverse.
 * followed by a new line.
 *
 * @s: le caractere a afficher
 *
 * Return: NOT NULL
 */
void _print_rev_recursion(char *s)
{

if (*s == '\0')
{
_putchar('\n');
return;
}
s++;
_print_rev_recursion(s);
s--;
_putchar(*s); 
}
