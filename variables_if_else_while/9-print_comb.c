#include <stdio.h>
/**
 * main - Paint "Write a program that prints all possible
 * combinations of single-digit numbers.
 *
 * Return: 0 NOT NULL.
 */
int main(void)
{
int n;
for (n = 0 ; n < 10 ; n++)
{
putchar(n + '0');
if (n < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
