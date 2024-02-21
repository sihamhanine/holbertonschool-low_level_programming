#include <stdio.h>

/**
 * main -Paint "Write a program that prints the alphabet
 * in lowercase, followed by a new line."
 *
 * Return: 0 NOT NULL.
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
if (c != 'q' && c != 'e')
{
putchar(c);
}
}
putchar('\n');
return (0);
}




