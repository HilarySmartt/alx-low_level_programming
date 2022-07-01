#include <stdio.h>
/**
 * main - Print 0 to 9 formarted with "," & " "
 * Return: Always 0
 * by HilarySmartt - aLx
 */
int main(void)
{
	int g;

	for (g = '0'; g <= '9'; g++)
	{
		putchar(g);
		if (g != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
