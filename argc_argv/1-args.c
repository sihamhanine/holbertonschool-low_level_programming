#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the number
 * of arguments passed into it.
 * followed by a new line.
 *
 * @argc: le nombre arguments
 * @argv: le contenu de argc
 *
 * Return: NOT NULL.
 */
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}