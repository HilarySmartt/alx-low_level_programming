#include "main.h"

/**
 * swap_int - swaps the value of two parametesr
 * @a: first parameter
 * @b: 2nd parameter
 * Return: nothing.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
