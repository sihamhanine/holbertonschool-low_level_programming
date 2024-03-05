#include "main.h"

/**
 * set_string - Function that sets the value
 * of a pointer to a char.
 *
 * @s: le double pointeur
 * @to: le pointeur a qui pointe le s
 *
 * Return: Not null
 */
void set_string(char **s, char *to)
{
s = &to;
*s = to;
}
