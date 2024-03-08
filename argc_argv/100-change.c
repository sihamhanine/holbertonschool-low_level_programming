#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - prints the minimum number of coins to 
 * make change for an amount of money
 *
 * @argc: le nombre arguments
 * @argv: le contenu de argc
 *
 * Return: NOT NULL.
 */
int main(int argc, char *argv[])
{
if (argc > 1)
{
int i, reste = 0;
int argent = atoi(argv[1]);
int e[] = {25, 10, 5, 2, 1};
for (i = 0 ; i < 5 ; i++)
{
if (argent >= e[i])
{
reste = reste + (argent / e[i]);
argent = argent % e[i];
if (argent % e[i] == 0)
{
break;
}
}
}
printf("%d\n", reste);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
