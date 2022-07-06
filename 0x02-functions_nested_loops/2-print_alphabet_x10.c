/*
 * File: alphabet ten times
 * Auth: HilarySmartt
 */

#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times, in lowercase
 */

void print_alphabet_x10(void)

{
	int count = 0;
	char a;

	while (count++ <= 9)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);

		_putchar('\n');
	}
}
