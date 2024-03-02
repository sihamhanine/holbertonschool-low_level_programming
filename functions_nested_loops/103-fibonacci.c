#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms
 *
 *
 * Return: 0 NOT NULL.
 */

int main(void)
{
  int i = 0;
  long j = 1, k = 2, sum = k;
  while (k + j < 4000000)
    {
      k = k + j;
      if (k % 2 == 0)
	sum = sum + k;
      j = k - j;
    
  
  ++i;
    }
  printf("%ld", sum);
  return (0);
}
