#include <stdio.h>
/**
 * main -  prints all possible different
 * combinations of two digits.
 *
 *
 * Return: 0 NOT NULL
 */
int main(void)
{
int i;
int j;
for (i = '0'; i <= '9'; i++)
{
for (j = i + 1; j <= '9'; j++)
{
if (j != i)
{
putchar(i);
putchar(j);
if (i == '8' && j == '9')
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
