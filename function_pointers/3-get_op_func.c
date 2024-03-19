#include "3-calc.h"
/**
 * get_op_func - Function that selects the correct function to perform
 * the operation asked by the user
 *
 * @get_op_func: le pointeur qui pointe sur la fonction
 * @s: l'operateur passe en argument
 *
 * Return: the pointer to the function
 */

int (*get_op_func(char *s))(int, int)
{
  op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;
    while (ops[i] != NULL)
      {
	if (ops[i].op == s)
	  {
	    f(ops[i]);
	  }
      }
    i++;
    
    
}
