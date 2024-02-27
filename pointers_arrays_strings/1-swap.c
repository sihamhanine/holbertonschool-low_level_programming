#include "main.h"

/**
 * swap_int - Function that swaps the values of two integers.
 * 
 *
 * @a: le nombre a verifier.
 * @b: le nombre a verifier
 *
 * Return: Not NULL.
 */

void swap_int(int *a, int *b)
{
  int z;
  z = *a;
  *a = *b;
  *b = z;
}
