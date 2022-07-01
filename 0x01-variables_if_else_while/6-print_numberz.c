#include <stdio.h>
/**
 * main - Print from 0 to 9, use putchar & no char
 * Return: Always 0
 * by HilarySmartt
 */
int main(void)
{
	int g;

	for (g = '0'; g <= '9'; g++)
	{
		putchar(g);
	}
	putchar('\n');
	return (0);
}
