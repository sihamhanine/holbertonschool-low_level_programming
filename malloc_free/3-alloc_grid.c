#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - Function Write a function that returns a pointer
 * to a 2 dimensional array of integers.
 *
 * @width: largeur du tableau
 * @height: hauteur du tableau
 *
 * Return: double pointer else return NULL
 */
int **alloc_grid(int width, int height)
{
int i, j, k;
int **p;
if (width <= 0 || height <= 0)
{
return (NULL);
}
p = malloc(height * sizeof(int *));
if (p == NULL)
{
return (NULL);
}
for (i = 0 ; i < height ; i++)
{
p[i] = malloc(width * sizeof(int));
if (p[i] == NULL)
{
for (i = i - 1 ; i >= 0 ; i--)
{
free(p[i]);
}
free(p);
return (NULL);
}
}
for (j = 0 ; j < height; j++)
{
for (k = 0 ; k < width; k++)
{
p[j][k] = 0;
}
}
return (p);
}
