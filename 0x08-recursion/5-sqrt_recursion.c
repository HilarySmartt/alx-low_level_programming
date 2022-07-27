#include "main.h"

/**
 * get_root - calculate i**i
 * @n: base parameter
 * @i: iterator parameter
 * Return: i
 */

int get_root(int n, int i)
{
	if (i * i == n)
		return (1);
	if (i * i <= n)
		return (get_root(n, i + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number
 * @n: If n does not have a natural square root, the function
 * should return -1
 * Return: result
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (find_root(n, 2));
}
