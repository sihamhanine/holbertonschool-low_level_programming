#include <stdio.h>
/**
 * main -  prints all possible different
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
for (i = '0'; i <= '9'; i++)
{
for (j = i + 1; j <= '9'; j++)
{
for (z = j + 1; z <= '9'; z++)
{      
if ((j != i) != z)
{
putchar(i);
putchar(j);
putchar(z);
if (i == '7' && j == '8')
continue;
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
