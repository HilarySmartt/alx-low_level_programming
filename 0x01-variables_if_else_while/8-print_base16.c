#include <stdio.h>
/**
 * main - Print an hexadecimal of base 16
 * Return: Always 0
 * by HilarySmartt - aLx
 */
int main(void)
{
	char g;

	for (g = '0'; g <= '9'; g++)
	{
		putchar(g);
	}
	for (g = 'a'; g <= 'f'; g++)
	{
		putchar(g);
	}
	putchar('\n');
	return (0);
}
