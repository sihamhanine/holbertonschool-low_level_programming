#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints all arguments it receives.
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
for (i = 0 ; i < argc ; i++)
printf("%s\n", argv[i]);
return (0);
}