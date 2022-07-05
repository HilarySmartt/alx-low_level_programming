#include <stdio.h>
#include "main.h"
/**
 * main - Prints the alphabet, in lowercase, followed by a new line
 * Return: Always 0
 * by HilarySmartt
 */
void print_alphabet(void)
{
	char x;

	for (x = '0'; x <= 'z'; x++)
	{
		_putchar(x);
		_putchar("\n");
	}
	return (0);
}
