#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that adds positive numbers..
 * followed by a new line.
 *
 * @argc: le nombre arguments
 * @argv: le contenu de argc
 *
 * Return: NOT NULL.
 */
int main(int argc, char *argv[])
{
  int i, sum = 0;
  for (i = 1 ; i < argc ; i++)
    {
      if (argv[i] == argv[0])
	{
	  return (1);
	}
      if (argv[i] != atoi(argv[i]))
	{
	  printf("Error\n");
	}
      else
      
      sum = sum + argv[i];
      printf("%d\n", sum);
}
return (0);
}

