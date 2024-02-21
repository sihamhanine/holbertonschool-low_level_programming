#include <stdio.h>
/**
 * main - Paint "Write a program that prints all the numbers of base 16
 * in lowercase, followed by a new line.
 *
 *
 * Return: 0 NOT NULL.
 */
int main(void)
{
int n;
for (n = '0' ; n <= '9' ; n++)
{
putchar(n);
}
for (n = 'a' ; n <= 'f' ; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}




