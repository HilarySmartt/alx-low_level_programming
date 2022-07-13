#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string parameter to be returned
 * Return: Always 0
 */

int _strlen(char *s)
{
	int c = 0; /* c is a counter */

	for (; s++;)
		c++;
	return (c);
}
