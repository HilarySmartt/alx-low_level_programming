#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: the string to be printed
 * Return: nothing.
 */

void puts_half(char *str)
{
	int p = 0, c;

	while (str[p] != '\0')
		p++;
	if ((p + 1) % 2 != '0')
		c = (p - 1) / 2;
	else
		c = p / 2;
	c++;

	for (p = c; str[p] != '\0'; p++)
		_putchar(str[p]);

	_putchar('\n');
}
