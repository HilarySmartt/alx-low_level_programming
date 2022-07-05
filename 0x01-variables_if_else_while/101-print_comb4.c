#include <stdio.h>
/**
 * main - Print the lowest combination of (3) numbers
 * Return: Always (0)
 * by HilarySmartt
 */
int main(void)
{
	int x, y, z;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			for (z = '0'; z <= '9'; z++)
			{
				if ((z > y && y > x))
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
