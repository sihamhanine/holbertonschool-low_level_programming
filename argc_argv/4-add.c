#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
int i;
int unsigned j, sum = 0;
char *e;
if (argc > 1)
{
for (i = 1 ; i < argc ; i++)
{
e = argv[i];
for (j = 0 ; j < strlen(argv[i]); j++)
{
if (e[j] < '0' || e[j] > '9')
{
printf("Error\n");
return (1);
}
}
sum = sum + atoi(e);
e++;
}
printf("%d\n", sum);
}
else
{
printf("0\n");
}
return (0);
}
