#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints its name,
 * followed by a new line.
 *
 * @argc: le nombre arguments
 * @argv: le contenu de argc
 *
 * Return: NOT NULL.
 */
int main(int argc, char* argv[])
{
(void) argc;
printf("%s\n", argv[0]);
return (0);
}
