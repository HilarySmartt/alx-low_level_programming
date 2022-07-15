#include "main.h"

/**
 * *_strncpy - Copies a string
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to copied from src
 *
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len1 = 0, index = 0;

	while (src[index++])
		len1++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = len1; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
