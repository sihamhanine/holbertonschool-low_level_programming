#include <stdio.h>
/**
 * main - Paint "Write a program that prints all single digit numbers
 * of base 10 starting from 0, followed by a new line.
 *
 *
 * Return: 0 NOT NULL.
 */
int main(void)
{
  int n = 0;
  for (n = 0; n < 10; n++)
  {
    printf("%d", n);
  }
  putchar('\n');
  return (0);
}




