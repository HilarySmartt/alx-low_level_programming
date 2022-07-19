#include "main.h"

/**
 * _strpbrk -  a function that searches a string for any of a set of bytes.
 * The _strpbrk() function locates the first occurrence in the string s, of
 * any of the bytes in the string accept. It turns a pointer to the byte in
 * s that matches one of the bytes in accept, or NULL if no such
 * byte is found.
 *
 * @s: string parameter
 * @accept: criteria parameter
 *
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return (0);
}
