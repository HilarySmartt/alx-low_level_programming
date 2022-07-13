#include "main.h"

/**
 * print_rev -  prints a string, in reverse, followed by a new line
 * @s: parameter to be printed in reverse
 * Return: nothing.
 */

void print_rev(char *s)
{
	int c, cc; /** both are counters */

	c = 0;
	while (s[c] != '\0')
		c++;

	for (cc = c - 1; cc >= 0; cc--)
	{
		_putchar(s[cc]);
	}
	_putchar('\n');
}
