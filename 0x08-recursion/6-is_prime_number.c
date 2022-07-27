#include "main.h"

/**
 * _multi - multiply
 * @n: parameter 1
 * @i: parameter 2
 * Return: always 0
 */

int _multi(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (find_multipliers(n, i + 1));
}

/**
 * is_prime_number -  a function that returns 1 if the input integer is
 * a prime number, otherwise return 0
 * @n: int parameter
 * Return: Always 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (find_multipliers(n, 2));
}
