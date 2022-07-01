#include <stdio.h>
/**
 * main - Print alphabets except q and e
 * Return: Always 0 (Successful)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (!(x == 'e') && !(x == 'q'))
		{
			putchar(x);
		}
	}
	putchar('\n');
	return (0);
}
