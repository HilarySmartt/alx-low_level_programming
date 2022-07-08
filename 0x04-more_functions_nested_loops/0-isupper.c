#include "main.h"

/**
 * _isuper - returns 1 if input is uppercase and 0 if lowercase
 * Return: true 1 or faslse 0
 * @c: only input
 * Auth: HilarySmartt
 */

int _isuper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
