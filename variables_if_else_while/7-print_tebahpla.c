#include <stdio.h>
/**
 * main - Paint "Write a program that prints the lowercase
 *  alphabet in reverse, followed by a new line
 *
 * 
 * Return:0 NOT NULL.
 */
int main(void)
{
  char n;

  for (n = 'z' ; n >= 'a' ; n--)
    {
      putchar(n);
    }
  putchar('\n');
  return (0);
}
