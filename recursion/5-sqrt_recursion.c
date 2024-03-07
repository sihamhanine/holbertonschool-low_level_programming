#include "main.h"
/**
 * _sqrt - Function  that returns the
 * natural square root of a number.
 *
 * @n: le nombre a calculer son racine carre
 * @i: le nombre d'iteration
 *
 * Return: l'entier de fonction recursive
 */
int _sqrt(int n, int i)
{
int a = i * i;
if (a > n)
{
return (-1);
}
if (a == n)
{
return (i);
}
else
return (_sqrt(n, i + 1));
}
/**
 * _sqrt_recursion - Function  that returns the
 * natural square root of a number.
 *
 * @n: le nombre a calculer son racine carre
 *
 * Return: l'entier de fonction recursive
 */
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}

