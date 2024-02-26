#include "main.h"

/**
 * print_numbers - Function that prints the numbers,
 * from 0 to 9, followed by a new line.
 *
 *
 * Return: le nombre de 0 a 9.
 */
Void print_numbers(void)
{
int i;
for (i = 0 ; i < 10 ; i++)
{
_putchar(i + '0');
}
_putchar('\n');

}
