#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2
 *
 *
 * Return: 0 NOT NULL
 */

int main(void)
{
int i, c;
long j = 1, k = 2;
for (i = 0; i < 98 ; i++)
{
if (i == 0)
{
printf("%ld", j);
}
else
if (i == 1)
{
printf(", %ld", k);
}
else
{
  c = j + k;
  j = k;
  k = c;
printf(", %ld", k);
}
}
printf("\n");
return (0);
}
