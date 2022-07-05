#include "main.h"
/**
 * parent_alphabet - Prints the alphabet in
 * lowercase, followed by a new line
 * Return: Always 0
 * by HilarySmartt
 */
void parent_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
