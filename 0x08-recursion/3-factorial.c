#include "main.h"

/**
 * factorial - a function that returns the factorial of
 * a given number
 * @n: If n is lower than 0, the function should return
 * -1 to indicate an error. Factorial of 0 is 1
 *  Return: value of factorial
 */
int factorial(int n);
{
	int f = n;

	if (n < 0)

		return (-1);

	else if (n >= 0 && n <= 1)

		return (1);

	else

		f *= factorial(n - 1);

	return (f);
}
