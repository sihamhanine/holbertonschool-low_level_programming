#include <stdio.h>
/**
 * main - prints all possible different
 * combinations of three digits.
 *
 *
 * Return: 0 NOT NULL
 */
int main(void)
{
int i;
int j;
int z;
int d;
for (i = '0'; i <= '9'; i++)
{
for (j = i + 1; j <= '9'; j++)
{
for (z = j + 1; z <= '9'; z++)
{
for (d = z + 1; z <= '9'; d++)
{
if (((j != i) != z) != d)
{
putchar(i);
putchar(j);
putchar(z);
 putchar(d);
if (i == '6' && j == '7')
continue;
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}

