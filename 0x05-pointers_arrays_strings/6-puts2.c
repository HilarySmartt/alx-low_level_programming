#include "main.h"

/**
 * puts2 -  prints every other character of a string, starting with the
 * first character, followed by a new line
 * @str: parameter to be printed in new lines
 * Return: nothing:
 */

void puts2(char *str)
{
	int p;

	for (p = 0; str[p] != '\0'; p++)
		if (p % 2 == 0)
			_putchar(str[p]);
	_putchar('\n');
}
