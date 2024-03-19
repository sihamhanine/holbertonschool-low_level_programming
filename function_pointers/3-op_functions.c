#include "3-calc.h"
/**
 * op_add - Function that returns the sum of a and b
 *
 * @a: le premier nombre entier
 * @b: le deuxieme nombre entier
 *
 * Return: la somme de a + b
 */
int op_add(int a, int b)
{
  return a + b;
}

/**
 * op_sub - Function that returns the difference of a and b
 *
 * @a: le premier nombre entier
 * @b: le deuxieme nombre entier
 *
 * Return: la soustraction de a - b
 */
int op_sub(int a, int b)
{
  return a - b;
}

/**
 * op_mul - Function returns the product of a and b
 *
 * @a: le premier nombre entier
 * @b: le deuxieme nombre entier
 *
 * Return: la multiplication de a * b
 */

int op_mul(int a, int b)
{
  return a * b;
}

/**
 * op_div - Function that returns the result of the division of a by b
 *
 * @a: le premier nombre entier
 * @b: le deuxieme nombre entier
 *
 * Return: la division de a / b
 */
int op_div(int a, int b)
{
  if (b == 0)
    {
      print("Error");
      exit(100);
    }
  else
    return a / b;    
}

/**
 * op_mod - Function that returns the remainder of the division of a by b
 *
 * @a: le premier nombre entier
 * @b: le deuxieme nombre entier
 *
 * Return: modulo a % b
 */

int op_mod(int a, int b)
{
  if (b == 0)
    {
      print("Error");
      exit(100);
    }
  else
    return a % b;
}
