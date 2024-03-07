#include "main.h"
int _prime(int n, int i);

/**
 * is_prime_number - Function  that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 *
 *
 * @n: le nombre premier ou pas
 * Return: 1 si le nombre est premier sinon return 0
 */
int is_prime_number(int n)
{
return (_prime(n, 1));
}
/**
 * _prime - Function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 *
 * @n: le nombre a verifier
 * @i: l'indice d'iteration
 *
 * Return: 1 si le nombre est premier sinon 0
 */
int _prime(int n, int i)
{
if (n <= 1)
{
return (0);
}
if ((n % i) == 0 && i > 1)
{
return (0);
}
if ((n / i) < i)
{
return (1);
}
return (_prime(n, i + 1));
}

