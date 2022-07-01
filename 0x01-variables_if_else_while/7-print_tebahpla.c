#include <stdio.h>
/**
 * main - Print alphabets in revers
 * Return: Always 0
 * by HilarySmartt
 */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
