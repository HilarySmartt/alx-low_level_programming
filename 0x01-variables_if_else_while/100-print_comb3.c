#include <stdio.h>
/**
 * main - Print combination
 * Return: Always 0
 * by HilarySmartt - aLx
 */
int main(void)
{
	int ep, me;

	for (ep = '0'; ep <= '9'; ep++)
	{
		for (me = '0'; me <= '9'; me++)
		{
			if (ep < me)
			{
				putchar(ep);
				putchar(me);

				if ((ep != '8') || ((ep == '8') && !(me == '9')))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
