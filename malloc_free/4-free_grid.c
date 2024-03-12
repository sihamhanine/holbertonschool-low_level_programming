#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Function Write a function that returns a pointer
 * to a 2 dimensional array of integers.
 *
 * @grid: le pointeur qui pointe sur un tableau
 * @height: hauteur du tableau
 *
 * Return: NOT  NULL
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0 ; i < height ; i++)
{
free(grid[i]);
}
free(grid);
}
