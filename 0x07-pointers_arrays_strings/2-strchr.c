#include "main.h"

/**
 * _strchr - returns a pointer to the first occurrence of the character c in
 * the string s, or NULL if the character is not found.
 *
 * @c: parameter being reported
 * @s: string containing instance of c
 *
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
